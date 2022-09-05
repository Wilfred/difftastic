resource "oci_core_instance" "bosh_cli" {
    availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.bastion_ad - 1], "name")}"
    compartment_id      = "${oci_identity_compartment.bosh_compartment.id}"
    display_name        = "bosh_cli"
    hostname_label      = "bosh-cli"
    image               = "${var.bastion_image_id}"
    shape               = "${var.bastion_instance_shape}"
    subnet_id           = "${oci_core_subnet.bastion_subnet_ad1.id}"
    metadata {
        ssh_authorized_keys = "${file(var.bosh_ssh_public_key)}"
    }
}

resource "null_resource" "remote-exec" {
    depends_on = ["oci_core_instance.bosh_cli",
                  "oci_core_volume_attachment.bosh_cli_vol_attach"]

    provisioner "file" {
        connection {
          agent       = false
          timeout     = "30m"
          host        = "${data.oci_core_vnic.InstanceVnic.public_ip_address}"
          user        = "ubuntu"
          private_key = "${file(var.bosh_ssh_private_key)}"
        }
        source = "./bootstrap/install_deps.sh"
        destination = "~/install_deps.sh"
    }

    provisioner "remote-exec" {

        on_failure = "continue"

        connection {
          agent       = false
          timeout     = "30m"
          host        = "${data.oci_core_vnic.InstanceVnic.public_ip_address}"
          user        = "ubuntu"
          private_key = "${file(var.bosh_ssh_private_key)}"
        }
        inline = [
        "sudo iscsiadm -m node -o new -T ${oci_core_volume_attachment.bosh_cli_vol_attach.iqn} -p ${oci_core_volume_attachment.bosh_cli_vol_attach.ipv4}:${oci_core_volume_attachment.bosh_cli_vol_attach.port}",
        "sudo iscsiadm -m node -o update -T ${oci_core_volume_attachment.bosh_cli_vol_attach.iqn} -n node.startup -v automatic",
        "echo sudo iscsiadm -m node -T ${oci_core_volume_attachment.bosh_cli_vol_attach.iqn} -p ${oci_core_volume_attachment.bosh_cli_vol_attach.ipv4}:${oci_core_volume_attachment.bosh_cli_vol_attach.port} -l >> ~/.bashrc",
        "sudo mkdir /mnt/bosh",
        "sudo chown -R ubuntu:ubuntu /mnt/bosh",
        "sudo ln -s /mnt/bosh /home/ubuntu/bosh",
        "echo '/dev/sdb    /mnt/bosh    ext4      defaults,noatime,_netdev      0      2' | sudo tee --append /etc/fstab > /dev/null",
        "chmod +x ~/install_deps.sh",
        "sudo mount -a"]
    }
}
