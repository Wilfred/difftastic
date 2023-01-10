provider "azurerm" {
  features {}
}

module "tfe" {
  source = "../../"

  friendly_name_prefix = var.friendly_name_prefix
  tfe_license_filepath = "${path.module}/files/license.rli"
}
