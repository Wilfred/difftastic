# Unique Cluster ID (uuid)
resource "random_id" "cluster_id" {
  byte_length = 16
}

resource "random_string" "ingress_status_password" {
  length  = 6
  special = false
  upper   = false
}

# tectonic.sh (/opt/tectonic/tectonic.sh)
data "template_file" "tectonic_sh" {
  // TODO: This doesn't need to be a template anymore
  template = "${file("${path.module}/resources/tectonic.sh")}"

  vars {
    ingress_kind = "${var.ingress_kind}"
  }
}

data "ignition_file" "tectonic_sh" {
  filesystem = "root"
  mode       = "0755"
  path       = "/opt/tectonic/tectonic.sh"

  content {
    content = "${data.template_file.tectonic_sh.rendered}"
  }
}

# (/opt/tectonic/tectonic-wrapper.sh)
data "template_file" "tectonic_wrapper_sh" {
  template = "${file("${path.module}/resources/tectonic-wrapper.sh")}"

  vars {
    hyperkube_image = "${var.container_images["hyperkube"]}"
  }
}

data "ignition_file" "tectonic_wrapper_sh" {
  filesystem = "root"
  mode       = "0755"
  path       = "/opt/tectonic/tectonic-wrapper.sh"

  content {
    content = "${data.template_file.tectonic_wrapper_sh.rendered}"
  }
}

# tectonic.service (available as output variable)
data "template_file" "tectonic_service" {
  template = "${file("${path.module}/resources/tectonic.service")}"
}

data "ignition_systemd_unit" "tectonic_service" {
  name    = "tectonic.service"
  enabled = false
  content = "${data.template_file.tectonic_service.rendered}"
}
