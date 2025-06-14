import gleam/option.{type Option, Some, None}
//      ^ reference.module
//                        ^ reference.type
//                                ^ reference.constructor
//                                      ^ reference.constructor
import gleam/bit_builder
//      ^ reference.module

pub type FrameData {
  //      ^ definition.type
  Text(String)
  // <- definition.constructor
  //    ^ reference.type
  Binary(BitString)
  Continuation(BitString)
  Ping(BitString)
  Pong(BitString)
  Close(code: Option(Int), reason: Option(String))
  // <- definition.constructor
  //            ^ reference.type
  //                  ^ reference.type
  //                                ^ reference.type
  //                                       ^ reference.type
}

pub type Frame {
  //      ^ definition.type
  Frame(reserved: BitString, mask: Option(BitString), data: FrameData, fin: Bool)
}

fn encode_frame(frame: Frame) -> bit_builder.BitBuilder {
//  ^ definition.function
//                      ^ reference.type
//                                ^ reference.module
//                                             ^ reference.type
  let fin =
    case frame.fin {
      True -> <<1:size(1)>>
      False -> <<0:size(1)>>
    }

  let opcode =
    case frame.data {
      Continuation(_) -> <<0x0:size(1)>>
      // <- reference.constructor
      Text(_) -> <<0x1:size(1)>>
      Binary(_) -> <<0x2:size(1)>>
      // 0x3-7 reserved for future non-control frames
      Close(..) -> <<0x8:size(1)>>
      Pong(_) -> <<0x9:size(1)>>
      Pong(_) -> <<0xA:size(1)>>
    }

  let is_masked_bit =
    case frame.mask {
      Some(_) -> <<1:size(1)>>
      None -> <<0:size(1)>>
    }

  bit_builder.new()
  // <- reference.module
  //           ^ reference.function
  |> bit_builder.append(fin)
  //              ^ reference.function
  |> bit_builder.append(frame.reserved)
  |> bit_builder.append(opcode)
  |> bit_builder.append(is_masked_bit)
  |> bit_builder.append(option.unwrap(frame.mask, <<>>))
  // ^ reference.module
  //                     ^ reference.module
  //                            ^ reference.function
  |> bit_builder.append(mask_data(frame))
  //                     ^ reference.function
}

