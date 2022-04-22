resource "googleworkspace_user" "dwight" {
  primary_email = "dwight.schrute@example.com"
  password      = "34819d7beeabb9260a5c854bc85b3e44"
  hash_function = "MD5"

  name {
    family_name = "Schrute"
    given_name  = "Dwight"
  }
}

data "googleworkspace_role" "groups-admin" {
  name = "_GROUPS_ADMIN_ROLE"
}

resource "googleworkspace_role_assignment" "dwight-ra" {
  role_id     = data.googleworkspace_role.groups-admin.id
  assigned_to = googleworkspace_user.dwight.id
}

# role assignments can be scoped to org units, however all privileges must be org_unit compatible

data "googleworkspace_privileges" "privileges" {}

locals {
  org_scopable_privileges = [
    for priv in data.googleworkspace_privileges.privileges.items : priv
    if priv.is_org_unit_scopable
  ]
}

resource "googleworkspace_role" "org-unit-privs" {
  name = "org-unit-privs"

  dynamic "privileges" {
    for_each = local.org_scopable_privileges
    content {
      service_id     = privileges.value["service_id"]
      privilege_name = privileges.value["privilege_name"]
    }
  }
}

resource "googleworkspace_org_unit" "org-unit" {
  name                 = "org-unit"
  parent_org_unit_path = "/"
}

resource "googleworkspace_role_assignment" "org-unit-scope" {
  role_id     = googleworkspace_role.org-unit-privs.id
  assigned_to = googleworkspace_user.dwight.id
  scope_type  = "ORG_UNIT"
  org_unit_id = googleworkspace_user.org-unit.id
}