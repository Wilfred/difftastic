# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_catalog_cloud_init" {
  depends_on = ["oci_database_db_system.catalog_db"]
  count      = var.num_of_shard_catalogs

  connection {
    type        = "ssh"
    user        = "${var.opc_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${data.oci_core_vnic.catalog_db_node_vnic[count.index].public_ip_address}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      sudo usermod --password $(echo sd${random_string.sudo_pass.result} | openssl passwd -1 -stdin) ${var.os_user}
      sudo cp ~/.ssh/authorized_keys /home/${var.os_user}/.ssh/authorized_keys
      EOF
    destination = "~/shard-catalog-cloud-sdb-init-starter.sh"
  }

  provisioner "remote-exec" {
    inline = [
      "chmod +x ~/shard-catalog-cloud-sdb-init-starter.sh",
      "~/shard-catalog-cloud-sdb-init-starter.sh > shard-catalog-cloud-sdb-init-starter.log",
      "rm -f ~/shard-catalog-cloud-sdb-init-starter.sh"
    ]
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      echo "search ${oci_database_db_system.catalog_db[count.index].domain}" >> /etc/resolv.conf
      cat /etc/resolv.conf
      EOF
    destination = "~/search-term.sh"
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      cd ~
      sudo chown root.root search-term.sh
      sudo chmod 4755 search-term.sh
      sudo ./search-term.sh
      sudo rm -f search-term.sh
      EOF
    destination = "~/search-term-apply.sh"
  }

  provisioner "remote-exec" {
    inline = [
      "chmod +x ~/search-term-apply.sh",
      "~/search-term-apply.sh > search-term-apply.log",
      "rm -f ~/search-term-apply.sh"
    ]
  }

  # destroying
  provisioner "remote-exec" {
    when = "destroy"
    inline = [
      "rm -f ~/shard-catalog-cloud-sdb-init-starter.sh"
    ]
  }
}
