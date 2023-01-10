// variables

variable "project_id" {
  type    = "string"
  default = ""
}

variable "facility" {
  type    = "string"
  default = "ams1"
}

variable "plan" {
  type    = "string"
  default = "baremetal_1"
}

variable "hostname" {
  type    = "string"
  default = "tf"
}

variable "auth_token" {
  type    = "string"
  default = ""
}

variable "tectonic_pull_secret_path" {
  type    = "string"
  default = ""
}

variable "tectonic_license_path" {
  type    = "string"
  default = ""
}

variable "smoke_test" {
  type    = "string"
  default = ""
}

// output

output "ip" {
  value = "${lookup(packet_device.machine.network[0], "address")}"
}

// resources/datasources/providers

resource "random_id" "hostname" {
  byte_length = 4
}

provider "packet" {
  auth_token = "${var.auth_token}"
}

resource "packet_device" "machine" {
  hostname         = "${var.hostname}-${var.facility}-${random_id.hostname.hex}"
  plan             = "${var.plan}"
  facility         = "${var.facility}"
  operating_system = "ubuntu_16_04"
  billing_cycle    = "hourly"
  project_id       = "${var.project_id}"
}

resource "null_resource" "tectonic" {
  depends_on = ["packet_device.machine"]

  connection {
    type    = "ssh"
    host    = "${lookup(packet_device.machine.network[0], "address")}"
    user    = "root"
    timeout = "60m"
  }

  provisioner "file" {
    source      = "${var.tectonic_license_path}"
    destination = "$HOME/tectonic-license"
  }

  provisioner "file" {
    source      = "${var.tectonic_pull_secret_path}"
    destination = "$HOME/pull-secret"
  }

  provisioner "file" {
    destination = "$HOME/.bashrc"

    content = <<EOF
export BRANCH_NAME=master
export BUILD_ID=1

export TF_VAR_tectonic_pull_secret_path=/root/pull-secret
export TF_VAR_tectonic_license_path=/root/tectonic-license

export KUBECONFIG=/root/go/src/github.com/coreos/tectonic-installer/build/tf-metal-master-1/generated/auth/kubeconfig

export PATH=$PATH:/root/go/src/github.com/coreos/tectonic-installer/bin_test
which kubectl >/dev/null && source <(kubectl completion bash)
EOF
  }

  provisioner "file" {
    destination = "$HOME/install.sh"

    content = <<EOF
#/usr/bin/env bash

set -e -x

curl -OL https://github.com/rkt/rkt/releases/download/v1.26.0/rkt_1.26.0-1_amd64.deb
dpkg -i $HOME/rkt_1.26.0-1_amd64.deb

apt-get update -y
apt-get install --no-install-recommends -y git unzip qemu-kvm qemu-utils libvirt-bin virtinst

curl -sL https://deb.nodesource.com/setup_8.x | bash -
apt-get install -y nodejs
npm install -g yarn

curl -O https://storage.googleapis.com/golang/go1.8.linux-amd64.tar.gz
tar xzf $HOME/go1.8.linux-amd64.tar.gz
mv $HOME/go /usr/local/go
ln -sf /usr/local/go/bin/go /usr/bin/go

mkdir -p $HOME/go/bin $HOME/go/pkg $HOME/go/src/github.com/coreos
git clone https://github.com/coreos/tectonic-installer $HOME/go/src/github.com/coreos/tectonic-installer

cd $HOME/go/src/github.com/coreos/tectonic-installer/installer
make tools
EOF
  }

  provisioner "remote-exec" {
    inline = [
      "/bin/sh $HOME/install.sh",
    ]
  }

  provisioner "remote-exec" {
    inline = [
      "${var.smoke_test == "" ? "echo smoke test skipped" : "cd $HOME/go/src/github.com/coreos/tectonic-installer && ./tests/smoke/bare-metal/smoke.sh vars/${var.smoke_test}"}",
    ]
  }
}
