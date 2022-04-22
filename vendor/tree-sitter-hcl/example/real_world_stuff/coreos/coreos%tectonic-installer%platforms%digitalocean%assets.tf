data "template_file" "do_puller" {
  template = "${file("${path.module}/resources/do-puller.sh")}"

  vars {
    do_access_key_id     = "${var.tectonic_do_spaces_access_key_id}"
    do_secret_access_key = "${var.tectonic_do_spaces_secret_access_key}"
    do_region            = "${var.tectonic_do_spaces_region}"
  }
}

data "ignition_file" "do_puller" {
  filesystem = "root"
  path       = "/opt/do-puller.sh"
  mode       = 0755

  content {
    content = "${data.template_file.do_puller.rendered}"
  }
}

data "template_file" "resolved_conf" {
  vars {
    domain = "${var.tectonic_base_domain}"
  }

  template = "${file("${path.module}/resources/etc/resolved.conf")}"
}

data "ignition_file" "resolved_conf" {
  filesystem = "root"
  path       = "/etc/systemd/resolved.conf"
  mode       = 0644

  content {
    content = "${data.template_file.resolved_conf.rendered}"
  }
}
