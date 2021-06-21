resource "azurerm_public_ip" "api_ip" {
  count = "${var.private_cluster ? 0 : 1}"

  name                         = "${var.cluster_name}_api_ip"
  location                     = "${var.location}"
  resource_group_name          = "${var.resource_group_name}"
  public_ip_address_allocation = "static"
  domain_name_label            = "${var.cluster_name}-api"

  tags = "${merge(map(
    "Name", "${var.cluster_name}-api",
    "tectonicClusterID", "${var.cluster_id}"),
    var.extra_tags)}"
}

resource "azurerm_lb_rule" "api_lb" {
  count = "${var.private_cluster ? 0 : 1}"

  name                    = "api-lb-rule-443-443"
  resource_group_name     = "${var.resource_group_name}"
  loadbalancer_id         = "${join("", azurerm_lb.tectonic_lb.*.id)}"
  backend_address_pool_id = "${join("", azurerm_lb_backend_address_pool.api-lb.*.id)}"
  probe_id                = "${azurerm_lb_probe.api_lb.id}"

  protocol                       = "tcp"
  frontend_port                  = 443
  backend_port                   = 443
  frontend_ip_configuration_name = "api"
}

resource "azurerm_lb_probe" "api_lb" {
  count = "${var.private_cluster ? 0 : 1}"

  name                = "api-lb-probe-443-up"
  loadbalancer_id     = "${azurerm_lb.tectonic_lb.id}"
  resource_group_name = "${var.resource_group_name}"
  protocol            = "tcp"
  port                = 443
}

resource "azurerm_lb_backend_address_pool" "api-lb" {
  count = "${var.private_cluster ? 0 : 1}"

  name                = "api-lb-pool"
  resource_group_name = "${var.resource_group_name}"
  loadbalancer_id     = "${azurerm_lb.tectonic_lb.id}"
}

resource "azurerm_lb_rule" "ssh_lb" {
  count = "${var.private_cluster ? 0 : 1}"

  name                    = "ssh-lb"
  resource_group_name     = "${var.resource_group_name}"
  loadbalancer_id         = "${join("", azurerm_lb.tectonic_lb.*.id)}"
  backend_address_pool_id = "${join("", azurerm_lb_backend_address_pool.api-lb.*.id)}"
  probe_id                = "${azurerm_lb_probe.ssh_lb.id}"
  load_distribution       = "SourceIP"

  protocol                       = "tcp"
  frontend_port                  = 22
  backend_port                   = 22
  frontend_ip_configuration_name = "api"
}

resource "azurerm_lb_probe" "ssh_lb" {
  count = "${var.private_cluster ? 0 : 1}"

  name                = "ssh-lb-22-up"
  loadbalancer_id     = "${azurerm_lb.tectonic_lb.id}"
  resource_group_name = "${var.resource_group_name}"
  protocol            = "tcp"
  port                = 22
}
