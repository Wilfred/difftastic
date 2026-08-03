function describe_repo --argument-names repo
    set -l branch (git -C $repo branch --show-current)

    if test -n "$branch"
        printf "%s:%s\n" "$repo" "$branch" | string upper
    else
        echo "missing branch for $repo"
    end
end
