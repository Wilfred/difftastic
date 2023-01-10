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

data "ignition_file" "root_ca" {
  count = "${var.etcd_count > 0 ? 1 : 0}"

  path       = "/etc/ssl/etcd/root-ca.crt"
  mode       = 0644
  uid        = 232
  gid        = 232
  filesystem = "root"

  content {
    content = "${var.root_ca_cert_pem}"
  }
}
