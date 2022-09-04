resource "openstack_dns_recordset_v2" "master_nodes" {
  count   = "${var.master_count}"
  zone_id = "${data.openstack_dns_zone_v2.tectonic.id}"
  name    = "${var.cluster_name}-master-${count.index}.${var.base_domain}."
  type    = "A"
  ttl     = "60"
  records = ["${var.master_ip_addresses[count.index]}"]
}
