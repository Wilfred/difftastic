packer {
  required_plugins {
    vagrant = {
      version = ">= 1.0.0"
      source = "github.com/hashicorp/vagrant"
    }
  }
}

source "vagrant" "example" {
  communicator    = "ssh"
  output_dir      = "precisebox"
  package_include = ["./crash.log", "./base_aws.json"]
  provider        = "virtualbox"
  skip_add        = true
  source_path     = "hashicorp/precise64"
}

source "vagrant" "frombox" {
  box_name        = "test-packer"
  communicator    = "ssh"
  output_dir      = "test-output-dir"
  provider        = "virtualbox"
  source_path     = "./precisebox/package.box"
  teardown_method = "halt"
}

build {
  sources = ["source.vagrant.example",
             "source.vagrant.frombox"]

  provisioner "shell" {
    inline = [""]
  }
}
