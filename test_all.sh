#!/bin/bash
dart tester/test.dart $1

## USAGE
# ./test_all.sh ~/flutter
# Or whatever directory you want to find all errors in
# Edit test.dart to change how many error lines it prints
# Default maximum is 100 lines, so you don't get endless errors printing out