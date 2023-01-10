output "ip_address" {
  value = ["${vsphere_virtual_machine.node.*.network_interface.0.ipv4_address}"]
}
