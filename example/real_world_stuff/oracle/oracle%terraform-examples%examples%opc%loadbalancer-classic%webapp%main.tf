// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

locals {
  web_app_port = "80"
}

module "security_web_ingress" {
  source        = "../security_rules"
  name_prefix   = "${var.name}"
  port          = "${local.web_app_port}"
  protocol_name = "web"
  ip_protocol   = "tcp"
  direction     = "ingress"
  acl           = "${var.server_acl}"
}

resource "null_resource" "install_httpd" {
  count = "${var.server_count}"

  connection {
    type        = "ssh"
    host        = "${element(var.servers,count.index)}"
    user        = "${var.ssh_user}"
    private_key = "${file(var.private_ssh_key_file)}"
    timeout     = "30m"
  }

  provisioner "remote-exec" {
    inline = [
      "sudo yum -y install httpd",
      "sudo systemctl enable httpd",
      "sudo systemctl start httpd",
      "echo '<h1>Hello from server${count.index}</h1>' | sudo tee /var/www/html/index.html",
    ]
  }
}
