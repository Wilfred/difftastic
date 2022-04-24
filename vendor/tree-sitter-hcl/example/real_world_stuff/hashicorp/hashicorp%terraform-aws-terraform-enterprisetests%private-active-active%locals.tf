locals {
  common_tags = {
    Terraform   = "cloud"
    Environment = "tfe_modules_test"
    Description = "Private Active/Active"
    Repository  = "hashicorp/terraform-aws-terraform-enterprise"
    Team        = "Terraform Enterprise on Prem"
    OkToDelete  = "True"
  }

  friendly_name_prefix = random_string.friendly_name.id
  ssm_policy_arn       = "arn:aws:iam::aws:policy/AmazonSSMManagedInstanceCore"
  test_name            = "${local.friendly_name_prefix}-test-private-active-active"
}
