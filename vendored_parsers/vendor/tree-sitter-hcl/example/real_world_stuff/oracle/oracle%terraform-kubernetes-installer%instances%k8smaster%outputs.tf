output "ids" {
  value = ["${oci_core_instance.TFInstanceK8sMaster.*.id}"]
}

output "private_ips" {
  value = ["${oci_core_instance.TFInstanceK8sMaster.*.private_ip}"]
}

output "public_ips" {
  value = ["${oci_core_instance.TFInstanceK8sMaster.*.public_ip}"]
}
