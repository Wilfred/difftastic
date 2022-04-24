resource "azurerm_network_security_rule" "etcd_egress" {
  count                  = "${var.external_nsg_master_id == "" && var.etcd_count > 0 ? 1 : 0}"
  name                   = "${var.cluster_name}-etcd-out"
  description            = "${var.cluster_name} etcd - Outbound"
  priority               = 2000
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

resource "azurerm_network_security_rule" "etcd_ingress_ssh" {
  count                  = "${var.external_nsg_master_id == "" && var.etcd_count > 0 ? 1 : 0}"
  name                   = "${var.cluster_name}-etcd-in-ssh"
  description            = "${var.cluster_name} etcd - SSH"
  priority               = 400
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

resource "azurerm_network_security_rule" "etcd_ingress_ssh_admin" {
  count                  = "${var.external_nsg_master_id == "" && var.etcd_count > 0 ? 1 : 0}"
  name                   = "${var.cluster_name}-etcd-in-ssh-external"
  description            = "${var.cluster_name} etcd - SSH external"
  priority               = 405
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

resource "azurerm_network_security_rule" "etcd_ingress_ssh_from_master" {
  count                  = "${var.external_nsg_master_id == "" && var.etcd_count > 0 ? 1 : 0}"
  name                   = "${var.cluster_name}-etcd-in-ssh-master"
  description            = "${var.cluster_name} etcd - SSH from master"
  priority               = 410
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "22"

  # TODO: Reference subnet
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

resource "azurerm_network_security_rule" "etcd_ingress_client_self" {
  count                  = "${var.external_nsg_master_id == "" && var.etcd_count > 0 ? 1 : 0}"
  name                   = "${var.cluster_name}-etcd-in-client-self"
  description            = "${var.cluster_name} etcd - etcd client"
  priority               = 415
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "2379"

  # TODO: Reference subnet
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

resource "azurerm_network_security_rule" "etcd_ingress_client_master" {
  count                  = "${var.external_nsg_master_id == "" && var.etcd_count > 0 ? 1 : 0}"
  name                   = "${var.cluster_name}-etcd-in-client-master"
  description            = "${var.cluster_name} etcd - etcd client from master"
  priority               = 420
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "2379"

  # TODO: Reference subnet
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}

resource "azurerm_network_security_rule" "etcd_ingress_peer" {
  count                  = "${var.external_nsg_master_id == "" && var.etcd_count > 0 ? 1 : 0}"
  name                   = "${var.cluster_name}-etcd-in-peer"
  description            = "${var.cluster_name} etcd - etcd peer"
  priority               = 425
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "TCP"
  source_port_range      = "*"
  destination_port_range = "2380"

  # TODO: Reference subnet
  source_address_prefix       = "${var.vnet_cidr_block}"
  destination_address_prefix  = "${var.vnet_cidr_block}"
  resource_group_name         = "${var.resource_group_name}"
  network_security_group_name = "${azurerm_network_security_group.master.name}"
}
