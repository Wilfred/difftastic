default:
    @just --list

# Build and serve the manual.
doc:
    cd manual && mdbook serve --open

# Run the output regression test.
compare:
    sample_files/compare_all.sh

# Create a git tag and push it, to trigger a release on GitHub actions.
release:
    #!/bin/bash

    set -ex

    VERSION=$(cargo metadata --format-version=1 | jq -r '.packages | .[] | select(.name == "difftastic") | .version')
    git tag $VERSION
    git push --tags

    cargo set-version --bump minor

# Serve the homepage locally.
home:
    echo "http://localhost:8080"
    cd homepage && python -m http.server 8080

# Generate release notes for the currently unreleased version.
rel_notes:
    #!/bin/bash

    echo -e "Difftastic is a structural diff tool that understands syntax. See [the manual](https://difftastic.wilfred.me.uk/) to get started, and [the changelog](https://github.com/Wilfred/difftastic/blob/master/CHANGELOG.md) for historical changes.\n"

    rg --max-count 1 -B 9999 "released " CHANGELOG.md | tail -n +3 | head -n -2 | awk 'BEGIN{RS="\n\n"; ORS="\n\n"} {gsub(/\n/, " "); print}'

# Regenerate the man page difft.1 from diff.1.md.
man:
    pandoc --standalone --to man difft.1.md -o difft.1
