default:
    @just --list

doc:
    cd manual && mdbook serve --open

compare:
    sample_files/compare_all.sh

release:
    #!/bin/bash

    set -ex

    VERSION=$(cargo metadata --format-version=1 | jq -r '.packages | .[] | select(.name == "difftastic") | .version')
    git tag $VERSION
    git push --tags

    cargo set-version --bump minor

rel_notes:
    #!/bin/bash

    echo -e "Difftastic is a structural diff tool that understands syntax. See [the manual](https://difftastic.wilfred.me.uk/) to get started, and [the changelog](https://github.com/Wilfred/difftastic/blob/master/CHANGELOG.md) for historical changes.\n"

    rg --max-count 1 -B 9999 "released " CHANGELOG.md | tail -n +3 | head -n -2
