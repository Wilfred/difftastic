output "systemd_service_rendered" {
  value = "${data.template_file.tectonic_service.rendered}"
}

output "systemd_service_id" {
  value = "${data.ignition_systemd_unit.tectonic_service.id}"
}

output "ignition_file_id_list" {
  value = ["${flatten(list(
    list(
      data.ignition_file.tectonic_sh.id,
      data.ignition_file.tectonic_wrapper_sh.id,
    ),
    data.ignition_file.tectonic_manifest_list.*.id,
  ))}"]
}

output "cluster_id" {
  value = "${format(
    "%s-%s-%s-%s-%s",
    substr(random_id.cluster_id.hex, 0, 8),
    substr(random_id.cluster_id.hex, 8, 4),
    substr(random_id.cluster_id.hex, 12, 4),
    substr(random_id.cluster_id.hex, 16, 4),
    substr(random_id.cluster_id.hex, 20, 12)
  )}"
}
