include {
  path = find_in_parent_folders()
}

dependencies {
  paths = [
    "../../common/configuration",
    "../../management/access",
    "../../management/network",
    "../../peering/network",
    "../../tenant/network",
  ]
}
