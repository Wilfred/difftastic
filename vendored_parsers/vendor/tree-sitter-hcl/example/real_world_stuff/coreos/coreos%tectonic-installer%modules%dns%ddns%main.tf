provider "dns" {
  version = "1.0.0"

  update {
    server        = "${var.dns_server}"
    key_name      = "${var.dns_key_name}"
    key_algorithm = "${var.dns_key_algorithm}"
    key_secret    = "${var.dns_key_secret}"
  }
}

resource "dns_a_record_set" "tectonic-api" {
  count = "${var.base_domain != "" ? 1 : 0}"
  zone  = "${var.base_domain}."

  name      = "${var.cluster_name}-api"
  ttl       = "60"
  addresses = ["${var.api_ip_addresses}"]
}

resource "dns_a_record_set" "tectonic-console" {
  count = "${var.base_domain != "" ? 1 : 0}"
  zone  = "${var.base_domain}."

  name      = "${var.cluster_name}"
  ttl       = "60"
  addresses = ["${var.console_ip_addresses}"]
}

resource "dns_a_record_set" "tectonic-etcd" {
  count = "${var.base_domain != "" ? var.etcd_count : 0}"
  zone  = "${var.base_domain}."

  name      = "${var.cluster_name}-etcd-${count.index}"
  ttl       = "60"
  addresses = ["${var.etcd_ip_addresses[count.index]}"]
}

resource "dns_a_record_set" "tectonic-master" {
  count = "${var.base_domain != "" ? var.master_count : 0}"
  zone  = "${var.base_domain}."

  name      = "${var.cluster_name}-master-${count.index}"
  ttl       = "60"
  addresses = ["${var.master_ip_addresses[count.index]}"]
}

resource "dns_a_record_set" "tectonic-worker" {
  count = "${var.base_domain != "" ? var.worker_count : 0}"
  zone  = "${var.base_domain}."

  name      = "${var.cluster_name}-worker-${count.index}"
  ttl       = "60"
  addresses = ["${var.worker_ip_addresses[count.index]}"]
}
