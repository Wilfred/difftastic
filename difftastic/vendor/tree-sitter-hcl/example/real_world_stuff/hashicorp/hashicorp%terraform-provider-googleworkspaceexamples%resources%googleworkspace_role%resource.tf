data "googleworkspace_privileges" "privileges" {}

locals {
  read_only_privileges = [
    for priv in data.googleworkspace_privileges.privileges.items : priv
    if length(regexall("READ", priv.privilege_name)) > 0
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