# Outputs

output "ip_addresses" {
  value = "${flatten(oci_load_balancer.lb-k8smaster.*.ip_addresses)}"
}

output "load_balancer_id" {
  value = "${oci_load_balancer.lb-k8smaster.*.id}"
}

output "backendset_name" {
  value = "${oci_load_balancer_backendset.lb-k8smaster-https.*.name}"
}
