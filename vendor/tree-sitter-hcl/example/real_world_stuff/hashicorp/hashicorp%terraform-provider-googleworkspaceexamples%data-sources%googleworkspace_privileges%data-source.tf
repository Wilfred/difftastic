data "googleworkspace_privileges" "privileges" {}

# filter using native Terraform syntax
locals {
  org_scopable_privileges = [
    for priv in data.googleworkspace_privileges.privileges.items : priv
    if priv.is_org_unit_scopable
  ]
  read_only_privileges = [
    for priv in data.googleworkspace_privileges.privileges.items : priv
    if length(regexall("READ", priv.privilege_name)) > 0
  ]
  privileges_by_service_name = [
    for priv in data.googleworkspace_privileges.privileges.items : priv
    if priv.service_name == "gmail"
  ]
}

resource "googleworkspace_role" "read-only" {
  name = "read-only"

  dynamic "privileges" {
    for_each = local.read_only_privileges
    content {
      service_id     = privileges.value["service_id"]
      privilege_name = privileges.value["privilege_name"]
    }
  }
}