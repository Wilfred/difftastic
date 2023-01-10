data "oci_identity_availability_domains" "ads" {
	compartment_id = var.compartment_ocid
}
 
data "oci_identity_fault_domains" "fault_domains" {
    availability_domain = data.oci_identity_availability_domains.ads.availability_domains[0].name
    compartment_id = var.compartment_ocid
}
