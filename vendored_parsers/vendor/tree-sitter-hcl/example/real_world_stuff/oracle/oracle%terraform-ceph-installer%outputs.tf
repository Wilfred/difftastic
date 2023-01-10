
output "vcn_id" {
  value = "${module.ceph_network.vcn_id}"
}

output "subnet_id_list" {
  value = "${module.ceph_network.subnet_id_list}"
}

output "ceph_deployer_ip" {
  value = "${module.ceph_deployer.ip}"
}

output "ceph_deployer_hostname" {
  value = "${module.ceph_deployer.hostname}"
}

output "ceph_monitor_ip_list" {
  value = "${module.ceph_monitors.ip_list}"
}

output "ceph_monitor_hostname_list" {
  value = "${module.ceph_monitors.hostname_list}"
}

output "ceph_osd_ip_list" {
  value = "${module.ceph_osds.ip_list}"
}

output "ceph_osd_hostname_list" {
  value = "${module.ceph_osds.hostname_list}"
}

output "ceph_mds_ip_list" {
  value = "${module.ceph_mds.ip_list}"
}

output "ceph_mds_hostname_list" {
  value = "${module.ceph_mds.hostname_list}"
}

output "ceph_client_ip" {
  value = "${module.ceph_client.ip}"
}

output "ceph_client_hostname" {
  value = "${module.ceph_client.hostname}"
}
