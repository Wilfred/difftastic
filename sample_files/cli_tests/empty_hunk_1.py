from pathlib import Path
from typing import Any


def create_app_from_runtime_config() -> Any:
    config = load_runtime_config()
    repo_root = (
        Path(config.repo_root).expanduser() if config.repo_root else None
    )
    repo = GitBackend.discover(repo_root=repo_root)
    presets_root = (
        Path(config.presets_root).expanduser() if config.presets_root else None
    )
    preset_repo = PresetBackend.discover(presets_root=presets_root)
    service = TextDiffService(repo)
    git_service = GitDiffService(repo)
    difftastic_service = DifftasticDiffService(repo)
    preset_service = TextDiffService(preset_repo)
    preset_git_service = GitDiffService(preset_repo)
    preset_difftastic_service = DifftasticDiffService(preset_repo)
    defaults = build_defaults(
        service,
        left=config.left,
        right=config.right,
        base_branch=config.base_branch,
        review_branch=config.review_branch,
    )
    return create_app(
        service,
        defaults,
        services={"git": git_service, "difftastic": difftastic_service},
        preset_services={
            "dirdiff": preset_service,
            "git": preset_git_service,
            "difftastic": preset_difftastic_service,
        },
    )
