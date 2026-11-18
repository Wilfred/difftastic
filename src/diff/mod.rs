pub(crate) mod changes;
mod graph;
pub(crate) mod lcs_diff;
pub(crate) mod shortest_path;
pub(crate) mod sliders;
mod stack;
pub(crate) mod unchanged;

#[cfg(test)]
#[path = "../../verification/structural_probe.rs"]
mod structural_probe;
