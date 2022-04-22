resource "openstack_networking_secgroup_rule_v2" "https" {
  direction         = "ingress"
  ethertype         = "IPv4"
  port_range_min    = 443
  port_range_max    = 443
  protocol          = "tcp"
  remote_ip_prefix  = "0.0.0.0/0"
  security_group_id = "${var.secgroup_id}"
}

resource "openstack_networking_secgroup_rule_v2" "cAdvisor" {
  direction         = "ingress"
  ethertype         = "IPv4"
  port_range_min    = 4194
  port_range_max    = 4194
  protocol          = "tcp"
  remote_ip_prefix  = "${var.cluster_cidr}"
  security_group_id = "${var.secgroup_id}"
}

resource "openstack_networking_secgroup_rule_v2" "flannel" {
  direction         = "ingress"
  ethertype         = "IPv4"
  port_range_min    = 4789
  port_range_max    = 4789
  protocol          = "udp"
  remote_ip_prefix  = "${var.cluster_cidr}"
  security_group_id = "${var.secgroup_id}"
}

resource "openstack_networking_secgroup_rule_v2" "kubelet" {
  direction         = "ingress"
  ethertype         = "IPv4"
  port_range_min    = 10250
  port_range_max    = 10250
  protocol          = "tcp"
  remote_ip_prefix  = "0.0.0.0/0"
  security_group_id = "${var.secgroup_id}"
}

resource "openstack_networking_secgroup_rule_v2" "node_ports" {
  direction         = "ingress"
  ethertype         = "IPv4"
  port_range_min    = 30000
  port_range_max    = 32767
  protocol          = "tcp"
  remote_ip_prefix  = "0.0.0.0/0"
  security_group_id = "${var.secgroup_id}"
}
