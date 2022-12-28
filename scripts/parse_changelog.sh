#!/bin/bash

echo -e "Difftastic is a structural diff tool that understands syntax. See [the manual](https://difftastic.wilfred.me.uk/) to get started, and [the changelog](https://github.com/Wilfred/difftastic/blob/master/CHANGELOG.md) for historical changes.\n"

rg --max-count 1 -B 9999 "released " CHANGELOG.md | tail -n +3 | head -n -2
