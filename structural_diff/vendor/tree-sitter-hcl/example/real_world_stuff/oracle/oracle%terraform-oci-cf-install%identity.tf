resource "oci_identity_compartment" "bosh_compartment" {
    name = "${var.bosh_compartment_name}"
    description = "${var.bosh_compartment_name}"
}

resource "oci_identity_group" "bosh_group" {
    name = "${var.bosh_group_name}"
    description = "${var.bosh_group_name}"
}

resource "oci_identity_user" "bosh_user" {
    name = "${var.bosh_user_name}"
    description = "${var.bosh_user_name}"
}

resource "oci_identity_user_group_membership" "bosh_user_group_membership" {
    compartment_id = "${oci_identity_compartment.bosh_compartment.id}"
    user_id = "${oci_identity_user.bosh_user.id}"
    group_id = "${oci_identity_group.bosh_group.id}"
}

resource "oci_identity_api_key" "bosh_api_key" {
    user_id = "${oci_identity_user.bosh_user.id}"
    key_value = "${file(var.bosh_api_public_key)}"
}

resource "oci_identity_policy" "bosh_policy" {
    compartment_id = "${var.oci_tenancy_ocid}"
    name = "${oci_identity_group.bosh_group.name}-policy"
    description = "bosh policies"
    statements = [
        "allow group ${oci_identity_group.bosh_group.name} to manage instance-family in tenancy",
        "allow group ${oci_identity_group.bosh_group.name} to manage volume-family in tenancy",
        "allow group ${oci_identity_group.bosh_group.name} to manage object-family in tenancy",
        "allow group ${oci_identity_group.bosh_group.name} to manage virtual-network-family in tenancy",
        "allow group ${oci_identity_group.bosh_group.name} to manage load-balancers in tenancy"
    ]
}
