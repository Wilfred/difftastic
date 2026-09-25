function describe_repo --argument-names repo
    set -l branch (git -C $repo branch --show-current)
    set -l remote (git -C $repo remote get-url origin)

    if test -n "$branch"
        printf "%s:%s:%s\n" "$repo" "$branch" "$remote" | string lower
    else
        echo "missing remote for $repo"
    end
end
