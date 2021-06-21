// CoreOS Install Profile
resource "matchbox_profile" "coreos_install" {
  name   = "coreos-install"
  kernel = "/assets/coreos/${module.container_linux.version}/coreos_production_pxe.vmlinuz"

  initrd = [
    "/assets/coreos/${module.container_linux.version}/coreos_production_pxe_image.cpio.gz",
  ]

  args = [
    "initrd=coreos_production_pxe_image.cpio.gz",
    "coreos.config.url=${var.tectonic_metal_matchbox_http_url}/ignition?uuid=$${uuid}&mac=$${mac:hexhyp}",
    "coreos.first_boot=yes",
    "console=tty0",
    "console=ttyS0",
  ]

  container_linux_config = "${file("${path.module}/cl/coreos-install.yaml.tmpl")}"
}

data "template_file" "ign_custom_ca_certs" {
  count    = "${local.tectonic_ca_count}"
  template = "${file("${path.module}/cl/custom-ca.yaml.tmpl")}"

  vars {
    filename = "custom_ca_${count.index}.pem"
    pem      = "${replace(module.ignition_masters.ca_cert_pem_list[count.index], "\n", "\n\n")}"
  }
}

data "template_file" "bootkube_controller_profile" {
  template = "${file("${path.module}/cl/bootkube-controller.yaml.tmpl")}"

  vars {
    ign_custom_ca_certs = "${join("", data.template_file.ign_custom_ca_certs.*.rendered)}"
  }
}

data "template_file" "bootkube_worker_profile" {
  template = "${file("${path.module}/cl/bootkube-worker.yaml.tmpl")}"

  vars {
    ign_custom_ca_certs = "${join("", data.template_file.ign_custom_ca_certs.*.rendered)}"
  }
}

// Self-hosted Kubernetes Controller profile
resource "matchbox_profile" "tectonic_controller" {
  name                   = "tectonic-controller"
  container_linux_config = "${data.template_file.bootkube_controller_profile.rendered}"
}

// Self-hosted Kubernetes Worker profile
resource "matchbox_profile" "tectonic_worker" {
  name                   = "tectonic-worker"
  container_linux_config = "${data.template_file.bootkube_worker_profile.rendered}"
}
