#!/bin/bash

set -ex

VERSION=$(cargo metadata | jq -r '.packages | .[] | select(.name == "difftastic") | .version')
git tag $VERSION
git push --tags
