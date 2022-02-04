#!/bin/bash

set -e

parser_dir="$(pwd)"

. $parser_dir/scripts/common.sh

function update() {
    repo=$1
    cd $tmpdir/$repo

    git config remote.origin.fetch "+refs/heads/*:refs/remotes/origin/*"
    git fetch origin --unshallow 2>/dev/null || git fetch origin
    remote_head_commit=$(git ls-remote | grep HEAD | awk '{ print $1 }')
    # Find the oldest branch that contains the remote HEAD commit, which will correspond to the remote HEAD branch (i.e.
    # what's sometimes called `main` or `master`. Other branches may be newer than this one if they are a fast-forward
    # of `main`, but it's not possible for an _older_ branch to have the commit unless it's literally equivalent. If it
    # is equivalent, it doesn't matter.
    remote_head_branch=$(git branch -r --contains $remote_head_commit --sort=-committerdate | tac | head -1)

    # Figure out which branch the passed-in tag was tracking. We prefer the main branch, if possible, but can fall back
    # to another if needed.
    if git branch -r --contains HEAD | grep -q $remote_head_branch; then
        # Our tag was on `main` (or equivalent), so use that branch directly.
        branch=$remote_head_branch
    else
        # Our tag was not on `main`, so use the newest branch that it _was_ on.
        branch=$(git branch -r --contains HEAD --sort=-committerdate | head -1)
    fi

    # Find the latest tag on this branch, and print it along with the other fields that we were given.
    new_tag=$(git describe --tags $branch | sed 's/\(.*\)-.*-.*/\1/')
    echo $1 $2 $new_tag $4 $5
}

while read line ; do
    cd $tmpdir
    checkout $line
    update $line
done < $top_repositories > $top_repositories.new

mv $top_repositories.new $top_repositories

# If the repository is now dirty, we have new versions available. Commit them and publish a PR.
cd $parser_dir
if ! git diff --quiet; then
    git config --local user.email alex.pinkus@gmail.com
    git config --local user.name "Alex Pinkus (Bot)"
    git add ./script-data
    git commit -m "Updating top repository version"
    branch_name=repo-update-$(date +%Y-%m-%d)
    git checkout -b $branch_name
    echo "Creating pull request..."
    gh auth setup-git
    git remote add dest "https://$GITHUB_ACTOR:$GITHUB_TOKEN@github.com/$GITHUB_REPOSITORY.git"
    git push dest HEAD:$branch_name
    git fetch origin
    gh pr create --fill
    echo "Pull request created!"
else
    echo "No repositories have been updated, so there's nothing more to do!"
fi
