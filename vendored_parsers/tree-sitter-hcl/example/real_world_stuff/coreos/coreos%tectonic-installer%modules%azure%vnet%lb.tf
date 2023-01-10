resource "azurerm_lb" "tectonic_lb" {
  count = "${var.private_cluster ? 0 : 1}"

  name                = "${var.cluster_name}-api-lb"
  location            = "${var.location}"
  resource_group_name = "${var.resource_group_name}"

  frontend_ip_configuration {
    name                          = "api"
    public_ip_address_id          = "${join("", azurerm_public_ip.api_ip.*.id)}"
    private_ip_address_allocation = "dynamic"
  }

  frontend_ip_configuration {
    name                          = "console"
    public_ip_address_id          = "${join("" , azurerm_public_ip.console_ip.*.id)}"
    private_ip_address_allocation = "dynamic"
  }

  tags = "${merge(map(
    "Name", "${var.cluster_name}-api-lb",
    "tectonicClusterID", "${var.cluster_id}"),
    var.extra_tags)}"
}
