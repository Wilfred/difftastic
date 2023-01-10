resource "openstack_dns_recordset_v2" "etcd_a_nodes" {
  count   = "${var.self_hosted_etcd != "" ? 0 : var.etcd_count}"
  type    = "A"
  ttl     = "60"
  zone_id = "${data.openstack_dns_zone_v2.tectonic.id}"
  name    = "${var.cluster_name}-etcd-${count.index}.${var.base_domain}."
  records = ["${var.etcd_ip_addresses[count.index]}"]
}

resource "openstack_dns_recordset_v2" "etcd_srv_discover" {
  count   = "${var.self_hosted_etcd != "" ? 0 : 1}"
  name    = "${var.etcd_tls_enabled ? "_etcd-server-ssl._tcp" : "_etcd-server._tcp"}.${var.base_domain}."
  type    = "SRV"
  zone_id = "${data.openstack_dns_zone_v2.tectonic.id}"
  records = ["${formatlist("0 0 2380 %s", openstack_dns_recordset_v2.etcd_a_nodes.*.name)}"]
  ttl     = "300"
}

resource "openstack_dns_recordset_v2" "etcd_srv_client" {
  count   = "${var.self_hosted_etcd != "" ? 0 : 1}"
  name    = "${var.etcd_tls_enabled ? "_etcd-client-ssl._tcp" : "_etcd-client._tcp"}.${var.base_domain}."
  type    = "SRV"
  zone_id = "${data.openstack_dns_zone_v2.tectonic.id}"
  records = ["${formatlist("0 0 2379 %s", openstack_dns_recordset_v2.etcd_a_nodes.*.name)}"]
  ttl     = "60"
}
