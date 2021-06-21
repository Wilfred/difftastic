data "template_file" "flannel" {
  template = "${file("${path.module}/resources/manifests/kube-flannel.yaml")}"

  vars {
    cluster_cidr      = "${var.cluster_cidr}"
    flannel_cni_image = "${var.container_images["flannel_cni"]}"
    flannel_image     = "${var.container_images["flannel"]}"
  }
}

data "template_file" "calico_network_policy" {
  template = "${file("${path.module}/resources/manifests/kube-calico.yaml")}"

  vars {
    calico_cni_image = "${var.container_images["calico_cni"]}"
    calico_image     = "${var.container_images["calico"]}"
    cluster_cidr     = "${var.cluster_cidr}"
  }
}

resource "local_file" "calico_network_policy" {
  count = "${var.enabled ? 1 : 0}"

  content  = "${data.template_file.calico_network_policy.rendered}"
  filename = "./generated/net-manifests/kube-calico.yaml"
}

resource "local_file" "flannel" {
  count = "${var.enabled ? 1 : 0}"

  content  = "${data.template_file.flannel.rendered}"
  filename = "./generated/net-manifests/kube-flannel.yaml"
}
