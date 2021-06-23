/**
 * The instances/etcd module provisions and configures one or more etcd instances.
 */

resource "oci_core_instance" "TFInstanceEtcd" {
  count               = "${var.count}"
  availability_domain = "${var.availability_domain}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${var.label_prefix}${var.display_name_prefix}-${count.index}"
  hostname_label      = "${var.hostname_label_prefix}-${count.index}"
  image               = "${lookup(data.oci_core_images.ImageOCID.images[0], "id")}"
  shape               = "${var.shape}"

  create_vnic_details {
    subnet_id         = "${var.subnet_id}"
    display_name      = "${var.label_prefix}${var.display_name_prefix}-${count.index}"
    hostname_label    = "${var.hostname_label_prefix}-${count.index}"
    assign_public_ip  = "${(var.control_plane_subnet_access == "private") ? "false" : "true"}"
    private_ip        = "${var.assign_private_ip == "true" ? cidrhost(lookup(var.network_cidrs,var.subnet_name), count.index+2) : ""}"
  }

  extended_metadata {
    roles               = "etcd"
    ssh_authorized_keys = "${var.ssh_public_key_openssh}"

    # Automate etcd instance configuration with cloud init run at launch time
    user_data = "${base64encode(data.template_file.etcd-bootstrap.rendered)}"
    tags      = "group:etcd"
  }

  timeouts {
    create = "60m"
  }

  provisioner "local-exec" {
    command = "sleep 10"
  }
}

resource "oci_core_volume" "TFVolumeInstanceEtcd" {
  count               = "${var.etcd_iscsi_volume_create ? var.count : 0}"
  availability_domain = "${var.availability_domain}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "block-volume-${var.hostname_label_prefix}-${count.index}"
  size_in_gbs         = "${var.etcd_iscsi_volume_size}"
}

resource "oci_core_volume_attachment" "TFVolumeAttachmentInstanceEtcd" {
  count           = "${var.etcd_iscsi_volume_create ? var.count : 0}"
  attachment_type = "iscsi"
  compartment_id  = "${var.compartment_ocid}"
  instance_id     = "${oci_core_instance.TFInstanceEtcd.*.id[count.index]}"
  volume_id       = "${oci_core_volume.TFVolumeInstanceEtcd.*.id[count.index]}"
  depends_on      = ["oci_core_instance.TFInstanceEtcd", "oci_core_volume.TFVolumeInstanceEtcd"]
}
