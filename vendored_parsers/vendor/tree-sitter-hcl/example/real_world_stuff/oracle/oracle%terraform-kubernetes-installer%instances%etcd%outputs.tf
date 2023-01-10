# Output the private and public IPs of the instance

output "ids" {
  value = ["${oci_core_instance.TFInstanceEtcd.*.id}"]
}

output "hostname_label" {
  value = "${oci_core_instance.TFInstanceEtcd.*.hostname_label}"
}

output "private_ips" {
  value = ["${oci_core_instance.TFInstanceEtcd.*.private_ip}"]
}

output "instance_public_ips" {
  value = ["${oci_core_instance.TFInstanceEtcd.*.public_ip}"]
}
 