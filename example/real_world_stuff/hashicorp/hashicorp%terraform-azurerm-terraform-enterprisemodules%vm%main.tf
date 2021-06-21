resource "azurerm_linux_virtual_machine_scale_set" "tfe_vmss" {
  name                = "${var.friendly_name_prefix}-vmss"
  location            = var.location
  resource_group_name = var.resource_group_name

  overprovision  = var.vm_overprovision
  instances      = var.vm_node_count
  sku            = var.vm_sku
  admin_username = var.vm_user

  upgrade_mode = var.vm_upgrade_mode

  zone_balance = var.vm_zone_balance
  zones        = var.zones

  custom_data = var.vm_userdata_script

  identity {
    type = "UserAssigned"

    identity_ids = [var.vm_user_assigned_identity_id]
  }

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

  admin_ssh_key {
    username   = var.vm_user
    public_key = var.vm_public_key
  }

  os_disk {
    caching              = var.vm_os_disk_caching
    storage_account_type = var.vm_os_disk_storage_account_type
    disk_size_gb         = var.vm_os_disk_disk_size_gb
  }

  network_interface {
    name    = "${var.friendly_name_prefix}-nic"
    primary = true

    ip_configuration {
      name      = "${var.friendly_name_prefix}-ip"
      primary   = true
      subnet_id = var.vm_subnet_id

      load_balancer_backend_address_pool_ids       = var.load_balancer_type == "load_balancer" ? [var.load_balancer_backend_id] : null
      application_gateway_backend_address_pool_ids = var.load_balancer_type == "application_gateway" ? [var.load_balancer_backend_id] : null

      dynamic "public_ip_address" {
        for_each = var.load_balancer_public == false ? [1] : []
        content {
          name = "${var.friendly_name_prefix}-public-ip"
        }
      }
    }
  }

  tags = var.tags
}

resource "azurerm_role_assignment" "tfe_vmss_role_assignment" {
  scope                = var.resource_group_id_bootstrap
  role_definition_name = "Storage Blob Data Reader"
  principal_id         = var.vm_user_assigned_identity_principal_id
}

resource "azurerm_virtual_machine_scale_set_extension" "main" {
  name                         = "${var.friendly_name_prefix}-vmss-ext"
  virtual_machine_scale_set_id = azurerm_linux_virtual_machine_scale_set.tfe_vmss.id
  publisher                    = "Microsoft.ManagedServices"
  type                         = "ApplicationHealthLinux"
  auto_upgrade_minor_version   = true
  type_handler_version         = "1.0"
  settings = jsonencode({
    "protocol" : "http",
    "port" : 80,
    "requestPath" : "/_health_check"
  })
}
