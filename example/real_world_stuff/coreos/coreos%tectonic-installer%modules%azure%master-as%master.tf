resource "azurerm_availability_set" "tectonic_masters" {
  name                        = "${var.cluster_name}-masters"
  location                    = "${var.location}"
  resource_group_name         = "${var.resource_group_name}"
  managed                     = true
  platform_fault_domain_count = "${var.fault_domains}"

  tags = "${merge(map(
    "Name", "${var.cluster_name}-masters",
    "tectonicClusterID", "${var.cluster_id}"),
    var.extra_tags)}"
}

resource "azurerm_virtual_machine" "tectonic_master" {
  count                 = "${var.master_count}"
  name                  = "${var.cluster_name}-master-${count.index}"
  location              = "${var.location}"
  resource_group_name   = "${var.resource_group_name}"
  network_interface_ids = ["${var.network_interface_ids[count.index]}"]
  vm_size               = "${var.vm_size}"
  availability_set_id   = "${azurerm_availability_set.tectonic_masters.id}"

  delete_os_disk_on_termination = true

  storage_image_reference {
    publisher = "CoreOS"
    offer     = "CoreOS"
    sku       = "${var.container_linux_channel}"
    version   = "${var.container_linux_version}"
  }

  storage_os_disk {
    name              = "master-${count.index}-os-${var.storage_id}"
    managed_disk_type = "${var.storage_type}"
    create_option     = "FromImage"
    caching           = "ReadWrite"
    os_type           = "linux"
    disk_size_gb      = "${var.root_volume_size}"
  }

  os_profile {
    computer_name  = "${var.cluster_name}-master-${count.index}"
    admin_username = "core"
    admin_password = ""
    custom_data    = "${base64encode("${data.ignition_config.master.rendered}")}"
  }

  os_profile_linux_config {
    disable_password_authentication = true

    ssh_keys {
      path     = "/home/core/.ssh/authorized_keys"
      key_data = "${file(var.public_ssh_key)}"
    }
  }

  tags = "${merge(map(
    "Name", "${var.cluster_name}-master-${count.index}",
    "tectonicClusterID", "${var.cluster_id}"),
    var.extra_tags)}"

  lifecycle {
    ignore_changes = [
      "storage_os_disk",
      "storage_data_disk",
    ]
  }
}
