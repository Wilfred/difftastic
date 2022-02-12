// Copyright (C) 2019 Sebastian Dröge <sebastian@centricular.com>
//
// Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
// http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
// <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. This file may not be copied, modified, or distributed
// except according to those terms.
//
// SPDX-License-Identifier: MIT/Apache-2.0

use gst::glib;
use gst::gst_debug;
use gst::subclass::prelude::*;
use gst_video::prelude::*;
use gst_video::subclass::prelude::*;
use once_cell::sync::Lazy;
use rav1e::color;
use rav1e::config;
use rav1e::data;
use std::sync::Mutex;

#[derive(Debug, PartialEq, Eq, Clone, Copy, glib::Enum)]
#[repr(u32)]
#[enum_type(name = "GstRav1eEncTune")]
pub enum Tune {
    Psnr,
    Psychovisual,
}

const DEFAULT_SPEED_PRESET: u32 = 6;
const DEFAULT_LOW_LATENCY: bool = false;
const DEFAULT_MIN_KEY_FRAME_INTERVAL: u64 = 12;
const DEFAULT_MAX_KEY_FRAME_INTERVAL: u64 = 240;
const DEFAULT_SWITCH_FRAME_INTERVAL: u64 = 0;
const DEFAULT_BITRATE: i32 = 0;
const DEFAULT_QUANTIZER: usize = 100;
const DEFAULT_MIN_QUANTIZER: u8 = 0;
const DEFAULT_TILE_COLS: usize = 0;
const DEFAULT_TILE_ROWS: usize = 0;
const DEFAULT_TILES: usize = 0;
const DEFAULT_RDO_LOOKAHEAD_FRAMES: i32 = -1;
const DEFAULT_TUNE: Tune = Tune::Psychovisual;
const DEFAULT_RESERVOIR_FRAME_DELAY: i32 = i32::MIN;
const DEFAULT_ERROR_RESILIENT: bool = false;
const DEFAULT_THREADS: usize = 0;

#[derive(Debug, Clone, Copy)]
struct Settings {
    speed_preset: u32,
    low_latency: bool,
    min_key_frame_interval: u64,
    max_key_frame_interval: u64,
    switch_frame_interval: u64,
    bitrate: i32,
    quantizer: usize,
    min_quantizer: u8,
    tile_cols: usize,
    tile_rows: usize,
    tiles: usize,
    rdo_lookahead_frames: i32,
    tune: Tune,
    reservoir_frame_delay: i32,
    error_resilient: bool,
    threads: usize,
}

impl Default for Settings {
    fn default() -> Self {
        Settings {
            speed_preset: DEFAULT_SPEED_PRESET,
            low_latency: DEFAULT_LOW_LATENCY,
            min_key_frame_interval: DEFAULT_MIN_KEY_FRAME_INTERVAL,
            max_key_frame_interval: DEFAULT_MAX_KEY_FRAME_INTERVAL,
            switch_frame_interval: DEFAULT_SWITCH_FRAME_INTERVAL,
            bitrate: DEFAULT_BITRATE,
            quantizer: DEFAULT_QUANTIZER,
            min_quantizer: DEFAULT_MIN_QUANTIZER,
            tile_cols: DEFAULT_TILE_COLS,
            tile_rows: DEFAULT_TILE_ROWS,
            tiles: DEFAULT_TILES,
            rdo_lookahead_frames: DEFAULT_RDO_LOOKAHEAD_FRAMES,
            tune: DEFAULT_TUNE,
            reservoir_frame_delay: DEFAULT_RESERVOIR_FRAME_DELAY,
            error_resilient: DEFAULT_ERROR_RESILIENT,
            threads: DEFAULT_THREADS,
        }
    }
}

enum Context {
    Eight(rav1e::Context<u8>),
    Sixteen(rav1e::Context<u16>),
}

impl Context {
    fn container_sequence_header(&self) -> Vec<u8> {
        match self {
            Context::Eight(ref context) => context.container_sequence_header(),
            Context::Sixteen(ref context) => context.container_sequence_header(),
        }
    }

    fn receive_packet(
        &mut self,
    ) -> Result<(data::FrameType, u64, u32, Vec<u8>), data::EncoderStatus> {
        match self {
            Context::Eight(ref mut context) => context.receive_packet().map(|packet| {
                (
                    packet.frame_type,
                    packet.input_frameno,
                    *packet
                        .opaque
                        .and_then(|o| o.downcast::<u32>().ok())
                        .expect("no frame number"),
                    packet.data,
                )
            }),
            Context::Sixteen(ref mut context) => context.receive_packet().map(|packet| {
                (
                    packet.frame_type,
                    packet.input_frameno,
                    *packet
                        .opaque
                        .and_then(|o| o.downcast::<u32>().ok())
                        .expect("no frame number"),
                    packet.data,
                )
            }),
        }
    }

    fn send_frame(
        &mut self,
        frame_number: u32,
        in_frame: &gst_video::VideoFrameRef<&gst::BufferRef>,
        force_keyframe: bool,
    ) -> Result<(), data::EncoderStatus> {
        match self {
            Context::Eight(ref mut context) => {
                let mut enc_frame = context.new_frame();
                enc_frame.planes[0].copy_from_raw_u8(
                    in_frame.plane_data(0).unwrap(),
                    in_frame.plane_stride()[0] as usize,
                    1,
                );

                if in_frame.n_planes() > 1 {
                    enc_frame.planes[1].copy_from_raw_u8(
                        in_frame.plane_data(1).unwrap(),
                        in_frame.plane_stride()[1] as usize,
                        1,
                    );
                    enc_frame.planes[2].copy_from_raw_u8(
                        in_frame.plane_data(2).unwrap(),
                        in_frame.plane_stride()[2] as usize,
                        1,
                    );
                }

                context.send_frame((
                    enc_frame,
                    Some(rav1e::data::FrameParameters {
                        frame_type_override: if force_keyframe {
                            rav1e::prelude::FrameTypeOverride::Key
                        } else {
                            rav1e::prelude::FrameTypeOverride::No
                        },
                        opaque: Some(rav1e::prelude::Opaque::new(frame_number)),
                    }),
                ))
            }
            Context::Sixteen(ref mut context) => {
                let mut enc_frame = context.new_frame();
                enc_frame.planes[0].copy_from_raw_u8(
                    in_frame.plane_data(0).unwrap(),
                    in_frame.plane_stride()[0] as usize,
                    2,
                );

                if in_frame.n_planes() > 1 {
                    enc_frame.planes[1].copy_from_raw_u8(
                        in_frame.plane_data(1).unwrap(),
                        in_frame.plane_stride()[1] as usize,
                        2,
                    );
                    enc_frame.planes[2].copy_from_raw_u8(
                        in_frame.plane_data(2).unwrap(),
                        in_frame.plane_stride()[2] as usize,
                        2,
                    );
                }

                context.send_frame((
                    enc_frame,
                    Some(rav1e::data::FrameParameters {
                        frame_type_override: if force_keyframe {
                            rav1e::prelude::FrameTypeOverride::Key
                        } else {
                            rav1e::prelude::FrameTypeOverride::No
                        },
                        opaque: Some(rav1e::prelude::Opaque::new(frame_number)),
                    }),
                ))
            }
        }
    }

    fn flush(&mut self) {
        match self {
            Context::Eight(ref mut context) => context.flush(),
            Context::Sixteen(ref mut context) => context.flush(),
        }
    }
}

struct State {
    context: Context,
    video_info: gst_video::VideoInfo,
}

#[derive(Default)]
pub struct Rav1Enc {
    state: Mutex<Option<State>>,
    settings: Mutex<Settings>,
}

static CAT: Lazy<gst::DebugCategory> = Lazy::new(|| {
    gst::DebugCategory::new(
        "rav1enc",
        gst::DebugColorFlags::empty(),
        Some("rav1e AV1 encoder"),
    )
});

#[glib::object_subclass]
impl ObjectSubclass for Rav1Enc {
    const NAME: &'static str = "Rav1Enc";
    type Type = super::Rav1Enc;
    type ParentType = gst_video::VideoEncoder;
}

impl ObjectImpl for Rav1Enc {
    fn properties() -> &'static [glib::ParamSpec] {
        static PROPERTIES: Lazy<Vec<glib::ParamSpec>> = Lazy::new(|| {
            vec![
                glib::ParamSpecUInt::new(
                    "speed-preset",
                    "Speed Preset",
                    "Speed preset (10 fastest, 0 slowest)",
                    0,
                    10,
                    DEFAULT_SPEED_PRESET,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecBoolean::new(
                    "low-latency",
                    "Low Latency",
                    "Low Latency",
                    DEFAULT_LOW_LATENCY,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecUInt64::new(
                    "min-key-frame-interval",
                    "Min Key Frame Interval",
                    "Min Key Frame Interval",
                    0,
                    std::u64::MAX,
                    DEFAULT_MIN_KEY_FRAME_INTERVAL,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecUInt64::new(
                    "max-key-frame-interval",
                    "Max Key Frame Interval",
                    "Max Key Frame Interval",
                    0,
                    std::u64::MAX,
                    DEFAULT_MAX_KEY_FRAME_INTERVAL,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecUInt64::new(
                    "switch-frame-interval",
                    "Switch Frame Interval",
                    "Switch Frame Interval",
                    0,
                    std::u64::MAX,
                    DEFAULT_SWITCH_FRAME_INTERVAL,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecInt::new(
                    "bitrate",
                    "Bitrate",
                    "Bitrate",
                    0,
                    std::i32::MAX,
                    DEFAULT_BITRATE,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecUInt::new(
                    "quantizer",
                    "Quantizer",
                    "Quantizer",
                    0,
                    std::u32::MAX,
                    DEFAULT_QUANTIZER as u32,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecUInt::new(
                    "min-quantizer",
                    "Min Quantizer",
                    "Min Quantizer",
                    0,
                    std::u8::MAX as u32,
                    DEFAULT_MIN_QUANTIZER as u32,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecUInt::new(
                    "tile-cols",
                    "Tile Cols",
                    "Tile Cols",
                    0,
                    std::u32::MAX,
                    DEFAULT_TILE_COLS as u32,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecUInt::new(
                    "tile-rows",
                    "Tile Rows",
                    "Tile Rows",
                    0,
                    std::u32::MAX,
                    DEFAULT_TILE_ROWS as u32,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecUInt::new(
                    "tiles",
                    "Tiles",
                    "Tiles",
                    0,
                    std::u32::MAX,
                    DEFAULT_TILES as u32,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecInt::new(
                    "rdo-lookahead-frames",
                    "RDO Lookahead Frames",
                    "RDO Lookahead Frames",
                    -1,
                    std::i32::MAX,
                    DEFAULT_RDO_LOOKAHEAD_FRAMES,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecEnum::new(
                    "tune",
                    "Tune",
                    "Tune",
                    Tune::static_type(),
                    DEFAULT_TUNE as i32,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecInt::new(
                    "reservoir-frame-delay",
                    "Reservoir Frame Delay",
                    "Reservoir Frame Delay",
                    std::i32::MIN,
                    std::i32::MAX,
                    DEFAULT_RESERVOIR_FRAME_DELAY,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecBoolean::new(
                    "error-resilient",
                    "Error Resilient",
                    "Error Resilient",
                    DEFAULT_ERROR_RESILIENT,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
                glib::ParamSpecUInt::new(
                    "threads",
                    "Threads",
                    "Threads",
                    0,
                    std::u32::MAX,
                    DEFAULT_THREADS as u32,
                    glib::ParamFlags::READWRITE | gst::PARAM_FLAG_MUTABLE_READY,
                ),
            ]
        });

        PROPERTIES.as_ref()
    }

    fn set_property(
        &self,
        _obj: &Self::Type,
        _id: usize,
        value: &glib::Value,
        pspec: &glib::ParamSpec,
    ) {
        match pspec.name() {
            "speed-preset" => {
                let mut settings = self.settings.lock().unwrap();
                settings.speed_preset = value.get().expect("type checked upstream");
            }
            "low-latency" => {
                let mut settings = self.settings.lock().unwrap();
                settings.low_latency = value.get().expect("type checked upstream");
            }
            "min-key-frame-interval" => {
                let mut settings = self.settings.lock().unwrap();
                settings.min_key_frame_interval = value.get().expect("type checked upstream");
            }
            "max-key-frame-interval" => {
                let mut settings = self.settings.lock().unwrap();
                settings.max_key_frame_interval = value.get().expect("type checked upstream");
            }
            "switch-frame-interval" => {
                let mut settings = self.settings.lock().unwrap();
                settings.switch_frame_interval = value.get().expect("type checked upstream");
            }
            "bitrate" => {
                let mut settings = self.settings.lock().unwrap();
                settings.bitrate = value.get().expect("type checked upstream");
            }
            "quantizer" => {
                let mut settings = self.settings.lock().unwrap();
                settings.quantizer = value.get::<u32>().expect("type checked upstream") as usize;
            }
            "min-quantizer" => {
                let mut settings = self.settings.lock().unwrap();
                settings.min_quantizer = value.get::<u32>().expect("type checked upstream") as u8;
            }
            "tile-cols" => {
                let mut settings = self.settings.lock().unwrap();
                settings.tile_cols = value.get::<u32>().expect("type checked upstream") as usize;
            }
            "tile-rows" => {
                let mut settings = self.settings.lock().unwrap();
                settings.tile_rows = value.get::<u32>().expect("type checked upstream") as usize;
            }
            "tiles" => {
                let mut settings = self.settings.lock().unwrap();
                settings.tiles = value.get::<u32>().expect("type checked upstream") as usize;
            }
            "rdo-lookahead-frames" => {
                let mut settings = self.settings.lock().unwrap();
                settings.rdo_lookahead_frames = value.get::<i32>().expect("type checked upstream");
            }
            "tune" => {
                let mut settings = self.settings.lock().unwrap();
                settings.tune = value.get::<Tune>().expect("type checked upstream");
            }
            "reservoir-frame-delay" => {
                let mut settings = self.settings.lock().unwrap();
                settings.reservoir_frame_delay = value.get::<i32>().expect("type checked upstream");
            }
            "error-resilient" => {
                let mut settings = self.settings.lock().unwrap();
                settings.error_resilient = value.get::<bool>().expect("type checked upstream");
            }
            "threads" => {
                let mut settings = self.settings.lock().unwrap();
                settings.threads = value.get::<u32>().expect("type checked upstream") as usize;
            }
            _ => unimplemented!(),
        }
    }

    fn property(&self, _obj: &Self::Type, _id: usize, pspec: &glib::ParamSpec) -> glib::Value {
        match pspec.name() {
            "speed-preset" => {
                let settings = self.settings.lock().unwrap();
                settings.speed_preset.to_value()
            }
            "low-latency" => {
                let settings = self.settings.lock().unwrap();
                settings.low_latency.to_value()
            }
            "min-key-frame-interval" => {
                let settings = self.settings.lock().unwrap();
                settings.min_key_frame_interval.to_value()
            }
            "max-key-frame-interval" => {
                let settings = self.settings.lock().unwrap();
                settings.max_key_frame_interval.to_value()
            }
            "switch-frame-interval" => {
                let settings = self.settings.lock().unwrap();
                settings.switch_frame_interval.to_value()
            }
            "bitrate" => {
                let settings = self.settings.lock().unwrap();
                settings.bitrate.to_value()
            }
            "quantizer" => {
                let settings = self.settings.lock().unwrap();
                (settings.quantizer as u32).to_value()
            }
            "min-quantizer" => {
                let settings = self.settings.lock().unwrap();
                (settings.min_quantizer as u32).to_value()
            }
            "tile-cols" => {
                let settings = self.settings.lock().unwrap();
                (settings.tile_cols as u32).to_value()
            }
            "tile-rows" => {
                let settings = self.settings.lock().unwrap();
                (settings.tile_rows as u32).to_value()
            }
            "tiles" => {
                let settings = self.settings.lock().unwrap();
                (settings.tiles as u32).to_value()
            }
            "rdo-lookahead-frames" => {
                let settings = self.settings.lock().unwrap();
                (settings.rdo_lookahead_frames as i32).to_value()
            }
            "tune" => {
                let settings = self.settings.lock().unwrap();
                settings.tune.to_value()
            }
            "reservoir-frame-delay" => {
                let settings = self.settings.lock().unwrap();
                settings.reservoir_frame_delay.to_value()
            }
            "error-resilient" => {
                let settings = self.settings.lock().unwrap();
                settings.error_resilient.to_value()
            }
            "threads" => {
                let settings = self.settings.lock().unwrap();
                (settings.threads as u32).to_value()
            }
            _ => unimplemented!(),
        }
    }
}

impl GstObjectImpl for Rav1Enc {}

impl ElementImpl for Rav1Enc {
    fn metadata() -> Option<&'static gst::subclass::ElementMetadata> {
        static ELEMENT_METADATA: Lazy<gst::subclass::ElementMetadata> = Lazy::new(|| {
            gst::subclass::ElementMetadata::new(
                "rav1e AV1 encoder",
                "Encoder/Video",
                "rav1e AV1 encoder",
                "Sebastian Dröge <sebastian@centricular.com>",
            )
        });

        Some(&*ELEMENT_METADATA)
    }

    fn pad_templates() -> &'static [gst::PadTemplate] {
        static PAD_TEMPLATES: Lazy<Vec<gst::PadTemplate>> = Lazy::new(|| {
            let sink_caps = gst::Caps::builder("video/x-raw")
                .field(
                    "format",
                    gst::List::new([
                        gst_video::VideoFormat::I420.to_str(),
                        gst_video::VideoFormat::Y42b.to_str(),
                        gst_video::VideoFormat::Y444.to_str(),
                        gst_video::VideoFormat::I42010le.to_str(),
                        gst_video::VideoFormat::I42210le.to_str(),
                        gst_video::VideoFormat::Y44410le.to_str(),
                        gst_video::VideoFormat::I42012le.to_str(),
                        gst_video::VideoFormat::I42212le.to_str(),
                        gst_video::VideoFormat::Y44412le.to_str(),
                        gst_video::VideoFormat::Gray8.to_str(),
                    ]),
                )
                .field("width", gst::IntRange::new(1, std::i32::MAX))
                .field("height", gst::IntRange::new(1, std::i32::MAX))
                .field(
                    "framerate",
                    gst::FractionRange::new(
                        gst::Fraction::new(0, 1),
                        gst::Fraction::new(std::i32::MAX, 1),
                    ),
                )
                .build();
            let sink_pad_template = gst::PadTemplate::new(
                "sink",
                gst::PadDirection::Sink,
                gst::PadPresence::Always,
                &sink_caps,
            )
            .unwrap();

            let src_caps = gst::Caps::builder("video/x-av1")
                .field("stream-format", "obu-stream")
                .field("alignment", "tu")
                .build();
            let src_pad_template = gst::PadTemplate::new(
                "src",
                gst::PadDirection::Src,
                gst::PadPresence::Always,
                &src_caps,
            )
            .unwrap();

            vec![src_pad_template, sink_pad_template]
        });

        PAD_TEMPLATES.as_ref()
    }
}

impl VideoEncoderImpl for Rav1Enc {
    fn stop(&self, _element: &Self::Type) -> Result<(), gst::ErrorMessage> {
        *self.state.lock().unwrap() = None;

        Ok(())
    }

    fn propose_allocation(
        &self,
        element: &Self::Type,
        query: &mut gst::query::Allocation,
    ) -> Result<(), gst::LoggableError> {
        query.add_allocation_meta::<gst_video::VideoMeta>(None);
        self.parent_propose_allocation(element, query)
    }

    // For the colorimetry mapping below
    #[allow(clippy::wildcard_in_or_patterns)]
    fn set_format(
        &self,
        element: &Self::Type,
        state: &gst_video::VideoCodecState<'static, gst_video::video_codec_state::Readable>,
    ) -> Result<(), gst::LoggableError> {
        self.finish(element)
            .map_err(|_| gst::loggable_error!(CAT, "Failed to drain"))?;

        let video_info = state.info();
        gst_debug!(CAT, obj: element, "Setting format {:?}", video_info);

        let settings = self.settings.lock().unwrap();

        let cfg = config::Config::new()
            .with_encoder_config(config::EncoderConfig {
                width: video_info.width() as usize,
                height: video_info.height() as usize,
                bit_depth: video_info.format_info().depth()[0] as usize,
                chroma_sampling: match video_info.format() {
                    gst_video::VideoFormat::I420
                    | gst_video::VideoFormat::I42010le
                    | gst_video::VideoFormat::I42012le => color::ChromaSampling::Cs420,
                    gst_video::VideoFormat::Y42b
                    | gst_video::VideoFormat::I42210le
                    | gst_video::VideoFormat::I42212le => color::ChromaSampling::Cs422,
                    gst_video::VideoFormat::Y444
                    | gst_video::VideoFormat::Y44410le
                    | gst_video::VideoFormat::Y44412le => color::ChromaSampling::Cs444,
                    gst_video::VideoFormat::Gray8 => color::ChromaSampling::Cs400,
                    _ => unreachable!(),
                },
                chroma_sample_position: match video_info.chroma_site() {
                    gst_video::VideoChromaSite::H_COSITED => color::ChromaSamplePosition::Vertical,
                    gst_video::VideoChromaSite::COSITED => color::ChromaSamplePosition::Colocated,
                    _ => color::ChromaSamplePosition::Unknown,
                },
                pixel_range: match video_info.colorimetry().range() {
                    gst_video::VideoColorRange::Range0_255 => color::PixelRange::Full,
                    _ => color::PixelRange::Limited,
                },
                color_description: {
                    let matrix = match video_info.colorimetry().matrix() {
                        gst_video::VideoColorMatrix::Rgb => color::MatrixCoefficients::Identity,
                        gst_video::VideoColorMatrix::Fcc => color::MatrixCoefficients::FCC,
                        gst_video::VideoColorMatrix::Bt709 => color::MatrixCoefficients::BT709,
                        gst_video::VideoColorMatrix::Bt601 => color::MatrixCoefficients::BT601,
                        gst_video::VideoColorMatrix::Smpte240m => {
                            color::MatrixCoefficients::SMPTE240
                        }
                        gst_video::VideoColorMatrix::Bt2020 => color::MatrixCoefficients::BT2020NCL,
                        _ => color::MatrixCoefficients::Unspecified,
                    };
                    let transfer = match video_info.colorimetry().transfer() {
                        gst_video::VideoTransferFunction::Gamma10 => {
                            color::TransferCharacteristics::Linear
                        }
                        gst_video::VideoTransferFunction::Bt709 => {
                            color::TransferCharacteristics::BT709
                        }
                        gst_video::VideoTransferFunction::Smpte240m => {
                            color::TransferCharacteristics::SMPTE240
                        }
                        gst_video::VideoTransferFunction::Srgb => {
                            color::TransferCharacteristics::SRGB
                        }
                        gst_video::VideoTransferFunction::Log100 => {
                            color::TransferCharacteristics::Log100
                        }
                        gst_video::VideoTransferFunction::Log316 => {
                            color::TransferCharacteristics::Log100Sqrt10
                        }
                        gst_video::VideoTransferFunction::Bt202012 => {
                            color::TransferCharacteristics::BT2020_12Bit
                        }
                        #[cfg(feature = "hdr")]
                        gst_video::VideoTransferFunction::Bt202010 => {
                            color::TransferCharacteristics::BT2020_10Bit
                        }
                        #[cfg(feature = "hdr")]
                        gst_video::VideoTransferFunction::Smpte2084 => {
                            color::TransferCharacteristics::SMPTE2084
                        }
                        #[cfg(feature = "hdr")]
                        gst_video::VideoTransferFunction::AribStdB67 => {
                            color::TransferCharacteristics::HLG
                        }
                        #[cfg(feature = "hdr")]
                        gst_video::VideoTransferFunction::Bt601 => {
                            color::TransferCharacteristics::BT601
                        }
                        gst_video::VideoTransferFunction::Gamma18
                        | gst_video::VideoTransferFunction::Gamma20
                        | gst_video::VideoTransferFunction::Gamma22
                        | gst_video::VideoTransferFunction::Gamma28
                        | gst_video::VideoTransferFunction::Adobergb
                        | _ => color::TransferCharacteristics::Unspecified,
                    };
                    let primaries = match video_info.colorimetry().primaries() {
                        gst_video::VideoColorPrimaries::Bt709 => color::ColorPrimaries::BT709,
                        gst_video::VideoColorPrimaries::Bt470m => color::ColorPrimaries::BT470M,
                        gst_video::VideoColorPrimaries::Bt470bg => color::ColorPrimaries::BT470BG,
                        gst_video::VideoColorPrimaries::Smpte170m => color::ColorPrimaries::BT601,
                        gst_video::VideoColorPrimaries::Smpte240m => {
                            color::ColorPrimaries::SMPTE240
                        }
                        gst_video::VideoColorPrimaries::Film => color::ColorPrimaries::GenericFilm,
                        gst_video::VideoColorPrimaries::Bt2020 => color::ColorPrimaries::BT2020,
                        #[cfg(feature = "hdr")]
                        gst_video::VideoColorPrimaries::Smptest428 => color::ColorPrimaries::XYZ,
                        #[cfg(feature = "hdr")]
                        gst_video::VideoColorPrimaries::Smpterp431 => {
                            color::ColorPrimaries::SMPTE431
                        }
                        #[cfg(feature = "hdr")]
                        gst_video::VideoColorPrimaries::Smpteeg432 => {
                            color::ColorPrimaries::SMPTE432
                        }
                        #[cfg(feature = "hdr")]
                        gst_video::VideoColorPrimaries::Ebu3213 => color::ColorPrimaries::EBU3213,
                        gst_video::VideoColorPrimaries::Adobergb | _ => {
                            color::ColorPrimaries::Unspecified
                        }
                    };

                    Some(color::ColorDescription {
                        color_primaries: primaries,
                        transfer_characteristics: transfer,
                        matrix_coefficients: matrix,
                    })
                },
                mastering_display: {
                    #[cfg(feature = "hdr")]
                    {
                        state
                            .caps()
                            .and_then(|caps| {
                                gst_video::VideoMasteringDisplayInfo::from_caps(caps).ok()
                            })
                            .map(|info| rav1e::prelude::color::MasteringDisplay {
                                primaries: [
                                    rav1e::prelude::color::ChromaticityPoint {
                                        x: info.display_primaries()[0].x,
                                        y: info.display_primaries()[0].y,
                                    },
                                    rav1e::prelude::color::ChromaticityPoint {
                                        x: info.display_primaries()[1].x,
                                        y: info.display_primaries()[1].y,
                                    },
                                    rav1e::prelude::color::ChromaticityPoint {
                                        x: info.display_primaries()[2].x,
                                        y: info.display_primaries()[2].y,
                                    },
                                ],
                                white_point: rav1e::prelude::color::ChromaticityPoint {
                                    x: info.white_point().x,
                                    y: info.white_point().y,
                                },
                                max_luminance: info.max_display_mastering_luminance(),
                                min_luminance: info.min_display_mastering_luminance(),
                            })
                    }
                    #[cfg(not(feature = "hdr"))]
                    {
                        None
                    }
                },
                content_light: {
                    #[cfg(feature = "hdr")]
                    {
                        state
                            .caps()
                            .and_then(|caps| {
                                gst_video::VideoContentLightLevel::from_caps(caps).ok()
                            })
                            .map(|info| rav1e::prelude::color::ContentLight {
                                max_content_light_level: info.max_content_light_level(),
                                max_frame_average_light_level: info.max_frame_average_light_level(),
                            })
                    }
                    #[cfg(not(feature = "hdr"))]
                    {
                        None
                    }
                },
                speed_settings: config::SpeedSettings::from_preset(settings.speed_preset as usize),
                time_base: if video_info.fps() != gst::Fraction::new(0, 1) {
                    data::Rational {
                        num: video_info.fps().numer() as u64,
                        den: video_info.fps().denom() as u64,
                    }
                } else {
                    data::Rational { num: 30, den: 1 }
                },
                low_latency: settings.low_latency,
                min_key_frame_interval: settings.min_key_frame_interval,
                max_key_frame_interval: settings.max_key_frame_interval,
                switch_frame_interval: settings.switch_frame_interval,
                bitrate: settings.bitrate,
                quantizer: settings.quantizer,
                min_quantizer: settings.min_quantizer,
                tile_cols: settings.tile_cols,
                tile_rows: settings.tile_rows,
                tiles: settings.tiles,
                rdo_lookahead_frames: if settings.rdo_lookahead_frames < 0 {
                    config::SpeedSettings::rdo_lookahead_frames(settings.speed_preset as usize)
                } else {
                    settings.rdo_lookahead_frames as usize
                },
                tune: match settings.tune {
                    Tune::Psnr => rav1e::prelude::Tune::Psnr,
                    Tune::Psychovisual => rav1e::prelude::Tune::Psychovisual,
                },
                reservoir_frame_delay: if settings.reservoir_frame_delay == i32::MIN {
                    None
                } else {
                    Some(settings.reservoir_frame_delay)
                },
                error_resilient: settings.error_resilient,
                ..Default::default()
            })
            .with_threads(settings.threads);
        // TODO: RateControlConfig

        let context =
            if video_info.format_info().depth()[0] > 8 {
                Context::Sixteen(cfg.new_context().map_err(|err| {
                    gst::loggable_error!(CAT, "Failed to create context: {:?}", err)
                })?)
            } else {
                Context::Eight(cfg.new_context().map_err(|err| {
                    gst::loggable_error!(CAT, "Failed to create context: {:?}", err)
                })?)
            };
        let container_sequence_header =
            gst::Buffer::from_mut_slice(context.container_sequence_header());

        *self.state.lock().unwrap() = Some(State {
            context,
            video_info,
        });

        let output_state = element
            .set_output_state(
                gst::Caps::builder("video/x-av1")
                    .field("stream-format", "obu-stream")
                    .field("alignment", "tu")
                    .field("codec_data", container_sequence_header)
                    .build(),
                Some(state),
            )
            .map_err(|_| gst::loggable_error!(CAT, "Failed to set output state"))?;
        element
            .negotiate(output_state)
            .map_err(|_| gst::loggable_error!(CAT, "Failed to negotiate"))?;

        self.parent_set_format(element, state)
    }

    fn flush(&self, element: &Self::Type) -> bool {
        gst_debug!(CAT, obj: element, "Flushing");

        let mut state_guard = self.state.lock().unwrap();
        if let Some(ref mut state) = *state_guard {
            state.context.flush();
            while let Ok(_) | Err(data::EncoderStatus::Encoded) = state.context.receive_packet() {
                gst_debug!(CAT, obj: element, "Dropping packet on flush",);
            }
        }

        true
    }

    fn finish(&self, element: &Self::Type) -> Result<gst::FlowSuccess, gst::FlowError> {
        gst_debug!(CAT, obj: element, "Finishing");

        let mut state_guard = self.state.lock().unwrap();
        if let Some(ref mut state) = *state_guard {
            state.context.flush();
            self.output_frames(element, state)?;
        }

        Ok(gst::FlowSuccess::Ok)
    }

    fn handle_frame(
        &self,
        element: &Self::Type,
        frame: gst_video::VideoCodecFrame,
    ) -> Result<gst::FlowSuccess, gst::FlowError> {
        let mut state_guard = self.state.lock().unwrap();
        let state = state_guard.as_mut().ok_or(gst::FlowError::NotNegotiated)?;

        self.output_frames(element, state)?;

        gst_debug!(
            CAT,
            obj: element,
            "Sending frame {}",
            frame.system_frame_number()
        );

        let input_buffer = frame.input_buffer().expect("frame without input buffer");

        let in_frame =
            gst_video::VideoFrameRef::from_buffer_ref_readable(&*input_buffer, &state.video_info)
                .map_err(|_| {
                gst::element_error!(
                    element,
                    gst::CoreError::Failed,
                    ["Failed to map output buffer readable"]
                );
                gst::FlowError::Error
            })?;

        match state.context.send_frame(
            frame.system_frame_number(),
            &in_frame,
            frame
                .flags()
                .contains(gst_video::VideoCodecFrameFlags::FORCE_KEYFRAME),
        ) {
            Ok(_) => {
                gst_debug!(
                    CAT,
                    obj: element,
                    "Sent frame {}",
                    frame.system_frame_number()
                );
            }
            Err(data::EncoderStatus::Failure) => {
                gst::element_error!(element, gst::CoreError::Failed, ["Failed to send frame"]);
                return Err(gst::FlowError::Error);
            }
            Err(_) => (),
        }

        self.output_frames(element, state)
    }
}

impl Rav1Enc {
    fn output_frames(
        &self,
        element: &super::Rav1Enc,
        state: &mut State,
    ) -> Result<gst::FlowSuccess, gst::FlowError> {
        loop {
            match state.context.receive_packet() {
                Ok((packet_type, packet_number, frame_number, packet_data)) => {
                    gst_debug!(
                        CAT,
                        obj: element,
                        "Received packet {} of size {}, frame type {:?}",
                        packet_number,
                        packet_data.len(),
                        packet_type
                    );

                    let mut frame = element.frame(frame_number as i32).expect("frame not found");

                    if packet_type == data::FrameType::KEY {
                        frame.set_flags(gst_video::VideoCodecFrameFlags::SYNC_POINT);
                    }
                    let output_buffer = gst::Buffer::from_mut_slice(packet_data);
                    frame.set_output_buffer(output_buffer);
                    element.finish_frame(Some(frame))?;
                }
                Err(data::EncoderStatus::Encoded) => {
                    gst_debug!(CAT, obj: element, "Encoded but not output frame yet",);
                }
                Err(data::EncoderStatus::NeedMoreData) => {
                    gst_debug!(CAT, obj: element, "Encoded but need more data",);
                    return Ok(gst::FlowSuccess::Ok);
                }
                Err(data::EncoderStatus::Failure) => {
                    gst::element_error!(
                        element,
                        gst::CoreError::Failed,
                        ["Failed to receive frame"]
                    );
                    return Err(gst::FlowError::Error);
                }
                Err(err) => {
                    gst_debug!(
                        CAT,
                        obj: element,
                        "Soft error when receiving frame: {:?}",
                        err
                    );
                    return Ok(gst::FlowSuccess::Ok);
                }
            }
        }
    }
}
