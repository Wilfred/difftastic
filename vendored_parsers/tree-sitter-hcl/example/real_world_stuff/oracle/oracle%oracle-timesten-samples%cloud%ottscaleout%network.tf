# Copyright (c) 1999, 2019, Oracle and/or its affiliates. All rights reserved.
#
# Licensed under the Universal Permissive License v 1.0 as shown
# at http://oss.oracle.com/licenses/upl
#
# Sets up networks for TimesTen 
# One public regional subnet, one private regional subnet
# Bastion servers live on public subnet
# Other compute and block volumes are on private subnet
# NAT gateway provides internet access for hosts on private subnet
#
# Configure security lists, open ports, enable DNS
# 4/2019 - now using regional subnets rather than one per AD
#

# validate service name
# oci limits vcn name to 15 chars, code below adds 'vcn'
# alpha followed by 0-11 alphanumeric
locals {
  nameregex = "^[A-Za-z][A-Za-z0-9]{0,11}$"
  nameermsg = "\nService name must start with alpha and contain only alpha and numeric characters"
}

resource "null_resource" "service_name_check" {
  provisioner "local-exec" {
    command = "if [[ ! -z ${var.service_name} ]] && [[ ! ${var.service_name} =~ ${local.nameregex} ]]; then echo '${local.nameermsg}' && false;  fi;" 
  }
}


resource "oci_core_vcn" "CoreVCN" {
    cidr_block = "${var.network["cidr"]}"
    compartment_id = "${var.compartment_ocid}"
    display_name = "vcn${var.service_name}"
    dns_label = "vcn${var.service_name}"
    freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

resource "oci_core_internet_gateway" "PublicIG" {
    compartment_id = "${var.compartment_ocid}"
    display_name = "PublicIG"
    vcn_id = "${oci_core_vcn.CoreVCN.id}"
    freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

resource "oci_core_route_table" "PublicRouteTable" {
    compartment_id = "${var.compartment_ocid}"
    vcn_id = "${oci_core_vcn.CoreVCN.id}"
    display_name = "PublicRouteTable"
    route_rules {
        #cidr_block = "0.0.0.0/0"
        destination = "0.0.0.0/0"
        destination_type = "CIDR_BLOCK"
        network_entity_id = "${oci_core_internet_gateway.PublicIG.id}"
    }
}

resource "oci_core_security_list" "PublicSecurityList" {
    compartment_id = "${var.compartment_ocid}"
    display_name = "PublicSecurityList"
    vcn_id = "${oci_core_vcn.CoreVCN.id}"

    egress_security_rules {
        protocol = "all"
        destination = "0.0.0.0/0"
    }

    ingress_security_rules {
        tcp_options {
            max = 443
            min = 443
        }
        protocol = "6"
        source = "0.0.0.0/0"
    }
    ingress_security_rules {
        protocol = "6"
        source = "0.0.0.0/0"
        tcp_options {
            min = 22
            max = 22
        }
    }
    ingress_security_rules {
        protocol = "all"
        source = "${var.network["cidr"]}"
    }
    ingress_security_rules {
        protocol = "1"
        source = "0.0.0.0/0"
        icmp_options {
            type = 3
            code = 4
        }
    }
    freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

resource "oci_core_nat_gateway" "nat_gateway" {
    #Required
    compartment_id = "${var.compartment_ocid}"
    vcn_id = "${oci_core_vcn.CoreVCN.id}"
    #Optional
    display_name = "nat_gateway_${var.service_name}"
    freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

resource "oci_core_subnet" "public_subnet" {
    cidr_block = "${cidrsubnet(var.network["cidr"],var.network["subnets"],0)}"
    display_name = "public_subnet0"
    compartment_id = "${var.compartment_ocid}"
    vcn_id = "${oci_core_vcn.CoreVCN.id}"
    route_table_id = "${oci_core_route_table.PublicRouteTable.id}"
    security_list_ids = ["${oci_core_security_list.PublicSecurityList.id}"]
    dhcp_options_id = "${oci_core_vcn.CoreVCN.default_dhcp_options_id}"
    dns_label = "ttpublic0"
    freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

#####
#
#
# private subnets
#
# Allocates private subnets and compute instances
# Bastion hosts are attached to public subnet
# All other hosts, block volumes are attached to private subnet

resource "oci_core_security_list" "PrivateSecurityList_ttservers" {
    compartment_id = "${var.compartment_ocid}"
    display_name = "ttPrivateSecurityList"
    vcn_id = "${oci_core_vcn.CoreVCN.id}"

    egress_security_rules {
	protocol = "all"
	destination = "0.0.0.0/0"
    }

    ingress_security_rules {
        tcp_options {
            max = "${var.timesten["mgmtdaemonport"]}"
            min = "${var.timesten["mgmtdaemonport"]}"
        }
        protocol = "6"
        source = "${var.network["cidr"]}"
    }
    ingress_security_rules {
        tcp_options {
            max = "${var.timesten["mgmtcsport"] }"
            min = "${var.timesten["mgmtcsport"] }"
        }
        protocol = "6"
        source = "${var.network["cidr"]}"
    }
    ingress_security_rules {
        tcp_options {
            max = "${var.timesten["mgmtreplport"]}"
            min = "${var.timesten["mgmtreplport"]}"
        }
        protocol = "6"
        source = "${var.network["cidr"]}"
    }
    ingress_security_rules {
        tcp_options {
            max = "${var.timesten["chnlporthi"]}"
            min = "${var.timesten["chnlportlo"]}"
        }
        protocol = "6"
        source = "${var.network["cidr"]}"
    }
    ingress_security_rules {
        tcp_options {
            max = "${var.zookeeper["zkclientport"]}"
            min = "${var.zookeeper["zkclientport"]}"
        }
        protocol = "6"
        source = "${var.network["cidr"]}"
    }
    ingress_security_rules {
        tcp_options {
            max = "${var.zookeeper["zkserverport"]}"
            min = "${var.zookeeper["zkserverport"]}"
        }
        protocol = "6"
        source = "${var.network["cidr"]}"
    }
    ingress_security_rules {
        tcp_options {
            max = "${var.zookeeper["zkelectionport"]}"
            min = "${var.zookeeper["zkelectionport"]}"
        }
        protocol = "6"
        source = "${var.network["cidr"]}"
    }
    ingress_security_rules {
        protocol = "6"
        tcp_options {
            min = 22
            max = 22
        }
        source = "${var.network["cidr"]}"
    }
    ingress_security_rules {
        protocol = "1"
        source = "0.0.0.0/0"
        icmp_options {
            type = 8
            code = 0
        }
    }
    freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

resource "oci_core_security_list" "PrivateSecurityList_ttclients" {
    compartment_id = "${var.compartment_ocid}"
    display_name = "ttClientSecurityList"
    vcn_id = "${oci_core_vcn.CoreVCN.id}"
    egress_security_rules {
	protocol = "all"
	destination = "0.0.0.0/0"
    }

    ingress_security_rules {
        protocol = "6"
        tcp_options {
            min = 22
            max = 22
        }
        source = "${var.network["cidr"]}"
    }
    ingress_security_rules {
        protocol = "1"
        source = "0.0.0.0/0"
        icmp_options {
            type = 8
            code = 0
        }
    }
    freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

# Optionally create NAT routing through bastion host
# Limitation that all private subnets route through one bastion host
# If using bastion host for NAT, need to manually add route rule if that host is lost

# Gets a list of VNIC attachments on the bastion (NAT) instance
data "oci_core_vnic_attachments" "bsInstanceVnic" {
    compartment_id = "${var.compartment_ocid}"
    instance_id = "${element(oci_core_instance.bs_instance.*.id, 0)}"
}

# Get private IP address
resource "oci_core_private_ip" "bsInstancePrivateIP" {
    vnic_id = "${lookup(data.oci_core_vnic_attachments.bsInstanceVnic.vnic_attachments[0],"vnic_id")}"
    display_name = "bsInstancePrivateIP"
    freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

# Private Route Table
# Create routing for private subnet through NAT gateway or NAT instance
# For NAT instance, route through one bastion host only
# If using bastion host for NAT, need to manually add route rule if that host is lost
locals {
  # hashicorp issue 11210 workaround
  has_pip  = "${(length(oci_core_private_ip.bsInstancePrivateIP.*.id) > 0) ? 
                 element(concat(oci_core_private_ip.bsInstancePrivateIP.*.id,list("")),0) :
                 oci_core_nat_gateway.nat_gateway.id }"
  nat_type = "${(var.network["use_nat_gateway"] == 0) ? 
                 local.has_pip : oci_core_nat_gateway.nat_gateway.id}"
}

resource "oci_core_route_table" "PrivateRouteTable" {
    compartment_id = "${var.compartment_ocid}"
    vcn_id = "${oci_core_vcn.CoreVCN.id}"
    display_name = "PrivateRouteTable"
    route_rules {
        destination = "0.0.0.0/0"
	destination_type = "CIDR_BLOCK"
	network_entity_id = "${local.nat_type}"
    }
    freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

# Subnets now are regional
# Route through NAT gateway
# Data channel subnet
resource "oci_core_subnet" "private_subnet_dc" {
    cidr_block = "${cidrsubnet(var.network["cidr"],var.network["subnets"],2)}"
    display_name = "private_subnet_dc0"
    compartment_id = "${var.compartment_ocid}"
    vcn_id = "${oci_core_vcn.CoreVCN.id}"
    route_table_id = "${oci_core_route_table.PrivateRouteTable.id}"
    security_list_ids = ["${oci_core_security_list.PrivateSecurityList_ttservers.id}"]
    dhcp_options_id = "${oci_core_vcn.CoreVCN.default_dhcp_options_id}"
    dns_label="ttprivdc0"
    prohibit_public_ip_on_vnic = "true"
    freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}

# Client subnet
resource "oci_core_subnet" "private_subnet_cl" {
    cidr_block = "${cidrsubnet(var.network["cidr"],var.network["subnets"],3)}"
    display_name = "private_subnet_cl0"
    compartment_id = "${var.compartment_ocid}"
    vcn_id = "${oci_core_vcn.CoreVCN.id}"
    route_table_id = "${oci_core_route_table.PrivateRouteTable.id}"
    security_list_ids = ["${oci_core_security_list.PrivateSecurityList_ttclients.id}"]
    dhcp_options_id = "${oci_core_vcn.CoreVCN.default_dhcp_options_id}"
    dns_label="ttprivcl0"
    prohibit_public_ip_on_vnic = "true"
    freeform_tags = "${map(var.opc["tagkey"],var.service_name)}"
}
