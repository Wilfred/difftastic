packer {
  required_plugins {
    digitalocean = {
      version = ">= 1.0.0"
      source  = "github.com/hashicorp/digitalocean"
    }
  }
}

source "digitalocean" "example" {
  api_token    = "YOUR API KEY"
  image        = "ubuntu-16-04-x64"
  region       = "nyc3"
  size         = "512mb"
  ssh_username = "root"
}

build {
  sources = ["source.digitalocean.example"]
}
