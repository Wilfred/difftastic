output "secgroup_master_names" {
  value = [
    "${openstack_networking_secgroup_v2.base.name}",
    "${openstack_networking_secgroup_v2.k8s.name}",
    "${openstack_networking_secgroup_v2.etcd.name}",
  ]
}

output "secgroup_master_ids" {
  value = [
    "${openstack_networking_secgroup_v2.base.id}",
    "${openstack_networking_secgroup_v2.k8s.id}",
    "${openstack_networking_secgroup_v2.etcd.id}",
  ]
}

output "secgroup_node_names" {
  value = [
    "${openstack_networking_secgroup_v2.base.name}",
    "${openstack_networking_secgroup_v2.k8s.name}",
  ]
}

output "secgroup_node_ids" {
  value = [
    "${openstack_networking_secgroup_v2.base.id}",
    "${openstack_networking_secgroup_v2.k8s.id}",
    "${openstack_networking_secgroup_v2.k8s_nodes.id}",
  ]
}

output "secgroup_etcd_names" {
  value = [
    "${openstack_networking_secgroup_v2.base.name}",
    "${openstack_networking_secgroup_v2.etcd.name}",
  ]
}

output "secgroup_etcd_ids" {
  value = [
    "${openstack_networking_secgroup_v2.base.id}",
    "${openstack_networking_secgroup_v2.etcd.id}",
  ]
}
