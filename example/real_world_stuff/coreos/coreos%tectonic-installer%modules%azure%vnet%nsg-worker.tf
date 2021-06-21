resource "azurerm_network_security_group" "worker" {
  count               = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                = "${var.cluster_name}-worker"
  location            = "${var.location}"
  resource_group_name = "${var.resource_group_name}"
}

resource "azurerm_network_security_rule" "worker_egress" {
  count                  = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-worker-out"
  description            = "${var.cluster_name} worker - Outbound"
  priority               = 2010
  direction              = "Outbound"
  access                 = "Allow"
  protocol               = "*"
  source_port_range      = "*"
  destination_port_range = "*"

  # TODO: Reference subnet
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_ssh" {
  count                  = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-worker-in-ssh"
  description            = "${var.cluster_name} worker - SSH"
  priority               = 600
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "22"

  # TODO: Reference subnet
  source_address_prefix       = "${var.ssh_network_internal}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_ssh_admin" {
  count                  = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-worker-in-ssh-external"
  description            = "${var.cluster_name} worker - SSH external"
  priority               = 605
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "22"

  # TODO: Reference subnet
  source_address_prefix       = "${var.ssh_network_external}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.worker.name}"
}

# TODO: Determine if we need two rules for this
resource "azurerm_network_security_rule" "worker_ingress_k8s_nodeport" {
  count                       = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                        = "${var.cluster_name}-worker-in-any-30000-32767"
  description                 = "${var.cluster_name} worker - Kubernetes NodePort range"
  priority                    = 610
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "*"
  source_port_range           = "*"
  destination_port_range      = "30000-32767"
  source_address_prefix       = "VirtualNetwork"
  destination_address_prefix  = "*"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_flannel" {
  count                  = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-worker-in-udp-4789"
  description            = "${var.cluster_name} worker - flannel"
  priority               = 615
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "UDP"
  source_port_range      = "*"
  destination_port_range = "4789"

  # TODO: Reference subnet
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_kubelet_secure" {
  count                  = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-worker-in-tcp-10255-vnet"
  description            = "${var.cluster_name} worker - kubelet"
  priority               = 620
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
  network_security_group_name = "${azurerm_network_security_group.worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_node_exporter_from_worker" {
  count                  = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-worker-in-tcp-9100-vnet"
  description            = "${var.cluster_name} worker - Prometheus node exporter from worker"
  priority               = 625
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "9100"

  # TODO: Reference subnet
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_node_exporter_from_master" {
  count                  = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-worker-in-tcp-9100-master"
  description            = "${var.cluster_name} worker - Prometheus node exporter from master"
  priority               = 630
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "9100"

  # TODO: Reference subnet
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_heapster_from_master" {
  count                  = "${var.external_nsg_worker_id == "" ? 1 : 0}"
  name                   = "${var.cluster_name}-worker-in-tcp-4194-master"
  description            = "${var.cluster_name} worker - Heapster from master"
  priority               = 635
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "4194"

  # TODO: Reference subnet
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.worker.name}"
}
