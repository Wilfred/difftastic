variable "tectonic_azure_location" {
  default = "eastus"
}

variable "tectonic_base_domain" {}

resource "azurerm_resource_group" "integ_external_dns" {
  name     = "integ_external_dns"
  location = "${var.tectonic_azure_location}"
}

resource "azurerm_dns_zone" "integ_external_dns" {
  name                = "${var.tectonic_base_domain}"
  resource_group_name = "${azurerm_resource_group.integ_external_dns.name}"
}

output "tectonic_azure_external_dns_zone_id" {
  value = "${azurerm_dns_zone.integ_external_dns.id}"
}

output "tectonic_azure_external_dns_ns_servers" {
  value = "${azurerm_dns_zone.integ_external_dns.name_servers}"
}
