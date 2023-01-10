data "ignition_config" "node" {
  count = "${var.instance_count}"

  users = [
    "${data.ignition_user.core.id}",
  ]

  files = ["${compact(list(
    data.ignition_file.node_hostname.*.id[count.index],
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
    var.ign_docker_dropin_id,
    var.ign_locksmithd_service_id,
    var.ign_k8s_node_bootstrap_service_id,
    var.ign_kubelet_service_id,
    var.ign_bootkube_service_id,
    var.ign_tectonic_service_id,
    var.ign_bootkube_path_unit_id,
    var.ign_tectonic_path_unit_id,
    var.ign_update_ca_certificates_dropin_id,
    var.ign_iscsi_service_id,
   ))}"]

  networkd = [
    "${data.ignition_networkd_unit.vmnetwork.*.id[count.index]}",
  ]
}

data "ignition_user" "core" {
  name                = "core"
  ssh_authorized_keys = ["${var.core_public_keys}"]
}

data "ignition_networkd_unit" "vmnetwork" {
  count = "${var.instance_count}"
  name  = "00-ens192.network"

  content = <<EOF
  [Match]
  Name=ens192
  [Network]
  DNS=${var.dns_server}
  Address=${var.ip_address["${count.index}"]}
  Gateway=${var.gateways["${count.index}"]}
  UseDomains=yes
  Domains=${var.base_domain}
EOF
}

data "ignition_file" "node_hostname" {
  count      = "${var.instance_count}"
  path       = "/etc/hostname"
  mode       = 0644
  filesystem = "root"

  content {
    content = "${var.hostname["${count.index}"]}"
  }
}
