# Fuzzing tree-sitter

The tree-sitter fuzzing support requires 1) the `libFuzzer` runtime library and 2) a recent version of clang

```
sudo apt-get install clang-12 libfuzzer-12-dev
```

The fuzzers can then be built with:

```
LIB_FUZZER_PATH=/usr/lib/llvm-12/lib/libFuzzer.a \
  ./scripts/build-fuzzer
```

This will generate a separate fuzzer for each grammar defined in `test/fixtures/grammars` and will be instrumented with [AddressSanitizer](https://clang.llvm.org/docs/AddressSanitizer.html) and [UndefinedBehaviorSanitizer](https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html). Individual fuzzers can be built with, for example, `./script/build-fuzzers python ruby`.

The `run-fuzzer` script handles running an individual fuzzer with a sensible default set of arguments:
```
./scripts/run-fuzzer (halt|recover) <extra libFuzzer arguments...>
```

which will log information to stdout. Failing testcases and a fuzz corpus will be saved to `fuzz-results/<grammar-name>`. The most important extra `libFuzzer` options are `-jobs` and `-workers` which allow parallel fuzzing. This is can done with, e.g.:
```
./scripts/run-fuzzer halt -jobs=8 -workers=8
```

The testcase can be used to reproduce the crash by running:
```
./scripts/reproduce (halt|recover) <path-to-testcase>
```
