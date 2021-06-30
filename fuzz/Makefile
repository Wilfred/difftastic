FUZZFLAGS=-fsanitize=fuzzer,address,undefined

JOBS=4
WORKERS=4

.PHONY: fuzz
fuzz: fuzzer hcl.dict
	UBSAN="print_stacktrace=1:halt_on_error=1:symbolize=1"  ASAN_OPTIONS="quarantine_size_mb=10:detect_leaks=1:symbolize=1" ./fuzzer -jobs=${JOBS} -workers=${WORKERS} -dict=hcl.dict corpus/

.PHONY: clean
clean:
	rm -rf tree-sitter
	rm fuzzer parser.o scanner.o libtree-sitter.a

fuzzer: parser.o scanner.o libtree-sitter.a
	clang++ -o fuzzer ${FUZZFLAGS} -std=c++11 tree-sitter/test/fuzz/fuzzer.cc -Itree-sitter/lib scanner.o parser.o libtree-sitter.a

scanner.o: ../src/scanner.cc
	clang++ -o scanner.o ${FUZZFLAGS} -std=c++11 -I../src -c ../src/scanner.cc

parser.o: ../src/parser.c
	clang -o parser.o ${FUZZFLAGS} -std=c99 -I../src -c ../src/parser.c

hcl.dict:
	tree-sitter/scripts

libtree-sitter.a:
	make -C tree-sitter
	cp tree-sitter/libtree-sitter.a .

