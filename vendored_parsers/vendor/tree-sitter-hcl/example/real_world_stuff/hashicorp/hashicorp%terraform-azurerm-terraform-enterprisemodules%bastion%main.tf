resource "azurerm_public_ip" "bastion_pip" {
  name                = "${var.friendly_name_prefix}-bastion-pip"
  location            = var.location
  resource_group_name = var.resource_group_name
  allocation_method   = var.bastion_allocation_method
  sku                 = var.bastion_sku

  tags = var.tags
}

resource "azurerm_bastion_host" "bastion_host" {
  name                = "${var.friendly_name_prefix}-bastion-host"
  location            = var.location
  resource_group_name = var.resource_group_name

  ip_configuration {
    name                 = "tfebastion"
    subnet_id            = var.bastion_subnet_id
    public_ip_address_id = azurerm_public_ip.bastion_pip.id
  }

  tags = var.tags
}
