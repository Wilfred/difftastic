
output "ip_list" {
  value = "${oci_core_instance.instance.*.private_ip}"
}

output "hostname_list" {
  value = "${oci_core_instance.instance.*.hostname_label}"
}

output "new_cluster" {
  value = "${null_resource.create_new_cluster.id}"
}

