resource "googleworkspace_schema" "birthday" {
  schema_name = "birthday"

  fields {
    field_name = "birthday"
    field_type = "DATE"
  }
}