data "googleworkspace_role" "group-admin" {
  name = "_GROUPS_ADMIN_ROLE"
}

output "is_system_role" {
  value = data.googleworkspace_role.group-admin.is_system_role
}