# Gets a list of Availability Domains
data "oci_identity_availability_domains" "ADs" {
    compartment_id = "${var.oci_tenancy_ocid}"
}

# Gets a list of vNIC attachments on the instance
data "oci_core_vnic_attachments" "InstanceVnics" {
    compartment_id = "${oci_identity_compartment.bosh_compartment.id}"
    availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.bastion_ad - 1], "name")}"
    instance_id = "${oci_core_instance.bosh_cli.id}"
}

# Gets the OCID of the first (default) vNIC
data "oci_core_vnic" "InstanceVnic" {
    vnic_id = "${lookup(data.oci_core_vnic_attachments.InstanceVnics.vnic_attachments[0], "vnic_id")}"
}
