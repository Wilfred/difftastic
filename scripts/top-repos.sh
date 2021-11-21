#!/bin/bash

set -e

parser_dir="$(pwd)"
known_failures="$parser_dir/script-data/known_failures.txt"
if [ -z "$1" ]; then
  repos=$(cat $parser_dir/script-data/top-repositories.txt)
  echo "Running on all top repositories."
else
  repos=$(sed "$1q;d" $parser_dir/script-data/top-repositories.txt)
  echo "Running on single repository $repos."
fi

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

    echo "Cloned repository into $(pwd)/$repo"
  fi
}

# Function to validate that a passed-in git repository can be parsed using this parser.
#
# If the passed-in repository fails to parse in ways that do not match the `known_failures` script
# data, this prints info about the failure and exits the script with a nonzero status code.
function validate() {
  repo=$1; url=$2; tag=$3; part=$4; total=$5

  if [ -z "$part" ] || [ -z "$total" ]; then
    part=0
    total=1
  fi

  data_dir=$tmpdir/.$repo-data-$part
  mkdir -p $data_dir || true

  # Find the start and end of this section based on the passed-in `part` and `total`.
  all_files=$data_dir/all_files.txt
  find "$tmpdir/$repo" -name *.swift -not -path '*/Pods/*' > $all_files
  file_count=$(wc -l < $all_files | tr -d ' ')

  one_past_the_end=$((file_count + 1))
  start=$(($((one_past_the_end * part)) / total))
  next_part=$((part + 1))
  next_start=$(($((one_past_the_end * next_part)) / total))
  end=$((next_start - 1))
  len=$((end - start))

  failed_files=$(
    IFS=$'\n'
    for file in $(head -$end < $all_files | tail -$len); do
       npx tree-sitter parse -q "$file" 2>/dev/null
    done | { grep -v -f "$known_failures" || true; }
    unset IFS
  )

  if [[ "$failed_files" = *[![:space:]]* ]]; then
    echo -en "Unexpected parse failure found in $repo "
    if [ -z $4 ]; then
        echo ":"
    else
        echo "block $start-$end:"
    fi

    cat <<<"$failed_files"

    exit 1
  elif [ -z $4 ]; then
    echo "Parsed $repo successfully!"
  else
    echo "Parsed $repo files $start-$end of $file_count successfully!"
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
    cd $tmpdir
    checkout $line
    cd $parser_dir
    validate $line &
    pids+=($!)
done <<<"$repos"

for pid in "${pids[@]}" ; do
    wait $pid
done
