output "etcd_ip_fqdn_list" {
  value = ["${split(",", length(var.external_endpoints) == 0 ? join(",", google_dns_record_set.etc_a_node.*.name) : join(",", var.external_endpoints))}"]
}

output "kube_apiserver_fqdn" {
  # Remove trailing dot from the name
  value = "${join(".", compact(split(".", google_dns_record_set.api-external.name)))}"
}

output "kube_ingress_fqdn" {
  # Remove trailing dot from the name
  value = "${join(".", compact(split(".", google_dns_record_set.ingress-external.name)))}"
}
