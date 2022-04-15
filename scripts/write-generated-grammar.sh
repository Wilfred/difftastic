#!/bin/bash

set -e

ref=$1
branch_name=with-generated-files

# Load the branch that contains generated grammar files.
git checkout $branch_name

# Update our local directory to match the $ref, but then put the HEAD back at the previous commit.
# This will blow away the existing generated grammar. That's OK because this branch is only ever
# updated using this script.
git reset $ref --hard
git reset HEAD@{1}

# Now generate the grammar and validate that it works. Hopefully no one ever creates a tag to a
# commit with a non-working grammar, but the `npm test` protects us against that ever happening.
npm install
npm run test-ci

# Commit specific generated files, attributing the changes to the primary maintainer of this
# grammar. Notably, we do not commit the `.o` files generated during the build, just the source.
git config --local user.email alex.pinkus@gmail.com
git config --local user.name "Alex Pinkus (Bot)"
git add ./src/*.c --force
git add ./src/tree_sitter/* --force
git add ./src/*.json --force
git add grammar.js
git add package.json
git add corpus
git add queries
git commit -m "Updating grammar files for version ${ref/refs\/tags\//}"
echo "Committing new generated grammar"

# Push the change to github using the secrets from our environment.
gh auth setup-git
git remote add dest "https://$GITHUB_ACTOR:$GITHUB_TOKEN@github.com/$GITHUB_REPOSITORY.git"
git push dest HEAD:$branch_name
echo "Checkin complete!"
