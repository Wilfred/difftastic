# The following variable is used to configure the provider's authentication
# token. You don't need to provide a token on the command line to apply changes,
# though: using the remote backend, Terraform will execute remotely in Terraform
# Cloud where your token is already securely stored in your workspace!

variable "provider_token" {
  type = string
  sensitive = true
}

provider "fakewebservices" {
  token = var.provider_token
}
