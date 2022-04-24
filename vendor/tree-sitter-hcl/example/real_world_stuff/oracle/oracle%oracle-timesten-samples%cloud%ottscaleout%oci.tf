# Copyright (c) 1999, 2019, Oracle and/or its affiliates. All rights reserved.
#
# Licensed under the Universal Permissive License v 1.0 as shown
# at http://oss.oracle.com/licenses/upl
#
# terraform provider for oci
#

provider "oci" {
    tenancy_ocid     = "${var.tenancy_ocid}"
    user_ocid        = "${var.user_ocid}"
    fingerprint      = "${var.fingerprint}"
    private_key_path = "${var.private_key_path}"
    region           = "${var.region}"
    # v3.27 req'd for terraform 0.12
    version         = ">= 3.27.0, < 4.0.0"
}
#alternative to provider data above if provisioning within oci
#provider "oci" {
#  auth = "InstancePrincipal"
#  region = "${var.region}"
#  version = ">= 3.27.0, < 4.0.0"
#}
provider "null" {
    # 2.1.2 req'd for terraform 0.12
    version = ">= 2.1.2, < 3.0.0"
}
provider "template" {
    # 2.1.2 req'd for terraform 0.12
    version = ">= 2.1, < 3.0.0"
}
