variable "ssh_public_key" {
  default = ""
}

variable "ssh_private_key" {
  default = ""
}

variable "vcn" {
  default = ""
}

variable subnet_ocid {
  default = "ocid1.subnet.oc1.phx.aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
}

# Gets the OCID of the OS image to use
data "oci_core_images" "os_image_ocid" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "Oracle-Linux-7.5-2018.08.14-0"
}

resource "oci_core_instance" "instance" {
  availability_domain = "${var.availability_domain}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${var.test_id}"
  image               = "${lookup(data.oci_core_images.os_image_ocid.images[0], "id")}"
  shape               = "VM.Standard1.1"
  subnet_id           = "${var.subnet_ocid}"

  metadata {
    ssh_authorized_keys = "${var.ssh_public_key}"
  }

  timeouts {
    create = "60m"
  }
}

data "oci_core_vnic_attachments" "instance_vnics" {
  compartment_id      = "${var.compartment_ocid}"
  availability_domain = "${var.availability_domain}"
  instance_id         = "${oci_core_instance.instance.id}"
}

# Gets the OCID of the first (default) vNIC
data "oci_core_vnic" "instance_vnic" {
  vnic_id = "${lookup(data.oci_core_vnic_attachments.instance_vnics.vnic_attachments[0], "vnic_id")}"
}

data "template_file" "driver_config" {
  template = "${file("${path.module}/config.yaml.tpl")}"

  vars {
    key = "${ indent(4, file("${path.module}/_tmp/oci_api_key.pem")) }"
    vcn = "${var.vcn}"
  }
}

resource null_resource "instance" {
  depends_on = [
    "data.oci_core_vnic.instance_vnic",
  ]

  triggers {
    instance_id = "${oci_core_instance.instance.id}"
  }

  connection {
    type        = "ssh"
    host        = "${data.oci_core_vnic.instance_vnic.public_ip_address}"
    user        = "opc"
    private_key = "${var.ssh_private_key}"
  }

  provisioner "file" "test_binary" {
    source      = "../../../dist/bin/integration-tests"
    destination = "/home/opc/integration-tests"
  }

  provisioner "file" "driver_config" {
    content     = "${data.template_file.driver_config.rendered}"
    destination = "/home/opc/config.yaml"
  }

  provisioner "remote-exec" "run_tests" {
    inline = [
      "chmod +x /home/opc/integration-tests",
    ]
  }
}

output "instance_public_ip" {
  value = "${data.oci_core_vnic.instance_vnic.public_ip_address}"
}

output "instance_ocid" {
  value = "${oci_core_instance.instance.id}"
}
