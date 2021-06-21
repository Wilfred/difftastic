output "master_vm_ids" {
  value = ["${azurerm_virtual_machine.tectonic_master.*.id}"]
}
