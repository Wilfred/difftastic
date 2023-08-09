import 'dart:ffi';
import 'dart:io';

final DynamicLibrary stdlib = Platform.isWindows
    ? DynamicLibrary.open('ole32.dll')
    : DynamicLibrary.process();
typedef PosixFreeNative = NativeFunction<Void Function(Pointer)>;
final posixFree = stdlib.lookup<PosixFreeNative>('free');

typedef WinCoTaskMemFreeNative = NativeFunction<Void Function(Pointer pv)>;
final winCoTaskMemFree = stdlib.lookup<WinCoTaskMemFreeNative>('CoTaskMemFree');
final free = Platform.isWindows ? winCoTaskMemFree : posixFree;
