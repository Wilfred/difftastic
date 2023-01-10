data "ignition_config" "etcd" {
  count = "${var.self_hosted_etcd != "" ? 0 : var.instance_count}"

  users = [
    "${data.ignition_user.core.id}",
  ]

  files = ["${compact(list(
    data.ignition_file.resolv_conf.id,
    var.ign_profile_env_id,
    var.ign_systemd_default_env_id,
   ))}",
    "${var.ign_etcd_crt_id_list}",
    "${var.ign_ntp_dropin_id}",
  ]

  systemd = [
    "${data.ignition_systemd_unit.locksmithd.*.id[count.index]}",
    "${var.ign_etcd_dropin_id_list[count.index]}",
    "${var.ign_coreos_metadata_dropin_id}",
  ]
}

data "ignition_file" "resolv_conf" {
  path       = "/etc/resolv.conf"
  mode       = 0644
  uid        = 0
  filesystem = "root"

  content {
    content = "${var.resolv_conf_content}"
  }
}

data "ignition_systemd_unit" "locksmithd" {
  count = "${var.instance_count}"

  name    = "locksmithd.service"
  enabled = true

  dropin = [
    {
      name = "40-etcd-lock.conf"

      content = <<EOF
[Service]
Environment=REBOOT_STRATEGY=etcd-lock
${var.tls_enabled ? "Environment=\"LOCKSMITHD_ETCD_CAFILE=/etc/ssl/etcd/ca.crt\"" : ""}
${var.tls_enabled ? "Environment=\"LOCKSMITHD_ETCD_KEYFILE=/etc/ssl/etcd/client.key\"" : ""}
${var.tls_enabled ? "Environment=\"LOCKSMITHD_ETCD_CERTFILE=/etc/ssl/etcd/client.crt\"" : ""}
Environment="LOCKSMITHD_ENDPOINT=${var.tls_enabled ? "https" : "http"}://${var.cluster_name}-etcd-${count.index}.${var.base_domain}:2379"
EOF
    },
  ]
}

data "ignition_user" "core" {
  name                = "core"
  ssh_authorized_keys = ["${var.core_public_keys}"]
}
