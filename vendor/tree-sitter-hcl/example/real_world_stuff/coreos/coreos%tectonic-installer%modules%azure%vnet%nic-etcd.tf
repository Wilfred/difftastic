resource "azurerm_network_interface" "etcd_nic" {
  count               = "${var.etcd_count}"
  name                = "${var.cluster_name}-etcd-nic-${count.index}"
  location            = "${var.location}"
  resource_group_name = "${var.resource_group_name}"

  ip_configuration {
    name                          = "tectonic_etcd_configuration"
    subnet_id                     = "${var.external_master_subnet_id == "" ?  join(" ", azurerm_subnet.master_subnet.*.id) : var.external_master_subnet_id }"
    private_ip_address_allocation = "dynamic"
  }
}
