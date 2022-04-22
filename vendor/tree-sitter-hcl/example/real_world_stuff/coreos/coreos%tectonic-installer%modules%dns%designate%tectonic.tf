data "openstack_dns_zone_v2" "tectonic" {
  name = "${var.base_domain}."
}

resource "openstack_dns_recordset_v2" "tectonic-api" {
  count   = "1"
  zone_id = "${data.openstack_dns_zone_v2.tectonic.id}"
  name    = "${var.cluster_name}-k8s.${var.base_domain}."
  type    = "A"
  ttl     = "60"
  records = ["${var.api_ip_addresses}"]
}

resource "openstack_dns_recordset_v2" "tectonic-console" {
  count   = "${var.tectonic_vanilla_k8s ? 0 : 1}"
  zone_id = "${data.openstack_dns_zone_v2.tectonic.id}"
  name    = "${var.cluster_name}.${var.base_domain}."
  type    = "A"
  ttl     = "60"
  records = ["${var.worker_ip_addresses}"]
}
