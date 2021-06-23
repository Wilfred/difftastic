provider "oci" {
    tenancy_ocid     = "${var.oracle_tenancy_ocid}"
    user_ocid        = "${var.oracle_user_ocid}"
    fingerprint      = "${var.oracle_fingerprint}"
    private_key_path = "${var.oracle_private_key_path}"
    region           = "${var.oracle_region}"
}
