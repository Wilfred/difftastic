const std = @import("std");

pub fn main() void {
    std.debug.print("Hello, {s}!", .{"user"});
    std.debug.print("Hello, again!", .{});
}