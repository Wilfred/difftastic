#!/usr/bin/env bash

# Is echo necessary?
nullglob="$(echo "$(shopt -p nullglob)")"
globstar="$(echo "$(shopt -p globstar)")"

shopt -s nullglob
shopt -s globstar

function cleanup() {
  $nullglob
  $globstar

  unset -f cleanup
  unset nullglob
  unset globstar
}

trap cleanup EXIT
