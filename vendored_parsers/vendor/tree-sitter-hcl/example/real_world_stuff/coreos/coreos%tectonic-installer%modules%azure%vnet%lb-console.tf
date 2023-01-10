resource "azurerm_public_ip" "console_ip" {
  count = "${var.private_cluster ? 0 : 1}"

  name                         = "${var.cluster_name}_console_ip"
  location                     = "${var.location}"
  resource_group_name          = "${var.resource_group_name}"
  public_ip_address_allocation = "static"
  domain_name_label            = "${var.cluster_name}"

  tags = "${merge(map(
    "Name", "${var.cluster_name}",
    "tectonicClusterID", "${var.cluster_id}"),
    var.extra_tags)}"
}

resource "azurerm_lb_rule" "console_lb_https" {
  count = "${var.private_cluster ? 0 : 1}"

  name                    = "${var.cluster_name}-console-lb-rule-443-32000"
  resource_group_name     = "${var.resource_group_name}"
  loadbalancer_id         = "${azurerm_lb.tectonic_lb.id}"
  backend_address_pool_id = "${join("", azurerm_lb_backend_address_pool.api-lb.*.id)}"
  probe_id                = "${azurerm_lb_probe.console_lb.id}"

  protocol                       = "tcp"
  frontend_port                  = 443
  backend_port                   = 32000
  frontend_ip_configuration_name = "console"
}

resource "azurerm_lb_rule" "console_lb_identity" {
  count = "${var.private_cluster ? 0 : 1}"

  name                    = "${var.cluster_name}-console-lb-rule-80-32001"
  resource_group_name     = "${var.resource_group_name}"
  loadbalancer_id         = "${azurerm_lb.tectonic_lb.id}"
  backend_address_pool_id = "${join("", azurerm_lb_backend_address_pool.api-lb.*.id)}"
  probe_id                = "${azurerm_lb_probe.console_lb.id}"

  protocol                       = "tcp"
  frontend_port                  = 80
  backend_port                   = 32001
  frontend_ip_configuration_name = "console"
}

resource "azurerm_lb_probe" "console_lb" {
  count = "${var.private_cluster ? 0 : 1}"

  name                = "${var.cluster_name}-console-lb-probe-443-up"
  loadbalancer_id     = "${azurerm_lb.tectonic_lb.id}"
  resource_group_name = "${var.resource_group_name}"
  protocol            = "tcp"
  port                = 32000
}
