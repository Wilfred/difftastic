// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

variable user {}
variable password {}
variable domain {}
variable endpoint {}

provider "opc" {
  user            = "${var.user}"
  password        = "${var.password}"
  identity_domain = "${var.domain}"
  endpoint        = "${var.endpoint}"
}

variable ssh_public_key_file {
  description = "ssh public key"
  default     = "./id_rsa.pub"
}

variable ssh_private_key_file {
  description = "ssh private key"
  default     = "./id_rsa"
}

resource "opc_compute_ssh_key" "bitnami-elk" {
  name    = "bitnami-elk-sshkey"
  key     = "${file(var.ssh_public_key_file)}"
  enabled = true
}

resource "opc_compute_ip_reservation" "bitnami-elk-public-ip" {
  name        = "bitnami-elk-ip"
  parent_pool = "/oracle/public/ippool"
  permanent   = true
}

resource "opc_compute_instance" "elk" {
  name       = "bitnami-elk"
  hostname   = "bitnami-elk"
  shape      = "oc3"
  image_list = "/Compute-${var.domain}/${var.user}/bitnami-elk-5.4.1-0-linux-oel-6.7-x86_64"
  ssh_keys   = ["${opc_compute_ssh_key.bitnami-elk.name}"]

  networking_info {
    index          = 0
    shared_network = true
    nat            = ["${opc_compute_ip_reservation.bitnami-elk-public-ip.name}"]
    sec_lists      = ["${opc_compute_security_list.elk.name}"]
  }

  connection {
    type        = "ssh"
    host        = "${opc_compute_ip_reservation.bitnami-elk-public-ip.ip}"
    user        = "bitnami"
    private_key = "${file(var.ssh_private_key_file)}"
    timeout     = "10m"
  }

  provisioner "remote-exec" {
    # change the permissions so config files can be uploaded over scp
    inline = [
      "sudo chown bitnami /opt/bitnami/logstash/conf",
    ]
  }

  provisioner "file" {
    # upload the example configuration
    source      = "access-log.conf"
    destination = "/opt/bitnami/logstash/conf/access-log.conf"
  }

  provisioner "remote-exec" {
    # restart logstash and get the intial user password
    inline = [
      "sudo /opt/bitnami/ctlscript.sh restart logstash",
      "sudo grep -F '#' /var/log/boot.log",
    ]
  }
}

resource "opc_compute_security_list" "elk" {
  name                 = "For-ELK-access"
  policy               = "DENY"
  outbound_cidr_policy = "PERMIT"
}

resource "opc_compute_sec_rule" "elk-http" {
  name             = "Allow-ELK-http-access"
  source_list      = "seciplist:/oracle/public/public-internet"
  destination_list = "seclist:${opc_compute_security_list.elk.name}"
  action           = "permit"
  application      = "/oracle/public/http"
  disabled         = false
}

resource "opc_compute_sec_rule" "elk-ssh" {
  name             = "Allow-ELK-ssh-access"
  source_list      = "seciplist:/oracle/public/public-internet"
  destination_list = "seclist:${opc_compute_security_list.elk.name}"
  action           = "permit"
  application      = "/oracle/public/ssh"
  disabled         = false
}

output "ssh" {
  value = "ssh bitnami@${opc_compute_ip_reservation.bitnami-elk-public-ip.ip} -i ${var.ssh_private_key_file}"
}

output "base_url" {
  value = "http://${opc_compute_ip_reservation.bitnami-elk-public-ip.ip}"
}

output "elk_url" {
  value = "http://${opc_compute_ip_reservation.bitnami-elk-public-ip.ip}/elk"
}

output "docs" {
  value = "https://docs.bitnami.com/oracle/apps/elk/"
}
