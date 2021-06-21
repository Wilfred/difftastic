/***
  Resources
***/

resource "azurerm_resource_group" "tectonic_cluster" {
  location = "${var.tectonic_azure_location}"
  name     = "tectonic-priv-cluster-${var.tectonic_cluster_name}"

  tags = "${merge(map(
    "Name", "tectonic-cluster-${var.tectonic_cluster_name}"),
    var.tectonic_azure_extra_tags)}"
}

resource "azurerm_public_ip" "vpn_gw_ip" {
  name                         = "${var.tectonic_cluster_name}_vpn_gw_ip"
  location                     = "${var.tectonic_azure_location}"
  resource_group_name          = "${azurerm_resource_group.tectonic_cluster.name}"
  public_ip_address_allocation = "dynamic"
  domain_name_label            = "${var.tectonic_cluster_name}-vpngw"

  tags = "${merge(map(
    "Name", "tectonic-cluster-${var.tectonic_cluster_name}"),
    var.tectonic_azure_extra_tags)}"
}

resource "azurerm_virtual_network" "tectonic_private_vnet" {
  name                = "${var.tectonic_cluster_name}"
  resource_group_name = "${azurerm_resource_group.tectonic_cluster.name}"
  address_space       = ["${var.tectonic_azure_vnet_cidr_block}"]
  location            = "${var.tectonic_azure_location}"

  tags = "${merge(map(
    "Name", "tectonic-cluster-${var.tectonic_cluster_name}"),
    var.tectonic_azure_extra_tags)}"
}

resource "azurerm_subnet" "vpngw_subnet" {
  name                 = "${var.tectonic_cluster_name}_vpngw_subnet"
  resource_group_name  = "${azurerm_resource_group.tectonic_cluster.name}"
  virtual_network_name = "${azurerm_virtual_network.tectonic_private_vnet.name}"
  address_prefix       = "${cidrsubnet(var.tectonic_azure_vnet_cidr_block, 4, 2)}"
}

resource "azurerm_network_interface" "vpn_gw" {
  name                      = "${var.tectonic_cluster_name}-vpn-gw"
  location                  = "${var.tectonic_azure_location}"
  resource_group_name       = "${azurerm_resource_group.tectonic_cluster.name}"
  network_security_group_id = "${azurerm_network_security_group.vpn_gw.id}"
  enable_ip_forwarding      = true

  ip_configuration {
    public_ip_address_id          = "${azurerm_public_ip.vpn_gw_ip.id}"
    private_ip_address_allocation = "dynamic"
    name                          = "${var.tectonic_cluster_name}-VPN-Endpoint"
    subnet_id                     = "${azurerm_subnet.vpngw_subnet.id}"
  }

  tags = "${merge(map(
    "Name", "tectonic-cluster-${var.tectonic_cluster_name}"),
    var.tectonic_azure_extra_tags)}"
}

resource "azurerm_virtual_machine" "vpn_gw" {
  name                          = "${var.tectonic_cluster_name}-vpn-gw"
  location                      = "${var.tectonic_azure_location}"
  resource_group_name           = "${azurerm_resource_group.tectonic_cluster.name}"
  network_interface_ids         = ["${azurerm_network_interface.vpn_gw.id}"]
  vm_size                       = "${var.tectonic_azure_worker_vm_size}"
  delete_os_disk_on_termination = true

  storage_image_reference {
    publisher = "Canonical"
    offer     = "UbuntuServer"
    sku       = "16.04.0-LTS"
    version   = "latest"
  }

  storage_os_disk {
    name              = "vpn-gw-os-${var.tectonic_cluster_name}"
    managed_disk_type = "Standard_LRS"
    create_option     = "FromImage"
    caching           = "ReadWrite"
    os_type           = "linux"
  }

  os_profile {
    computer_name  = "${var.tectonic_cluster_name}-vpn-gw"
    admin_username = "${var.admin_username}"
    admin_password = ""
  }

  os_profile_linux_config {
    disable_password_authentication = true

    ssh_keys {
      path     = "/home/${var.admin_username}/.ssh/authorized_keys"
      key_data = "${file(var.tectonic_azure_ssh_key)}"
    }
  }

  tags = "${merge(map(
    "Name", "tectonic-cluster-${var.tectonic_cluster_name}"),
    var.tectonic_azure_extra_tags)}"
}

resource "null_resource" "openvpn_as_bootstrap" {
  triggers {
    vm_id = "${azurerm_virtual_machine.vpn_gw.id}"
  }

  connection {
    type  = "ssh"
    user  = "${var.admin_username}"
    agent = true
    host  = "${azurerm_public_ip.vpn_gw_ip.fqdn}"
  }

  provisioner "remote-exec" {
    inline = [
      "cd ~",
      "while ( ! curl --silent --fail -I http://swupdate.openvpn.org/as/openvpn-as-2.1.9-Ubuntu16.amd_64.deb); do echo 'Waiting for network...'; sleep 1; done",
      "curl -O http://swupdate.openvpn.org/as/openvpn-as-2.1.9-Ubuntu16.amd_64.deb",
      "sudo dpkg -i openvpn-as-2.1.9-Ubuntu16.amd_64.deb",
      "sudo echo '${var.admin_username}:${var.admin_password}' | sudo chpasswd",
      "sleep 60",
      "sudo /usr/local/openvpn_as/scripts/sacli -k 'host.name' -v '${azurerm_public_ip.vpn_gw_ip.fqdn}' ConfigPut",
      "sudo /usr/local/openvpn_as/scripts/sacli -k 'vpn.server.routing.private_network.1' -v '${var.tectonic_azure_vnet_cidr_block}' ConfigPut",
      "sudo /usr/local/openvpn_as/scripts/sacli -k 'vpn.server.routing.private_access' -v 'nat' ConfigPut",
      "sudo /usr/local/openvpn_as/scripts/sacli -k 'vpn.client.routing.reroute_dns' -v 'true' ConfigPut",
      "sudo /usr/local/openvpn_as/scripts/sacli -k 'vpn.client.routing.reroute_gw' -v 'false' ConfigPut",
      "sudo systemctl restart openvpnas",
    ]
  }
}

resource "azurerm_network_security_group" "vpn_gw" {
  name                = "${var.tectonic_cluster_name}-vpn-gw"
  location            = "${var.tectonic_azure_location}"
  resource_group_name = "${azurerm_resource_group.tectonic_cluster.name}"

  tags = "${merge(map(
    "Name", "tectonic-cluster-${var.tectonic_cluster_name}"),
    var.tectonic_azure_extra_tags)}"
}

resource "azurerm_network_security_rule" "vpn_egress" {
  name                        = "${var.tectonic_cluster_name}-vpn-egress"
  priority                    = 2005
  direction                   = "Outbound"
  access                      = "Allow"
  protocol                    = "*"
  source_port_range           = "*"
  destination_port_range      = "*"
  source_address_prefix       = "${var.tectonic_azure_vnet_cidr_block}"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.tectonic_cluster.name}"
  network_security_group_name = "${azurerm_network_security_group.vpn_gw.name}"
}

resource "azurerm_network_security_rule" "vpn_gw_ingress_ssh" {
  name                        = "${var.tectonic_cluster_name}-vpn-ingress-ssh"
  priority                    = 1000
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "22"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.tectonic_cluster.name}"
  network_security_group_name = "${azurerm_network_security_group.vpn_gw.name}"
}

resource "azurerm_network_security_rule" "vpn_gw_ingress_OpenVPN_WebServer" {
  name                        = "${var.tectonic_cluster_name}-vpn-openvpn-webserver"
  priority                    = 1200
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "943"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.tectonic_cluster.name}"
  network_security_group_name = "${azurerm_network_security_group.vpn_gw.name}"
}

resource "azurerm_network_security_rule" "vpn_gw_ingress_OpenVPN_1194" {
  name                        = "${var.tectonic_cluster_name}-vpn-openvpn-1194"
  priority                    = 1100
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "*"
  source_port_range           = "*"
  destination_port_range      = "1194"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.tectonic_cluster.name}"
  network_security_group_name = "${azurerm_network_security_group.vpn_gw.name}"
}

resource "azurerm_network_security_rule" "vpn_gw_ingress_OpenVPN_HTTPS" {
  name                        = "${var.tectonic_cluster_name}-vpn-openvpn-https"
  priority                    = 1300
  direction                   = "Inbound"
  access                      = "Allow"
  protocol                    = "tcp"
  source_port_range           = "*"
  destination_port_range      = "443"
  source_address_prefix       = "*"
  destination_address_prefix  = "*"
  resource_group_name         = "${azurerm_resource_group.tectonic_cluster.name}"
  network_security_group_name = "${azurerm_network_security_group.vpn_gw.name}"
}
