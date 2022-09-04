terraform {
  required_providers {
    google = {
      source  = "hashicorp/google"
      version = "~> 3.54"
    }

    google-beta = {
      source  = "hashicorp/google-beta"
      version = "~> 3.54"
    }

    random = {
      source  = "hashicorp/random"
      version = "~> 3.0"
    }
  }
}
