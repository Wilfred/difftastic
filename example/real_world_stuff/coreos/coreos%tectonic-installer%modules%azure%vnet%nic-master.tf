resource "azurerm_network_interface" "tectonic_master" {
  count                = "${var.master_count}"
  name                 = "${var.cluster_name}-master-${count.index}"
  location             = "${var.location}"
  resource_group_name  = "${var.resource_group_name}"
  enable_ip_forwarding = true

  ip_configuration {
    private_ip_address_allocation           = "dynamic"
    name                                    = "${var.cluster_name}-MasterIPConfiguration"
    subnet_id                               = "${var.external_master_subnet_id == "" ? join("",azurerm_subnet.master_subnet.*.id) : var.external_master_subnet_id}"
    load_balancer_backend_address_pools_ids = ["${compact(azurerm_lb_backend_address_pool.api-lb.*.id)}"]
  }
}
