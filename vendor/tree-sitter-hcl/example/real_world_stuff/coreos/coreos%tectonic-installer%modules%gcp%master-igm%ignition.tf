data "ignition_config" "main" {
  files = ["${compact(list(
    data.ignition_file.detect_master.id,
    data.ignition_file.init_assets.id,
    data.ignition_file.kubeconfig.id,
    var.ign_gcs_puller_id,
    var.ign_installer_kubelet_env_id,
    var.ign_installer_runtime_mappings_id,
    var.ign_max_user_watches_id,
    var.ign_nfs_config_id,
    var.ign_ntp_dropin_id,
    var.ign_profile_env_id,
    var.ign_systemd_default_env_id,
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
    var.ign_tectonic_path_unit_id,
    var.ign_tectonic_service_id,
    var.ign_update_ca_certificates_dropin_id,
   ))}"]
}

data "ignition_file" "kubeconfig" {
  filesystem = "root"
  path       = "/etc/kubernetes/kubeconfig"
  mode       = 0644

  content {
    content = "${var.kubeconfig_content}"
  }
}

data "template_file" "init_assets" {
  template = "${file("${path.module}/resources/init-assets.sh")}"

  vars {
    assets_gcs_location = "${var.assets_gcs_location}"
    gcloudsdk_image     = "${var.container_images["gcloudsdk"]}"
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

data "template_file" "detect_master" {
  template = "${file("${path.module}/resources/detect-master.sh")}"

  vars {
    region              = "${var.region}"
    instance_group_name = "${var.cluster_name}-master-igm-0"
    gcloudsdk_image     = "${var.container_images["gcloudsdk"]}"
  }
}

data "ignition_file" "detect_master" {
  filesystem = "root"
  path       = "/opt/detect-master.sh"
  mode       = 0755

  content {
    content = "${data.template_file.detect_master.rendered}"
  }
}
