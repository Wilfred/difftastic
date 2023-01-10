#! /usr/bin/env bash

set -e

cd "$(dirname "$0")/.."

usage() {
  echo "$0"
  echo ""
  echo "Tests that the parser does not create error nodes"
  echo "when tested against real Gleam repos"
  echo ""
  exit 1
}

if [ $# -ne 0 ]; then
  usage
fi

repos="gleam-lang/stdlib gleam-lang/json gleam-lang/http gleam-lang/example-todomvc gleam-lang/bitwise gleam-lang/erlang gleam-lang/otp gleam-lang/cowboy gleam-lang/hackney gleam-lang/httpc gleam-lang/elli gleam-lang/javascript gleam-lang/example-echo-server gleam-lang/plug"

for repo in $repos; do
  ./scripts/parse_repo.sh $repo
done
