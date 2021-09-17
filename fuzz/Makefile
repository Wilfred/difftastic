FUZZFLAGS=-fsanitize=fuzzer,address,undefined

WORKERS=4

.PHONY: fuzz
fuzz: fuzzer hcl.dict
	UBSAN="print_stacktrace=1:halt_on_error=1:symbolize=1"  ASAN_OPTIONS="quarantine_size_mb=10:detect_leaks=1:symbolize=1" ./fuzzer -workers=${WORKERS} -dict=hcl.dict corpus/

.PHONY: clean
clean:
	rm -f fuzzer parser.o scanner.o libtree-sitter.a *.log

fuzzer: parser.o scanner.o libtree-sitter.a
	clang++ -o fuzzer ${FUZZFLAGS} -std=c++11 fuzzer.cc -Itree-sitter/lib/include scanner.o parser.o libtree-sitter.a

scanner.o: ../src/scanner.cc
	clang++ -o scanner.o ${FUZZFLAGS} -std=c++11 -I../src -c ../src/scanner.cc

parser.o: ../src/parser.c
	clang -o parser.o ${FUZZFLAGS} -std=c99 -I../src -c ../src/parser.c

hcl.dict: ../grammar.js
	python gen-dict.py ../src/grammar.json > hcl.dict
	echo '"$${"' >> hcl.dict
	echo '"%{"' >> hcl.dict

libtree-sitter.a:
	make -C tree-sitter
	cp tree-sitter/libtree-sitter.a .

