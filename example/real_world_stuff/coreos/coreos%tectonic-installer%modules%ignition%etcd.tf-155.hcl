locals {
  scheme = "${var.etcd_tls_enabled ? "https" : "http"}"

  // see https://github.com/hashicorp/terraform/issues/9858
  etcd_initial_cluster_list = "${concat(var.etcd_initial_cluster_list, list("dummy"))}"

  metadata_env = "EnvironmentFile=/run/metadata/coreos"

  metadata_deps = <<EOF
Requires=coreos-metadata.service
After=coreos-metadata.service
EOF

  cert_options = <<EOF
  --cert-file=/etc/ssl/etcd/server.crt \
  --client-cert-auth=true \
  --key-file=/etc/ssl/etcd/server.key \
  --peer-cert-file=/etc/ssl/etcd/peer.crt \
  --peer-key-file=/etc/ssl/etcd/peer.key \
  --peer-trusted-ca-file=/etc/ssl/etcd/ca.crt \
  --peer-client-cert-auth=true \
  --trusted-ca-file=/etc/ssl/etcd/ca.crt
EOF
}

data "template_file" "etcd_names" {
  count    = "${var.etcd_count}"
  template = "${var.cluster_name}-etcd-${count.index}${var.base_domain == "" ? "" : ".${var.base_domain}"}"
}

data "template_file" "advertise_client_urls" {
  count    = "${var.etcd_count}"
  template = "${local.scheme}://${var.etcd_advertise_name_list[count.index]}:2379"
}

data "template_file" "initial_advertise_peer_urls" {
  count    = "${var.etcd_count}"
  template = "${local.scheme}://${var.etcd_advertise_name_list[count.index]}:2380"
}

data "template_file" "initial_cluster" {
  count    = "${length(var.etcd_initial_cluster_list) > 0 ? var.etcd_count : 0}"
  template = "${data.template_file.etcd_names.*.rendered[count.index]}=${local.scheme}://${local.etcd_initial_cluster_list[count.index]}:2380"
}

data "template_file" "etcd" {
  count    = "${var.etcd_count}"
  template = "${file("${path.module}/resources/dropins/40-etcd-cluster.conf")}"

  vars = {
    advertise_client_urls       = "${data.template_file.advertise_client_urls.*.rendered[count.index]}"
    cert_options                = "${var.etcd_tls_enabled ? local.cert_options : ""}"
    container_image             = "${var.container_images["etcd"]}"
    initial_advertise_peer_urls = "${data.template_file.initial_advertise_peer_urls.*.rendered[count.index]}"
    initial_cluster             = "${length(var.etcd_initial_cluster_list) > 0 ? format("--initial-cluster=%s", join(",", data.template_file.initial_cluster.*.rendered)) : ""}"
    metadata_deps               = "${var.use_metadata ? local.metadata_deps : ""}"
    metadata_env                = "${var.use_metadata ? local.metadata_env : ""}"
    name                        = "${data.template_file.etcd_names.*.rendered[count.index]}"
    scheme                      = "${local.scheme}"
  }
}

data "ignition_systemd_unit" "etcd" {
  count   = "${var.etcd_count}"
  name    = "etcd-member.service"
  enabled = true

  dropin = [
    {
      name    = "40-etcd-cluster.conf"
      content = "${data.template_file.etcd.*.rendered[count.index]}"
    },
  ]
}

data "ignition_file" "etcd_ca" {
  count = "${var.etcd_count > 0 ? 1 : 0}"

  path       = "/etc/ssl/etcd/ca.crt"
  mode       = 0644
  uid        = 232
  gid        = 232
  filesystem = "root"

  content {
    content = "${var.etcd_ca_cert_pem}"
  }
}

data "ignition_file" "etcd_client_key" {
  path       = "/etc/ssl/etcd/client.key"
  mode       = 0400
  uid        = 0
  gid        = 0
  filesystem = "root"

  content {
    content = "${var.etcd_client_key_pem}"
  }
}

data "ignition_file" "etcd_client_crt" {
  path       = "/etc/ssl/etcd/client.crt"
  mode       = 0400
  uid        = 0
  gid        = 0
  filesystem = "root"

  content {
    content = "${var.etcd_client_crt_pem}"
  }
}

data "ignition_file" "etcd_server_key" {
  count = "${var.etcd_count > 0 ? 1 : 0}"

  path       = "/etc/ssl/etcd/server.key"
  mode       = 0400
  uid        = 232
  gid        = 232
  filesystem = "root"

  content {
    content = "${var.etcd_server_key_pem}"
  }
}

data "ignition_file" "etcd_server_crt" {
  count = "${var.etcd_count > 0 ? 1 : 0}"

  path       = "/etc/ssl/etcd/server.crt"
  mode       = 0400
  uid        = 232
  gid        = 232
  filesystem = "root"

  content {
    content = "${var.etcd_server_crt_pem}"
  }
}

data "ignition_file" "etcd_peer_key" {
  count = "${var.etcd_count > 0 ? 1 : 0}"

  path       = "/etc/ssl/etcd/peer.key"
  mode       = 0400
  uid        = 232
  gid        = 232
  filesystem = "root"

  content {
    content = "${var.etcd_peer_key_pem}"
  }
}

data "ignition_file" "etcd_peer_crt" {
  count = "${var.etcd_count > 0 ? 1 : 0}"

  path       = "/etc/ssl/etcd/peer.crt"
  mode       = 0400
  uid        = 232
  gid        = 232
  filesystem = "root"

  content {
    content = "${var.etcd_peer_crt_pem}"
  }
}
