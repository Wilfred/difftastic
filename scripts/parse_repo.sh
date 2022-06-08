#! /usr/bin/env bash

set -e

cd "$(dirname "$0")/.."

usage() {
  echo "$0 owner/repository"
  echo ""
  echo "Runs the parser against Gleam files in a GitHub repository"
  echo ""
  exit 1
}

if [ $# -ne 1 ]; then
  usage
fi

gh_repo="$1"
dir="test/integration/${gh_repo//[\/-]/_}"

if [[ ! -d "$dir" ]]; then
  mkdir -p "$(dirname "$dir")"
  git clone --depth 1 "https://github.com/$gh_repo.git" "$dir"
fi

echo "Running parser against $gh_repo"

npx tree-sitter parse --quiet --stat "$dir/**/*.gleam"
