================================================================================
async_fn
================================================================================

    const std = @import("std");
const builtin = @import("builtin");
const expect = std.testing.expect;
const expectEqual = std.testing.expectEqual;
const expectError = std.testing.expectError;

var global_x: i32 = 1;

test "simple coroutine suspend and resume" {
    var frame = async simpleAsyncFn();
    expect(global_x == 2);
    resume frame;
    expect(global_x == 3);
    const af: anyframe->void = &frame;
    resume frame;
    expect(global_x == 4);
}
fn simpleAsyncFn() void {
    global_x += 1;
    suspend {}
    global_x += 1;
    suspend {}
    global_x += 1;
}

var global_y: i32 = 1;

test "pass parameter to coroutine" {
    var p = async simpleAsyncFnWithArg(2);
    expect(global_y == 3);
    resume p;
    expect(global_y == 5);
}
fn simpleAsyncFnWithArg(delta: i32) void {
    global_y += delta;
    suspend {}
    global_y += delta;
}

test "suspend at end of function" {
    const S = struct {
        var x: i32 = 1;

        fn doTheTest() void {
            expect(x == 1);
            const p = async suspendAtEnd();
            expect(x == 2);
        }

        fn suspendAtEnd() void {
            x += 1;
            suspend {}
        }
    };
    S.doTheTest();
}

test "local variable in async function" {
    const S = struct {
        var x: i32 = 0;

        fn doTheTest() void {
            expect(x == 0);
            var p = async add(1, 2);
            expect(x == 0);
            resume p;
            expect(x == 0);
            resume p;
            expect(x == 0);
            resume p;
            expect(x == 3);
        }

        fn add(a: i32, b: i32) void {
            var accum: i32 = 0;
            suspend {}
            accum += a;
            suspend {}
            accum += b;
            suspend {}
            x = accum;
        }
    };
    S.doTheTest();
}

test "calling an inferred async function" {
    const S = struct {
        var x: i32 = 1;
        var other_frame: *@Frame(other) = undefined;

        fn doTheTest() void {
            _ = async first();
            expect(x == 1);
            resume other_frame.*;
            expect(x == 2);
        }

        fn first() void {
            other();
        }
        fn other() void {
            other_frame = @frame();
            suspend {}
            x += 1;
        }
    };
    S.doTheTest();
}

test "@frameSize" {
    const S = struct {
        fn doTheTest() void {
            {
                var ptr = @ptrCast(fn (i32) callconv(.Async) void, other);
                const size = @frameSize(ptr);
                expect(size == @sizeOf(@Frame(other)));
            }
            {
                var ptr = @ptrCast(fn () callconv(.Async) void, first);
                const size = @frameSize(ptr);
                expect(size == @sizeOf(@Frame(first)));
            }
        }

        fn first() void {
            other(1);
        }
        fn other(param: i32) void {
            var local: i32 = undefined;
            suspend {}
        }
    };
    S.doTheTest();
}

test "coroutine suspend, resume" {
    const S = struct {
        var frame: anyframe = undefined;

        fn doTheTest() void {
            _ = async amain();
            seq('d');
            resume frame;
            seq('h');

            expect(std.mem.eql(u8, &points, "abcdefgh"));
        }

        fn amain() void {
            seq('a');
            var f = async testAsyncSeq();
            seq('c');
            await f;
            seq('g');
        }

        fn testAsyncSeq() void {
            defer seq('f');

            seq('b');
            suspend {
                frame = @frame();
            }
            seq('e');
        }
        var points = [_]u8{'x'} ** "abcdefgh".len;
        var index: usize = 0;

        fn seq(c: u8) void {
            points[index] = c;
            index += 1;
        }
    };
    S.doTheTest();
}

test "coroutine suspend with block" {
    const p = async testSuspendBlock();
    expect(!global_result);
    resume a_promise;
    expect(global_result);
}

var a_promise: anyframe = undefined;
var global_result = false;
fn testSuspendBlock() callconv(.Async) void {
    suspend {
        comptime expect(@TypeOf(@frame()) == *@Frame(testSuspendBlock));
        a_promise = @frame();
    }

    // Test to make sure that @frame() works as advertised (issue #1296)
    // var our_handle: anyframe = @frame();
    expect(a_promise == @as(anyframe, @frame()));

    global_result = true;
}

var await_a_promise: anyframe = undefined;
var await_final_result: i32 = 0;

test "coroutine await" {
    await_seq('a');
    var p = async await_amain();
    await_seq('f');
    resume await_a_promise;
    await_seq('i');
    expect(await_final_result == 1234);
    expect(std.mem.eql(u8, &await_points, "abcdefghi"));
}
fn await_amain() callconv(.Async) void {
    await_seq('b');
    var p = async await_another();
    await_seq('e');
    await_final_result = await p;
    await_seq('h');
}
fn await_another() callconv(.Async) i32 {
    await_seq('c');
    suspend {
        await_seq('d');
        await_a_promise = @frame();
    }
    await_seq('g');
    return 1234;
}

var await_points = [_]u8{0} ** "abcdefghi".len;
var await_seq_index: usize = 0;

fn await_seq(c: u8) void {
    await_points[await_seq_index] = c;
    await_seq_index += 1;
}

var early_final_result: i32 = 0;

test "coroutine await early return" {
    early_seq('a');
    var p = async early_amain();
    early_seq('f');
    expect(early_final_result == 1234);
    expect(std.mem.eql(u8, &early_points, "abcdef"));
}
fn early_amain() callconv(.Async) void {
    early_seq('b');
    var p = async early_another();
    early_seq('d');
    early_final_result = await p;
    early_seq('e');
}
fn early_another() callconv(.Async) i32 {
    early_seq('c');
    return 1234;
}

var early_points = [_]u8{0} ** "abcdef".len;
var early_seq_index: usize = 0;

fn early_seq(c: u8) void {
    early_points[early_seq_index] = c;
    early_seq_index += 1;
}

test "async function with dot syntax" {
    const S = struct {
        var y: i32 = 1;
        fn foo() callconv(.Async) void {
            y += 1;
            suspend {}
        }
    };
    const p = async S.foo();
    expect(S.y == 2);
}

test "async fn pointer in a struct field" {
    var data: i32 = 1;
    const Foo = struct {
        bar: fn (*i32) callconv(.Async) void,
    };
    var foo = Foo{ .bar = simpleAsyncFn2 };
    var bytes: [64]u8 align(16) = undefined;
    const f = @asyncCall(&bytes, {}, foo.bar, .{&data});
    comptime expect(@TypeOf(f) == anyframe->void);
    expect(data == 2);
    resume f;
    expect(data == 4);
    _ = async doTheAwait(f);
    expect(data == 4);
}

fn doTheAwait(f: anyframe->void) void {
    await f;
}
fn simpleAsyncFn2(y: *i32) callconv(.Async) void {
    defer y.* += 2;
    y.* += 1;
    suspend {}
}

test "@asyncCall with return type" {
    const Foo = struct {
        bar: fn () callconv(.Async) i32,

        var global_frame: anyframe = undefined;
        fn middle() callconv(.Async) i32 {
            return afunc();
        }

        fn afunc() i32 {
            global_frame = @frame();
            suspend {}
            return 1234;
        }
    };
    var foo = Foo{ .bar = Foo.middle };
    var bytes: [150]u8 align(16) = undefined;
    var aresult: i32 = 0;
    _ = @asyncCall(&bytes, &aresult, foo.bar, .{});
    expect(aresult == 0);
    resume Foo.global_frame;
    expect(aresult == 1234);
}

test "async fn with inferred error set" {
    const S = struct {
        var global_frame: anyframe = undefined;

        fn doTheTest() void {
            var frame: [1]@Frame(middle) = undefined;
            var fn_ptr = middle;
            var result: @typeInfo(@typeInfo(@TypeOf(fn_ptr)).Fn.return_type.?).ErrorUnion.error_set!void = undefined;
            _ = @asyncCall(std.mem.sliceAsBytes(frame[0..]), &result, fn_ptr, .{});
            resume global_frame;
            std.testing.expectError(error.Fail, result);
        }
        fn middle() callconv(.Async) !void {
            var f = async middle2();
            return await f;
        }

        fn middle2() !void {
            return failing();
        }

        fn failing() !void {
            global_frame = @frame();
            suspend {}
            return error.Fail;
        }
    };
    S.doTheTest();
}

test "error return trace across suspend points - early return" {
    const p = nonFailing();
    resume p;
    const p2 = async printTrace(p);
}

test "error return trace across suspend points - async return" {
    const p = nonFailing();
    const p2 = async printTrace(p);
    resume p;
}

fn nonFailing() (anyframe->anyerror!void) {
    const Static = struct {
        var frame: @Frame(suspendThenFail) = undefined;
    };
    Static.frame = async suspendThenFail();
    return &Static.frame;
}
fn suspendThenFail() callconv(.Async) anyerror!void {
    suspend {}
    return error.Fail;
}
fn printTrace(p: anyframe->(anyerror!void)) callconv(.Async) void {
    (await p) catch |e| {
        std.testing.expect(e == error.Fail);
        if (@errorReturnTrace()) |trace| {
            expect(trace.index == 1);
        } else switch (builtin.mode) {
            .Debug, .ReleaseSafe => @panic("expected return trace"),
            .ReleaseFast, .ReleaseSmall => {},
        }
    };
}

test "break from suspend" {
    var my_result: i32 = 1;
    const p = async testBreakFromSuspend(&my_result);
    std.testing.expect(my_result == 2);
}
fn testBreakFromSuspend(my_result: *i32) callconv(.Async) void {
    suspend {
        resume @frame();
    }
    my_result.* += 1;
    suspend {}
    my_result.* += 1;
}

test "heap allocated async function frame" {
    const S = struct {
        var x: i32 = 42;

        fn doTheTest() !void {
            const frame = try std.testing.allocator.create(@Frame(someFunc));
            defer std.testing.allocator.destroy(frame);

            expect(x == 42);
            frame.* = async someFunc();
            expect(x == 43);
            resume frame;
            expect(x == 44);
        }

        fn someFunc() void {
            x += 1;
            suspend {}
            x += 1;
        }
    };
    try S.doTheTest();
}

test "async function call return value" {
    const S = struct {
        var frame: anyframe = undefined;
        var pt = Point{ .x = 10, .y = 11 };

        fn doTheTest() void {
            expectEqual(pt.x, 10);
            expectEqual(pt.y, 11);
            _ = async first();
            expectEqual(pt.x, 10);
            expectEqual(pt.y, 11);
            resume frame;
            expectEqual(pt.x, 1);
            expectEqual(pt.y, 2);
        }

        fn first() void {
            pt = second(1, 2);
        }

        fn second(x: i32, y: i32) Point {
            return other(x, y);
        }

        fn other(x: i32, y: i32) Point {
            frame = @frame();
            suspend {}
            return Point{
                .x = x,
                .y = y,
            };
        }

        const Point = struct {
            x: i32,
            y: i32,
        };
    };
    S.doTheTest();
}

test "suspension points inside branching control flow" {
    const S = struct {
        var result: i32 = 10;

        fn doTheTest() void {
            expect(10 == result);
            var frame = async func(true);
            expect(10 == result);
            resume frame;
            expect(11 == result);
            resume frame;
            expect(12 == result);
            resume frame;
            expect(13 == result);
        }

        fn func(b: bool) void {
            while (b) {
                suspend {}
                result += 1;
            }
        }
    };
    S.doTheTest();
}

test "call async function which has struct return type" {
    const S = struct {
        var frame: anyframe = undefined;

        fn doTheTest() void {
            _ = async atest();
            resume frame;
        }

        fn atest() void {
            const result = func();
            expect(result.x == 5);
            expect(result.y == 6);
        }

        const Point = struct {
            x: usize,
            y: usize,
        };

        fn func() Point {
            suspend {
                frame = @frame();
            }
            return Point{
                .x = 5,
                .y = 6,
            };
        }
    };
    S.doTheTest();
}

test "pass string literal to async function" {
    const S = struct {
        var frame: anyframe = undefined;
        var ok: bool = false;

        fn doTheTest() void {
            _ = async hello("hello");
            resume frame;
            expect(ok);
        }

        fn hello(msg: []const u8) void {
            frame = @frame();
            suspend {}
            expectEqual(@as([]const u8, "hello"), msg);
            ok = true;
        }
    };
    S.doTheTest();
}

test "await inside an errdefer" {
    const S = struct {
        var frame: anyframe = undefined;

        fn doTheTest() void {
            _ = async amainWrap();
            resume frame;
        }

        fn amainWrap() !void {
            var foo = async func();
            errdefer await foo;
            return error.Bad;
        }

        fn func() void {
            frame = @frame();
            suspend {}
        }
    };
    S.doTheTest();
}

test "try in an async function with error union and non-zero-bit payload" {
    const S = struct {
        var frame: anyframe = undefined;
        var ok = false;

        fn doTheTest() void {
            _ = async amain();
            resume frame;
            expect(ok);
        }

        fn amain() void {
            std.testing.expectError(error.Bad, theProblem());
            ok = true;
        }

        fn theProblem() ![]u8 {
            frame = @frame();
            suspend {}
            const result = try other();
            return result;
        }

        fn other() ![]u8 {
            return error.Bad;
        }
    };
    S.doTheTest();
}

test "returning a const error from async function" {
    const S = struct {
        var frame: anyframe = undefined;
        var ok = false;

        fn doTheTest() void {
            _ = async amain();
            resume frame;
            expect(ok);
        }

        fn amain() !void {
            var download_frame = async fetchUrl(10, "a string");
            const download_text = try await download_frame;

            @panic("should not get here");
        }

        fn fetchUrl(unused: i32, url: []const u8) ![]u8 {
            frame = @frame();
            suspend {}
            ok = true;
            return error.OutOfMemory;
        }
    };
    S.doTheTest();
}

test "async/await typical usage" {
    inline for ([_]bool{ false, true }) |b1| {
        inline for ([_]bool{ false, true }) |b2| {
            inline for ([_]bool{ false, true }) |b3| {
                inline for ([_]bool{ false, true }) |b4| {
                    testAsyncAwaitTypicalUsage(b1, b2, b3, b4).doTheTest();
                }
            }
        }
    }
}

fn testAsyncAwaitTypicalUsage(
    comptime simulate_fail_download: bool,
    comptime simulate_fail_file: bool,
    comptime suspend_download: bool,
    comptime suspend_file: bool,
) type {
    return struct {
        fn doTheTest() void {
            _ = async amainWrap();
            if (suspend_file) {
                resume global_file_frame;
            }
            if (suspend_download) {
                resume global_download_frame;
            }
        }
        fn amainWrap() void {
            if (amain()) |_| {
                expect(!simulate_fail_download);
                expect(!simulate_fail_file);
            } else |e| switch (e) {
                error.NoResponse => expect(simulate_fail_download),
                error.FileNotFound => expect(simulate_fail_file),
                else => @panic("test failure"),
            }
        }

        fn amain() !void {
            const allocator = std.testing.allocator;
            var download_frame = async fetchUrl(allocator, "https://example.com/");
            var download_awaited = false;
            errdefer if (!download_awaited) {
                if (await download_frame) |x| allocator.free(x) else |_| {}
            };

            var file_frame = async readFile(allocator, "something.txt");
            var file_awaited = false;
            errdefer if (!file_awaited) {
                if (await file_frame) |x| allocator.free(x) else |_| {}
            };

            download_awaited = true;
            const download_text = try await download_frame;
            defer allocator.free(download_text);

            file_awaited = true;
            const file_text = try await file_frame;
            defer allocator.free(file_text);

            expect(std.mem.eql(u8, "expected download text", download_text));
            expect(std.mem.eql(u8, "expected file text", file_text));
        }

        var global_download_frame: anyframe = undefined;
        fn fetchUrl(allocator: *std.mem.Allocator, url: []const u8) anyerror![]u8 {
            const result = try std.mem.dupe(allocator, u8, "expected download text");
            errdefer allocator.free(result);
            if (suspend_download) {
                suspend {
                    global_download_frame = @frame();
                }
            }
            if (simulate_fail_download) return error.NoResponse;
            return result;
        }

        var global_file_frame: anyframe = undefined;
        fn readFile(allocator: *std.mem.Allocator, filename: []const u8) anyerror![]u8 {
            const result = try std.mem.dupe(allocator, u8, "expected file text");
            errdefer allocator.free(result);
            if (suspend_file) {
                suspend {
                    global_file_frame = @frame();
                }
            }
            if (simulate_fail_file) return error.FileNotFound;
            return result;
        }
    };
}

test "alignment of local variables in async functions" {
    const S = struct {
        fn doTheTest() void {
            var y: u8 = 123;
            var x: u8 align(128) = 1;
            expect(@ptrToInt(&x) % 128 == 0);
        }
    };
    S.doTheTest();
}

test "no reason to resolve frame still works" {
    _ = async simpleNothing();
}
fn simpleNothing() void {
    var x: i32 = 1234;
}

test "async call a generic function" {
    const S = struct {
        fn doTheTest() void {
            var f = async func(i32, 2);
            const result = await f;
            expect(result == 3);
        }

        fn func(comptime T: type, inc: T) T {
            var x: T = 1;
            suspend {
                resume @frame();
            }
            x += inc;
            return x;
        }
    };
    _ = async S.doTheTest();
}

test "return from suspend block" {
    const S = struct {
        fn doTheTest() void {
            expect(func() == 1234);
        }
        fn func() i32 {
            suspend {
                return 1234;
            }
        }
    };
    _ = async S.doTheTest();
}

test "struct parameter to async function is copied to the frame" {
    const S = struct {
        const Point = struct {
            x: i32,
            y: i32,
        };

        var frame: anyframe = undefined;

        fn doTheTest() void {
            _ = async atest();
            resume frame;
        }

        fn atest() void {
            var f: @Frame(foo) = undefined;
            bar(&f);
            clobberStack(10);
        }

        fn clobberStack(x: i32) void {
            if (x == 0) return;
            clobberStack(x - 1);
            var y: i32 = x;
        }

        fn bar(f: *@Frame(foo)) void {
            var pt = Point{ .x = 1, .y = 2 };
            f.* = async foo(pt);
            var result = await f;
            expect(result == 1);
        }

        fn foo(point: Point) i32 {
            suspend {
                frame = @frame();
            }
            return point.x;
        }
    };
    S.doTheTest();
}

test "cast fn to async fn when it is inferred to be async" {
    const S = struct {
        var frame: anyframe = undefined;
        var ok = false;

        fn doTheTest() void {
            var ptr: fn () callconv(.Async) i32 = undefined;
            ptr = func;
            var buf: [100]u8 align(16) = undefined;
            var result: i32 = undefined;
            const f = @asyncCall(&buf, &result, ptr, .{});
            _ = await f;
            expect(result == 1234);
            ok = true;
        }

        fn func() i32 {
            suspend {
                frame = @frame();
            }
            return 1234;
        }
    };
    _ = async S.doTheTest();
    resume S.frame;
    expect(S.ok);
}

test "cast fn to async fn when it is inferred to be async, awaited directly" {
    const S = struct {
        var frame: anyframe = undefined;
        var ok = false;

        fn doTheTest() void {
            var ptr: fn () callconv(.Async) i32 = undefined;
            ptr = func;
            var buf: [100]u8 align(16) = undefined;
            var result: i32 = undefined;
            _ = await @asyncCall(&buf, &result, ptr, .{});
            expect(result == 1234);
            ok = true;
        }

        fn func() i32 {
            suspend {
                frame = @frame();
            }
            return 1234;
        }
    };
    _ = async S.doTheTest();
    resume S.frame;
    expect(S.ok);
}

test "await does not force async if callee is blocking" {
    const S = struct {
        fn simple() i32 {
            return 1234;
        }
    };
    var x = async S.simple();
    expect(await x == 1234);
}

test "recursive async function" {
    expect(recursiveAsyncFunctionTest(false).doTheTest() == 55);
    expect(recursiveAsyncFunctionTest(true).doTheTest() == 55);
}

fn recursiveAsyncFunctionTest(comptime suspending_implementation: bool) type {
    return struct {
        fn fib(allocator: *std.mem.Allocator, x: u32) error{OutOfMemory}!u32 {
            if (x <= 1) return x;

            if (suspending_implementation) {
                suspend {
                    resume @frame();
                }
            }

            const f1 = try allocator.create(@Frame(fib));
            defer allocator.destroy(f1);

            const f2 = try allocator.create(@Frame(fib));
            defer allocator.destroy(f2);

            f1.* = async fib(allocator, x - 1);
            var f1_awaited = false;
            errdefer if (!f1_awaited) {
                _ = await f1;
            };

            f2.* = async fib(allocator, x - 2);
            var f2_awaited = false;
            errdefer if (!f2_awaited) {
                _ = await f2;
            };

            var sum: u32 = 0;

            f1_awaited = true;
            sum += try await f1;

            f2_awaited = true;
            sum += try await f2;

            return sum;
        }

        fn doTheTest() u32 {
            if (suspending_implementation) {
                var result: u32 = undefined;
                _ = async amain(&result);
                return result;
            } else {
                return fib(std.testing.allocator, 10) catch unreachable;
            }
        }

        fn amain(result: *u32) void {
            var x = async fib(std.testing.allocator, 10);
            result.* = (await x) catch unreachable;
        }
    };
}

test "@asyncCall with comptime-known function, but not awaited directly" {
    const S = struct {
        var global_frame: anyframe = undefined;

        fn doTheTest() void {
            var frame: [1]@Frame(middle) = undefined;
            var result: @typeInfo(@typeInfo(@TypeOf(middle)).Fn.return_type.?).ErrorUnion.error_set!void = undefined;
            _ = @asyncCall(std.mem.sliceAsBytes(frame[0..]), &result, middle, .{});
            resume global_frame;
            std.testing.expectError(error.Fail, result);
        }
        fn middle() callconv(.Async) !void {
            var f = async middle2();
            return await f;
        }

        fn middle2() !void {
            return failing();
        }

        fn failing() !void {
            global_frame = @frame();
            suspend {}
            return error.Fail;
        }
    };
    S.doTheTest();
}

test "@asyncCall with actual frame instead of byte buffer" {
    const S = struct {
        fn func() i32 {
            suspend {}
            return 1234;
        }
    };
    var frame: @Frame(S.func) = undefined;
    var result: i32 = undefined;
    const ptr = @asyncCall(&frame, &result, S.func, .{});
    resume ptr;
    expect(result == 1234);
}

test "@asyncCall using the result location inside the frame" {
    const S = struct {
        fn simple2(y: *i32) callconv(.Async) i32 {
            defer y.* += 2;
            y.* += 1;
            suspend {}
            return 1234;
        }
        fn getAnswer(f: anyframe->i32, out: *i32) void {
            out.* = await f;
        }
    };
    var data: i32 = 1;
    const Foo = struct {
        bar: fn (*i32) callconv(.Async) i32,
    };
    var foo = Foo{ .bar = S.simple2 };
    var bytes: [64]u8 align(16) = undefined;
    const f = @asyncCall(&bytes, {}, foo.bar, .{&data});
    comptime expect(@TypeOf(f) == anyframe->i32);
    expect(data == 2);
    resume f;
    expect(data == 4);
    _ = async S.getAnswer(f, &data);
    expect(data == 1234);
}

test "@TypeOf an async function call of generic fn with error union type" {
    const S = struct {
        fn func(comptime x: anytype) anyerror!i32 {
            const T = @TypeOf(async func(x));
            comptime expect(T == @typeInfo(@TypeOf(@frame())).Pointer.child);
            return undefined;
        }
    };
    _ = async S.func(i32);
}

test "using @TypeOf on a generic function call" {
    const S = struct {
        var global_frame: anyframe = undefined;
        var global_ok = false;

        var buf: [100]u8 align(16) = undefined;

        fn amain(x: anytype) void {
            if (x == 0) {
                global_ok = true;
                return;
            }
            suspend {
                global_frame = @frame();
            }
            const F = @TypeOf(async amain(x - 1));
            const frame = @intToPtr(*F, @ptrToInt(&buf));
            return await @asyncCall(frame, {}, amain, .{x - 1});
        }
    };
    _ = async S.amain(@as(u32, 1));
    resume S.global_frame;
    expect(S.global_ok);
}

test "recursive call of await @asyncCall with struct return type" {
    const S = struct {
        var global_frame: anyframe = undefined;
        var global_ok = false;

        var buf: [100]u8 align(16) = undefined;

        fn amain(x: anytype) Foo {
            if (x == 0) {
                global_ok = true;
                return Foo{ .x = 1, .y = 2, .z = 3 };
            }
            suspend {
                global_frame = @frame();
            }
            const F = @TypeOf(async amain(x - 1));
            const frame = @intToPtr(*F, @ptrToInt(&buf));
            return await @asyncCall(frame, {}, amain, .{x - 1});
        }

        const Foo = struct {
            x: u64,
            y: u64,
            z: u64,
        };
    };
    var res: S.Foo = undefined;
    var frame: @TypeOf(async S.amain(@as(u32, 1))) = undefined;
    _ = @asyncCall(&frame, &res, S.amain, .{@as(u32, 1)});
    resume S.global_frame;
    expect(S.global_ok);
    expect(res.x == 1);
    expect(res.y == 2);
    expect(res.z == 3);
}

test "nosuspend function call" {
    const S = struct {
        fn doTheTest() void {
            const result = nosuspend add(50, 100);
            expect(result == 150);
        }
        fn add(a: i32, b: i32) i32 {
            if (a > 100) {
                suspend {}
            }
            return a + b;
        }
    };
    S.doTheTest();
}

test "await used in expression and awaiting fn with no suspend but async calling convention" {
    const S = struct {
        fn atest() void {
            var f1 = async add(1, 2);
            var f2 = async add(3, 4);

            const sum = (await f1) + (await f2);
            expect(sum == 10);
        }
        fn add(a: i32, b: i32) callconv(.Async) i32 {
            return a + b;
        }
    };
    _ = async S.atest();
}

test "await used in expression after a fn call" {
    const S = struct {
        fn atest() void {
            var f1 = async add(3, 4);
            var sum: i32 = 0;
            sum = foo() + await f1;
            expect(sum == 8);
        }
        fn add(a: i32, b: i32) callconv(.Async) i32 {
            return a + b;
        }
        fn foo() i32 {
            return 1;
        }
    };
    _ = async S.atest();
}

test "async fn call used in expression after a fn call" {
    const S = struct {
        fn atest() void {
            var sum: i32 = 0;
            sum = foo() + add(3, 4);
            expect(sum == 8);
        }
        fn add(a: i32, b: i32) callconv(.Async) i32 {
            return a + b;
        }
        fn foo() i32 {
            return 1;
        }
    };
    _ = async S.atest();
}

test "suspend in for loop" {
    const S = struct {
        var global_frame: ?anyframe = null;

        fn doTheTest() void {
            _ = async atest();
            while (global_frame) |f| resume f;
        }

        fn atest() void {
            expect(func(&[_]u8{ 1, 2, 3 }) == 6);
        }
        fn func(stuff: []const u8) u32 {
            global_frame = @frame();
            var sum: u32 = 0;
            for (stuff) |x| {
                suspend {}
                sum += x;
            }
            global_frame = null;
            return sum;
        }
    };
    S.doTheTest();
}

test "suspend in while loop" {
    const S = struct {
        var global_frame: ?anyframe = null;

        fn doTheTest() void {
            _ = async atest();
            while (global_frame) |f| resume f;
        }

        fn atest() void {
            expect(optional(6) == 6);
            expect(errunion(6) == 6);
        }
        fn optional(stuff: ?u32) u32 {
            global_frame = @frame();
            defer global_frame = null;
            while (stuff) |val| {
                suspend {}
                return val;
            }
            return 0;
        }
        fn errunion(stuff: anyerror!u32) u32 {
            global_frame = @frame();
            defer global_frame = null;
            while (stuff) |val| {
                suspend {}
                return val;
            } else |err| {
                return 0;
            }
        }
    };
    S.doTheTest();
}

test "correctly spill when returning the error union result of another async fn" {
    const S = struct {
        var global_frame: anyframe = undefined;

        fn doTheTest() void {
            expect((atest() catch unreachable) == 1234);
        }

        fn atest() !i32 {
            return fallible1();
        }

        fn fallible1() anyerror!i32 {
            suspend {
                global_frame = @frame();
            }
            return 1234;
        }
    };
    _ = async S.doTheTest();
    resume S.global_frame;
}

test "spill target expr in a for loop" {
    const S = struct {
        var global_frame: anyframe = undefined;

        fn doTheTest() void {
            var foo = Foo{
                .slice = &[_]i32{ 1, 2 },
            };
            expect(atest(&foo) == 3);
        }

        const Foo = struct {
            slice: []const i32,
        };

        fn atest(foo: *Foo) i32 {
            var sum: i32 = 0;
            for (foo.slice) |x| {
                suspend {
                    global_frame = @frame();
                }
                sum += x;
            }
            return sum;
        }
    };
    _ = async S.doTheTest();
    resume S.global_frame;
    resume S.global_frame;
}

test "spill target expr in a for loop, with a var decl in the loop body" {
    const S = struct {
        var global_frame: anyframe = undefined;

        fn doTheTest() void {
            var foo = Foo{
                .slice = &[_]i32{ 1, 2 },
            };
            expect(atest(&foo) == 3);
        }

        const Foo = struct {
            slice: []const i32,
        };

        fn atest(foo: *Foo) i32 {
            var sum: i32 = 0;
            for (foo.slice) |x| {
                // Previously this var decl would prevent spills. This test makes sure
                // the for loop spills still happen even though there is a VarDecl in scope
                // before the suspend.
                var anything = true;
                _ = anything;
                suspend {
                    global_frame = @frame();
                }
                sum += x;
            }
            return sum;
        }
    };
    _ = async S.doTheTest();
    resume S.global_frame;
    resume S.global_frame;
}

test "async call with @call" {
    const S = struct {
        var global_frame: anyframe = undefined;
        fn doTheTest() void {
            _ = @call(.{ .modifier = .async_kw }, atest, .{});
            resume global_frame;
        }
        fn atest() void {
            var frame = @call(.{ .modifier = .async_kw }, afoo, .{});
            const res = await frame;
            expect(res == 42);
        }
        fn afoo() i32 {
            suspend {
                global_frame = @frame();
            }
            return 42;
        }
    };
    S.doTheTest();
}

test "async function passed 0-bit arg after non-0-bit arg" {
    const S = struct {
        var global_frame: anyframe = undefined;
        var global_int: i32 = 0;

        fn foo() void {
            bar(1, .{}) catch unreachable;
        }

        fn bar(x: i32, args: anytype) anyerror!void {
            global_frame = @frame();
            suspend {}
            global_int = x;
        }
    };
    _ = async S.foo();
    resume S.global_frame;
    expect(S.global_int == 1);
}

test "async function passed align(16) arg after align(8) arg" {
    const S = struct {
        var global_frame: anyframe = undefined;
        var global_int: u128 = 0;

        fn foo() void {
            var a: u128 = 99;
            bar(10, .{a}) catch unreachable;
        }

        fn bar(x: u64, args: anytype) anyerror!void {
            expect(x == 10);
            global_frame = @frame();
            suspend {}
            global_int = args[0];
        }
    };
    _ = async S.foo();
    resume S.global_frame;
    expect(S.global_int == 99);
}

test "async function call resolves target fn frame, comptime func" {
    const S = struct {
        var global_frame: anyframe = undefined;
        var global_int: i32 = 9;

        fn foo() anyerror!void {
            const stack_size = 1000;
            var stack_frame: [stack_size]u8 align(std.Target.stack_align) = undefined;
            return await @asyncCall(&stack_frame, {}, bar, .{});
        }

        fn bar() anyerror!void {
            global_frame = @frame();
            suspend {}
            global_int += 1;
        }
    };
    _ = async S.foo();
    resume S.global_frame;
    expect(S.global_int == 10);
}

test "async function call resolves target fn frame, runtime func" {
    const S = struct {
        var global_frame: anyframe = undefined;
        var global_int: i32 = 9;

        fn foo() anyerror!void {
            const stack_size = 1000;
            var stack_frame: [stack_size]u8 align(std.Target.stack_align) = undefined;
            var func: fn () callconv(.Async) anyerror!void = bar;
            return await @asyncCall(&stack_frame, {}, func, .{});
        }

        fn bar() anyerror!void {
            global_frame = @frame();
            suspend {}
            global_int += 1;
        }
    };
    _ = async S.foo();
    resume S.global_frame;
    expect(S.global_int == 10);
}

test "properly spill optional payload capture value" {
    const S = struct {
        var global_frame: anyframe = undefined;
        var global_int: usize = 2;

        fn foo() void {
            var opt: ?usize = 1234;
            if (opt) |x| {
                bar();
                global_int += x;
            }
        }

        fn bar() void {
            global_frame = @frame();
            suspend {}
            global_int += 1;
        }
    };
    _ = async S.foo();
    resume S.global_frame;
    expect(S.global_int == 1237);
}

test "handle defer interfering with return value spill" {
    const S = struct {
        var global_frame1: anyframe = undefined;
        var global_frame2: anyframe = undefined;
        var finished = false;
        var baz_happened = false;

        fn doTheTest() void {
            _ = async testFoo();
            resume global_frame1;
            resume global_frame2;
            expect(baz_happened);
            expect(finished);
        }

        fn testFoo() void {
            expectError(error.Bad, foo());
            finished = true;
        }

        fn foo() anyerror!void {
            defer baz();
            return bar() catch |err| return err;
        }

        fn bar() anyerror!void {
            global_frame1 = @frame();
            suspend {}
            return error.Bad;
        }

        fn baz() void {
            global_frame2 = @frame();
            suspend {}
            baz_happened = true;
        }
    };
    S.doTheTest();
}

test "take address of temporary async frame" {
    const S = struct {
        var global_frame: anyframe = undefined;
        var finished = false;

        fn doTheTest() void {
            _ = async asyncDoTheTest();
            resume global_frame;
            expect(finished);
        }

        fn asyncDoTheTest() void {
            expect(finishIt(&async foo(10)) == 1245);
            finished = true;
        }

        fn foo(arg: i32) i32 {
            global_frame = @frame();
            suspend {}
            return arg + 1234;
        }

        fn finishIt(frame: anyframe->i32) i32 {
            return (await frame) + 1;
        }
    };
    S.doTheTest();
}

test "nosuspend await" {
    const S = struct {
        var finished = false;

        fn doTheTest() void {
            var frame = async foo(false);
            expect(nosuspend await frame == 42);
            finished = true;
        }

        fn foo(want_suspend: bool) i32 {
            if (want_suspend) {
                suspend {}
            }
            return 42;
        }
    };
    S.doTheTest();
    expect(S.finished);
}

test "nosuspend on function calls" {
    const S0 = struct {
        b: i32 = 42,
    };
    const S1 = struct {
        fn c() S0 {
            return S0{};
        }
        fn d() !S0 {
            return S0{};
        }
    };
    expectEqual(@as(i32, 42), nosuspend S1.c().b);
    expectEqual(@as(i32, 42), (try nosuspend S1.d()).b);
}

test "avoid forcing frame alignment resolution implicit cast to *c_void" {
    const S = struct {
        var x: ?*c_void = null;

        fn foo() bool {
            suspend {
                x = @frame();
            }
            return true;
        }
    };
    var frame = async S.foo();
    resume @ptrCast(anyframe->bool, @alignCast(@alignOf(@Frame(S.foo)), S.x));
    expect(nosuspend await frame);
}

test "@asyncCall with pass-by-value arguments" {
    const F0: u64 = 0xbeefbeefbeefbeef;
    const F1: u64 = 0xf00df00df00df00d;
    const F2: u64 = 0xcafecafecafecafe;

    const S = struct {
        pub const ST = struct { f0: usize, f1: usize };
        pub const AT = [5]u8;

        pub fn f(_fill0: u64, s: ST, _fill1: u64, a: AT, _fill2: u64) callconv(.Async) void {
            // Check that the array and struct arguments passed by value don't
            // end up overflowing the adjacent fields in the frame structure.
            expectEqual(F0, _fill0);
            expectEqual(F1, _fill1);
            expectEqual(F2, _fill2);
        }
    };

    var buffer: [1024]u8 align(@alignOf(@Frame(S.f))) = undefined;
    // The function pointer must not be comptime-known.
    var t = S.f;
    var frame_ptr = @asyncCall(&buffer, {}, t, .{
        F0,
        .{ .f0 = 1, .f1 = 2 },
        F1,
        [_]u8{ 1, 2, 3, 4, 5 },
        F2,
    });
}

test "@asyncCall with arguments having non-standard alignment" {
    const F0: u64 = 0xbeefbeef;
    const F1: u64 = 0xf00df00df00df00d;

    const S = struct {
        pub fn f(_fill0: u32, s: struct { x: u64 align(16) }, _fill1: u64) callconv(.Async) void {
            // The compiler inserts extra alignment for s, check that the
            // generated code picks the right slot for fill1.
            expectEqual(F0, _fill0);
            expectEqual(F1, _fill1);
        }
    };

    var buffer: [1024]u8 align(@alignOf(@Frame(S.f))) = undefined;
    // The function pointer must not be comptime-known.
    var t = S.f;
    var frame_ptr = @asyncCall(&buffer, {}, t, .{ F0, undefined, F1 });
}

--------------------------------------------------------------------------------

(source_file
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (SuffixOp
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (SuffixOp
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (SuffixOp
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (INTEGER)))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments)))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp)
        (SuffixExpr
          (BuildinTypeExpr))
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (SuffixExpr
      (INTEGER)))
  (BlockExprStatement
    (BlockExpr
      (Block)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (SuffixExpr
      (INTEGER)))
  (BlockExprStatement
    (BlockExpr
      (Block)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (SuffixExpr
      (INTEGER))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (INTEGER)))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (SuffixExpr
      (IDENTIFIER)))
  (BlockExprStatement
    (BlockExpr
      (Block)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (SuffixExpr
      (IDENTIFIER))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (ContainerDecl
          (ContainerDeclType)
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER)))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList)
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER))))))
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER)))))))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList)
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (INTEGER)))
            (BlockExprStatement
              (BlockExpr
                (Block)))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments)))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (ContainerDecl
          (ContainerDeclType)
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER)))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList)
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER))))))
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER)))))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER))))))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER))))))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER))))))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER)))))))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList
              (ParamDecl
                (IDENTIFIER)
                (ParamType
                  (SuffixExpr
                    (BuildinTypeExpr))))
              (ParamDecl
                (IDENTIFIER)
                (ParamType
                  (SuffixExpr
                    (BuildinTypeExpr)))))
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (INTEGER)))
            (BlockExprStatement
              (BlockExpr
                (Block)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (IDENTIFIER)))
            (BlockExprStatement
              (BlockExpr
                (Block)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (IDENTIFIER)))
            (BlockExprStatement
              (BlockExpr
                (Block)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (IDENTIFIER)))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments)))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (ContainerDecl
          (ContainerDeclType)
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER)))
          (VarDecl
            (IDENTIFIER)
            (PrefixTypeOp
              (PtrTypeStart))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER))))
            (SuffixExpr))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList)
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER))))))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER)))))))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList)
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments))))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList)
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments)))
            (BlockExprStatement
              (BlockExpr
                (Block)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (INTEGER)))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments)))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (ContainerDecl
          (ContainerDeclType)
          (FnProto
            (IDENTIFIER)
            (ParamDeclList)
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (LabeledStatement
              (Block
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (FnProto
                          (ParamDeclList
                            (ParamDecl
                              (ParamType
                                (SuffixExpr
                                  (BuildinTypeExpr)))))
                          (CallConv
                            (SuffixExpr
                              (IDENTIFIER)))
                          (SuffixExpr
                            (BuildinTypeExpr))))
                      (SuffixExpr
                        (IDENTIFIER)))))
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (IDENTIFIER)))))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments
                      (BinaryExpr
                        (SuffixExpr
                          (IDENTIFIER))
                        (CompareOp)
                        (SuffixExpr
                          (BUILTINIDENTIFIER)
                          (FnCallArguments
                            (SuffixExpr
                              (BUILTINIDENTIFIER)
                              (FnCallArguments
                                (SuffixExpr
                                  (IDENTIFIER))))))))))))
            (LabeledStatement
              (Block
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (FnProto
                          (ParamDeclList)
                          (CallConv
                            (SuffixExpr
                              (IDENTIFIER)))
                          (SuffixExpr
                            (BuildinTypeExpr))))
                      (SuffixExpr
                        (IDENTIFIER)))))
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (IDENTIFIER)))))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments
                      (BinaryExpr
                        (SuffixExpr
                          (IDENTIFIER))
                        (CompareOp)
                        (SuffixExpr
                          (BUILTINIDENTIFIER)
                          (FnCallArguments
                            (SuffixExpr
                              (BUILTINIDENTIFIER)
                              (FnCallArguments
                                (SuffixExpr
                                  (IDENTIFIER)))))))))))))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList)
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (INTEGER))))))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList
              (ParamDecl
                (IDENTIFIER)
                (ParamType
                  (SuffixExpr
                    (BuildinTypeExpr)))))
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr))
            (BlockExprStatement
              (BlockExpr
                (Block)))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments)))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (ContainerDecl
          (ContainerDeclType)
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr)
            (SuffixExpr))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList)
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (CHAR_LITERAL)))))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (CHAR_LITERAL)))))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (IDENTIFIER))
                    (SuffixOp
                      (IDENTIFIER))
                    (FnCallArguments
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (UnaryExpr (PrefixOp)
                      (SuffixExpr
                        (IDENTIFIER)))
                    (SuffixExpr
                      (STRINGLITERAL
                        (STRINGLITERALSINGLE)))))))))
        (FnProto
          (IDENTIFIER)
          (ParamDeclList)
          (SuffixExpr
            (BuildinTypeExpr)))
        (Block
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (CHAR_LITERAL)))))
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments)))
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (CHAR_LITERAL)))))
          (AssignExpr
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER))))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (CHAR_LITERAL))))))
      (FnProto
        (IDENTIFIER)
        (ParamDeclList)
        (SuffixExpr
          (BuildinTypeExpr)))
      (Block
        (BlockExprStatement
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (CHAR_LITERAL))))))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (CHAR_LITERAL)))))
        (BlockExprStatement
          (BlockExpr
            (Block
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))
                (AssignOp)
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments))))))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (CHAR_LITERAL))))))
      (VarDecl
        (IDENTIFIER)
        (BinaryExpr
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (IDENTIFIER))))
          (SuffixExpr
            (BuildinTypeExpr))
          (InitList
            (SuffixExpr
              (CHAR_LITERAL)))
          (MultiplyOp 
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))
              (SuffixOp
                (IDENTIFIER)))))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (INTEGER)))
        (FnProto
          (IDENTIFIER)
          (ParamDeclList
            (ParamDecl
              (IDENTIFIER)
              (ParamType
                (SuffixExpr
                  (BuildinTypeExpr)))))
          (SuffixExpr
            (BuildinTypeExpr)))
        (Block
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (IDENTIFIER))))
            (AssignOp)
            (SuffixExpr
              (IDENTIFIER)))
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER))
            (AssignOp)
            (SuffixExpr
              (INTEGER)))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER)))))))(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(CallConv(SuffixExpr
  (IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(BlockExpr
  (Block
    (AssignExpr
      (SuffixExpr
        (SuffixExpr
          (IDENTIFIER))
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments))))
            (CompareOp)
            (PrefixTypeOp
              (PtrTypeStart))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER))))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments))))))(line_comment)(line_comment)(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (CompareOp)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr)
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments))))))))(AssignExpr(SuffixExpr
  (IDENTIFIER))(AssignOp)(SuffixExpr)))(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (CHAR_LITERAL)))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments)))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (CHAR_LITERAL)))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (CHAR_LITERAL)))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr))
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER)))
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))))))(FnProto(IDENTIFIER)(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (CHAR_LITERAL)))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (CHAR_LITERAL)))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (CHAR_LITERAL))))))(FnProto(IDENTIFIER)(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (CHAR_LITERAL)))))(BlockExprStatement(BlockExpr(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (CHAR_LITERAL)))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER))
  (AssignOp)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (CHAR_LITERAL)))))(AssignExpr(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(BinaryExpr(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER)))(MultiplyOp (SuffixExpr(STRINGLITERAL
  (STRINGLITERALSINGLE))(SuffixOp
  (IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (SuffixExpr
    (IDENTIFIER))))(AssignOp)(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (CHAR_LITERAL)))))(VarDecl(IDENTIFIER)(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments)))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (CHAR_LITERAL)))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (CompareOp)
      (SuffixExpr
        (INTEGER))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (SuffixOp
        (IDENTIFIER))
      (FnCallArguments
        (SuffixExpr
          (BuildinTypeExpr))
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER)))
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE))))))))))(FnProto(IDENTIFIER)(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (CHAR_LITERAL)))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (CHAR_LITERAL)))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(CHAR_LITERAL))))))(FnProto(IDENTIFIER)(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(CHAR_LITERAL)))))(AssignExpr(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(BinaryExpr(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER)))(MultiplyOp (SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp(IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr
  (BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (IDENTIFIER))))(AssignOp)(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl
  (ContainerDeclType)
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (INTEGER)))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (CallConv
      (SuffixExpr
        (IDENTIFIER)))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (INTEGER)))
    (BlockExprStatement
      (BlockExpr
        (Block)))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER)))
    (CompareOp)
    (SuffixExpr
      (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl
  (ContainerDeclType)
  (ContainerField
    (IDENTIFIER)
    (SuffixExpr
      (FnProto
        (ParamDeclList
          (ParamDecl
            (ParamType
              (PrefixTypeOp
                (PtrTypeStart))
              (SuffixExpr
                (BuildinTypeExpr)))))
        (CallConv
          (SuffixExpr
            (IDENTIFIER)))
        (SuffixExpr
          (BuildinTypeExpr))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER)))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr
  (INTEGER)))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (UnaryExpr (PrefixOp)
  (SuffixExpr
    (IDENTIFIER)))(Block)(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER)))(SuffixExpr
  (InitList
    (UnaryExpr (PrefixOp)
    (SuffixExpr
      (IDENTIFIER))))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER))))(CompareOp)(PrefixTypeOp)(SuffixExpr
  (BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER))(CompareOp)(SuffixExpr
  (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER))(CompareOp)(SuffixExpr
  (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER))(CompareOp)(SuffixExpr
  (INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(INTEGER)))(BlockExprStatement(BlockExpr(Block))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(FnProto
  (ParamDeclList)
  (CallConv
    (SuffixExpr
      (IDENTIFIER)))
  (SuffixExpr
    (BuildinTypeExpr)))))(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(CallConv(SuffixExpr
  (IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr
  (IDENTIFIER))(AssignOp)(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments)))(BlockExprStatement(BlockExpr
  (Block)))(AssignExpr(SuffixExpr
  (INTEGER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(InitList)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (INTEGER))))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (IDENTIFIER))))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)))))
  (SuffixOp
    (IDENTIFIER))
  (SuffixOp
    (IDENTIFIER))
  (SuffixOp)))(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER))
  (SuffixOp
    (IDENTIFIER))
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (SuffixExpr
          (INTEGER))))))(UnaryExpr (PrefixOp)(SuffixExpr
  (IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList)))))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(GroupedExpr(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))))(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(SuffixExpr)))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(BinaryExpr(BitwiseOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp)(SuffixExpr(GroupedExpr(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(GroupedExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(BitwiseOp(Payload(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER))))))(IfStatement(IfPrefix(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))(PtrPayload(IDENTIFIER)))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(SwitchExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SwitchProngList(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER)))(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(STRINGLITERAL
  (STRINGLITERALSINGLE)))))))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER)))(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(Block))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(INTEGER)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))))))(BlockExprStatement(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))))))(AssignExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(INTEGER))(CompareOp)(SuffixExpr(IDENTIFIER))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(INTEGER))(CompareOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(INTEGER))(CompareOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(INTEGER))(CompareOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(INTEGER))(CompareOp)(SuffixExpr(IDENTIFIER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(IDENTIFIER)))(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(AssignExpr(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(BlockExprStatement(AssignExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)(FnCallArguments)))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr)))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(FnCallArguments))))(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(LabeledStatement(LoopStatement(ForStatement(ForPrefix(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr)(SuffixExpr))(PtrIndexPayload(IDENTIFIER)))(BlockExpr(Block(LabeledStatement(LoopStatement(ForStatement(ForPrefix(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr)(SuffixExpr))(PtrIndexPayload(IDENTIFIER)))(BlockExpr(Block(LabeledStatement(LoopStatement(ForStatement(ForPrefix(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr)(SuffixExpr))(PtrIndexPayload(IDENTIFIER)))(BlockExpr(Block(LabeledStatement(LoopStatement(ForStatement
  (ForPrefix
    (PrefixTypeOp
      (ArrayTypeStart
        (SuffixExpr
          (IDENTIFIER))))
    (SuffixExpr
      (BuildinTypeExpr))
    (InitList
      (SuffixExpr)
      (SuffixExpr))
    (PtrIndexPayload
      (IDENTIFIER)))
  (BlockExpr
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))
            (SuffixExpr
              (IDENTIFIER))
            (SuffixExpr
              (IDENTIFIER))
            (SuffixExpr
              (IDENTIFIER))))
        (AssignOp
          (MISSING "="))
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments)))))))))))))))))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))))))(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER)(FnCallArguments))(PtrPayload(IDENTIFIER)))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))))(Payload(IDENTIFIER))(SwitchExpr(SuffixExpr(IDENTIFIER))(SwitchProngList(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))))(SwitchProng(SwitchCase)(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))(VarDecl(IDENTIFIER)(SuffixExpr))(BlockExprStatement(AssignExpr(IfExpr(IfPrefix(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(Block(AssignExpr(BinaryExpr(BinaryExpr(SuffixExpr(IfTypeExpr(IfPrefix(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(PtrPayload(IDENTIFIER)))(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))))(ERROR)(BitwiseOp)(SuffixExpr(IDENTIFIER)))(BitwiseOp)(Block)))(ERROR)(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))(VarDecl(IDENTIFIER)(SuffixExpr))(BlockExprStatement(AssignExpr(IfExpr(IfPrefix(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(Block(AssignExpr(BinaryExpr(BinaryExpr(SuffixExpr(IfTypeExpr(IfPrefix(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(PtrPayload(IDENTIFIER)))(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))))(ERROR)(BitwiseOp)(SuffixExpr(IDENTIFIER)))(BitwiseOp)(Block)))(ERROR)(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(BlockExprStatement(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(BlockExprStatement(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(SuffixExpr(IDENTIFIER))))))))))(MISSING ";"))(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(AssignExpr(SuffixExpr(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER)(ERROR)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(MISSING "}")))(BlockExprStatement(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))))))(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))))))))(AssignExpr(IfExpr(IfPrefix(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER))))))(MISSING ";"))(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(AssignExpr(SuffixExpr(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER)(ERROR)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(MISSING "}")))(BlockExprStatement(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))))))(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))))))))(AssignExpr(IfExpr(IfPrefix(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(MultiplyOp (SuffixExpr(INTEGER)))(CompareOp)(SuffixExpr(INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(IDENTIFIER)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER)))(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(IfExpr(IfPrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(FnProto(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList)))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr)))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(AssignExpr(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(FnProto(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr)))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(AssignExpr(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr)))(BitwiseOp(MISSING "|"))(SuffixExpr(IDENTIFIER)(FnCallArguments)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr)))(BitwiseOp(MISSING "|"))(SuffixExpr(IDENTIFIER)(FnCallArguments)))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(ErrorSetDecl(IdentifierList(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(IfExpr(IfPrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER))))(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))))))))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))))))(BlockExprStatement(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))))))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))))))(BlockExprStatement(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(SuffixExpr))(BlockExprStatement(AssignExpr(IfExpr(IfPrefix(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(SuffixExpr))(BlockExprStatement(AssignExpr(IfExpr(IfPrefix(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(UnaryExpr (PrefixOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(UnaryExpr (PrefixOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)))))(LabeledStatement(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER))))(BitwiseOp)(SuffixExpr)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(BinaryExpr(SuffixExpr(GroupedExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(BitwiseOp)(SuffixExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(SuffixOp)))(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList)))))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(INTEGER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(InitList)))))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(INTEGER)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(INTEGER))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(FnProto(ParamDeclList(ParamDecl(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(Block)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(InitList(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType)))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))))(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))))))(AssignExpr(SuffixExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType)))(SuffixExpr(BuildinTypeExpr)))(Block(IfStatement(IfPrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr))(AssignExpr))))(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))))(AssignExpr(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(Block)(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER)))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType)))(SuffixExpr(IDENTIFIER)))(Block(IfStatement(IfPrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER))))))))(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))))(AssignExpr(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(Block)(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))))))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(InitList(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(ERROR)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(IfStatement(IfPrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))(BlockExpr(Block(BlockExprStatement(BlockExpr(Block))))))(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(BinaryExpr(SuffixExpr(GroupedExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(AdditionOp)(SuffixExpr(GroupedExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))(AdditionOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))(AdditionOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(PrefixTypeOp)(SuffixExpr)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(LoopExpr(WhileExpr(WhilePrefix(SuffixExpr(IDENTIFIER))(PtrPayload(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(ForStatement(ForPrefix(SuffixExpr(IDENTIFIER))(PtrIndexPayload(IDENTIFIER)))(BlockExpr(Block(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(PrefixTypeOp)(SuffixExpr)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(LoopExpr(WhileExpr(WhilePrefix(SuffixExpr(IDENTIFIER))(PtrPayload(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr)))(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(SuffixExpr(IDENTIFIER))(PtrPayload(IDENTIFIER)))(BlockExpr(Block(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))))))))(AssignExpr(SuffixExpr(INTEGER))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr)))(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(SuffixExpr(IDENTIFIER))(PtrPayload(IDENTIFIER)))(BlockExpr(Block(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER)))))(Payload(IDENTIFIER))(LabeledStatement(Block(AssignExpr(SuffixExpr(INTEGER))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(GroupedExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))(BitwiseOp)(SuffixExpr))))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(AssignExpr(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(CompareOp)(SuffixExpr(INTEGER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(ForStatement(ForPrefix(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(PtrIndexPayload(IDENTIFIER)))(BlockExpr(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(CompareOp)(SuffixExpr(INTEGER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(ForStatement(ForPrefix(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(PtrIndexPayload(IDENTIFIER)))(BlockExpr(Block(line_comment)(line_comment)(line_comment)(VarDecl(IDENTIFIER)(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)))(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))))(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList)))))(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))))(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList)))))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(AssignExpr(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(InitList))))(BitwiseOp)(SuffixExpr))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType)))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(InitList(SuffixExpr(IDENTIFIER))))))(BitwiseOp)(SuffixExpr))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType)))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))))(SuffixExpr))(AssignExpr(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(Block)(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(FnProto(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(AssignExpr(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(Block)(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER))(PtrPayload(IDENTIFIER)))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)(FnCallArguments)))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr)))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))))(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))(BitwiseOp(Payload(IDENTIFIER)))(SuffixExpr(IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER)))))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr)))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(BlockExprStatement(BlockExpr(Block)))(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER)))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(GroupedExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(AdditionOp)(SuffixExpr(INTEGER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(ERROR)(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr)))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(BlockExprStatement(BlockExpr(Block))))))(AssignExpr(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(InitList)))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(InitList))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(ERROR)(SuffixOp(IDENTIFIER))(FnCallArguments)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(GroupedExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(ERROR)(SuffixOp(IDENTIFIER))(FnCallArguments))))(SuffixOp(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(AssignExpr(SuffixExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(ERROR))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(line_comment)(line_comment)(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(SuffixExpr))(line_comment)(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(Block)(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(SuffixExpr(IDENTIFIER))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))(SuffixExpr(IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER))))))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(line_comment)(line_comment)(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(SuffixExpr))(line_comment)(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(Block)(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList(SuffixExpr(IDENTIFIER))(SuffixExpr)(SuffixExpr(IDENTIFIER))))))))))
