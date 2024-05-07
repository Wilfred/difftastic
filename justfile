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

home:
    echo "http://localhost:8080"
    cd homepage && python -m http.server 8080

rel_notes:
    #!/bin/bash

    echo -e "Difftastic is a structural diff tool that understands syntax. See [the manual](https://difftastic.wilfred.me.uk/) to get started, and [the changelog](https://github.com/Wilfred/difftastic/blob/master/CHANGELOG.md) for historical changes.\n"

    rg --max-count 1 -B 9999 "released " CHANGELOG.md | tail -n +3 | head -n -2

man:
    pandoc --standalone --to man difft.1.md -o difft.1
