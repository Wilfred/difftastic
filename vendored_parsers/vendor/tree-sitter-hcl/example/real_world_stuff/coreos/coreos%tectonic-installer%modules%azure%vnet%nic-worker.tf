resource "azurerm_network_interface" "tectonic_worker" {
  count                = "${var.worker_count}"
  name                 = "${var.cluster_name}-worker-${count.index}"
  location             = "${var.location}"
  resource_group_name  = "${var.resource_group_name}"
  enable_ip_forwarding = true

  ip_configuration {
    private_ip_address_allocation = "dynamic"
    name                          = "${var.cluster_name}-WorkerIPConfiguration"
    subnet_id                     = "${var.external_worker_subnet_id == "" ? join("", azurerm_subnet.worker_subnet.*.id) : var.external_worker_subnet_id}"
  }
}
