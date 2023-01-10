variable "release_channel" {
  type = "string"

  description = <<EOF
The Container Linux update channel.

Examples: `stable`, `beta`, `alpha`
EOF
}

variable "release_version" {
  type = "string"

  description = <<EOF
The Container Linux version to use. Set to `latest` to select the latest available version for the selected update channel.

Examples: `latest`, `1465.6.0`
EOF
}
