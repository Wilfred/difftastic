
resource "oci_core_volume" "vol" {
  count = "${var.instance_count}"
  availability_domain = "${lookup(var.availability_domain[var.availability_domain_index[count.index] - 1], "name")}" 
  compartment_id = "${var.compartment_id}"
  display_name = "${var.volume_name_prefix}-${count.index}"
  size_in_gbs = "${var.volume_size_in_gbs}"
}

resource "oci_core_volume_attachment" "attach" {
  depends_on = [ "oci_core_volume.vol" ] 
  count = "${var.instance_count}"
  compartment_id = "${var.compartment_id}"
  attachment_type = "${var.volume_attachment_type}"
  instance_id = "${element(var.instance_id, count.index)}" 
  volume_id = "${element(oci_core_volume.vol.*.id, count.index)}"
}

resource "null_resource" "iscsi-setup" {
  depends_on = ["oci_core_volume.vol", "oci_core_volume_attachment.attach"]
  count = "${var.instance_count}"
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${element(var.host_addresses, count.index)}"
      user = "${var.username}"
      private_key = "${var.ssh_private_key}"
    }
    inline = [
      "sudo iscsiadm -m node -o new -T ${element(oci_core_volume_attachment.attach.*.iqn, count.index)} -p ${element(oci_core_volume_attachment.attach.*.ipv4, count.index)}:${element(oci_core_volume_attachment.attach.*.port, count.index)}",
      "sudo iscsiadm -m node -o update -T ${element(oci_core_volume_attachment.attach.*.iqn, count.index)} -n node.startup -v automatic",
      "echo sudo iscsiadm -m node -T ${element(oci_core_volume_attachment.attach.*.iqn, count.index)} -p ${element(oci_core_volume_attachment.attach.*.ipv4, count.index)}:${element(oci_core_volume_attachment.attach.*.port, count.index)} -l >> ~/.bashrc"
    ]
  }
}

