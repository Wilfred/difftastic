#!/bin/bash

set -e

parser_dir="$(pwd)"
known_failures="$parser_dir/script-data/known_failures.txt"

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
    git clone --branch $tag --depth 1 "https://github.com/$url" "$repo"
  fi

  echo "Cloned repository into $(pwd)/$repo"
}

# Function to validate that a passed-in git repository can be parsed using this parser.
#
# If the passed-in repository fails to parse in ways that do not match the `known_failures` script
# data, this prints info about the failure and exits the script with a nonzero status code.
function validate() {
  repo=$1; url=$2; tag=$3

  cd $tmpdir
  checkout $repo $url $tag
  cd $parser_dir

  all_files=$(find "$tmpdir/$repo" -name *.swift -not -path '*/Pods/*')
  failed_files=$(
    IFS=$'\n'
    for file in $all_files; do
       npx tree-sitter parse -q "$file" 2>/dev/null
    done | { grep -v -f "$known_failures" || true; }
    unset IFS
  )

  if [[ "$failed_files" = *[![:space:]]* ]]; then
    echo "Unexpected parse failure found in $repo:"
    cat <<<"$failed_files"
    exit 1
  fi
}

# It's really easy to add a blank line to `known_failures.txt`, which will make everything pass.
# This echoes some string from random.org to prove that the grp isn't excluding everything. If we
# added a blank line, this would have zero items, which results in a nonzero exit code from grep.
if ! echo "vkDSrg8n" | grep -v -f "$known_failures" > /dev/null; then
  echo "You added a blank line to known_failures!"
  exit 1
fi

# Run `validate` on every repository in `top-repositories` sequentially.
while read line ; do
    validate $line
done < $parser_dir/script-data/top-repositories.txt
