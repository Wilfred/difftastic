# Copyright (c) 1999, 2019, Oracle and/or its affiliates. All rights reserved.
#
# Licensed under the Universal Permissive License v 1.0 as shown
# at http://oss.oracle.com/licenses/upl
#
# Block volumes, if requested, are allocated here
# Block volumes are attached to Standard shapes.
# A single block volume is allocated per data instance
# The minimum block volume size is 50GB.
# Block volumes should minimally be 3X RAM; not checked
# Commands for {a|de}ttaching volumes via iscsi are generated here
#

locals {

  # block volumes
  standard = "${substr(var.diInstanceShape,3,8)}"
  bvcount1 = "${(local.standard == "Standard") ? 1 : 0}"
  # validate min/max OCI block volume storage limits or error out
  bvcount2 = "${(var.diBlockVolumeSizeGB >= 50 && 
                 var.diBlockVolumeSizeGB <= 32768) ? 
                local.dicount1 : 0}"
  # set to indicate error condition if no block volume and Standard shape or size out of range
  bvcheck1 = "${(local.bvcount2 == 0 && local.bvcount1 == 1) ? 1 : 0}"
  # mdraid with block volume not supported
  bvcheck2 = "${(local.bvcount2 == 0 && var.system["storage"] == "MD-RAID-10") ? 1 : 0}"

}

# workaround for error checking
# prevent use of standard shape without block volume or size out of range
resource "null_resource" "bv_check_1" {
  count = "${local.bvcheck1}"
  provisioner "local-exec" {
    command = "echo -e '\nERROR: No block volumes or invalid GB specified with Standard shape\nRerun terraform with nonzero value for diBlockVolumeSizeGB\n' && false"
  }
}

resource "null_resource" "bv_check_2" {
  count = "${local.bvcheck2}"
  provisioner "local-exec" {
    command = "echo -e '\nERROR: MD-RAID-10 storage not permitted with block volume\nRerun terraform with var.system[\"storage\"] == LVM-READ-0\n' && false"
  }
}

# Optional block volume attachments
# May only used with Standard shape

resource "oci_core_volume" "di_volume" {
  count = "${local.bvcount2}"
  #Required
  availability_domain = "${local.adlist[((count.index % local.numADs) + local.firstAD) % 3]}"
  compartment_id = "${var.compartment_ocid}"

  #Optional
  display_name = "${format("%s-bv-%03d", var.service_name, count.index + 1)}"
  size_in_gbs = "${var.diBlockVolumeSizeGB}"
  freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

resource "oci_core_volume_attachment" "di_volume_attachments" {
  count = "${local.bvcount2 }"
  #Required
  instance_id = "${oci_core_instance.di_instance.*.id[count.index]}"
  attachment_type = "iscsi"
  volume_id = "${oci_core_volume.di_volume.*.id[count.index]}"

  #Optional
  display_name = "${format("%s-bvat-%03d", var.service_name, count.index + 1)}"

  provisioner "local-exec" {
    when = "destroy"
    command = "rm -rf ${var.opc["scriptdir"]}/iscsi/iscsi-??tach.${self.display_name}"
  }

  # attach; write iscsi attach commands
  provisioner "local-exec" {
    command = "echo iscsiadm -m node -o new -T ${self.iqn} -p ${self.ipv4}:${self.port} >> ${var.opc["scriptdir"]}/iscsi/iscsi-attach.${self.display_name}"
  }
  provisioner "local-exec" {
    command = "echo iscsiadm -m node -o update -n node.startup -v automatic -T ${self.iqn} >> ${var.opc["scriptdir"]}/iscsi/iscsi-attach.${self.display_name}"
  }
  provisioner "local-exec" {
    command = "echo iscsiadm -m node -l -T ${self.iqn} -p ${self.ipv4}:${self.port} >> ${var.opc["scriptdir"]}/iscsi/iscsi-attach.${self.display_name}"
  }

  # detach; write iscsi detach commands
  provisioner "local-exec" {
    command = "echo iscsiadm -m node -u -T ${self.iqn} -p ${self.ipv4}:${self.port} >> ${var.opc["scriptdir"]}/iscsi/iscsi-detach.${self.display_name}"
  }
  provisioner "local-exec" {
    command = "echo iscsiadm -m node -o delete -T ${self.iqn} -p ${self.ipv4}:${self.port} >> ${var.opc["scriptdir"]}/iscsi/iscsi-detach.${self.display_name}"
  }

}

