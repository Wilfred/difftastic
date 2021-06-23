output "master_instance_ids" {
  value = "${concat(module.instances-k8smaster-ad1.ids,module.instances-k8smaster-ad2.ids,module.instances-k8smaster-ad3.ids )}"
}

output "worker_instance_ids" {
  value = "${concat(module.instances-k8sworker-ad1.ids,module.instances-k8sworker-ad2.ids,module.instances-k8sworker-ad3.ids )}"
}

output "master_lb_id" {
  value = "${module.k8smaster-public-lb.load_balancer_id}"
}

output "master_lb_backendset_name" {
  value = "${module.k8smaster-public-lb.backendset_name}"
}

output "etcd_lb_id" {
  value = "${module.etcd-lb.load_balancer_id}"
}

output "etcd_lb_backendset_2379_name" {
  value = "${module.etcd-lb.backendset_2379_name}"
}

output "etcd_lb_backendset_2380_name" {
  value = "${module.etcd-lb.backendset_2380_name}"
}

output "vcn_id" {
  value = "${module.vcn.id}"
}

output "vcn_route_for_complete_id" {
  value = "${module.vcn.route_for_complete_id}"
}

output "vcn_dhcp_options_id" {
  value = "${module.vcn.dhcp_options_id}"
}

output "etcd_subnet_ids" {
  value = ["${module.vcn.etcd_subnet_ad1_id}", "${module.vcn.etcd_subnet_ad2_id}", "${module.vcn.etcd_subnet_ad3_id}"]
}

output "worker_subnet_ids" {
  value = ["${module.vcn.k8worker_subnet_ad1_id}", "${module.vcn.k8worker_subnet_ad2_id}", "${module.vcn.k8worker_subnet_ad3_id}"]
}

output "master_subnet_ids" {
  value = ["${module.vcn.k8smaster_subnet_ad1_id}", "${module.vcn.k8smaster_subnet_ad2_id}", "${module.vcn.k8smaster_subnet_ad3_id}"]
}

output "public_subnet_ids" {
  value = ["${module.vcn.public_subnet_ad1_id}", "${module.vcn.public_subnet_ad2_id}", "${module.vcn.public_subnet_ad3_id}", ""]
}

output "nat_subnet_ids" {
  value = ["${module.vcn.nat_subnet_ad1_id}", "${module.vcn.nat_subnet_ad2_id}", "${module.vcn.nat_subnet_ad3_id}", ""]
}

output "worker_ssh_ingress_cidr" {
  value = "${var.worker_ssh_ingress}"
}

output "worker_node_port_ingress_cidr" {
  value = "${var.worker_nodeport_ingress}"
}

output "master_ssh_ingress_cidr" {
  value = "${var.master_ssh_ingress}"
}

output "master_https_ingress_cidr" {
  value = "${var.master_https_ingress}"
}

output "etcd_ssh_ingress_cidr" {
  value = "${var.etcd_ssh_ingress}"
}

output "root_ca_pem" {
  sensitive = true
  value     = "${module.k8s-tls.root_ca_pem}"
}

output "root_ca_key" {
  sensitive = true
  value     = "${module.k8s-tls.root_ca_key}"
}

output "api_server_private_key_pem" {
  sensitive = true
  value     = "${module.k8s-tls.api_server_private_key_pem}"
}

output "api_server_cert_pem" {
  sensitive = true
  value     = "${module.k8s-tls.api_server_cert_pem}"
}

output "api_server_admin_token" {
  sensitive = true
  value     = "${module.k8s-tls.api_server_admin_token}"
}

output "ssh_private_key" {
  sensitive = true
  value     = "${module.k8s-tls.ssh_private_key}"
}

output "ssh_public_key_openssh" {
  sensitive = true
  value     = "${module.k8s-tls.ssh_public_key_openssh}"
}

output "etcd_lb_ip" {
  value = ["${module.etcd-lb.ip_addresses}"]
}

output "etcd_public_ips" {
  value = "${compact(concat(module.instances-etcd-ad1.instance_public_ips,module.instances-etcd-ad2.instance_public_ips,module.instances-etcd-ad3.instance_public_ips))}"
}

output "etcd_private_ips" {
  value = "${concat(module.instances-etcd-ad1.private_ips,module.instances-etcd-ad2.private_ips,module.instances-etcd-ad3.private_ips)}"
}

output "master_lb_ip" {
  value = ["${module.k8smaster-public-lb.ip_addresses}"]
}

output "master_public_ips" {
  value = "${compact(concat(module.instances-k8smaster-ad1.public_ips,module.instances-k8smaster-ad2.public_ips,module.instances-k8smaster-ad3.public_ips))}"
}

output "master_private_ips" {
  value = "${concat(module.instances-k8smaster-ad1.private_ips,module.instances-k8smaster-ad2.private_ips,module.instances-k8smaster-ad3.private_ips )}"
}

output "worker_public_ips" {
  value = "${compact(concat(module.instances-k8sworker-ad1.public_ips,module.instances-k8sworker-ad2.public_ips,module.instances-k8sworker-ad3.public_ips))}"
}

output "worker_private_ips" {
  value = "${concat(module.instances-k8sworker-ad1.private_ips,module.instances-k8sworker-ad2.private_ips,module.instances-k8sworker-ad3.private_ips )}"
}

output "nat_instance_public_ips" {
  value = "${compact(concat(module.vcn.nat_instance_ad1_public_ips,module.vcn.nat_instance_ad2_public_ips,module.vcn.nat_instance_ad3_public_ips))}"
}

output "nat_instance_private_ips" {
  value = "${compact(concat(module.vcn.nat_instance_ad1_private_ips,module.vcn.nat_instance_ad2_private_ips,module.vcn.nat_instance_ad3_private_ips))}"
}

output "control_plane_subnet_access" {
  value = "${module.vcn.control_plane_subnet_access}"
}

output "kubeconfig" {
  sensitive = true
  value     = "${module.kubeconfig.kubeconfig}"
}
