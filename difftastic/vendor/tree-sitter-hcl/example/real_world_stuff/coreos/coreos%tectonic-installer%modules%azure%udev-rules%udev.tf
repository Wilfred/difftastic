data "ignition_file" "azure_udev_rules" {
  filesystem = "root"
  path       = "/etc/udev/rules.d/66-azure-storage.rules"
  mode       = 0644

  content {
    content = "${file("${path.module}/resources/66-azure-storage.rules")}"
  }
}
