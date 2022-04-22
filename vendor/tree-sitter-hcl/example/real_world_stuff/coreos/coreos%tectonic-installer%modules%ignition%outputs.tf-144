output "max_user_watches_id" {
  value = "${data.ignition_file.max_user_watches.id}"
}

output "max_user_watches_rendered" {
  value = "${data.template_file.max_user_watches.rendered}"
}

output "docker_dropin_id" {
  value = "${data.ignition_systemd_unit.docker_dropin.id}"
}

output "docker_dropin_rendered" {
  value = "${data.template_file.docker_dropin.rendered}"
}

output "kubelet_service_id" {
  value = "${data.ignition_systemd_unit.kubelet.id}"
}

output "kubelet_service_rendered" {
  value = "${data.template_file.kubelet.rendered}"
}

output "k8s_node_bootstrap_service_id" {
  value = "${data.ignition_systemd_unit.k8s_node_bootstrap.id}"
}

output "k8s_node_bootstrap_service_rendered" {
  value = "${data.template_file.k8s_node_bootstrap.rendered}"
}

output "ntp_dropin_id" {
  value = "${data.ignition_file.ntp_dropin.id}"
}

output "ntp_dropin_rendered" {
  value = "${data.template_file.ntp_dropin.rendered}"
}

output "init_assets_service_id" {
  value = "${data.ignition_systemd_unit.init_assets.id}"
}

output "rm_assets_service_id" {
  value = "${data.ignition_systemd_unit.rm_assets.id}"
}

output "rm_assets_path_unit_id" {
  value = "${data.ignition_systemd_unit.rm_assets_path_unit.id}"
}

output "s3_puller_id" {
  value = "${data.ignition_file.s3_puller.id}"
}

output "s3_puller_rendered" {
  value = "${data.template_file.s3_puller.rendered}"
}

output "locksmithd_service_id" {
  value = "${data.ignition_systemd_unit.locksmithd.id}"
}

output "installer_runtime_mappings_id" {
  value = "${data.ignition_file.installer_runtime_mappings.id}"
}

output "installer_runtime_mappings_rendered" {
  value = "${data.template_file.installer_runtime_mappings.rendered}"
}

output "installer_kubelet_env_id" {
  value = "${data.ignition_file.installer_kubelet_env.id}"
}

output "installer_kubelet_env_rendered" {
  value = "${data.template_file.installer_kubelet_env.rendered}"
}

output "tx_off_service_id" {
  value = "${data.ignition_systemd_unit.tx_off.id}"
}

output "tx_off_service_rendered" {
  value = "${data.template_file.tx_off.rendered}"
}

output "azure_udev_rules_id" {
  value = "${data.ignition_file.azure_udev_rules.id}"
}

output "azure_udev_rules_rendered" {
  value = "${data.template_file.azure_udev_rules.rendered}"
}

output "etcd_dropin_id_list" {
  value = "${data.ignition_systemd_unit.etcd.*.id}"
}

output "etcd_dropin_rendered_list" {
  value = "${data.template_file.etcd.*.rendered}"
}

output "coreos_metadata_dropin_id" {
  value = "${data.ignition_systemd_unit.coreos_metadata.id}"
}

output "coreos_metadata_dropin_rendered" {
  value = "${data.template_file.coreos_metadata.rendered}"
}

output "gcs_puller_id" {
  value = "${data.ignition_file.gcs_puller.id}"
}

output "update_ca_certificates_dropin_id" {
  value = "${data.ignition_systemd_unit.update_ca_certificates_dropin.id}"
}

output "update_ca_certificates_dropin_rendered" {
  value = "${data.template_file.update_ca_certificates_dropin.rendered}"
}

output "ca_cert_id_list" {
  value = [
    "${data.ignition_file.kube_ca_cert_pem.id}",
    "${data.ignition_file.ingress_ca_cert_pem.id}",
    "${data.ignition_file.etcd_ca_cert_pem.id}",
    "${data.ignition_file.custom_ca_cert_pem.*.id}",
  ]
}

output "ca_cert_pem_list" {
  value = [
    "${var.kube_ca_cert_pem}",
    "${var.ingress_ca_cert_pem}",
    "${var.etcd_ca_cert_pem}",
    "${var.custom_ca_cert_pem_list}",
  ]
}

output "etcd_crt_id_list" {
  value = [
    "${data.ignition_file.etcd_ca.*.id}",
    "${data.ignition_file.etcd_client_key.*.id}",
    "${data.ignition_file.etcd_client_crt.*.id}",
    "${data.ignition_file.etcd_server_key.*.id}",
    "${data.ignition_file.etcd_server_crt.*.id}",
    "${data.ignition_file.etcd_peer_key.*.id}",
    "${data.ignition_file.etcd_peer_crt.*.id}",
  ]
}

output "iscsi_service_id" {
  value = "${data.ignition_systemd_unit.iscsi.id}"
}

output "profile_env_id" {
  value = "${join("",data.ignition_file.profile_env.*.id)}"
}

output "profile_env_rendered" {
  value = "${join("",data.template_file.profile_env.*.rendered)}"
}

output "systemd_default_env_id" {
  value = "${join("",data.ignition_file.systemd_default_env.*.id)}"
}

output "systemd_default_env_rendered" {
  value = "${join("",data.template_file.systemd_default_env.*.rendered)}"
}

output "nfs_config_id" {
  value = "${join("" , data.ignition_file.nfs_config.*.id)}"
}

output "nfs_config_rendered" {
  value = "${file(var.nfs_config_file)}"
}
