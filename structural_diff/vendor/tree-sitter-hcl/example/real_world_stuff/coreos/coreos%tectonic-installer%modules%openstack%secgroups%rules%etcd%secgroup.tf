resource "openstack_networking_secgroup_rule_v2" "etcd" {
  direction         = "ingress"
  ethertype         = "IPv4"
  port_range_min    = 2379
  port_range_max    = 2380
  protocol          = "tcp"
  remote_ip_prefix  = "${var.cluster_cidr}"
  security_group_id = "${var.secgroup_id}"
}

resource "openstack_networking_secgroup_rule_v2" "bootstrap_etcd" {
  count             = "${var.self_hosted ? 1 : 0}"
  direction         = "ingress"
  ethertype         = "IPv4"
  port_range_min    = 12379
  port_range_max    = 12380
  protocol          = "tcp"
  remote_ip_prefix  = "${var.cluster_cidr}"
  security_group_id = "${var.secgroup_id}"
}
