# Virtual network
# ---------------
resource "azurerm_virtual_network" "tfe_network" {
  name                = "${var.friendly_name_prefix}-network"
  location            = var.location
  resource_group_name = var.resource_group_name

  address_space = [var.network_cidr]

  tags = var.tags
}

# Private subnet
# --------------
resource "azurerm_subnet" "tfe_network_private_subnet" {
  name                = "${var.friendly_name_prefix}-private-subnet"
  resource_group_name = var.resource_group_name

  address_prefixes     = [var.network_private_subnet_cidr]
  virtual_network_name = azurerm_virtual_network.tfe_network.name

  service_endpoints = [
    "Microsoft.Sql",
    "Microsoft.Storage",
    "Microsoft.KeyVault"
  ]
}

# Private subnet network security group
resource "azurerm_network_security_group" "tfe_network_private_nsg" {
  name                = "${var.friendly_name_prefix}-private-nsg"
  location            = var.location
  resource_group_name = var.resource_group_name

  # Allow inbound traffic to TFE Application
  security_rule {
    name      = "allow-private-inbound-https"
    priority  = 125
    direction = "Inbound"
    access    = "Allow"
    protocol  = "Tcp"

    source_address_prefix = var.load_balancer_type == "application_gateway" ? var.network_frontend_subnet_cidr : var.network_allow_range
    source_port_range     = "*"

    destination_port_range     = "443"
    destination_address_prefix = var.network_private_subnet_cidr
  }

  # Allow inbound TFE Console
  dynamic "security_rule" {
    for_each = var.active_active == false ? [1] : []

    content {
      name      = "allow-private-inbound-console"
      priority  = 150
      direction = "Inbound"
      access    = "Allow"
      protocol  = "Tcp"

      source_address_prefix = var.load_balancer_type == "application_gateway" ? var.network_frontend_subnet_cidr : var.network_allow_range
      source_port_range     = "*"

      destination_port_range     = "8800"
      destination_address_prefix = var.network_private_subnet_cidr
    }
  }

  # Allow inbound SSH from bastion subnet
  security_rule {
    name      = "allow-private-inbound-ssh"
    priority  = 200
    direction = "Inbound"
    access    = "Allow"
    protocol  = "Tcp"

    source_address_prefix = var.network_bastion_subnet_cidr
    source_port_range     = "*"

    destination_port_range     = "22"
    destination_address_prefix = var.network_private_subnet_cidr
  }

  # Allow Application Gateway traffic
  security_rule {
    name      = "allow-private-inbound-ag"
    priority  = 250
    direction = "Inbound"
    access    = "Allow"
    protocol  = "*"

    source_address_prefix = var.network_frontend_subnet_cidr
    source_port_range     = "*"

    destination_port_range     = "65200-65535"
    destination_address_prefix = var.network_private_subnet_cidr
  }

  tags = var.tags
}

# Private subnet network security group association
resource "azurerm_subnet_network_security_group_association" "tfe_nsg_association" {
  subnet_id                 = azurerm_subnet.tfe_network_private_subnet.id
  network_security_group_id = azurerm_network_security_group.tfe_network_private_nsg.id
}

# Public subnet
# -------------
resource "azurerm_subnet" "tfe_network_frontend_subnet" {
  name                = "${var.friendly_name_prefix}-frontend-subnet"
  resource_group_name = var.resource_group_name

  address_prefixes     = [var.network_frontend_subnet_cidr]
  virtual_network_name = azurerm_virtual_network.tfe_network.name
}

# Public subnet network securtiy group
resource "azurerm_network_security_group" "tfe_network_frontend_nsg" {
  name                = "${var.friendly_name_prefix}-frontend-nsg"
  location            = var.location
  resource_group_name = var.resource_group_name

  # Allow inbound traffic to TFE Application
  security_rule {
    name      = "allow-frontend-inbound-https"
    priority  = 125
    direction = "Inbound"
    access    = "Allow"
    protocol  = "Tcp"

    source_address_prefix = var.network_allow_range
    source_port_range     = "*"

    destination_port_range     = "443"
    destination_address_prefix = var.network_frontend_subnet_cidr
  }

  # Allow inbound TFE Console, only used for standalone deployment
  dynamic "security_rule" {
    for_each = var.active_active == false ? [1] : []

    content {
      name      = "allow-frontend-inbound-console"
      priority  = 150
      direction = "Inbound"
      access    = "Allow"
      protocol  = "Tcp"

      source_address_prefix = var.network_allow_range
      source_port_range     = "*"

      destination_port_range     = "8800"
      destination_address_prefix = var.network_frontend_subnet_cidr
    }
  }

  # Allow Application Gateway traffic
  dynamic "security_rule" {
    for_each = var.load_balancer_type == "application_gateway" ? [1] : []

    content {
      name      = "allow-frontend-inbound-ag"
      priority  = 250
      direction = "Inbound"
      access    = "Allow"
      protocol  = "*"

      source_address_prefix = "GatewayManager"
      source_port_range     = "*"

      destination_port_range     = "65200-65535"
      destination_address_prefix = "*"
    }
  }

  # Allow Azure Load Balancer when private
  dynamic "security_rule" {
    for_each = var.load_balancer_public == false ? [1] : []

    content {
      name      = "allow-frontend-inbound-ag-lb"
      priority  = 300
      direction = "Inbound"
      access    = "Allow"
      protocol  = "*"

      source_address_prefix = "AzureLoadBalancer"
      source_port_range     = "*"

      destination_port_range     = "*"
      destination_address_prefix = "*"
    }
  }

  # Deny Internet inbound when private
  dynamic "security_rule" {
    for_each = var.load_balancer_public == false ? [1] : []

    content {
      name      = "deny-frontend-inbound-ag-internet"
      priority  = 500
      direction = "Inbound"
      access    = "Deny"
      protocol  = "*"

      source_address_prefix = "Internet"
      source_port_range     = "*"

      destination_port_range     = "*"
      destination_address_prefix = "*"
    }
  }

  tags = var.tags
}

# Public subnet network securtiy group association
resource "azurerm_subnet_network_security_group_association" "tfe_network_frontend_nsg_association" {
  subnet_id                 = azurerm_subnet.tfe_network_frontend_subnet.id
  network_security_group_id = azurerm_network_security_group.tfe_network_frontend_nsg.id
}

# Bastion subnet
# --------------
resource "azurerm_subnet" "tfe_network_bastion_subnet" {
  count = var.create_bastion == true ? 1 : 0

  name                = "AzureBastionSubnet" # Azure requires this specific name
  resource_group_name = var.resource_group_name

  address_prefixes     = [var.network_bastion_subnet_cidr]
  virtual_network_name = azurerm_virtual_network.tfe_network.name
}

# Redis subnet
# -------------
resource "azurerm_subnet" "tfe_network_redis_subnet" {
  count = var.active_active == true ? 1 : 0

  name                = "${var.friendly_name_prefix}-redis-subnet"
  resource_group_name = var.resource_group_name

  address_prefixes     = [var.network_redis_subnet_cidr]
  virtual_network_name = azurerm_virtual_network.tfe_network.name
}
