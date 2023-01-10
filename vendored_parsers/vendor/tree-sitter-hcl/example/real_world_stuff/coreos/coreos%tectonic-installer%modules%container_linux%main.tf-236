data "external" "version" {
  program = ["sh", "-c", "curl https://${var.release_channel}.release.core-os.net/amd64-usr/current/version.txt | sed -n 's/COREOS_VERSION=\\(.*\\)$/{\"version\": \"\\1\"}/p'"]
}
