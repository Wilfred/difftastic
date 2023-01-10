#!/bin/bash

set -e

known_failures="$parser_dir/script-data/known_failures.txt"
top_repositories="$parser_dir/script-data/top-repositories.txt"

# Run all this logic in a temporary directory that we delete on exit
tmpdir="$(mktemp -d -t top-10-XXXXXX)"
trap 'rm -rf "$tmpdir"' EXIT

# Function to check out a git repository at a given tag.
#
# We use tags so that the source code is deterministic - tags are immutable and reasonable people
# don't delete and recreate them. The tree-sitter-python script this is based on uses raw SHA hashes
# for this, but that would require us to checkout the code at HEAD first and switch to the code at
# the given hash. Using tags means we can do this in one command and include `--depth 1` to reduce
# the number of extra objects we have to fetch.
function checkout() {
  repo=$1; url=$2; tag=$3

  if [ ! -d "$repo" ]; then
    git clone --quiet --branch $tag --depth 1 "https://github.com/$url" "$repo" >/dev/null 2>/dev/null
  fi
}


# Locates all the swift source code files that exist in the source tree under the passed-in
# directory.
#
# Does not include code that gets included from dependencies of this repository, to avoid
# overcounting those files.
function swift_files_under() {
    find "$1" -name *.swift -not -path '*/Pods/*'
}
