# fuzz test

The directory contains the scripts that test the implementation to avoid the problem that a symbol is parsed as a number or vice versa.

## Resource

* ~6 minutes to run
* ~300M generated files

## Run

```shell
$ cd fuzztest
# 30s
$ racket gen_cases.rkt
cpu time: 26531 real time: 26835 gc time: 1069
5114173 cases generated
$ cd ..
$ tree-sitter generate
# 3 minutes
$ tree-sitter parse fuzztest/case.txt > fuzztest/res1.txt
# 2 minutes
$ cd fuzztest && racket postprocess.rkt
# should show nothing
$ sdiff -s <(cat -n expect.txt) <(cat -n res.txt)

# If there is some error, run
$ sdiff -s <(cat -n expect.txt) <(cat -n res.txt) | less
# then get the first error case at `N`-th line
$ cat case.txt | sed -n 'Np'
```

You can edit `gen_cases.rkt` to generate less cases during development.

