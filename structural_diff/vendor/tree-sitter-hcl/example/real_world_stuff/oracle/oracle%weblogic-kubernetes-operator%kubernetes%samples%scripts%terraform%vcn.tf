/*
 * Copyright (c) 2018, 2020, Oracle Corporation and/or its affiliates.
 * Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.
*/

// Compartment in which to create the cluster resources.
variable "compartment_name" {}
variable "compartment_ocid" {}

variable vcn_cidr_prefix { default = "10.0" }
variable "vcn_cidr" {
  default = "10.0.0.0/16"
}

# ------------------------------------

/*
 * Create a VCN. 
 * A DNS label with the name of the cluster is attached to the VCN.
 * The creation of the vcn also creates the default route table, security list, and dhcp options.
 */
resource "oci_core_virtual_network" "oke-vcn" {
  cidr_block     = "${var.vcn_cidr}"
  dns_label      = "${var.cluster_name}vcn"
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.cluster_name}_vcn"
}

/*
 * An internet gateway is created in the relevant compartment attached to the created VCN. 
 */
resource "oci_core_internet_gateway" "oke-igateway" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.cluster_name}-igateway"
  vcn_id         = "${oci_core_virtual_network.oke-vcn.id}"
}

/*
 * Configures the default route table that was created when the VCN was created.
 * The default route is pointed to the internet gateway that was created. 
 */

resource "oci_core_default_route_table" "oke-default-route-table" {
  manage_default_resource_id = "${oci_core_virtual_network.oke-vcn.default_route_table_id}"
  display_name               = "${var.cluster_name}-default-route-table"

  route_rules {
    cidr_block        = "0.0.0.0/0"
    network_entity_id = "${oci_core_internet_gateway.oke-igateway.id}"
  }
}

/*
 * Configures the default dhcp options object that was created along with the VCN.
 */
resource "oci_core_default_dhcp_options" "oke-default-dhcp-options" {
  manage_default_resource_id = "${oci_core_virtual_network.oke-vcn.default_dhcp_options_id}"
  display_name               = "${var.cluster_name}-default-dhcp-options"

  # required
  options {
    type        = "DomainNameServer"
    server_type = "VcnLocalPlusInternet"
  }
}

/*
 * Configures the default security list.
 */
resource "oci_core_default_security_list" "oke-default-security-list" {
  manage_default_resource_id = "${oci_core_virtual_network.oke-vcn.default_security_list_id}"
  display_name               = "${var.cluster_name}-default-security-list"

  // allow outbound tcp traffic on all ports
  egress_security_rules {
    destination = "0.0.0.0/0"
    protocol    = "all"
  }

  // allow inbound ssh traffic
  ingress_security_rules {
    protocol  = "6"         // tcp
    source    = "0.0.0.0/0"
    stateless = false

    tcp_options = {
      "min" = 22
      "max" = 22
    }
  }

  // allow inbound icmp traffic of a specific type
  ingress_security_rules {
    protocol = 1
    source   = "0.0.0.0/0"

    icmp_options = {
      "type" = 3
      "code" = 4
    }
  }
}

/*
 * Security list for the worker subnets.
 *  - Stateless ingress/egress rule-pairs for the worker subnets. this lets traffic between the worker
 *    nodes flow freely. Stateless rule.
 *  - Contains a stateful rule to allow traffic to the internet - like for pulling docker images from 
 *    DockerHub
 *  - Conatins two ingress rules to allow SSH traffic from OCI Cluster service.
 */
resource "oci_core_security_list" "oke-worker-security-list" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.cluster_name}-Workers-SecList"
  vcn_id         = "${oci_core_virtual_network.oke-vcn.id}"

  egress_security_rules = [
    {
      destination = "0.0.0.0/0"
      protocol    = "6"         // outbound TCP to the internet
      stateless   = false
    },
    {
      destination = "${var.vcn_cidr_prefix}.10.0/24"
      protocol    = "all"
      stateless   = true
    },
    {
      destination = "${var.vcn_cidr_prefix}.11.0/24"
      protocol    = "all"
      stateless   = true
    },
    {
      destination = "${var.vcn_cidr_prefix}.12.0/24"
      protocol    = "all"
      stateless   = true
    },
  ]

  ingress_security_rules = [
    {
      # Intra VCN traffic - this lets the 3 subnets in teh 3 ADs tak to each other without restriction.
      # These are stateless, so they need to be accompanied by stateless egress rules.
      stateless = true

      protocol = "all"
      source   = "${var.vcn_cidr_prefix}.10.0/24"
    },
    {
      stateless = true
      protocol  = "all"
      source    = "${var.vcn_cidr_prefix}.11.0/24"
    },
    {
      stateless = true
      protocol  = "all"
      source    = "${var.vcn_cidr_prefix}.12.0/24"
    },
    {
      # ICMP 
      protocol = 1
      source   = "0.0.0.0/0"

      icmp_options = {
        "type" = 3
        "code" = 4
      }
    },
    {
      # OCI Cluster service
      protocol  = "6"             // tcp
      source    = "130.35.0.0/16"
      stateless = false

      tcp_options = {
        "min" = 22
        "max" = 22
      }
    },
    {
      protocol  = "6"            // tcp
      source    = "138.1.0.0/17"
      stateless = false

      tcp_options = {
        "min" = 22
        "max" = 22
      }
    },
    # NodePort ingress rules
    {
      protocol  = "6"            // tcp
      source   = "0.0.0.0/0"
      stateless = true

      tcp_options = {
        "min" = 30000
        "max" = 32767
      }
    },
    # SSH Stateful ingress rules
    {
      protocol  = "6"            // tcp
      source   = "0.0.0.0/0"
      stateless = false

      tcp_options = {
        "min" = 22
        "max" = 22
      }
    },
  ]
}

/*
 * Security list for the loadbalancer subnets.
 * - Allows all TCP traffic in/out.
 */
resource "oci_core_security_list" "oke-lb-security-list" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.cluster_name}-LoadBalancers-SecList"
  vcn_id         = "${oci_core_virtual_network.oke-vcn.id}"

  egress_security_rules = [
    {
      destination = "0.0.0.0/0"
      protocol    = "6"
      stateless   = true
    },
  ]

  ingress_security_rules = [
    {
      protocol  = "6"
      source    = "0.0.0.0/0"
      stateless = true
    },
  ]
}

/*
 * Create the subnets. 
 * A total of 5 Subnets are created. This is just a basic config.
 *
 * Worker Subnets
 * --------------
 * 3 Subnets are for worker nodes in the node pool. The workers are spreead across 3 availability 
 * domains, and one subnet is created for each AD to host workers in that AD. 
 * Obviously worker is a generic term, and assumes that the workload is homogeneous.
 * For more realistic topologies, you may need to create additional subnets and security rules to say,
 * separate parts of the application or certains components like a DB in to a separate subnet 
 * with separate security lists. You can for example create subnets to host frontend pods, 
 * middle tier pods as well as data store pods. You may want to restrict front ends to just have 
 * access to middle tier, but not DBs.  
 *
 * LB subnets
 * ----------
 * These host the LoadBalancers. If the K8s deployment create a service of type Loadbalancer then an
 * OCI loadbalancer is provisioned and this is placed in this subnet. The two subnet exists, because 
 * OCI loadbalancers can provide a flaoting VIP that can move over to the second availability domain 
 * in case the first one fails for some reason. Typical HA config.  
 *
 */

resource "oci_core_subnet" "oke-subnet-worker-1" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0],"name")}"
  cidr_block          = "${var.vcn_cidr_prefix}.10.0/24"
  display_name        = "${var.cluster_name}-WorkerSubnet01"
  dns_label           = "workers01"
  compartment_id       = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.oke-vcn.id}"
  security_list_ids   = ["${oci_core_security_list.oke-worker-security-list.id}"]
  route_table_id      = "${oci_core_virtual_network.oke-vcn.default_route_table_id}"
  dhcp_options_id     = "${oci_core_virtual_network.oke-vcn.default_dhcp_options_id}"
}

resource "oci_core_subnet" "oke-subnet-worker-2" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[1],"name")}"
  cidr_block          = "${var.vcn_cidr_prefix}.11.0/24"
  display_name        = "${var.cluster_name}-WorkerSubnet02"
  dns_label           = "workers02"
  compartment_id       = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.oke-vcn.id}"
  security_list_ids   = ["${oci_core_security_list.oke-worker-security-list.id}"]
  route_table_id      = "${oci_core_virtual_network.oke-vcn.default_route_table_id}"
  dhcp_options_id     = "${oci_core_virtual_network.oke-vcn.default_dhcp_options_id}"
}

resource "oci_core_subnet" "oke-subnet-worker-3" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[2],"name")}"
  cidr_block          = "${var.vcn_cidr_prefix}.12.0/24"
  display_name        = "${var.cluster_name}-WorkerSubnet03"
  dns_label           = "workers03"
  compartment_id       = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.oke-vcn.id}"
  security_list_ids   = ["${oci_core_security_list.oke-worker-security-list.id}"]
  route_table_id      = "${oci_core_virtual_network.oke-vcn.default_route_table_id}"
  dhcp_options_id     = "${oci_core_virtual_network.oke-vcn.default_dhcp_options_id}"
}

resource "oci_core_subnet" "oke-subnet-loadbalancer-1" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0],"name")}"
  cidr_block          = "${var.vcn_cidr_prefix}.20.0/24"
  display_name        = "${var.cluster_name}-LB-Subnet01"
  dns_label           = "lb01"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.oke-vcn.id}"
  security_list_ids   = ["${oci_core_security_list.oke-lb-security-list.id}"]
  route_table_id      = "${oci_core_virtual_network.oke-vcn.default_route_table_id}"
  dhcp_options_id     = "${oci_core_virtual_network.oke-vcn.default_dhcp_options_id}"
}

resource "oci_core_subnet" "oke-subnet-loadbalancer-2" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[1],"name")}"
  cidr_block          = "${var.vcn_cidr_prefix}.21.0/24"
  display_name        = "${var.cluster_name}-LB-Subnet02"
  dns_label           = "lb02"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.oke-vcn.id}"
  security_list_ids   = ["${oci_core_security_list.oke-lb-security-list.id}"]
  route_table_id      = "${oci_core_virtual_network.oke-vcn.default_route_table_id}"
  dhcp_options_id     = "${oci_core_virtual_network.oke-vcn.default_dhcp_options_id}"
}

/**
 * Get the avaialbility domains for this tennancy.
 * Using any compartment id in this tennancy should also work just as well. 
 */
data "oci_identity_availability_domains" "ADs" {
  compartment_id = "${var.tenancy_ocid}"
}

/*
 * Query the compartment we created (or re-used) 
 */
data "oci_identity_compartments" "oke-compartment" {
  compartment_id = "${var.compartment_ocid}"

  filter {
    name   = "name"
    values = ["${var.compartment_name}"]
  }
}

data "oci_core_virtual_networks" "oke-vcns" {
  #Required
  compartment_id = "${oci_core_virtual_network.oke-vcn.compartment_id}"

  #Filter
  display_name = "${oci_core_virtual_network.oke-vcn.display_name}"
}

data "oci_core_internet_gateways" "oke-igateways" {
  #Required
  compartment_id = "${oci_core_internet_gateway.oke-igateway.compartment_id}"
  vcn_id         = "${oci_core_internet_gateway.oke-igateway.vcn_id}"
}

data "oci_core_route_tables" "oke_route_tables" {
  #Required
  compartment_id = "${oci_core_virtual_network.oke-vcn.compartment_id}"
  vcn_id         = "${oci_core_virtual_network.oke-vcn.id}"
}

data "oci_core_dhcp_options" "oke_dhcp_options" {
  #Required
  compartment_id = "${oci_core_virtual_network.oke-vcn.compartment_id}"
  vcn_id         = "${oci_core_virtual_network.oke-vcn.id}"
}

data "oci_core_security_lists" "oke_security_lists" {
  #Required
  compartment_id = "${oci_core_security_list.oke-worker-security-list.compartment_id}"
  vcn_id         = "${oci_core_security_list.oke-worker-security-list.vcn_id}"
}

data "oci_core_subnets" "oke_subnets" {
  #Required
  compartment_id = "${oci_core_subnet.oke-subnet-worker-1.compartment_id}"
  vcn_id         = "${oci_core_subnet.oke-subnet-worker-1.vcn_id}"
}

# Print out the VCN objects that were created.

output "Compartments" {
  value = "${data.oci_identity_compartments.oke-compartment.compartments}"
}

output "VCN" {
  value = "${data.oci_core_virtual_networks.oke-vcns.virtual_networks}"
}

output "InternetGateway" {
  value = "${data.oci_core_internet_gateways.oke-igateways.gateways}"
}

output "RouteTables" {
  value = "${data.oci_core_route_tables.oke_route_tables.route_tables}"
}

output "DHCPOptions" {
  value = "${data.oci_core_dhcp_options.oke_dhcp_options.options}"
}

output "SecurityLists" {
  value = "${data.oci_core_security_lists.oke_security_lists.security_lists}"
}

output "Subnets" {
  value = "${data.oci_core_subnets.oke_subnets.subnets}"
}
