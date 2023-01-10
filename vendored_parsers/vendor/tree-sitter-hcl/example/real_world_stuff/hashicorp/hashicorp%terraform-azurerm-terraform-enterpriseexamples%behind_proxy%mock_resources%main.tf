provider "azurerm" {
  features {}
}

# Create cloud init for proxy, will be used if user data not otherwise provided
# -----------------------------------------------------------------------------
locals {
  user_data_script = templatefile(
    "${path.module}/files/proxy.sh.tpl",
    {
      http_proxy_port = var.vm_userdata_http_proxy_port
    }
  )
}

# Create a virtual network for proxy example
# ------------------------------------------
module "network" {
  source = "../../existing_network/mock_resources"

  friendly_name_prefix = var.friendly_name_prefix
  location             = var.location
  resource_group_name  = var.resource_group_name

  network_cidr                 = "10.0.0.0/16"
  network_frontend_subnet_cidr = "10.0.0.0/20"
  network_bastion_subnet_cidr  = "10.0.16.0/20"
  network_private_subnet_cidr  = "10.0.32.0/20"
  network_redis_subnet_cidr    = "10.0.48.0/20"
}

# Create an SSH key for proxy instance
# ------------------------------------
resource "tls_private_key" "proxy_ssh" {
  algorithm = "RSA"
  rsa_bits  = 4096
}

resource "random_pet" "vm" {
  length = 2
}

# Create public ip if desired
# ---------------------------
resource "azurerm_public_ip" "vm" {
  count = var.vm_public_ip == true ? 1 : 0

  name                = format("%s-vm", var.friendly_name_prefix)
  location            = var.location
  resource_group_name = var.resource_group_name

  allocation_method = "Dynamic"
  domain_name_label = random_pet.vm.id

  tags = var.tags
}

# Create a subnet for proxy
# -------------------------
resource "azurerm_subnet" "vm" {
  name                = "${var.friendly_name_prefix}-vm-subnet"
  resource_group_name = var.resource_group_name

  address_prefixes     = [var.network_subnet_cidr]
  virtual_network_name = "${var.friendly_name_prefix}-network"

  depends_on = [module.network]
}

# Create a security group for proxy, default access is currently wide open
# ------------------------------------------------------------------------
resource "azurerm_network_security_group" "vm" {
  name                = "${var.friendly_name_prefix}-vm-nsg"
  location            = var.location
  resource_group_name = var.resource_group_name

  security_rule {
    name      = "allow-inbound"
    priority  = 100
    direction = "Inbound"
    access    = "Allow"
    protocol  = "Tcp"

    source_address_prefix = var.network_allow_range
    source_port_range     = "*"

    destination_port_range     = "*"
    destination_address_prefix = var.network_subnet_cidr
  }

  tags = var.tags
}

# Associate proxy subnet with nsg
# -------------------------------
resource "azurerm_subnet_network_security_group_association" "vm_subnet_nsg_association" {
  subnet_id                 = azurerm_subnet.vm.id
  network_security_group_id = azurerm_network_security_group.vm.id
}

# Create a network interface for the proxy virtual machine
# --------------------------------------------------------
resource "azurerm_network_interface" "vm" {
  name                = format("%s-vm-nic", var.friendly_name_prefix)
  location            = var.location
  resource_group_name = var.resource_group_name

  ip_configuration {
    name                          = "ipconfig"
    subnet_id                     = azurerm_subnet.vm.id
    public_ip_address_id          = var.vm_public_ip == true ? azurerm_public_ip.vm[0].id : null
    private_ip_address_allocation = "dynamic"
  }

  tags = var.tags
}

resource "azurerm_network_interface_security_group_association" "vm" {
  network_interface_id      = azurerm_network_interface.vm.id
  network_security_group_id = azurerm_network_security_group.vm.id
}

# Create the proxy virtual machine
# --------------------------------
resource "azurerm_linux_virtual_machine" "vm" {
  name                = format("%s-vm", var.friendly_name_prefix)
  location            = var.location
  resource_group_name = var.resource_group_name

  network_interface_ids = [azurerm_network_interface.vm.id]
  size                  = "Standard_D1_v2"
  admin_username        = var.vm_user

  custom_data = var.vm_userdata_script == "" ? base64encode(local.user_data_script) : base64encode(var.vm_userdata_script)

  # Source image id will be used if vm_image_id anything other than 'ubuntu' or 'rhel'
  source_image_id = var.vm_image_id == "ubuntu" || var.vm_image_id == "rhel" ? null : var.vm_image_id

  # Source image reference will be used if vm_image_id is 'ubuntu' or 'rhel'
  dynamic "source_image_reference" {
    for_each = var.vm_image_id == "ubuntu" || var.vm_image_id == "rhel" ? [1] : []

    content {
      publisher = var.vm_image_id == "ubuntu" ? "Canonical" : "RedHat"
      offer     = var.vm_image_id == "ubuntu" ? "0001-com-ubuntu-server-focal" : "RHEL"
      sku       = var.vm_image_id == "ubuntu" ? "20_04-lts" : "7.8"
      version   = var.vm_image_id == "ubuntu" ? "latest" : "latest"
    }
  }

  os_disk {
    caching              = "ReadWrite"
    storage_account_type = "Standard_LRS"
  }

  admin_ssh_key {
    username   = var.vm_user
    public_key = tls_private_key.proxy_ssh.public_key_openssh
  }

  tags = var.tags
}
