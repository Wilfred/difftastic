resource "azurerm_network_security_group" "master" {
  count               = "${var.external_nsg_master_id == "" ? 1 : 0}"
  name                = "${var.cluster_name}-master"
  location            = "${var.location}"
  resource_group_name = "${var.resource_group_name}"
}

### LB rules
resource "azurerm_network_security_rule" "alb_probe" {
  count                       = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                        = "${var.cluster_name}-alb-probe"
  description                 = "${var.cluster_name} master - Azure Load Balancer probe"
  priority                    = 295
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "TCP"
  source_port_range           = "*"
  destination_port_range      = "*"
  source_address_prefix       = "AzureLoadBalancer"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

# TODO: Fix NSG name and source
resource "azurerm_network_security_rule" "api_ingress_https" {
  count                  = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-api-in-https"
  description            = "${var.cluster_name} Kubernetes API"
  priority               = 300
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "443"

  # TODO: Ternary on private implementation
  source_address_prefix       = "*"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

resource "azurerm_network_security_rule" "console_ingress_https" {
  count                  = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-console-in-https"
  description            = "${var.cluster_name} Azure Load Balancer - Tectonic Console"
  priority               = 305
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "443"

  # TODO: Ternary on private implementation
  source_address_prefix       = "*"
  destination_address_prefix  = "AzureLoadBalancer"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

resource "azurerm_network_security_rule" "console_ingress_http" {
  count                  = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-console-in-http"
  description            = "${var.cluster_name} Azure Load Balancer - Tectonic Identity"
  priority               = 310
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "80"

  # TODO: Ternary on private implementation
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "AzureLoadBalancer"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

### Master node rules

resource "azurerm_network_security_rule" "master_egress" {
  count                  = "${var.external_nsg_master_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-master-out"
  description            = "${var.cluster_name} master - Outbound"
  priority               = 2005
  direction              = "Outbound"
  access                 = "Allow"
  protocol               = "*"
  source_port_range      = "*"
  destination_port_range = "*"

  # TODO: Reference subnet
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_ssh" {
  count                  = "${var.external_nsg_master_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-master-in-ssh"
  description            = "${var.cluster_name} master - SSH"
  priority               = 500
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "22"

  # TODO: Reference subnet
  source_address_prefix       = "${var.ssh_network_internal}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_ssh_admin" {
  count                  = "${var.external_nsg_master_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-master-in-ssh-external"
  description            = "${var.cluster_name} master - SSH external"
  priority               = 505
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "22"

  # TODO: Reference subnet
  source_address_prefix       = "${var.ssh_network_external}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_flannel" {
  count                  = "${var.external_nsg_master_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-master-in-udp-4789"
  description            = "${var.cluster_name} master - flannel"
  priority               = 510
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "UDP"
  source_port_range      = "*"
  destination_port_range = "4789"

  # TODO: Reference subnet
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_node_exporter_from_master" {
  count                       = "${var.external_nsg_master_id == "" ? 1 : 0}"
  name                        = "${var.cluster_name}-master-in-tcp-9100-master"
  description                 = "${var.cluster_name} master - Prometheus node exporter from master"
  priority                    = 515
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "TCP"
  source_port_range           = "*"
  destination_port_range      = "9100"
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_node_exporter_from_worker" {
  count                       = "${var.external_nsg_master_id == "" ? 1 : 0}"
  name                        = "${var.cluster_name}-master-in-tcp-9100-worker"
  description                 = "${var.cluster_name} master - Prometheus node exporter from worker"
  priority                    = 520
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "TCP"
  source_port_range           = "*"
  destination_port_range      = "9100"
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

# TODO: Review NSG
resource "azurerm_network_security_rule" "master_ingress_k8s_nodeport_from_alb" {
  count                  = "${var.external_nsg_master_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-master-in-any-30000-32767-alb"
  description            = "${var.cluster_name} master - Kubernetes NodePort range from Azure Load Balancer"
  priority               = 525
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "*"
  source_port_range      = "*"
  destination_port_range = "30000-32767"

  # TODO: Reference subnet
  source_address_prefix       = "AzureLoadBalancer"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

# TODO: Review NSG
resource "azurerm_network_security_rule" "master_ingress_k8s_nodeport" {
  count                  = "${var.external_nsg_master_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-master-in-any-30000-32767"
  description            = "${var.cluster_name} master - Kubernetes NodePort range"
  priority               = 530
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "*"
  source_port_range      = "*"
  destination_port_range = "30000-32767"

  # TODO: Reference subnet
  source_address_prefix       = "*"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_kubelet_secure" {
  count                  = "${var.external_nsg_master_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-master-in-tcp-10255-vnet"
  description            = "${var.cluster_name} master - kubelet"
  priority               = 535
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "10255"

  # TODO: CR on how open this should be
  # TODO: Reference subnet
  source_address_prefix = "VirtualNetwork"

  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}
