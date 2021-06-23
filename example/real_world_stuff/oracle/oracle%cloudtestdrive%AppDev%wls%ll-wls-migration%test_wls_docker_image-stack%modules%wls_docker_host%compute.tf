
provider "oci" {
  tenancy_ocid     = var.tenancy_ocid
##  user_ocid        = var.user_ocid
##  fingerprint      = var.fingerprint
##  private_key_path = var.private_key_path
  region           = var.region
}

data "oci_core_images"     "oracle_linux7_images" {
  compartment_id           = var.compartment_ocid
  operating_system         = "Oracle Linux"
  operating_system_version = "7.8"
  shape                    = "VM.Standard.E3.Flex" ####local.instance_shape
  sort_by                  = "TIMECREATED"
}


locals {
public_keys = format("%s\n%s%s", var.ssh_public_key,
 var.opc_key.public_key_openssh,
 var.oracle_key.public_key_openssh)
}




resource "oci_core_instance" "test_instance" {
  availability_domain = data.oci_identity_availability_domain.ad.name
  compartment_id      = var.compartment_ocid
  display_name        = "wls_toolkit_wdt_server"
  shape               = var.instance_shape

  shape_config {
    ocpus = "${var.instance_ocpus}"
    memory_in_gbs = "${var.instance_shape_config_memory_in_gbs}"
  }

  create_vnic_details {
    subnet_id        = oci_core_subnet.test_subnet.id
    display_name     = "Primaryvnic"
    assign_public_ip = true
    hostname_label   = "wlswdttoolkit"
  }

  source_details {
    source_type = "image"
    source_id = data.oci_core_images.oracle_linux7_images.images.0.id
  }

  metadata = {
    ssh_authorized_keys = local.public_keys
    user_data           = data.template_cloudinit_config.wls-config.rendered ##base64encode(file("${path.module}/userdata/before-bootstrap"))
  }
  timeouts {
    create = "60m"
  }
}



resource "oci_core_vcn" "test_vcn" {
  cidr_block     = "10.0.0.0/16"
  compartment_id = var.compartment_ocid
  display_name   = "wdt_toolkit_Vcn"
  dns_label      = "wdttoolkitvcn"
}

resource "oci_core_internet_gateway" "test_internet_gateway" {
  compartment_id = var.compartment_ocid
  display_name   = "toolkit_InternetGateway"
  vcn_id         = oci_core_vcn.test_vcn.id
}

resource "oci_core_default_route_table" "default_route_table" {
  manage_default_resource_id = oci_core_vcn.test_vcn.default_route_table_id
  display_name               = "DefaultRouteTable"

  route_rules {
    destination       = "0.0.0.0/0"
    destination_type  = "CIDR_BLOCK"
    network_entity_id = oci_core_internet_gateway.test_internet_gateway.id
  }
}

resource "oci_core_default_security_list" "default_core_security_list" {
  display_name   = "Default Security List"


  // allow outbound tcp traffic on all ports
  egress_security_rules {
    destination = "0.0.0.0/0"
    protocol    = "6"
  }
  
  ingress_security_rules {
    description = "open all ports for the lab"
    #icmp_options = 
    protocol    = "6"
    source      = "0.0.0.0/0"
    source_type = "CIDR_BLOCK"
    stateless   = "false"
    #udp_options = <<Optional value not found in discovery>>
  }

manage_default_resource_id = oci_core_vcn.test_vcn.default_security_list_id  

}

resource "oci_core_subnet" "test_subnet" {
##  availability_domain = data.oci_identity_availability_domain.ad.name
  cidr_block          = "10.0.0.0/24"
  display_name        = "wls_wdt_toolkit_Subnet"
  dns_label           = "toolkitsubnet"
  security_list_ids   = [oci_core_vcn.test_vcn.default_security_list_id]
  compartment_id      = var.compartment_ocid
  vcn_id              = oci_core_vcn.test_vcn.id
  route_table_id      = oci_core_vcn.test_vcn.default_route_table_id
  dhcp_options_id     = oci_core_vcn.test_vcn.default_dhcp_options_id
}

data "oci_identity_availability_domain" "ad" {
  compartment_id = var.tenancy_ocid
  ad_number      = 1
}

