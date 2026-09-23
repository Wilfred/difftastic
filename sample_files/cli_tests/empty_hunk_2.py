from pathlib import Path

from fastapi import FastAPI


def create_app_from_runtime_config() -> FastAPI:
    config = load_runtime_config()
    store = RepoMarkStore.open(Path(config.db_path))

    marks = store.list()
    if len(marks) == 0:
        raise SystemExit(
            "No marked repos. Run: dirdiff mark /path/to/repo "
            "--db-path /path/to/db.sqlite"
        )
    return create_app(store, presets_root=config.presets_root)


def handle_mark_command(args: argparse.Namespace) -> None:
    store = RepoMarkStore.open(Path(args.db_path))
    repo_path = Path(args.repo_path)
    if args.name is None:
        resolved_path = repo_path.expanduser().resolve()
        display_name = resolved_path.name
        if not display_name:
            raise SystemExit(
                f"Cannot derive a repo name from path: {resolved_path}"
            )
    else:
        display_name = args.name
    try:
        mark = store.mark(RepoMarkInput(path=repo_path, name=display_name))
    except RepoRegistryError as exc:
        raise SystemExit(str(exc)) from exc
    print(f"Marked repo {mark.id}: {mark.path}", file=sys.stderr)
