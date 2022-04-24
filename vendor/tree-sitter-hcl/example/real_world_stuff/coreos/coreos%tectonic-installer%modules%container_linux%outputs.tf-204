output "version" {
  value = "${var.release_version == "latest" ? data.external.version.result["version"] : var.release_version}"
}
