variable "tectonic_azure_location" {
  default = "eastus"
}

variable "tectonic_azure_vnet_cidr_block" {
  default = "10.0.0.0/16"
}

resource "azurerm_resource_group" "integ_external_net" {
  name     = "integ_external_net"
  location = "${var.tectonic_azure_location}"
}

resource "azurerm_virtual_network" "integ_external_net" {
  name                = "integ_external_net"
  resource_group_name = "${azurerm_resource_group.integ_external_net.name}"
  address_space       = ["${var.tectonic_azure_vnet_cidr_block}"]
  location            = "${var.tectonic_azure_location}"
}

resource "azurerm_subnet" "integ_external_master_subnet" {
  name                      = "integ_external_master_subnet"
  resource_group_name       = "${azurerm_resource_group.integ_external_net.name}"
  virtual_network_name      = "${azurerm_virtual_network.integ_external_net.name}"
  address_prefix            = "${cidrsubnet(var.tectonic_azure_vnet_cidr_block, 4, 0)}"
  network_security_group_id = "${azurerm_network_security_group.integ_external_sg_master.id}"
}

resource "azurerm_subnet" "integ_external_worker_subnet" {
  name                      = "integ_external_worker_subnet"
  resource_group_name       = "${azurerm_resource_group.integ_external_net.name}"
  virtual_network_name      = "${azurerm_virtual_network.integ_external_net.name}"
  address_prefix            = "${cidrsubnet(var.tectonic_azure_vnet_cidr_block, 4, 1)}"
  network_security_group_id = "${azurerm_network_security_group.integ_external_sg_worker.id}"
}

resource "azurerm_network_security_group" "integ_external_sg_master" {
  name                = "integ_external_sg_master"
  location            = "${var.tectonic_azure_location}"
  resource_group_name = "${azurerm_resource_group.integ_external_net.name}"
}

resource "azurerm_network_security_group" "integ_external_sg_worker" {
  name                = "integ_external_sg_worker"
  location            = "${var.tectonic_azure_location}"
  resource_group_name = "${azurerm_resource_group.integ_external_net.name}"
}

resource "azurerm_network_security_group" "integ_external_sg_api" {
  name                = "integ_external_sg_api"
  location            = "${var.tectonic_azure_location}"
  resource_group_name = "${azurerm_resource_group.integ_external_net.name}"
}

resource "azurerm_network_security_group" "integ_external_sg_console" {
  name                = "integ_external_sg_console"
  location            = "${var.tectonic_azure_location}"
  resource_group_name = "${azurerm_resource_group.integ_external_net.name}"
}

resource "azurerm_network_security_rule" "master_egress" {
  name                        = "integ_external-master_egress"
  priority                    = 2005
  direction                   = "Outbound"
  access                      = "Allow"
  protocol                    = "*"
  source_port_range           = "*"
  destination_port_range      = "*"
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_ssh" {
  name                        = "integ_external-master_ingress_ssh"
  priority                    = 500
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "22"
  source_address_prefix       = "VirtualNetwork"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

# TODO: Add external SSH rule
resource "azurerm_network_security_rule" "master_ingress_ssh_admin" {
  name                        = "integ_external-master_ingress_ssh_admin"
  priority                    = 505
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "22"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_flannel" {
  name                   = "integ_external-master_ingress_flannel"
  priority               = 510
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "udp"
  source_port_range      = "*"
  destination_port_range = "4789"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_flannel_from_worker" {
  name                   = "integ_external-master_ingress_flannel_from_worker"
  priority               = 515
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "udp"
  source_port_range      = "*"
  destination_port_range = "4789"

  # TODO: Need to allow traffic from worker
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

# TODO: Add rule(s) for Tectonic ingress

resource "azurerm_network_security_rule" "master_ingress_node_exporter" {
  name                   = "integ_external-master_ingress_node_exporter"
  priority               = 520
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "9100"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_node_exporter_from_worker" {
  name                   = "integ_external-master_ingress_node_exporter_from_worker"
  priority               = 525
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "9100"

  # TODO: Need to allow traffic from worker
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_services" {
  name                   = "integ_external-master_ingress_services"
  priority               = 530
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "30000-32767"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "VirtualNetwork"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_services_from_console" {
  name                   = "integ_external-master_ingress_services_from_console"
  priority               = 535
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "30000-32767"

  # TODO: Need to allow traffic from console
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_etcd_lb" {
  name                   = "integ_external-master_ingress_etcd"
  priority               = 540
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "2379"

  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_etcd_self" {
  name                   = "integ_external-master_ingress_etcd_self"
  priority               = 545
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "2379-2380"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_bootstrap_etcd" {
  name                   = "integ_external-master_ingress_bootstrap_etcd"
  priority               = 550
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "12379-12380"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_kubelet_insecure" {
  name                   = "integ_external-master_ingress_kubelet_insecure"
  priority               = 555
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "10250"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_kubelet_insecure_from_worker" {
  name                   = "integ_external-master_ingress_kubelet_insecure_from_worker"
  priority               = 560
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "10250"

  # TODO: Need to allow traffic from worker
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_kubelet_secure" {
  name                   = "integ_external-master_ingress_kubelet_secure"
  priority               = 565
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "10255"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_kubelet_secure_from_worker" {
  name                   = "integ_external-master_ingress_kubelet_secure_from_worker"
  priority               = 570
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "10255"

  # TODO: Need to allow traffic from worker
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "master_ingress_http" {
  name                        = "integ_external-master_ingress_http"
  priority                    = 575
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "80"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

# TODO: Review NSG
resource "azurerm_network_security_rule" "master_ingress_https" {
  name                        = "integ_external-master_ingress_https"
  priority                    = 580
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "443"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

# TODO: Review NSG
resource "azurerm_network_security_rule" "master_ingress_heapster" {
  name                   = "integ_external-master_ingress_heapster"
  priority               = 585
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "4194"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

# TODO: Review NSG
resource "azurerm_network_security_rule" "master_ingress_heapster_from_worker" {
  name                   = "integ_external-master_ingress_heapster_from_worker"
  priority               = 590
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "4194"

  # TODO: Need to allow traffic from worker
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_master.name}"
}

resource "azurerm_network_security_rule" "alb_probe" {
  name                        = "integ_external-alb_probe"
  priority                    = 295
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "*"
  source_address_prefix       = "AzureLoadBalancer"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_api.name}"
}

resource "azurerm_network_security_rule" "api_egress" {
  name                        = "integ_external-api_egress"
  priority                    = 1990
  direction                   = "Outbound"
  access                      = "Allow"
  protocol                    = "*"
  source_port_range           = "*"
  destination_port_range      = "*"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_api.name}"
}

resource "azurerm_network_security_rule" "api_ingress_https" {
  name                        = "integ_external-api_ingress_https"
  priority                    = 300
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "443"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_api.name}"
}

resource "azurerm_network_security_rule" "console_egress" {
  name                        = "integ_external-console_egress"
  priority                    = 1995
  direction                   = "Outbound"
  access                      = "Allow"
  protocol                    = "*"
  source_port_range           = "*"
  destination_port_range      = "*"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_console.name}"
}

resource "azurerm_network_security_rule" "console_ingress_https" {
  name                        = "integ_external-console_ingress_https"
  priority                    = 305
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "443"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_console.name}"
}

resource "azurerm_network_security_rule" "console_ingress_http" {
  name                        = "integ_external-console_ingress_http"
  priority                    = 310
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "80"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_console.name}"
}

resource "azurerm_network_security_rule" "worker_egress" {
  name                        = "integ_external-worker_egress"
  priority                    = 2010
  direction                   = "Outbound"
  access                      = "Allow"
  protocol                    = "*"
  source_port_range           = "*"
  destination_port_range      = "*"
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_ssh" {
  name                        = "integ_external-worker_ingress_ssh"
  priority                    = 600
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "22"
  source_address_prefix       = "VirtualNetwork"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

# TODO: Add external SSH rule
resource "azurerm_network_security_rule" "worker_ingress_ssh_admin" {
  name                        = "integ_external-worker_ingress_ssh_admin"
  priority                    = 605
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "22"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_services" {
  name                   = "integ_external-worker_ingress_services"
  priority               = 610
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "30000-32767"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_services_from_console" {
  name                   = "integ_external-worker_ingress_services_from_console"
  priority               = 615
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "30000-32767"

  # TODO: Need to allow traffic from console
  source_address_prefix       = "VirtualNetwork"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_flannel" {
  name                   = "integ_external-worker_ingress_flannel"
  priority               = 620
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "udp"
  source_port_range      = "*"
  destination_port_range = "4789"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_flannel_from_master" {
  name                   = "integ_external-worker_ingress_flannel_from_master"
  priority               = 625
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "udp"
  source_port_range      = "*"
  destination_port_range = "4789"

  # TODO: Need to allow traffic from master
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_kubelet_insecure" {
  name                   = "integ_external-worker_ingress_kubelet_insecure"
  priority               = 630
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "10250"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_kubelet_insecure_from_master" {
  name                   = "integ_external-worker_ingress_kubelet_insecure_from_master"
  priority               = 635
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "10250"

  # TODO: Need to allow traffic from master
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_kubelet_secure" {
  name                   = "integ_external-worker_ingress_kubelet_secure"
  priority               = 640
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "10255"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_kubelet_secure_from_master" {
  name                   = "integ_external-worker_ingress_kubelet_secure_from_master"
  priority               = 645
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "10255"

  # TODO: Need to allow traffic from master
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_node_exporter" {
  name                   = "integ_external-worker_ingress_node_exporter"
  priority               = 650
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "9100"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_node_exporter_from_master" {
  name                   = "integ_external-worker_ingress_node_exporter_from_master"
  priority               = 655
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "9100"

  # TODO: Need to allow traffic from master
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_heapster" {
  name                   = "integ_external-worker_ingress_heapster"
  priority               = 660
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "4194"

  # TODO: Need to allow traffic from self
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

resource "azurerm_network_security_rule" "worker_ingress_heapster_from_master" {
  name                   = "integ_external-worker_ingress_heapster_from_master"
  priority               = 665
  direction              = "Inbound"
  access                 = "Allow"
  protocol               = "tcp"
  source_port_range      = "*"
  destination_port_range = "4194"

  # TODO: Need to allow traffic from master
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

# TODO: Add rules for self-hosted etcd (etcd-operator)

# TODO: Review NSG
resource "azurerm_network_security_rule" "worker_ingress_http" {
  name                        = "integ_external-worker_ingress_http"
  priority                    = 670
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "80"
  source_address_prefix       = "VirtualNetwork"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

# TODO: Review NSG
resource "azurerm_network_security_rule" "worker_ingress_https" {
  name                        = "integ_external-worker_ingress_https"
  priority                    = 675
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "443"
  source_address_prefix       = "VirtualNetwork"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.integ_external_net.name}"
  network_security_group_name = "${azurerm_network_security_group.integ_external_sg_worker.name}"
}

output "tectonic_azure_external_resource_group" {
  value = "${azurerm_resource_group.integ_external_net.id}"
}

output "tectonic_azure_external_vnet_id" {
  value = "${azurerm_virtual_network.integ_external_net.id}"
}

output "tectonic_azure_external_master_subnet_id" {
  value = "${azurerm_subnet.integ_external_master_subnet.id}"
}

output "tectonic_azure_external_worker_subnet_id" {
  value = "${azurerm_subnet.integ_external_worker_subnet.id}"
}

output "tectonic_azure_external_nsg_api_id" {
  value = "${azurerm_network_security_group.integ_external_sg_api.id}"
}

output "tectonic_azure_external_nsg_master_id" {
  value = "${azurerm_network_security_group.integ_external_sg_master.id}"
}

output "tectonic_azure_external_nsg_worker_id" {
  value = "${azurerm_network_security_group.integ_external_sg_worker.id}"
}
