packer {
  required_plugins {
    docker = {
      source  = "github.com/hashicorp/docker"
      version = ">=0.0.7"
    }
    ansible = {
      source  = "github.com/hashicorp/ansible"
      version = ">=1.0.0"
    }
  }

}
source "docker" "debian" {
  discard = true
  image   = "debian:jessie"
}

build {
  sources = ["source.docker.debian"]

  provisioner "shell" {
    inline = ["apt-get update", "apt-get -y install python"]
  }

  provisioner "ansible" {
    playbook_file = "./playbook.yml"
    sftp_command  = "/usr/bin/false"
    use_sftp      = false
  }

}
