data "ignition_config" "main" {
  files = [
    "${compact(list(
      data.ignition_file.init_assets.id,
      data.ignition_file.rm_assets.id,
      var.do_pusher_id,
      var.ign_installer_kubelet_env_id,
      var.ign_installer_runtime_mappings_id,
      var.ign_max_user_watches_id,
      var.ign_nfs_config_id,
      var.ign_ntp_dropin_id,
      var.ign_do_puller_id,
      var.ign_profile_env_id,
      var.ign_systemd_default_env_id,
      var.ign_resolved_conf_id,
    ))}",
    "${var.ign_ca_cert_id_list}",
  ]

  systemd = ["${compact(list(
    var.ign_bootkube_path_unit_id,
    var.ign_bootkube_service_id,
    var.ign_docker_dropin_id,
    var.ign_init_assets_service_id,
    var.ign_iscsi_service_id,
    var.ign_k8s_node_bootstrap_service_id,
    var.ign_kubelet_service_id,
    var.ign_locksmithd_service_id,
    var.ign_rm_assets_path_unit_id,
    var.ign_rm_assets_service_id,
    var.ign_tectonic_path_unit_id,
    var.ign_tectonic_service_id,
    var.ign_update_ca_certificates_dropin_id,
   ))}"]
}

data "template_file" "init_assets" {
  template = "${file("${path.module}/resources/init-assets.sh")}"

  vars {
    spaces_bucket = "${var.spaces_bucket}"
  }
}

data "ignition_file" "init_assets" {
  filesystem = "root"
  path       = "/opt/init-assets.sh"
  mode       = 0755

  content {
    content = "${data.template_file.init_assets.rendered}"
  }
}

data "template_file" "rm_assets" {
  template = "${file("${path.module}/resources/rm-assets.sh")}"

  vars {
    spaces_bucket = "${var.spaces_bucket}"
  }
}

data "ignition_file" "rm_assets" {
  filesystem = "root"
  path       = "/opt/rm-assets.sh"
  mode       = 0755

  content {
    content = "${data.template_file.rm_assets.rendered}"
  }
}
