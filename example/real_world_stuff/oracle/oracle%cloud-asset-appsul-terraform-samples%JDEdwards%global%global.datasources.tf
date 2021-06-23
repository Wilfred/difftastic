/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


# Get list of Availability Domains
data "oci_identity_availability_domains" "ADs" {
    compartment_id = "${var.tenancy_ocid}"
}

# Get name of Availability Domains
data "template_file" "deployment_ad" {
  count    = "${length(var.AD)}"
  template = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.AD[count.index] - 1], "name")}"
}


# Get latest Oracle Linux image
data "oci_core_images" "InstanceImageOCID" {
    compartment_id            = "${var.tenancy_ocid}"
    operating_system          = "${var.InstanceOS}"
    operating_system_version  = "${var.linux_os_version}"
    filter {
    name   = "display_name"
    values = ["^.*Oracle[^G]*$"]
    regex  = true
  }
}

# Get swift object storage name for Service Gateway
data "oci_core_services" "svcgtw_services" {
	filter {
		name    = "name"
		values  = [".*Object.*Storage"]
		regex   = true
	}
}