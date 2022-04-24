# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_director_cloud_init" {
  depends_on = ["oci_core_instance.gsm_vm"]
  count      = var.num_of_gsm

  connection {
    type        = "ssh"
    user        = "${var.opc_user}"
    private_key = "${tls_private_key.public_private_key_pair.private_key_pem}"
    host        = "${oci_core_instance.gsm_vm[count.index].public_ip}"
    agent       = false
    timeout     = "${var.ssh_timeout}"
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      ${var.enable_http_proxy == "true" ? local.export_http_proxy_addr : "echo http proxy configuration is not enabled"}
      ${var.enable_https_proxy == "true" ? local.export_https_proxy_addr : "echo https proxy configuration is not enabled"}
      > /etc/yum/vars/ociregion
      yum-config-manager --disable ol7_ksplice
      yum-config-manager --disable ol7_oci_included
      echo "assumeyes=1" >> /etc/yum.conf

      yum update
      yum install compat-libcap1
      yum install libstdc++-devel
      yum install ksh
      yum install glibc-devel

      service firewalld stop

      mkdir -p ${var.base_install_dir}
      EOF
    destination = "~/shard-director-cloud-sdb-sw-init.sh"
  }

  provisioner "file" {
    content     = <<-EOF
      #! /bin/bash
      cd ~
      sudo chown root.root shard-director-cloud-sdb-sw-init.sh
      sudo chmod 4755 shard-director-cloud-sdb-sw-init.sh
      sudo ./shard-director-cloud-sdb-sw-init.sh
      # Remove the s/w init script
      sudo rm -f shard-director-cloud-sdb-sw-init.sh

      # Add install group and user
      sudo /usr/sbin/groupadd ${var.unix_group_name}
      sudo useradd -r -m -g ${var.unix_group_name} -G ${var.unix_group_name},opc,adm,wheel,systemd-journal ${var.os_user}
      sudo usermod --password $(echo sd${random_string.sudo_pass.result} | openssl passwd -1 -stdin) ${var.os_user}

      # setup ssh for the install user
      sudo mkdir -p /home/${var.os_user}/.ssh
      sudo cp ~/.ssh/authorized_keys /home/${var.os_user}/.ssh/authorized_keys
      sudo chown -R ${var.os_user}:${var.unix_group_name} /home/${var.os_user}/.ssh
      sudo chmod u=rwx,go= /home/${var.os_user}/.ssh

      sudo chmod g+w -R ${var.base_install_dir}
      sudo chown -R ${var.os_user} ${var.base_install_dir}
      sudo mkdir -p ${var.oracle_base}
      sudo cp ~/${var.gsm_zip_name}-${var.gsm_version}.zip ${var.oracle_base}/${var.gsm_zip_name}.zip
      sudo chown -R ${var.os_user}:${var.unix_group_name} ${var.oracle_base}

      sudo mkdir -p ${var.ora_inventory_location}
      sudo chown -R ${var.os_user}:${var.unix_group_name} ${var.ora_inventory_location}
      sudo chmod -R 755 ${var.ora_inventory_location}

      EOF
    destination = "~/shard-director-cloud-sdb-init-starter.sh"
  }

  provisioner "remote-exec" {
    inline = [
      "sleep 50",
      "chmod +x ~/shard-director-cloud-sdb-init-starter.sh",
      "~/shard-director-cloud-sdb-init-starter.sh > shard-director-cloud-sdb-init-starter.log",
      "rm -f ~/shard-director-cloud-sdb-init-starter.sh"
    ]
  }

  # destroying
  provisioner "remote-exec" {
    when = "destroy"
    inline = [
      "rm -f ~/shard-director-cloud-sdb-sw-init.sh",
      "rm -f ~/shard-director-cloud-sdb-init-starter.sh"
    ]
  }
}
