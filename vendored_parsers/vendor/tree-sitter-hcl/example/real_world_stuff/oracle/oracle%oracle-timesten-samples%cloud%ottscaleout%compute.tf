# Copyright (c) 1999, 2019, Oracle and/or its affiliates. All rights reserved.
#
# Licensed under the Universal Permissive License v 1.0 as shown
# at http://oss.oracle.com/licenses/upl
#
# Compute resources
# Bastion servers live on public subnets
# Such servers enable hosts on private networks to pull [install/update] software
# Bastions also allow ssh access from public internet and to private subnet hosts
#
# Valid user specified counts for compute instances
# bsInstanceCount == [1-3];  default == 1
# zkInstanceCount == {0,3};  0 collocates; if 3 on its own vms
# mgInstanceCount == {0,2};  0 collocates; if 2 on its own vms
# diInstanceCount > 1;       default == 2;  1x1 disallowed

data "oci_identity_availability_domains" "ADs" {
  compartment_id = "${var.tenancy_ocid}"
}

# Create a list of ad names following best practices
# https://www.terraform.io/docs/providers/oci/guides/best_practices.html
data "template_file" "ad_names" {
  count = "${length(data.oci_identity_availability_domains.ADs.availability_domains)}"
  template = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[count.index], "name")}"
}
locals {
  adlist = "${data.template_file.ad_names.*.rendered}"
}

# Create lists of fault domains
# Place different dataspaces in different fault domains
# Currently there are 3 fault domains per AD.
data "oci_identity_fault_domains" "ad1" {
  availability_domain = "${local.adlist[0]}"
  compartment_id = "${var.tenancy_ocid}"
}
data "oci_identity_fault_domains" "ad2" {
  availability_domain = "${local.adlist[1]}"
  compartment_id = "${var.tenancy_ocid}"
}
data "oci_identity_fault_domains" "ad3" {
  availability_domain = "${local.adlist[2]}"
  compartment_id = "${var.tenancy_ocid}"
}

# List of Fault Domains in each AD
# ${element(fdlist[ad],fd)} works on terraform 11 but not 12
# ${element(element(fdlist,ad),fd)} works on 12 but not on 11
# ${element(flatten(fdlist),ad*numADs + fd)} works on both
locals {
  fdlist = [ 
      [
        "${data.oci_identity_fault_domains.ad1.fault_domains.0.name}",
        "${data.oci_identity_fault_domains.ad1.fault_domains.1.name}",
        "${data.oci_identity_fault_domains.ad1.fault_domains.2.name}"
      ],
      [
        "${data.oci_identity_fault_domains.ad2.fault_domains.0.name}",
        "${data.oci_identity_fault_domains.ad2.fault_domains.1.name}",
        "${data.oci_identity_fault_domains.ad2.fault_domains.2.name}"
      ],
      [
        "${data.oci_identity_fault_domains.ad3.fault_domains.0.name}",
        "${data.oci_identity_fault_domains.ad3.fault_domains.1.name}",
        "${data.oci_identity_fault_domains.ad3.fault_domains.2.name}"
      ]
  ] 
}

locals {
  # Validate bastion server count; fall back to 1
  bscount1 = "${ (var.bsInstanceCount >= "1" && var.bsInstanceCount <= "3") ? var.bsInstanceCount : 1 }"
  # Which AD to start placing bastion hosts; bastion hosts span ADs
  bsad = "${ (var.bsInstanceInitialAD >= 1 && var.bsInstanceInitialAD <= 3) ? var.bsInstanceInitialAD - 1 : 0 }"
}

resource "oci_core_instance" "bs_instance" {
  count               = "${local.bscount1}"
  # span ads
  availability_domain = "${local.adlist[(count.index + local.bsad) % 3]}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${format("%s-bs-%03d", var.service_name, count.index + 1 )}"
  hostname_label      = "${format("%s-bs-%03d", var.service_name, count.index + 1 )}"
  shape               = "${var.bsInstanceShape}"
  create_vnic_details {
    subnet_id              = "${oci_core_subnet.public_subnet.id}"
    skip_source_dest_check = true
  }
  source_details {
    source_type = "image"
    source_id   = "${var.InstanceImageOCID[var.region]}"
  }
  metadata = {
    ssh_authorized_keys = "${var.ssh_public_key}"
    user_data           = "${base64encode(file("service/scripts/user_data.tpl"))}"
  }
  timeouts {
    create = "${var.instance_create_timeout}"
  }
  freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

# count any existing zk_instances
data "oci_core_instances" "zk_instances" {

  #Required
  compartment_id = "${var.compartment_ocid}"
  state = "RUNNING"

  filter {
    name   = "display_name"
    values = ["${var.service_name}-zk-\\w+"]
    regex  = true
  }
}

locals {
  # availability domains
  firstAD  = "${(var.initialAD >= 1 && 
                 var.initialAD <= 3) ? 
		 var.initialAD - 1 : 0}"
  # validate ksafety or fall back to 2
  ksafeval = "${(var.ksafety >= 1 && var.ksafety <= 2) ? var.ksafety : 2}"
  # By default ksafety > 1 spans ADs
  numADs   = "${(var.singleAD == "true") ? 1 : local.ksafeval}"

  # fault domains
  # use all 3 fault domains
  numFDs = "3"

  # data instances
  # adjust number of data instances for ksafety
  dicount0 = "${(var.diInstanceCount * local.ksafeval) }"
  # disallow 1x1 configuration
  dicheck0 = "${(local.dicount0 <= 1) ? 1 : 0}"
  dicount1 = "${(local.dicount0 <= 1) ? 2 : local.dicount0}"
  # disallow single core shapes
  dicheck1 = "${(substr(var.diInstanceShape,-2,2) == ".1") ? 1 : 0}"
  dishape1 = "${(local.dicheck1 == 1) ? replace(var.diInstanceShape,".1",".2") : var.diInstanceShape}"

  # zookeeper servers
  # how many existing zk instances if any
  zkinstances = "${length(flatten(data.oci_core_instances.zk_instances.*.instances))}"
  # validate user input
  zkcount0 = "${(var.zkInstanceCount == "0" ||
                 var.zkInstanceCount == "3") ?
                 var.zkInstanceCount : 0}"
  # prevent destroy of any existing instances
  # use existing count if present to prevent accidental destroy or addition
  zkcount1   = "${(local.zkinstances > 0) ? local.zkinstances : local.zkcount0}"

  # minimum of 3 compute instances needed for zk servers
  # increase zk count if < 3 compute instances for zk servers
  # zkcount2 ; == 0 if co-located; == 1 if 1x2 or 2x1 config; == 2 if 1x1 config; == 3 if offloaded
  zkcount2 = "${((local.dicount1 + local.mgcount + local.zkcount1) < 3) ? (3 - local.dicount1) : local.zkcount1 }"

}

# ensure minimum data instances
resource "null_resource" "di_count_check_1" {
  count = "${local.dicheck0}"

  provisioner "local-exec" {
    command = "echo -e '\nWARNING: 1x1 grids not permitted.\ndiInstanceCount increased to 2'"
  }
}

# require >= 2 cores for data instances
resource "null_resource" "di_shape_check_1" {
  count = "${local.dicheck1}"
  provisioner "local-exec" {
    command = "echo -e '\nWARNING: Single core shapes have insufficient resources for use as data instances.\nUsing 2 core shape'"
  }
}


# zookeeper hosts
resource "oci_core_instance" "zk_instance" {
  count               = "${local.zkcount2}"
  # spans ads
  availability_domain = "${local.adlist[(count.index + local.firstAD) % 3]}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${format("%s-zk-%03d", var.service_name, count.index + 1)}"
  hostname_label      = "${format("%s-zk-%03d", var.service_name, count.index + 1)}"
  shape               = "${var.zkInstanceShape}"
  fault_domain        = "${element(flatten(local.fdlist), (count.index + local.firstAD))}"

  # uncomment to prevent accidental destroy
  # lifecycle {
  #    prevent_destroy      = "true"
  # }

  create_vnic_details {
    subnet_id              = "${oci_core_subnet.private_subnet_dc.id}"
    assign_public_ip       = "false"
  }
  source_details {
    source_type = "image"
    source_id = "${var.InstanceImageOCID[var.region]}"
  }
  metadata = {
    ssh_authorized_keys = "${var.ssh_public_key}"
    user_data           = "${base64encode(file("service/scripts/user_data.tpl"))}"
  }
  timeouts {
    create = "${var.instance_create_timeout}"
  }
  freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

# count any existing mg_instances
data "oci_core_instances" "mg_instances" {

  #Required
  compartment_id = "${var.compartment_ocid}"
  state = "RUNNING"

  filter {
    name   = "display_name"
    values = ["${var.service_name}-mg-\\w+"]
    regex  = true
  }
}

locals {
  # how many mg instances already exist
  mginstances = "${length(flatten(data.oci_core_instances.mg_instances.*.instances))}"
  # validate user input
  validmgcount          = "${(var.mgInstanceCount == "0" ||
                              var.mgInstanceCount == "2") ?
                              var.mgInstanceCount : 0}"
  # prevent accidental destroy and use existing instances
  mgcount = "${(local.mginstances > 0) ? local.mginstances : local.validmgcount}"
}

# management active standby pair
resource "oci_core_instance" "mg_instance" {
  count               = "${local.mgcount}"
  availability_domain = "${local.adlist[((count.index % local.numADs) + local.firstAD) % 3]}"
  fault_domain        = "${element(flatten(local.fdlist),(((count.index % local.numADs) + local.firstAD) % 3) + (count.index % local.numFDs))}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${format("%s-mg-%03d", var.service_name, count.index + 1)}"
  hostname_label      = "${format("%s-mg-%03d", var.service_name, count.index + 1)}"
  shape               = "${var.mgInstanceShape}"

  # uncomment to prevent accidental destroy
  # lifecycle {
  #    prevent_destroy   = "true"
  # }
  create_vnic_details {
    subnet_id           = "${oci_core_subnet.private_subnet_dc.id}"
    assign_public_ip    = "false"
  }
  source_details {
    source_type = "image"
    source_id = "${var.InstanceImageOCID[var.region]}"
  }
  metadata = {
    ssh_authorized_keys = "${var.ssh_public_key}"
    user_data           = "${base64encode(file("service/scripts/user_data.tpl"))}"
  }
  timeouts {
    create              = "${var.instance_create_timeout}"
  }
  freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}


# data instances
resource "oci_core_instance" "di_instance" {
  count               = "${local.dicount1}"
  availability_domain = "${local.adlist[((count.index % local.numADs) + local.firstAD) % 3]}"
  fault_domain        = "${element(flatten(local.fdlist),(((count.index % local.numADs) + local.firstAD) % 3) + (count.index % local.numFDs))}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${format("%s-di-%03d", var.service_name, count.index + 1)}"
  hostname_label      = "${format("%s-di-%03d", var.service_name, count.index + 1)}"
  shape               = "${local.dishape1}"
  create_vnic_details {
    subnet_id              = "${oci_core_subnet.private_subnet_dc.id}"
    assign_public_ip       = false
  }
  source_details {
    source_type = "image"
    source_id = "${var.InstanceImageOCID[var.region]}"
  }
  metadata = {
    ssh_authorized_keys = "${var.ssh_public_key}"
    user_data           = "${base64encode(file("service/scripts/user_data.tpl"))}"
  }
  timeouts {
    create = "${var.instance_create_timeout}"
  }
  freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

# client instances
resource "oci_core_instance" "cl_instance" {
  count               = "${var.clInstanceCount}"
  availability_domain = "${local.adlist[((count.index % local.numADs) + local.firstAD) % 3]}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${format("%s-cl-%03d", var.service_name, count.index + 1)}"
  hostname_label      = "${format("%s-cl-%03d", var.service_name, count.index + 1)}"
  shape               = "${var.clInstanceShape}"
  create_vnic_details {
    subnet_id              = "${oci_core_subnet.private_subnet_cl.id}"
    assign_public_ip       = "false"
  }
  source_details {
    source_type = "image"
    source_id = "${var.InstanceImageOCID[var.region]}"
  }
  metadata = {
    ssh_authorized_keys = "${var.ssh_public_key}"
    user_data           = "${base64encode(file("service/scripts/user_data.tpl"))}"
  }
  timeouts {
    create = "${var.instance_create_timeout}"
  }
  freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

