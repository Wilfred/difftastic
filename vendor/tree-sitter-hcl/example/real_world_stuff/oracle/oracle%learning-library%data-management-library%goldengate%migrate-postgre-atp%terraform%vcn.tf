#VCN
resource oci_core_vcn holvcn {
	compartment_id = var.compartment_ocid
	cidr_block     = var.holvcn_cidr_block
	dns_label      = var.holvcn_dns_label
	display_name   = var.holvcn_display_name
}

#PUBLIC SUBNET
resource "oci_core_subnet" "holvcn_public_subnet" {
	compartment_id = var.compartment_ocid
	vcn_id = oci_core_vcn.holvcn.id
    cidr_block 		= var.holvcn_public_cidr_block
    dns_label 		= var.holvcn_public_dns_label
    display_name 	= var.holvcn_public_subnet_display_name
	security_list_ids   = [oci_core_security_list.holvcn_public_security_list.id]
}
resource "oci_core_route_table_attachment" "holvcn_public_route_attachment" {
  subnet_id = oci_core_subnet.holvcn_public_subnet.id
  route_table_id = oci_core_route_table.holvcn_public_route_table.id
}

#PRIVATE SUBNET
resource "oci_core_subnet" "holvcn_private_subnet" {
	compartment_id = var.compartment_ocid
	vcn_id = oci_core_vcn.holvcn.id
    cidr_block 		= var.holvcn_private_cidr_block
    dns_label 		= var.holvcn_private_dns_label
    display_name 	= var.holvcn_private_subnet_display_name
	security_list_ids   = [oci_core_security_list.holvcn_private_security_list.id]
}
resource "oci_core_route_table_attachment" "holvcn_private_route_attachment" {
  subnet_id = oci_core_subnet.holvcn_private_subnet.id
  route_table_id = oci_core_route_table.holvcn_private_route_table.id
}

#Public RT
resource "oci_core_route_table" "holvcn_public_route_table" {
    compartment_id = var.compartment_ocid
	display_name = var.holvcn_public_route_table_display_name
    vcn_id = oci_core_vcn.holvcn.id
    route_rules {
        network_entity_id = oci_core_internet_gateway.holvcn_igw.id
        cidr_block = var.holvcn_igw_cidr_block
        destination_type = "CIDR_BLOCK"
    }
}

#Private RT
resource "oci_core_route_table" "holvcn_private_route_table" {
    compartment_id = var.compartment_ocid
	display_name = var.holvcn_private_route_table_display_name
    vcn_id = oci_core_vcn.holvcn.id
    route_rules {
        network_entity_id = oci_core_nat_gateway.holvcn_nat.id
        cidr_block = var.holvcn_nat_cidr_block
        destination_type = "CIDR_BLOCK"
    }
}
#IGW
resource "oci_core_internet_gateway" "holvcn_igw" {
    compartment_id = var.compartment_ocid
    vcn_id = oci_core_vcn.holvcn.id
    enabled = "true"
    display_name = var.holvcn_igw_display_name
}
#NAT
resource "oci_core_nat_gateway" "holvcn_nat" {
    compartment_id = var.compartment_ocid
    vcn_id = oci_core_vcn.holvcn.id
    display_name = var.holvcn_nat_display_name
}
#Public SL
resource "oci_core_security_list" "holvcn_public_security_list" {
    display_name   = var.holvcn_public_security_list_display_name
	compartment_id = var.compartment_ocid
	vcn_id         = oci_core_vcn.holvcn.id
	egress_security_rules {
        destination = var.holvcn_igw_cidr_block
        protocol 	= "all"
    }
	ingress_security_rules {
        protocol    = "6"
        source      = var.holvcn_igw_cidr_block
        source_type = "CIDR_BLOCK"
        tcp_options {
            max = 22
            min = 22
        }
    }
	ingress_security_rules {
        protocol    = "6"
        source      = var.holvcn_igw_cidr_block
        source_type = "CIDR_BLOCK"
		description = "Web ports"
        tcp_options {
            max = 80
            min = 80
        }
    }
	ingress_security_rules {
        protocol    = "6"
        source      = var.holvcn_igw_cidr_block
        source_type = "CIDR_BLOCK"
		description = "Web ports"
        tcp_options {
            max = 443
            min = 443
        }
    }
	ingress_security_rules {
        protocol    = "6"
        source      = var.holvcn_igw_cidr_block
        source_type = "CIDR_BLOCK"
		description = "Goldengate microservices ports"
        tcp_options {
            max = 9014
            min = 9011
        }
    }
	ingress_security_rules {
        protocol    = "6"
        source      = var.holvcn_igw_cidr_block
        source_type = "CIDR_BLOCK"
		description = "Goldengate microservice ports"
        tcp_options {
            max = 9024
            min = 9021
        }
    }
	ingress_security_rules {
        protocol    = "6"
        source      = var.holvcn_igw_cidr_block
        source_type = "CIDR_BLOCK"
		description = "Goldengate Classic ports"
        tcp_options {
            max = 7811
            min = 7809
        }
    }
	ingress_security_rules {
        protocol    = "6"
        source      = var.holvcn_igw_cidr_block
        source_type = "CIDR_BLOCK"
		description = "Database ports"
        tcp_options {
            max = 1522
            min = 1521
        }
    }
	ingress_security_rules {
        protocol    = "6"
        source      = var.holvcn_igw_cidr_block
        source_type = "CIDR_BLOCK"
		#description = "Postgresql port"
        tcp_options {
            max = 5432
            min = 5432
        }
    }
}

#Private SL
resource "oci_core_security_list" "holvcn_private_security_list" {
    display_name   = var.holvcn_private_security_list_display_name
    compartment_id = var.compartment_ocid
	vcn_id         = oci_core_vcn.holvcn.id
    
	egress_security_rules {
        destination = var.holvcn_nat_cidr_block
        protocol 	= "all"
    }
    ingress_security_rules {
        source 		= var.holvcn_cidr_block
        protocol 	= "all"
    } 
    ingress_security_rules {
        protocol    = "6"
        source      = var.holvcn_cidr_block
        source_type = "CIDR_BLOCK"
        tcp_options {
            max = 22
            min = 22
        }
    } 	
}