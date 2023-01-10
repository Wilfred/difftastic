output "update_ca_certificates_dropin_rendered" {
  value = "${data.template_file.update_ca_certificates_dropin.rendered}"
}

output "ca_cert_pem_list" {
  value = [
    "${var.root_ca_cert_pem}",
    "${var.ingress_ca_cert_pem}",
    "${var.etcd_ca_cert_pem}",
  ]
}

output "etcd_crt_id_list" {
  value = ["${flatten(list(
    data.ignition_file.root_ca.*.id,
    data.ignition_file.etcd_ca.*.id,
  ))}"]
}

output "ignition_file_id_list" {
  value = [
    "${data.ignition_file.root_ca_cert_pem.id}",
    "${data.ignition_file.ingress_ca_cert_pem.id}",
    "${data.ignition_file.etcd_ca_cert_pem.id}",
    "${data.ignition_file.installer_runtime_mappings.id}",
  ]
}

output "ignition_systemd_id_list" {
  value = [
    "${data.ignition_systemd_unit.docker_dropin.id}",
    "${data.ignition_systemd_unit.kubelet.id}",
    "${data.ignition_systemd_unit.locksmithd.id}",
    "${data.ignition_systemd_unit.update_ca_certificates_dropin.id}",
    "${data.ignition_systemd_unit.rm_assets.id}",
  ]
}
