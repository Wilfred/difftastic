packer {
  required_plugins {
    vagrant = {
      version = ">= 1.0.0"
      source = "github.com/hashicorp/vagrant"
    }
  }
}

variable "vagrant_token" {
  type    = string
  default = env("VAGRANT_CLOUD_TOKEN")
}

build {
  sources = ["source.vagrant.example"]

  provisioner "shell" {
    inline = ["echo hi"]
  }

  post-processor "vagrant-cloud" {
    access_token     = var.vagrant_token
    box_tag          = "mmarsh/partybox"
    no_direct_upload = true
    version          = "0.3"
  }
}
