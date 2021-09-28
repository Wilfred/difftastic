#!/bin/bash

set -e

cd "$(dirname "$0")/.."

print_usage_and_exit() {
  echo "Usage: $0 <github-repo>"
  echo ""
  echo "Clones the given repository and runs the parser against all Elixir files"
  echo ""
  echo "## Examples"
  echo ""
  echo "  $0 elixir-lang/elixir"
  echo ""
  exit 1
}

if [ $# -ne 1 ]; then
  print_usage_and_exit
fi

gh_repo="$1"

dir="tmp/gh/${gh_repo//[\/-]/_}"

if [[ ! -d "$dir" ]]; then
  mkdir -p "$(dirname "$dir")"
  git clone "https://github.com/$gh_repo.git" "$dir"
fi

echo "Running parser against $gh_repo"

npx tree-sitter parse --quiet --stat "$dir/**/*.ex*"
