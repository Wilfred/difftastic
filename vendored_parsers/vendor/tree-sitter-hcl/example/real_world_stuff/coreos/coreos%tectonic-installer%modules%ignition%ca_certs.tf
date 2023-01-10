data "template_file" "update_ca_certificates_dropin" {
  template = "${file("${path.module}/resources/dropins/10-always-update-ca-certificates.conf")}"
}

data "ignition_systemd_unit" "update_ca_certificates_dropin" {
  name    = "update-ca-certificates.service"
  enabled = true

  dropin = [
    {
      name    = "10-always-update-ca-certificates.conf"
      content = "${data.template_file.update_ca_certificates_dropin.rendered}"
    },
  ]
}

data "ignition_file" "root_ca_cert_pem" {
  filesystem = "root"
  path       = "/etc/ssl/certs/root_ca.pem"
  mode       = 0400
  uid        = 0
  gid        = 0

  content {
    content = "${var.root_ca_cert_pem}"
  }
}

data "ignition_file" "etcd_ca_cert_pem" {
  filesystem = "root"
  path       = "/etc/ssl/certs/etcd_ca.pem"
  mode       = 0444
  uid        = 0
  gid        = 0

  content {
    content = "${var.etcd_ca_cert_pem}"
  }
}

data "ignition_file" "ingress_ca_cert_pem" {
  filesystem = "root"
  path       = "/etc/ssl/certs/ingress_ca.pem"
  mode       = 0444
  uid        = 0
  gid        = 0

  content {
    content = "${var.ingress_ca_cert_pem}"
  }
}
