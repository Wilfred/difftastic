provider "powerdns" {
  version    = "0.1.0"
  api_key    = "${var.api_key}"
  server_url = "${var.api_url}"
}

resource "powerdns_record" "api_internal" {
  count = "${var.tectonic_private_endpoints}"
  zone  = "${var.base_domain}"
  name  = "${var.custom_dns_name == "" ? var.cluster_name : var.custom_dns_name}-api.${var.base_domain}."
  ttl   = 60
  type  = "ALIAS"

  records = ["${var.api_internal_elb_dns_name}."]
}

resource "powerdns_record" "api_external" {
  count   = "${var.tectonic_public_endpoints}"
  zone    = "${var.base_domain}"
  name    = "${var.custom_dns_name == "" ? var.cluster_name : var.custom_dns_name}-api.${var.base_domain}."
  type    = "ALIAS"
  ttl     = 60
  records = ["${var.api_external_elb_dns_name}."]
}

resource "powerdns_record" "ingress_public" {
  count   = "${var.tectonic_public_endpoints}"
  zone    = "${var.base_domain}"
  name    = "${var.custom_dns_name == "" ? var.cluster_name : var.custom_dns_name}.${var.base_domain}."
  type    = "ALIAS"
  ttl     = 60
  records = ["${var.console_elb_dns_name}."]
}

resource "powerdns_record" "ingress_private" {
  count = "${var.tectonic_private_endpoints}"
  zone  = "${var.base_domain}"
  name  = "${var.custom_dns_name == "" ? var.cluster_name : var.custom_dns_name}.${var.base_domain}."
  type  = "ALIAS"
  ttl   = 60

  records = [
    "${var.console_elb_dns_name}.",
  ]
}

resource "powerdns_record" "etcd" {
  count   = "${var.etcd_count}"
  zone    = "${var.base_domain}"
  name    = "${var.cluster_name}-etcd-${count.index}.${var.base_domain}."
  type    = "A"
  ttl     = 60
  records = ["${var.etcd_ip_addresses[count.index]}"]
}
