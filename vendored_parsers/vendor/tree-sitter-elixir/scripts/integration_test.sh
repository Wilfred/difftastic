#!/bin/bash

set -e

cd "$(dirname "$0")/.."

print_usage_and_exit() {
  echo "Usage: $0"
  echo ""
  echo "Runs the parser against a predefined list of popular Elixir repositories"
  echo ""
  exit 1
}

if [ $# -ne 0 ]; then
  print_usage_and_exit
fi

repos="elixir-lang/elixir elixir-lang/ex_doc elixir-plug/plug elixir-ecto/ecto dashbitco/broadway elixir-nx/nx elixir-nx/axon livebook-dev/livebook"

for repo in $repos; do
  ./scripts/parse_repo.sh $repo
done
