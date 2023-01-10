data "ignition_config" "etcd" {
  count = "${length(var.external_endpoints) == 0 ? var.instance_count : 0}"

  users = [
    "${data.ignition_user.core.id}",
  ]

  files = ["${compact(list(
    data.ignition_file.node_hostname.*.id[count.index],
    var.ign_ntp_dropin_id,
    var.ign_profile_env_id,
    var.ign_systemd_default_env_id,
  ))}",
    "${var.ign_etcd_crt_id_list}",
  ]

  systemd = [
    "${data.ignition_systemd_unit.locksmithd.*.id[count.index]}",
    "${var.ign_etcd_dropin_id_list[count.index]}",
  ]

  networkd = [
    "${data.ignition_networkd_unit.vmnetwork.*.id[count.index]}",
  ]
}

data "ignition_user" "core" {
  name                = "core"
  ssh_authorized_keys = ["${var.core_public_keys}"]
}

data "ignition_systemd_unit" "locksmithd" {
  count = "${length(var.external_endpoints) == 0 ? var.instance_count : 0}"

  name    = "locksmithd.service"
  enabled = true

  dropin = [
    {
      name    = "40-etcd-lock.conf"
      content = "[Service]\nEnvironment=REBOOT_STRATEGY=etcd-lock\n"
      name    = "40-etcd-lock.conf"

      content = <<EOF
[Service]
Environment=REBOOT_STRATEGY=etcd-lock
Environment=LOCKSMITHD_ETCD_CAFILE=/etc/ssl/etcd/ca.crt
Environment=LOCKSMITHD_ETCD_KEYFILE=/etc/ssl/etcd/client.key
Environment=LOCKSMITHD_ETCD_CERTFILE=/etc/ssl/etcd/client.crt
Environment=LOCKSMITHD_ENDPOINT=https://${var.hostname["${count.index}"]}.${var.base_domain}:2379
EOF
    },
  ]
}

data "ignition_file" "node_hostname" {
  count      = "${length(var.external_endpoints) == 0 ? var.instance_count : 0}"
  path       = "/etc/hostname"
  mode       = 0644
  filesystem = "root"

  content {
    content = "${var.hostname["${count.index}"]}"
  }
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
