resource "googleworkspace_group" "sales" {
  email = "sales@example.com"
}

resource "googleworkspace_user" "michael" {
  primary_email = "michael.scott@example.com"
  password      = "34819d7beeabb9260a5c854bc85b3e44"
  hash_function = "MD5"

  name {
    family_name = "Scott"
    given_name  = "Michael"
  }
}

resource "googleworkspace_group_member" "manager" {
  group_id = googleworkspace_group.sales.id
  email    = googleworkspace_user.michael.primary_email

  role = "MANAGER"
}