data "googleworkspace_schema" "birthday" {
  schema_name = "birthday"
}

output "schema_display_name" {
  value = data.googleworkspace_schema.birthday.display_name
}