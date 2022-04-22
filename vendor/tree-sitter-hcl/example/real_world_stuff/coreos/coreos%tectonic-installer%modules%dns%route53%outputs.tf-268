output "etcd_a_nodes" {
  value = "${aws_route53_record.etcd_a_nodes.*.fqdn}"
}

# We have to do this join() & split() 'trick' because the ternary operator can't output lists.
output "etcd_endpoints" {
  value = ["${split(",", length(var.external_endpoints) == 0 ? join(",", aws_route53_record.etcd_a_nodes.*.fqdn) : join(",", var.external_endpoints))}"]
}

output "worker_nodes" {
  value = "${aws_route53_record.worker_nodes.*.fqdn}"
}

output "worker_nodes_public" {
  value = "${aws_route53_record.worker_nodes_public.*.fqdn}"
}

output "master_nodes" {
  value = "${aws_route53_record.master_nodes.*.fqdn}"
}

output "ingress_external_fqdn" {
  value = "${element(concat(aws_route53_record.tectonic_ingress_public.*.name, list("")), 0)}"
}

output "ingress_internal_fqdn" {
  value = "${element(concat(aws_route53_record.tectonic_ingress_private.*.name, list("")), 0)}"
}

output "api_external_fqdn" {
  value = "${element(concat(aws_route53_record.tectonic_api_external.*.name, list("")), 0)}"
}

output "api_internal_fqdn" {
  value = "${element(concat(aws_route53_record.tectonic_api_internal.*.name, list("")), 0)}"
}
