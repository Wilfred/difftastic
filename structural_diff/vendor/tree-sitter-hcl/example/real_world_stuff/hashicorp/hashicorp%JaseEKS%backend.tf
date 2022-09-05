terraform {
  backend "remote" {
    organization = "emea-se-playground-2019"

    workspaces {
      name = "Jason-EKS"
    }
  }
}
