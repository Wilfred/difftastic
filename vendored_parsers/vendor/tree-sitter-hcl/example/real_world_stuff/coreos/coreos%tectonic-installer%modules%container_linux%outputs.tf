locals {
  // Create a map that matches the structure of the output of the external data source
  // so we can avoid running the shell script and still parse the output consistently.
  // Here, we jsonencode because ternaries can only operate on flat data types and
  // Terraform `merge` and `element` do not play nicely with maps.
  json = "${var.release_version == "latest" ? jsonencode(data.external.version.*.result) : jsonencode(map("version", var.release_version))}"
}

output "version" {
  // Parse out the version from the well-known JSON of format:
  // {"version":"<version>"}
  value = "${replace(local.json, "/.*\"version\":\"(.*)\".*/", "$1")}"
}
