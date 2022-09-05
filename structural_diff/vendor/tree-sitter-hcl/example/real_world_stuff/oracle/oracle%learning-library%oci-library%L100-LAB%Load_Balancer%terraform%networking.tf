terraform {
  required_version = ">= 0.12"
}

provider "oci" {
  version = "~> 3.36"
  tenancy_ocid = "${var.tenancy_ocid}"
  user_ocid = "${var.user_ocid}"
  fingerprint = "${var.fingerprint}"
  private_key_path = "${var.private_key_path}"
  region = "${var.region}"
}

// This provider defines an alias and is targetable by resources by including `provider = "oci.iad"`.
provider "oci" {
  region           = "us-ashburn-1"
  alias            = "iad"
  tenancy_ocid     = "${var.tenancy_ocid}"
  user_ocid        = "${var.user_ocid}"
  fingerprint      = "${var.fingerprint}"
  private_key_path = "${var.private_key_path}"
}

resource "oci_core_vcn" "tf_vcn" {
    #Required
    cidr_block = "${var.vcn_cidr_block}"
    compartment_id = "${var.compartment_ocid}"

    dns_label = "tfvcn"
}

data "oci_core_security_lists" "tf_security_lists" {
    #Required
    compartment_id = "${var.compartment_ocid}"
    vcn_id = "${oci_core_vcn.tf_vcn.id}"

    #Optional
    display_name = "${var.security_list_display_name}"
    #state = "${var.security_list_state}"
}

resource "oci_core_security_list" "LB-Security-List" {
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_vcn.tf_vcn.id}"
  display_name = "LB-Security-List"
  // allow outbound traffic on all ports for all protocols
  egress_security_rules {
    destination = "0.0.0.0/0"
    protocol    = "all"
  }

  // allow inbound http traffic
  ingress_security_rules {
    protocol  = "6"         // tcp
    source    = "0.0.0.0/0"
    stateless = false

    tcp_options {
      // These values correspond to the destination port range.
      min = 80
      max = 80
    }
  }
}

resource "oci_core_security_list" "Web-Security-List" {
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_vcn.tf_vcn.id}"
  display_name = "Web-Security-List"


  // allow outbound traffic on all ports for all protocols
  egress_security_rules {
    destination = "0.0.0.0/0"
    protocol    = "all"
  }

  // allow inbound http traffic from the LB subnet
  ingress_security_rules {
    protocol  = "6"         // tcp
    source    = "10.0.1.0/24"
    stateless = false

    tcp_options {
      // These values correspond to the destination port range.
      min = 80
      max = 80
    }
  }

  // allow inbound ssh traffic
  ingress_security_rules {
    protocol  = "6"         // tcp
    source    = "0.0.0.0/0"
    stateless = false

    tcp_options {
      // These values correspond to the destination port range.
      min = 22
      max = 22
    }
  }
  // allow inbound icmp traffic of a specific type
  ingress_security_rules {
    protocol  = 1
    source    = "0.0.0.0/0"
    stateless = true
  }  

}

resource "oci_core_internet_gateway" "tf_IG" {
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_vcn.tf_vcn.id}"
  display_name   = "TF-Internet Gateway"
}

resource "oci_core_route_table" "tf_routetable" {
  # Required
  compartment_id = "${var.compartment_ocid}"
  vcn_id         = "${oci_core_vcn.tf_vcn.id}"

  display_name   = "TF-Route Table"

  route_rules {
    destination       = "0.0.0.0/0"
    destination_type  = "CIDR_BLOCK"
    network_entity_id = "${oci_core_internet_gateway.tf_IG.id}"
  }
}

resource "oci_core_subnet" "tf_lb-subnet" {
  # Required
  cidr_block        = "10.0.1.0/24"
  compartment_id    = "${var.compartment_ocid}"
  vcn_id            = "${oci_core_vcn.tf_vcn.id}"

  # Optional
  display_name      = "TF-LBSubnet"
  dns_label         = "lbsubnet"
  security_list_ids = ["${oci_core_security_list.LB-Security-List.id}"]
  route_table_id    = "${oci_core_route_table.tf_routetable.id}"
  #dhcp_options_id   = "${oci_core_vcn.tf_vcn.default_dhcp_options_id}"
}

resource "oci_core_subnet" "tf_web-subnet" {
  # Required
  cidr_block        = "10.0.2.0/24"
  compartment_id    = "${var.compartment_ocid}"
  vcn_id            = "${oci_core_vcn.tf_vcn.id}"

  # Optional
  display_name      = "TF-WebSubnet"
  dns_label         = "websubnet"
  security_list_ids = ["${oci_core_security_list.Web-Security-List.id}"]
  route_table_id    = "${oci_core_route_table.tf_routetable.id}"
  #dhcp_options_id   = "${oci_core_vcn.tf_vcn.default_dhcp_options_id}"
}
/* # Get a list of Availability Domains */
/* data "oci_identity_availability_domains" "ads" { */
/*   compartment_id = "${var.compartment_ocid}" */
/* } */

data "oci_identity_availability_domains" "ad-phx" {
  compartment_id = "${var.tenancy_ocid}"

  filter {
    name   = "name"
    values = ["\\w*-AD-"]
    regex  = true
  }
}

data "oci_identity_availability_domains" "ad-iad" {
  provider       = "oci.iad"
  compartment_id = "${var.tenancy_ocid}"

  filter {
    name   = "name"
    values = ["\\w*-AD-"]
    regex  = true
  }
}

output "ad-phx" {
  value = "${data.oci_identity_availability_domains.ad-phx.availability_domains}"
}

output "ad-iad" {
  value = "${data.oci_identity_availability_domains.ad-iad.availability_domains}"
}


