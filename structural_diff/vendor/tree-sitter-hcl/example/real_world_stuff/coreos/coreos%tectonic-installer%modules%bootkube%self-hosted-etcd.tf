resource "template_dir" "etcd_manifests" {
  count           = "${var.self_hosted_etcd != "" ? 1 : 0}"
  source_dir      = "${path.module}/resources/self-hosted-etcd/manifests"
  destination_dir = "./generated/etcd/manifests"

  vars {
    etcd_operator_image = "${var.container_images["etcd_operator"]}"
    etcd_service_ip     = "${cidrhost(var.service_cidr, 15)}"
    kenc_image          = "${var.container_images["kenc"]}"

    etcd_ca_cert = "${base64encode(var.etcd_ca_cert_pem)}"

    etcd_server_cert = "${base64encode(var.etcd_server_cert_pem)}"
    etcd_server_key  = "${base64encode(var.etcd_server_key_pem)}"

    etcd_client_cert = "${base64encode(var.etcd_client_cert_pem)}"
    etcd_client_key  = "${base64encode(var.etcd_client_key_pem)}"

    etcd_peer_cert = "${base64encode(var.etcd_peer_cert_pem)}"
    etcd_peer_key  = "${base64encode(var.etcd_peer_key_pem)}"
  }
}

resource "template_dir" "etcd_bootstrap_manifests" {
  count           = "${var.self_hosted_etcd != "" ? 1 : 0}"
  source_dir      = "${path.module}/resources/self-hosted-etcd/bootstrap-manifests"
  destination_dir = "./generated/etcd/bootstrap-manifests"

  vars {
    etcd_image                = "${var.container_images["etcd"]}"
    etcd_version              = "${var.versions["etcd"]}"
    bootstrap_etcd_service_ip = "${cidrhost(var.service_cidr, 20)}"
  }
}

data "template_file" "etcd_bootstrap_service" {
  template = "${file("${path.module}/resources/self-hosted-etcd/bootstrap-etcd-service.json")}"

  vars {
    bootstrap_etcd_service_ip = "${cidrhost(var.service_cidr, 20)}"
  }
}

resource "local_file" "etcd_bootstrap_service" {
  count    = "${var.self_hosted_etcd != "" ? 1 : 0}"
  content  = "${data.template_file.etcd_bootstrap_service.rendered}"
  filename = "./generated/etcd/bootstrap-etcd-service.json"
}

data "template_file" "migrate_etcd_cluster" {
  template = "${file("${path.module}/resources/self-hosted-etcd/migrate-etcd-cluster.json")}"

  vars {
    etcd_version              = "${var.versions["etcd"]}"
    bootstrap_etcd_service_ip = "${cidrhost(var.service_cidr, 20)}"
  }
}

resource "local_file" "migrate_etcd_cluster" {
  count    = "${var.self_hosted_etcd == "enabled" ? 1 : 0}"
  content  = "${data.template_file.migrate_etcd_cluster.rendered}"
  filename = "./generated/etcd/migrate-etcd-cluster.json"
}

data "template_file" "migrate_etcd_cluster_pv_backup" {
  template = "${file("${path.module}/resources/self-hosted-etcd/migrate-etcd-cluster-pv-backup.json")}"

  vars {
    etcd_version              = "${var.versions["etcd"]}"
    bootstrap_etcd_service_ip = "${cidrhost(var.service_cidr, 20)}"
    etcd_backup_size          = "${var.etcd_backup_size}"
    etcd_backup_storage_class = "${var.etcd_backup_storage_class}"
  }
}

resource "local_file" "migrate_etcd_cluster_pv_backup" {
  count    = "${var.self_hosted_etcd == "pv_backup" ? 1 : 0}"
  content  = "${data.template_file.migrate_etcd_cluster_pv_backup.rendered}"
  filename = "./generated/etcd/migrate-etcd-cluster.json"
}
