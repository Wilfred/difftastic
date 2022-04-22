locals {
  do_spaces_bucket = "${format("%s%s-%s", "a", var.tectonic_cluster_name, md5(format("%s-%s", var.tectonic_do_droplet_region, var.tectonic_base_domain)))}"
}

data "template_file" "do_pusher" {
  template = "${file("${path.module}/resources/do-pusher.sh")}"

  vars {
    do_access_key_id     = "${var.tectonic_do_spaces_access_key_id}"
    do_secret_access_key = "${var.tectonic_do_spaces_secret_access_key}"
    do_region            = "${var.tectonic_do_spaces_region}"
  }
}

resource "local_file" "do_pusher" {
  content  = "${data.template_file.do_pusher.rendered}"
  filename = "./generated/bin/do-pusher.sh"
}

data "ignition_file" "do_pusher" {
  filesystem = "root"
  path       = "/opt/do-pusher.sh"
  mode       = 0755

  content {
    content = "${data.template_file.do_pusher.rendered}"
  }
}

resource "null_resource" "kubeconfig" {
  # Changes to kubeconfig requires re-provisioning
  triggers {
    assets = "${module.bootkube.kubeconfig}"
  }

  provisioner "local-exec" {
    command = "./generated/bin/do-pusher.sh ./generated/auth/kubeconfig ${local.do_spaces_bucket}/kubeconfig"
  }
}
