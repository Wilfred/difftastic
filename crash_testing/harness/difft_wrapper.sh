#!/usr/bin/env bash
# GIT_EXTERNAL_DIFF wrapper forwarding all 7 args so difft does path-based language detection.
# Git calls: path old-file old-hex old-mode new-file new-hex new-mode
DIFFT=/home/user/difftastic/target/release/difft
CRASHDIR=/tmp/claude-0/-home-user-difftastic/1e10d51a-1c4e-5c16-a5ab-3367f464188c/scratchpad/crashes
path="$1"; old="$2"; new="$5"
export DFT_GRAPH_LIMIT=${DFT_GRAPH_LIMIT:-1000000}
ERR=$(mktemp)
timeout 90 "$DIFFT" --color never "$@" >/dev/null 2>"$ERR"
code=$?
if [ $code -ge 101 ] && [ $code -ne 124 ]; then
  ts=$(cat /proc/sys/kernel/random/uuid 2>/dev/null || echo $$_$RANDOM)
  mkdir -p "$CRASHDIR/$ts"
  cp "$old" "$CRASHDIR/$ts/old" 2>/dev/null
  cp "$new" "$CRASHDIR/$ts/new" 2>/dev/null
  echo "path=$path code=$code repo=$REPO_NAME" > "$CRASHDIR/$ts/info.txt"
  head -50 "$ERR" >> "$CRASHDIR/$ts/info.txt"
  echo "CRASH code=$code repo=$REPO_NAME path=$path dir=$ts" >> "$CRASHDIR/crashlog.txt"
fi
rm -f "$ERR"
exit 0
