#!/bin/bash

set -ex

VERSION=$(cargo metadata --format-version=1 | jq -r '.packages | .[] | select(.name == "difftastic") | .version')
git tag $VERSION
git push --tags
