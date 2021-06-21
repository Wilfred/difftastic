data "googleworkspace_group_settings" "sales-settings" {
  email = "sales@example.com"
}

output "who_can_join_sales" {
  value = data.googleworkspace_group_settings.sales-settings.who_can_join
}