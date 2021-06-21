resource "openstack_networking_secgroup_v2" "base" {
  name        = "${var.cluster_name}_base"
  description = "SSH and ICMP"
}

module "default" {
  source      = "./rules/default"
  secgroup_id = "${openstack_networking_secgroup_v2.base.id}"
}

resource "openstack_networking_secgroup_v2" "k8s" {
  name                 = "${var.cluster_name}_k8s"
  description          = "Ports needed by Kubernetes"
  delete_default_rules = true
}

module "k8s" {
  source       = "./rules/k8s"
  secgroup_id  = "${openstack_networking_secgroup_v2.k8s.id}"
  cluster_cidr = "${var.cluster_cidr}"
}

resource "openstack_networking_secgroup_v2" "k8s_nodes" {
  name                 = "${var.cluster_name}_k8s_nodes"
  description          = "Ports needed by Kubernetes nodes"
  delete_default_rules = true
}

module "k8s_nodes" {
  source       = "./rules/k8s_nodes"
  secgroup_id  = "${openstack_networking_secgroup_v2.k8s_nodes.id}"
  cluster_cidr = "${var.cluster_cidr}"
}

resource "openstack_networking_secgroup_v2" "etcd" {
  name                 = "${var.cluster_name}_etcd"
  description          = "Ports needed by etcd"
  delete_default_rules = true
}

module "etcd" {
  source       = "./rules/etcd"
  secgroup_id  = "${openstack_networking_secgroup_v2.etcd.id}"
  self_hosted  = "${var.self_hosted_etcd != ""}"
  cluster_cidr = "${var.cluster_cidr}"
}
