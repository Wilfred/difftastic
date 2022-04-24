output "kubeconfig-kubelet" {
  value = "${data.template_file.kubeconfig-kubelet.rendered}"
}

output "systemd_service_id" {
  value = "${data.ignition_systemd_unit.bootkube_service.id}"
}

output "kube_dns_service_ip" {
  value = "${cidrhost(var.service_cidr, 10)}"
}

output "kubeconfig_rendered" {
  value = "${data.template_file.kubeconfig.rendered}"
}

output "kubeconfig-kubelet_rendered" {
  value = "${data.template_file.kubeconfig-kubelet.rendered}"
}

output "ignition_file_id_list" {
  value = ["${flatten(list(
    list(
      data.ignition_file.bootkube_sh.id,
      data.ignition_file.kubeconfig.id,
      data.ignition_file.kubeconfig-kubelet.id,
      data.ignition_file.service_account_key.id,
      data.ignition_file.service_account_crt.id,
    ),
    data.ignition_file.manifest_file_list.*.id,
  ))}"]
}
