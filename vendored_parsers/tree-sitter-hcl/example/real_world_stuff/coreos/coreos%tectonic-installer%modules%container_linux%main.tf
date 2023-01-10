data "external" "version" {
  count   = "${var.release_version == "latest" ? 1 : 0}"
  program = ["sh", "-c", "curl https://${var.release_channel}.release.core-os.net/amd64-usr/current/version.txt | sed -n 's/COREOS_VERSION=\\(.*\\)$/{\"version\": \"\\1\"}/p'"]
}
