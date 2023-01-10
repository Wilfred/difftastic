output "ip_address" {
  value = ["${vsphere_virtual_machine.etcd_node.*.network_interface.0.ipv4_address}"]
}

output "name" {
  value = ["${vsphere_virtual_machine.etcd_node.*.name}"]
}

# We have to do this join() & split() 'trick' because the ternary operator can't output lists.
output "endpoints" {
  value = ["${split(",", length(var.external_endpoints) == 0 ? join(",", formatlist("%s.%s", vsphere_virtual_machine.etcd_node.*.name, var.base_domain)) : join(",", var.external_endpoints))}"]
}
