locals {
  common_tags = {
    Terraform   = "cloud"
    Environment = "tfe_modules_test"
    Description = "Public Active/Active"
    Repository  = "hashicorp/terraform-aws-terraform-enterprise"
    Team        = "Terraform Enterprise on Prem"
    OkToDelete  = "True"
  }

  friendly_name_prefix = random_string.friendly_name.id
  test_name            = "${local.friendly_name_prefix}-test-public-active-active"
}
