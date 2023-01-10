# Kubernetes Deployments and AppVersions TPR used in the payload
resource "template_dir" "payload_operators" {
  source_dir      = "../tectonic/resources/manifests/updater/operators"
  destination_dir = "./generated/operators"

  vars {
    kube_version_operator_image        = "${var.tectonic_container_images["kube_version_operator"]}"
    tectonic_channel_operator_image    = "${var.tectonic_container_images["tectonic_channel_operator"]}"
    tectonic_prometheus_operator_image = "${var.tectonic_container_images["tectonic_prometheus_operator"]}"
    tectonic_etcd_operator_image       = "${var.tectonic_container_images["tectonic_etcd_operator"]}"
    tectonic_cluo_operator_image       = "${var.tectonic_container_images["tectonic_cluo_operator"]}"
    tectonic_alm_operator_image        = "${var.tectonic_container_images["tectonic_alm_operator"]}"
    image_re                           = "${var.tectonic_image_re}"
  }
}

resource "template_dir" "payload_appversions" {
  source_dir      = "../tectonic/resources/manifests/updater/app_versions"
  destination_dir = "./generated/app_versions"

  vars {
    kubernetes_version             = "${var.tectonic_versions["kubernetes"]}"
    monitoring_version             = "${var.tectonic_versions["monitoring"]}"
    tectonic_version               = "${var.tectonic_versions["tectonic"]}"
    tectonic_etcd_operator_version = "${var.tectonic_versions["tectonic-etcd"]}"
    tectonic_cluo_operator_version = "${var.tectonic_versions["cluo"]}"
    tectonic_alm_operator_version  = "${var.tectonic_versions["alm"]}"
  }
}
