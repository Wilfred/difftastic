#!/bin/bash

set -ex

cargo publish
VERSION=$(cargo metadata | jq -r '.packages | .[] | select(.name == "difftastic") | .version')
git tag $VERSION
git push --tags
