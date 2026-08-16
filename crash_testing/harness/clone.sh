#!/usr/bin/env bash
cd /tmp/claude-0/-home-user-difftastic/1e10d51a-1c4e-5c16-a5ab-3367f464188c/scratchpad/repos
declare -A repos=(
  [redis]="https://github.com/redis/redis"
  [bat]="https://github.com/sharkdp/bat"
  [flask]="https://github.com/pallets/flask"
  [gin]="https://github.com/gin-gonic/gin"
  [express]="https://github.com/expressjs/express"
  [TypeScript]="https://github.com/microsoft/TypeScript"
  [jekyll]="https://github.com/jekyll/jekyll"
  [gson]="https://github.com/google/gson"
  [json]="https://github.com/nlohmann/json"
  [symfony]="https://github.com/symfony/symfony"
)
for name in "${!repos[@]}"; do
  if [ -d "$name/.git" ]; then echo "SKIP $name (exists)"; continue; fi
  echo "=== cloning $name ==="
  git clone --depth 150 --quiet "${repos[$name]}" "$name" && echo "DONE $name" || echo "FAIL $name"
done
echo "ALL CLONES FINISHED"
du -sh /tmp/claude-0/-home-user-difftastic/1e10d51a-1c4e-5c16-a5ab-3367f464188c/scratchpad/repos
