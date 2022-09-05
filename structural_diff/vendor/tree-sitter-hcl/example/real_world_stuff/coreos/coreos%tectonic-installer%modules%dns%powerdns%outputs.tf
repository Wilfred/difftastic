output "etcd_a_nodes" {
  value = "${powerdns_record.etcd.*.name}"
}

# We have to do this join() & split() 'trick' because the ternary operator can't output lists.
# https://github.com/hashicorp/terraform/issues/11566#issuecomment-289417805
output "etcd_endpoints" {
  value = ["${split(",", length(var.external_endpoints) == 0 ? join(",", powerdns_record.etcd.*.name) : join(",", var.external_endpoints))}"]
}

output "ingress_external_fqdn" {
  # Remove "." at the end of each name
  value = "${replace(replace(join(";", powerdns_record.ingress_public.*.name), "/[.];/", " "), "/[.]$/", "")}"
}

output "ingress_internal_fqdn" {
  value = "${replace(replace(join(";", powerdns_record.ingress_private.*.name), "/[.];/", " "), "/[.]$/", "")}"
}

output "api_external_fqdn" {
  value = "${replace(replace(join(";", powerdns_record.api_external.*.name), "/[.];/", " "), "/[.]$/", "")}"
}

output "api_internal_fqdn" {
  value = "${replace(replace(join(";", powerdns_record.api_internal.*.name), "/[.];/", " "), "/[.]$/", "")}"
}
