resource "openstack_dns_recordset_v2" "worker_nodes" {
  count   = "${var.worker_count}"
  zone_id = "${data.openstack_dns_zone_v2.tectonic.id}"
  name    = "${var.cluster_name}-worker-${count.index}.${var.base_domain}."
  type    = "A"
  ttl     = "60"
  records = ["${var.worker_ip_addresses[count.index]}"]
}

resource "openstack_dns_recordset_v2" "worker_nodes_public" {
  // hack: worker_public_ips_enabled is a workaround for https://github.com/hashicorp/terraform/issues/10857
  count   = "${var.worker_public_ips_enabled ? var.worker_count : 0}"
  zone_id = "${data.openstack_dns_zone_v2.tectonic.id}"
  name    = "${var.cluster_name}-worker-${count.index}-public.${var.base_domain}."
  type    = "A"
  ttl     = "60"
  records = ["${var.worker_public_ips[count.index]}"]
}
