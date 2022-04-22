output "etcd_vm_ids" {
  value = ["${azurerm_virtual_machine.etcd_node.*.id}"]
}
