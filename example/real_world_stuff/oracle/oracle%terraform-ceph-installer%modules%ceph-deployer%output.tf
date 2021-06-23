
output "ip" {
  value = "${oci_core_instance.instance.private_ip}"
}

output "hostname" {
  value = "${oci_core_instance.instance.hostname_label}"
}

output "deploy" {
  value = "${null_resource.deploy.id}"
}
