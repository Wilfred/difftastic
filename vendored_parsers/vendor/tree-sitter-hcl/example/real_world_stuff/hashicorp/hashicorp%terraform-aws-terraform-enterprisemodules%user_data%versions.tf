terraform {
  required_version = ">= 0.14"
  required_providers {
    random = {
      source  = "hashicorp/random"
      version = "~> 3.1"
    }
  }
}
