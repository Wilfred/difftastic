terraform {
  required_version = ">= 0.13"

  required_providers {
    tls = {
      source  = "hashicorp/tls"
      version = "~> 3.0"
    }
  }
}
