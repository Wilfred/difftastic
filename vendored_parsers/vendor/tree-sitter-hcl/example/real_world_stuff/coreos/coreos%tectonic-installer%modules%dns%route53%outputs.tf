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

output "routes_external_fqdn" {
  value = "${element(concat(aws_route53_record.routes_ingress_public.*.name, list("")), 0)}"
}

output "routes_internal_fqdn" {
  value = "${element(concat(aws_route53_record.routes_ingress_private.*.name, list("")), 0)}"
}

output "api_external_fqdn" {
  value = "${element(concat(aws_route53_record.tectonic_api_external.*.name, list("")), 0)}"
}

output "api_internal_fqdn" {
  value = "${element(concat(aws_route53_record.tectonic_api_internal.*.name, list("")), 0)}"
}
