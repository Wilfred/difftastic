packer {
  required_plugins {
    docker = {
      version = ">= 0.0.7"
      source = "github.com/hashicorp/docker"
    }
    vagrant = {
      version = ">= 1.0.0"
      source = "github.com/hashicorp/vagrant"
    }
  }
}

source "docker" "example" {
  image  = "ubuntu:xenial"
  commit = true
}

build {
  sources = [
    "source.docker.example",
  ]
  provisioner "shell" {
    environment_vars = [
      "FOO=hello world",
    ]
    inline = [
      "echo Adding file to Docker Container",
      "echo \"FOO is $FOO\" > example.txt"
    ]
  }

  post-processors {
    post-processor "vagrant" {}
  }
}