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
  value = "${sha1("${template_dir.tectonic.id} ${local_file.tectonic.id}")}"
}

output "systemd_service_rendered" {
  value = "${data.template_file.tectonic_service.rendered}"
}

output "systemd_service_id" {
  value = "${data.ignition_systemd_unit.tectonic_service.id}"
}

output "systemd_path_unit_rendered" {
  value = "${data.template_file.tectonic_path.rendered}"
}

output "systemd_path_unit_id" {
  value = "${data.ignition_systemd_unit.tectonic_path.id}"
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
