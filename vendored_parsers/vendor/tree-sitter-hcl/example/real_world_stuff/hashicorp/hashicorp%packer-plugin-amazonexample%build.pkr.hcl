packer {
  required_plugins {
    amazon = {
      version = ">= 1.0.0"
      source = "github.com/hashicorp/amazon"
    }
  }
}

data "amazon-ami" "ubuntu-xenial-1604-amd64" {
  filters = {
    name                = "ubuntu/images/*ubuntu-xenial-16.04-amd64-server-*"
    root-device-type    = "ebs"
    virtualization-type = "hvm"
  }
  most_recent = true
  owners      = ["099720109477"]
}

locals { timestamp = regex_replace(timestamp(), "[- TZ:]", "") }

source "amazon-ebs" "basic-example" {
  ami_name      = "packer-example-${local.timestamp}"
  communicator  = "ssh"
  instance_type = "t2.micro"
  source_ami    = data.amazon-ami.ubuntu-xenial-1604-amd64.id
  ssh_username  = "ubuntu"
}

build {
  sources = ["source.amazon-ebs.basic-example"]
}