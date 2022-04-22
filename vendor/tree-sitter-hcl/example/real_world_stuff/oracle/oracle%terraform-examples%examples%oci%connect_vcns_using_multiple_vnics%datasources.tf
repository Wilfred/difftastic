// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.
data "oci_identity_availability_domains" "ADs" {
  compartment_id = "${var.tenancy_ocid}"
}

###### BRIDGE INSTANCE #########
# Get Bridge instance object from instance pool
data "oci_core_instance" "bridge_instance" {
  instance_id = "${lookup(data.oci_core_instance_pool_instances.bridge_instance_pool_instances.instances[0], "id")}"
}

data "oci_core_instance_pool_instances" "bridge_instance_pool_instances" {
  depends_on       = ["oci_core_instance_pool.bridge_instance_pool"]
  compartment_id   = "${var.compartment_ocid}"
  instance_pool_id = "${oci_core_instance_pool.bridge_instance_pool.id}"
}

# Gets a list of private IPs on the second VNIC

data "oci_core_private_ips" "BridgeInstancePrivateIP2" {
  depends_on = ["oci_core_instance_pool.bridge_instance_pool"]
  vnic_id    = "${data.oci_core_vnic.BridgeInstanceVnic2.id}"
}

# Get the OCID of the primary VNIC
data "oci_core_vnic" "BridgeInstanceVnic1" {
  depends_on = ["oci_core_instance_pool.bridge_instance_pool"]
  vnic_id    = "${lookup(data.oci_core_vnic_attachments.BridgeInstanceVnicAttachmentPrimary.vnic_attachments[0], "vnic_id")}"
}

# Get the OCID of the secondary VNIC
data "oci_core_vnic" "BridgeInstanceVnic2" {
  depends_on = ["oci_core_instance_pool.bridge_instance_pool"]
  vnic_id    = "${lookup(data.oci_core_vnic_attachments.BridgeInstanceVnicAttachmentSecondary.vnic_attachments[0], "vnic_id")}"
}

data "oci_core_vnic_attachments" "BridgeInstanceVnicAttachmentPrimary" {
  depends_on          = ["oci_core_instance_pool.bridge_instance_pool"]
  compartment_id      = "${var.compartment_ocid}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.AD - 1], "name")}"
  instance_id         = "${data.oci_core_instance.bridge_instance.id}"

  filter {
    name = "subnet_id"

    values = [
      "${oci_core_subnet.MgmtSubnet.id}",
    ]
  }
}

data "oci_core_vnic_attachments" "BridgeInstanceVnicAttachmentSecondary" {
  compartment_id      = "${var.compartment_ocid}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.AD - 1], "name")}"
  instance_id         = "${data.oci_core_instance.bridge_instance.id}"

  filter {
    name   = "subnet_id"
    values = ["${oci_core_subnet.MgmtSubnet2.id}"]
  }
}
