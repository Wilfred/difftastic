data "googleworkspace_group" "sales" {
  email = "sales@example.com"
}

data "googleworkspace_group_member" "my-group-member" {
  group_id = data.googleworkspace_group.sales.id
  email    = "michael.scott@example.com"
}

output "group_member_role" {
  value = data.googleworkspace_group_member.my-group-member.role
}