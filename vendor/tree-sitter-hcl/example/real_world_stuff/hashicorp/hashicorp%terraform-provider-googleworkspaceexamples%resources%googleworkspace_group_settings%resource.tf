resource "googleworkspace_group" "sales" {
  email = "sales@example.com"
}

resource "googleworkspace_group_settings" "sales-settings" {
  email = googleworkspace_group.sales.email

  allow_external_members = false

  who_can_join            = "INVITED_CAN_JOIN"
  who_can_view_membership = "ALL_MANAGERS_CAN_VIEW"
  who_can_post_message    = "ALL_MEMBERS_CAN_POST"
}