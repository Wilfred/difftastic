data "template_file" "docker_dropin" {
  template = "${file("${path.module}/resources/dropins/10-dockeropts.conf")}"
}

data "ignition_systemd_unit" "docker_dropin" {
  name    = "docker.service"
  enabled = true

  dropin = [
    {
      name    = "10-dockeropts.conf"
      content = "${data.template_file.docker_dropin.rendered}"
    },
  ]
}

data "template_file" "installer_runtime_mappings" {
  template = "${file("${path.module}/resources/kubernetes/runtime-mappings.yaml")}"
}

data "ignition_file" "installer_runtime_mappings" {
  filesystem = "root"
  path       = "/etc/kubernetes/installer/runtime-mappings.yaml"
  mode       = 0644

  content {
    content = "${data.template_file.installer_runtime_mappings.rendered}"
  }
}

data "template_file" "kubelet" {
  template = "${file("${path.module}/resources/services/kubelet.service")}"

  vars {
    kubelet_image_url     = "${replace(var.container_images["hyperkube"],var.image_re,"$1")}"
    kubelet_image_tag     = "${replace(var.container_images["hyperkube"],var.image_re,"$2")}"
    cloud_provider        = "${var.cloud_provider}"
    cloud_provider_config = "${var.cloud_provider_config != "" ? "--cloud-config=/etc/kubernetes/cloud/config" : ""}"
    cluster_dns_ip        = "${var.kube_dns_service_ip}"
    debug_config          = "${var.kubelet_debug_config}"
    node_label            = "${var.kubelet_node_label}"
    node_taints_param     = "${var.kubelet_node_taints != "" ? "--register-with-taints=${var.kubelet_node_taints}" : ""}"
  }
}

data "ignition_systemd_unit" "kubelet" {
  name    = "kubelet.service"
  enabled = true
  content = "${data.template_file.kubelet.rendered}"
}

data "ignition_systemd_unit" "rm_assets" {
  name    = "rm-assets.service"
  enabled = true
  content = "${file("${path.module}/resources/services/rm-assets.service")}"
}

data "ignition_systemd_unit" "locksmithd" {
  name = "locksmithd.service"
  mask = true
}
