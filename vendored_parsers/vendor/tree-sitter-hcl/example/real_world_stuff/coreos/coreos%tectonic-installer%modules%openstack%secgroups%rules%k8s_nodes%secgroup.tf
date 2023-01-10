resource "openstack_networking_secgroup_rule_v2" "http" {
  direction         = "ingress"
  ethertype         = "IPv4"
  port_range_min    = 80
  port_range_max    = 80
  protocol          = "tcp"
  remote_ip_prefix  = "${var.cluster_cidr}"
  security_group_id = "${var.secgroup_id}"
}
