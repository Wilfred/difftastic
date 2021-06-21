packer {
  required_plugins {
    googlecompute = {
      version = ">= v1.0.0"
      source  = "github.com/hashicorp/googlecompute"
    }
  }
}

variable "zone" {
  default = "europe-west4-a"
}

variable "project_id" {
  type = string
}

source "googlecompute" "ex" {
  image_name              = "test-packer-example"
  machine_type            = "e2-small"
  source_image            = "debian-10-buster-v20210316"
  ssh_username            = "packer"
  temporary_key_pair_type = "rsa"
  temporary_key_pair_bits = 2048
  zone                    = var.zone
  project_id              = var.project_id
}

build {
  sources = ["source.googlecompute.ex"]
  provisioner "shell" {
    inline = [
      "echo Hello From ${source.type} ${source.name}"
    ]
  }
}
