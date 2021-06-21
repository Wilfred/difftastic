terraform {
  required_version = ">= 0.14"
  required_providers {
    aws = {
      source  = "hashicorp/aws"
      version = "~> 3.38"
    }
    random = {
      source  = "hashicorp/random"
      version = "~> 3.1"
    }
  }
}
