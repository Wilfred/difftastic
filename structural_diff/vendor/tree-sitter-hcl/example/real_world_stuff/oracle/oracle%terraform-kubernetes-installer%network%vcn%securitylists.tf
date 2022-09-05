resource "oci_core_security_list" "EtcdSubnet" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.label_prefix}etcd_security_list"
  vcn_id         = "${oci_core_virtual_network.CompleteVCN.id}"

  egress_security_rules = [
    {
      destination = "0.0.0.0/0"
      protocol    = "all"
    },
  ]

  ingress_security_rules = [
    {
      protocol = "1"
      source   = "${var.external_icmp_ingress}"

      icmp_options = {
        "type" = 3
        "code" = 4
      }
    },
    {
      protocol = "1"
      source   = "${var.internal_icmp_ingress}"

      icmp_options = {
        "type" = 3
        "code" = 4
      }
    },
    {
      # Allow LBaaS and internal VCN traffic
      protocol = "6"
      source   = "${lookup(var.bmc_ingress_cidrs, "LBAAS-PHOENIX-1-CIDR")}"
    },
    {
      protocol = "6"
      source   = "${lookup(var.bmc_ingress_cidrs, "LBAAS-ASHBURN-1-CIDR")}"
    },
    {
      protocol = "6"
      source   = "${lookup(var.bmc_ingress_cidrs, "VCN-CIDR")}"
    },
    {
      tcp_options = {
        "max" = 22
        "min" = 22
      }

      protocol = "6"
      source   = "${var.etcd_ssh_ingress}"
    },
    {
      tcp_options = {
        "max" = 2380
        "min" = 2379
      }

      protocol = "6"
      source   = "${var.etcd_cluster_ingress}"
    },
  ]

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_security_list" "K8SMasterSubnet" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.label_prefix}k8sMaster_security_list"
  vcn_id         = "${oci_core_virtual_network.CompleteVCN.id}"

  egress_security_rules = [
    {
      destination = "0.0.0.0/0"
      protocol    = "all"
    },
  ]

  ingress_security_rules = [
    {
      protocol = "1"
      source   = "${var.external_icmp_ingress}"

      icmp_options = {
        "type" = 3
        "code" = 4
      }
    },
    {
      protocol = "1"
      source   = "${var.internal_icmp_ingress}"

      icmp_options = {
        "type" = 3
        "code" = 4
      }
    },
    {
      # Allow LBaaS and internal VCN traffic
      protocol = "6"
      source   = "${lookup(var.bmc_ingress_cidrs, "LBAAS-PHOENIX-1-CIDR")}"
    },
    {
      protocol = "6"
      source   = "${lookup(var.bmc_ingress_cidrs, "LBAAS-ASHBURN-1-CIDR")}"
    },
    {
      protocol = "all"
      source   = "${lookup(var.bmc_ingress_cidrs, "VCN-CIDR")}"
    },
    {
      tcp_options = {
        "max" = 22
        "min" = 22
      }

      protocol = "6"
      source   = "${var.master_ssh_ingress}"
    },
    {
      tcp_options = {
        "max" = 8080
        "min" = 8080
      }

      protocol = "6"
      source   = "${lookup(var.bmc_ingress_cidrs, "VCN-CIDR")}"
    },
    {
      tcp_options = {
        "max" = 443
        "min" = 443
      }

      protocol = "6"
      source   = "${var.master_https_ingress}"
    },
    {
      tcp_options = {
        "min" = 30000
        "max" = 32767
      }

      protocol = "6"
      source   = "${var.master_nodeport_ingress}"
    },
  ]

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_security_list" "K8SWorkerSubnet" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.label_prefix}k8sWorker_security_list"
  vcn_id         = "${oci_core_virtual_network.CompleteVCN.id}"

  egress_security_rules = [
    {
      destination = "0.0.0.0/0"
      protocol    = "all"
    },
  ]

  ingress_security_rules = [
    {
      protocol = "1"
      source   = "${var.external_icmp_ingress}"

      icmp_options = {
        "type" = 3
        "code" = 4
      }
    },
    {
      protocol = "1"
      source   = "${var.internal_icmp_ingress}"

      icmp_options = {
        "type" = 3
        "code" = 4
      }
    },
    {
      # LBaaS and internal VCN traffic
      protocol = "6"
      source   = "${lookup(var.bmc_ingress_cidrs, "LBAAS-PHOENIX-1-CIDR")}"
    },
    {
      protocol = "6"
      source   = "${lookup(var.bmc_ingress_cidrs, "LBAAS-ASHBURN-1-CIDR")}"
    },
    {
      protocol = "all"
      source   = "${lookup(var.bmc_ingress_cidrs, "VCN-CIDR")}"
    },
    {
      # External traffic
      tcp_options = {
        "max" = 22
        "min" = 22
      }

      protocol = "6"
      source   = "${var.worker_ssh_ingress}"
    },
    {
      tcp_options = {
        "min" = 30000
        "max" = 32767
      }

      protocol = "6"
      source   = "${var.worker_nodeport_ingress}"
    },
  ]

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_security_list" "PublicSecurityList" {
  count          = "${var.control_plane_subnet_access == "private" ? "1" : "0"}"
  compartment_id = "${var.compartment_ocid}"
  display_name   = "public_security_list"
  vcn_id         = "${oci_core_virtual_network.CompleteVCN.id}"

  egress_security_rules = [{
    protocol    = "all"
    destination = "0.0.0.0/0"
  }]

  ingress_security_rules = [
    {
      protocol = "1"
      source   = "${var.external_icmp_ingress}"

      icmp_options = {
        "type" = 3
        "code" = 4
      }
    },
    {
      protocol = "1"
      source   = "${var.internal_icmp_ingress}"

      icmp_options = {
        "type" = 3
        "code" = 4
      }
    },
    {
      # Allow LBaaS
      protocol = "6"
      source   = "${lookup(var.bmc_ingress_cidrs, "LBAAS-PHOENIX-1-CIDR")}"
    },
    {
      protocol = "6"
      source   = "${lookup(var.bmc_ingress_cidrs, "LBAAS-ASHBURN-1-CIDR")}"
    },
    {
      # Allow internal VCN traffic
      protocol = "all"
      source   = "${lookup(var.bmc_ingress_cidrs, "VCN-CIDR")}"
    },
    {
      # Access to SSH port to instances on the public network (like the NAT instance or a user-defined LB)
      protocol = "6"
      source   = "${var.public_subnet_ssh_ingress}"

      tcp_options = {
        "min" = 22
        "max" = 22
      }
    },
    {
      # Access to port 80 and 443 to instances on the public network (like the NAT instance or a user-defined LB)
      protocol = "6"
      source   = "${var.public_subnet_http_ingress}"

      tcp_options = {
        "min" = 80
        "max" = 80
      }
    },
    {
      protocol = "6"
      source   = "${var.public_subnet_https_ingress}"

      tcp_options = {
        "min" = 443
        "max" = 443
      }
    },
    {
      protocol = "6"
      source   = "${var.etcd_cluster_ingress}"
      
      tcp_options = {
        "min" = 2379
        "max" = 2380
      }
    },
  ]
}

resource "oci_core_security_list" "NatSecurityList" {
  count          = "${(var.control_plane_subnet_access == "private") && (var.dedicated_nat_subnets == "true") ? "1" : "0"}"
  compartment_id = "${var.compartment_ocid}"
  display_name   = "nat_security_list"
  vcn_id         = "${oci_core_virtual_network.CompleteVCN.id}"

  egress_security_rules = [{
    protocol    = "all"
    destination = "0.0.0.0/0"
  }]

  ingress_security_rules = [
    {
      protocol = "1"
      source   = "${var.external_icmp_ingress}"

      icmp_options = {
        "type" = 3
        "code" = 4
      }
    },
    {
      protocol = "1"
      source   = "${var.internal_icmp_ingress}"

      icmp_options = {
        "type" = 3
        "code" = 4
      }
    },
    {
      # Allow LBaaS
      protocol = "6"
      source   = "${lookup(var.bmc_ingress_cidrs, "LBAAS-PHOENIX-1-CIDR")}"
    },
    {
      protocol = "6"
      source   = "${lookup(var.bmc_ingress_cidrs, "LBAAS-ASHBURN-1-CIDR")}"
    },
    {
      # Allow internal VCN traffic
      protocol = "all"
      source   = "${lookup(var.bmc_ingress_cidrs, "VCN-CIDR")}"
    },
    {
      # Access to SSH port to instances on the public network (like the NAT instance or a user-defined LB)
      protocol = "6"
      source   = "${var.public_subnet_ssh_ingress}"

      tcp_options = {
        "min" = 22
        "max" = 22
      }
    },
    {
      # Access to port 80 and 443 to instances on the public network (like the NAT instance or a user-defined LB)
      protocol = "6"
      source   = "${var.public_subnet_http_ingress}"

      tcp_options = {
        "min" = 80
        "max" = 80
      }
    },
    {
      protocol = "6"
      source   = "${var.public_subnet_https_ingress}"

      tcp_options = {
        "min" = 443
        "max" = 443
      }
    },
    {
      protocol = "6"
      source   = "${var.etcd_cluster_ingress}"
      
      tcp_options = {
        "min" = 2379
        "max" = 2380
      }
    },
  ]
}

resource "oci_core_security_list" "K8SCCMLBSubnet" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.label_prefix}k8sCCM_security_list"
  vcn_id         = "${oci_core_virtual_network.CompleteVCN.id}"
  egress_security_rules = [{
    protocol    = "all"
    destination = "0.0.0.0/0"
  }]
  ingress_security_rules = [
  ]
}
