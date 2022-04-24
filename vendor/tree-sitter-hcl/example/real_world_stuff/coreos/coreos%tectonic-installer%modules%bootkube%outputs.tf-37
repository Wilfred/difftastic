# This output is meant to be used to inject a dependency on the generated
# assets. As of Terraform v0.9, it is difficult to make a module depend on
# another module (no depends_on, no triggers), or to make a data source
# depend on a module (no depends_on, no triggers, generally no dummy variable).
#
# For instance, using the 'archive_file' data source against the generated
# assets, which is a common use-case, is tricky. There is no mechanism for
# defining explicit dependencies and the only available variables are for the
# source, destination and archive type, leaving little opportunities for us to
# inject a dependency. Thanks to the property described below, this output can
# be used as part of the output filename, in order to enforce the creation of
# the archive after the assets have been properly generated.
#
# Both localfile and template_dir providers compute their IDs by hashing
# the content of the resources on disk. Because this output is computed from the
# combination of all the resources' IDs, it can't be guessed and can only be
# interpolated once the assets have all been created.
output "id" {
  value = "${sha1("
  ${local_file.kubeconfig.id}
  ${local_file.bootkube_sh.id}
  ${template_dir.bootkube.id} ${template_dir.bootkube_bootstrap.id}
  ${join(" ",
    template_dir.etcd_manifests.*.id,
    template_dir.etcd_bootstrap_manifests.*.id,
    local_file.etcd_bootstrap_service.*.id,
    local_file.migrate_etcd_cluster.*.id,
    local_file.migrate_etcd_cluster_pv_backup.*.id,
    )}
  ")}"
}

output "kubeconfig" {
  value = "${data.template_file.kubeconfig.rendered}"
}

output "systemd_service_rendered" {
  value = "${data.template_file.bootkube_service.rendered}"
}

output "systemd_service_id" {
  value = "${data.ignition_systemd_unit.bootkube_service.id}"
}

output "systemd_path_unit_rendered" {
  value = "${data.template_file.bootkube_path_unit.rendered}"
}

output "systemd_path_unit_id" {
  value = "${data.ignition_systemd_unit.bootkube_path_unit.id}"
}

output "kube_dns_service_ip" {
  value = "${cidrhost(var.service_cidr, 10)}"
}
