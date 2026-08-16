#!/usr/bin/env bash
cd /tmp/claude-0/-home-user-difftastic/1e10d51a-1c4e-5c16-a5ab-3367f464188c/scratchpad
export GIT_EXTERNAL_DIFF=$PWD/difft_wrapper.sh
run_repo() {
  local name="$1"
  REPO_NAME="$name" git -C "repos/$name" log -p --ext-diff --no-merges >/dev/null 2>&1
  echo "FINISHED $name"
}
export -f run_repo
export GIT_EXTERNAL_DIFF
# Run up to 4 repos concurrently
printf '%s\n' redis bat flask gin express TypeScript jekyll gson json symfony \
  | xargs -P 4 -I{} bash -c 'run_repo "$@"' _ {}
echo "ALL REPOS DONE"
echo "=== CRASH SUMMARY ==="
cat crashes/crashlog.txt 2>/dev/null | sort | uniq -c | sort -rn || echo "NO CRASHES"
