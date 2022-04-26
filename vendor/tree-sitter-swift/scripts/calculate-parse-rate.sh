#!/bin/bash

set -e

parser_dir="$(pwd)"

. $parser_dir/scripts/common.sh

# Check out every repository to figure out how many files they contain.
cd $tmpdir
while read line ; do
    checkout $line
done < $top_repositories

file_count=$(find "$tmpdir" -name *.swift -not -path '*/Pods/*' | wc -l)
error_count=$(wc -l < $known_failures)

# Now, since we can assume that the "top-repos" workflow ran, our parse rate is the number of
# successful files over the number of total files. Pretty print that to two decimal places.
printf '%.2f%%\n' $(bc -l <<< "($file_count - $error_count) / $file_count * 100")
