tree-sitter-bash
================

[![Build Status](https://travis-ci.org/tree-sitter/tree-sitter-bash.svg?branch=master)](https://travis-ci.org/tree-sitter/tree-sitter-bash)
[![Build status](https://ci.appveyor.com/api/projects/status/9mbap95nldligssx/branch/master?svg=true)](https://ci.appveyor.com/project/maxbrunsfeld/tree-sitter-bash/branch/master)

Bash grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

### Development

Install the dependencies:

    npm install

Build and run the tests:

    npm run build
    npm run test

Run the build and tests in watch mode:

    npm run test:watch

#### References

* [Bash man page](http://man7.org/linux/man-pages/man1/bash.1.html#SHELL_GRAMMAR)
* [Shell command language specification](http://pubs.opengroup.org/onlinepubs/9699919799/utilities/V3_chap02.html)
* [mvdnan/sh - a shell parser in go](https://github.com/mvdan/sh)
