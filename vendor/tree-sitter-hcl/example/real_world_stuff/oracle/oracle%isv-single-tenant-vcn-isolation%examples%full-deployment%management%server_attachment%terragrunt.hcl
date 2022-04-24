include {
  path = find_in_parent_folders()
}

dependencies {
  paths = [
    "../../common/configuration", 
    "../../management/access",
    "../../management/network", 
    "../../management/servers",
    "../../peering/network",
    "../../peering/routing",
    "../../tenant/network",
  ]
}
