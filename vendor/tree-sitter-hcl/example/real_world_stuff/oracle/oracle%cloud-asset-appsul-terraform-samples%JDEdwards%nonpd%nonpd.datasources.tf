# Gets a list of Availability Domains
data "oci_identity_availability_domains" "ADs" {
  compartment_id = "${var.tenancy_ocid}"
}

# Gets a list of all Oracle Linux 6.9 images that support a given Instance shape
data "oci_core_images" "InstanceImageOCID" {
  compartment_id           = "${var.tenancy_ocid}"
  operating_system         = "${var.InstanceOS}"
  operating_system_version = "${var.linux_os_version}"
    filter {
    name   = "display_name"
    values = ["^.*Oracle[^G]*$"]
    regex  = true
  }
}

data "oci_core_images" "WinInstanceImageOCID" {
  compartment_id           = "${var.tenancy_ocid}"
  operating_system         = "${var.WinInstanceOS}"
  operating_system_version = "${var.WinInstanceOSVersion}"
}

data "template_file" "user_ad" {
  count    = "${length(var.AD)}"
  template = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.AD[count.index] - 1], "name")}"
}

# Gets name of Fault Domains

data "oci_identity_fault_domains" "fds" {
        count    = "${length(var.AD)}"
        availability_domain = "${element(data.template_file.user_ad.*.rendered, count.index)}"
        compartment_id = "${var.compartment_ocid}"
}

locals {
  fds = "${flatten(concat(data.oci_identity_fault_domains.fds.*.fault_domains))}"
  fd_per_ad = 3
}

data "template_file" "deployment_fd" {
  template = "$${name}"
  count    = "${length(var.AD) * (local.fd_per_ad) }"
  vars = {
    name = "${lookup(local.fds[count.index], "name")}"
  }
}
