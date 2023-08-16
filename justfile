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
