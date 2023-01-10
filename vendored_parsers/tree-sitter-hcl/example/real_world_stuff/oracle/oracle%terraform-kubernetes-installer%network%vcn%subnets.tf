#TODO https://github.com/hashicorp/terraform/issues/11566

resource "oci_core_subnet" "PublicSubnetAD1" {
  # Provisioned only when k8s instances are in private subnets
  count               = "${var.control_plane_subnet_access == "private" ? "1" : "0"}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0],"name")}"
  cidr_block          = "${lookup(var.network_cidrs, "PublicSubnetAD1")}"
  display_name        = "${var.label_prefix}publicSubnetAD1"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id      = "${oci_core_route_table.PublicRouteTable.id}"
  security_list_ids   = ["${concat(list(oci_core_security_list.PublicSecurityList.id), var.additional_public_security_lists_ids)}"]
  dhcp_options_id     = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
}

resource "oci_core_subnet" "PublicSubnetAD2" {
  count               = "${var.control_plane_subnet_access == "private" ? "1" : "0"}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[1],"name")}"
  cidr_block          = "${lookup(var.network_cidrs, "PublicSubnetAD2")}"
  display_name        = "${var.label_prefix}publicSubnetAD2"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id      = "${oci_core_route_table.PublicRouteTable.id}"
  security_list_ids   = ["${concat(list(oci_core_security_list.PublicSecurityList.id), var.additional_public_security_lists_ids)}"]
  dhcp_options_id     = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
}

resource "oci_core_subnet" "PublicSubnetAD3" {
  count               = "${var.control_plane_subnet_access == "private" ? "1" : "0"}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[2],"name")}"
  cidr_block          = "${lookup(var.network_cidrs, "PublicSubnetAD3")}"
  display_name        = "${var.label_prefix}publicSubnetAD3"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id      = "${oci_core_route_table.PublicRouteTable.id}"
  security_list_ids   = ["${concat(list(oci_core_security_list.PublicSecurityList.id), var.additional_public_security_lists_ids)}"]
  dhcp_options_id     = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
}

resource "oci_core_subnet" "NATSubnetAD1" {
  # Provisioned only when k8s instances are in private subnets
  count               = "${(var.control_plane_subnet_access == "private") && (var.dedicated_nat_subnets == "true") ? "1" : "0"}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0],"name")}"
  cidr_block          = "${lookup(var.network_cidrs, "natSubnetAD1")}"
  display_name        = "${var.label_prefix}publicNATSubnetAD1"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id      = "${oci_core_route_table.PublicRouteTable.id}"
  security_list_ids   = ["${concat(list(oci_core_security_list.NatSecurityList.id), var.additional_nat_security_lists_ids)}"]
  dhcp_options_id     = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
}

resource "oci_core_subnet" "NATSubnetAD2" {
  count               = "${(var.control_plane_subnet_access == "private") && (var.dedicated_nat_subnets == "true") ? "1" : "0"}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[1],"name")}"
  cidr_block          = "${lookup(var.network_cidrs, "natSubnetAD2")}"
  display_name        = "${var.label_prefix}publicNATSubnetAD2"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id      = "${oci_core_route_table.PublicRouteTable.id}"
  security_list_ids   = ["${concat(list(oci_core_security_list.NatSecurityList.id), var.additional_nat_security_lists_ids)}"]
  dhcp_options_id     = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
}

resource "oci_core_subnet" "NATSubnetAD3" {
  count               = "${(var.control_plane_subnet_access == "private") && (var.dedicated_nat_subnets == "true") ? "1" : "0"}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[2],"name")}"
  cidr_block          = "${lookup(var.network_cidrs, "natSubnetAD3")}"
  display_name        = "${var.label_prefix}publicNATSubnetAD3"
  compartment_id      = "${var.compartment_ocid}"
  vcn_id              = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id      = "${oci_core_route_table.PublicRouteTable.id}"
  security_list_ids   = ["${concat(list(oci_core_security_list.NatSecurityList.id), var.additional_nat_security_lists_ids)}"]
  dhcp_options_id     = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
}

resource "oci_core_subnet" "etcdSubnetAD1" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0],"name")}"
  cidr_block          = "${lookup(var.network_cidrs, "etcdSubnetAD1")}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${var.label_prefix}${var.control_plane_subnet_access}ETCDSubnetAD1"
  dns_label           = "${lookup(var.network_subnet_dns, "etcdSubnetAD1")}"
  vcn_id              = "${oci_core_virtual_network.CompleteVCN.id}"

  # Work around HIL issue #50 using join and use coalesce to pick the first route that is not empty (AD1 first pick)
  route_table_id             = "${var.control_plane_subnet_access == "private" ? coalesce(join(" ", oci_core_route_table.NATInstanceAD1RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD2RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD3RouteTable.*.id), oci_core_route_table.PublicRouteTable.id) : oci_core_route_table.PublicRouteTable.id}"
  dhcp_options_id            = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
  security_list_ids          = ["${concat(list(oci_core_security_list.EtcdSubnet.id), var.additional_etcd_security_lists_ids)}"]
  prohibit_public_ip_on_vnic = "${var.control_plane_subnet_access == "private" ? "true" : "false"}"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_subnet" "etcdSubnetAD2" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[1],"name")}"
  cidr_block          = "${lookup(var.network_cidrs, "etcdSubnetAD2")}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${var.label_prefix}${var.control_plane_subnet_access}ETCDSubnetAD2"
  dns_label           = "${lookup(var.network_subnet_dns, "etcdSubnetAD2")}"
  vcn_id              = "${oci_core_virtual_network.CompleteVCN.id}"

  # Work around HIL issue #50 using join and use coalesce to pick the first route that is not empty (AD2 first pick)
  route_table_id             = "${var.control_plane_subnet_access == "private" ? coalesce(join(" ", oci_core_route_table.NATInstanceAD2RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD1RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD3RouteTable.*.id), oci_core_route_table.PublicRouteTable.id) : oci_core_route_table.PublicRouteTable.id}"
  dhcp_options_id            = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
  security_list_ids          = ["${concat(list(oci_core_security_list.EtcdSubnet.id), var.additional_etcd_security_lists_ids)}"]
  prohibit_public_ip_on_vnic = "${var.control_plane_subnet_access == "private" ? "true" : "false"}"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_subnet" "etcdSubnetAD3" {
  availability_domain = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[2],"name")}"
  cidr_block          = "${lookup(var.network_cidrs, "etcdSubnetAD3")}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "${var.label_prefix}${var.control_plane_subnet_access}ETCDSubnetAD3"
  dns_label           = "${lookup(var.network_subnet_dns, "etcdSubnetAD3")}"
  vcn_id              = "${oci_core_virtual_network.CompleteVCN.id}"

  # Work around HIL issue #50 using join and use coalesce to pick the first route that is not empty (AD3 first pick)
  route_table_id             = "${var.control_plane_subnet_access == "private" ? coalesce(join(" ", oci_core_route_table.NATInstanceAD3RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD1RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD2RouteTable.*.id), oci_core_route_table.PublicRouteTable.id) : oci_core_route_table.PublicRouteTable.id}"
  dhcp_options_id            = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
  security_list_ids          = ["${concat(list(oci_core_security_list.EtcdSubnet.id), var.additional_etcd_security_lists_ids)}"]
  prohibit_public_ip_on_vnic = "${var.control_plane_subnet_access == "private" ? "true" : "false"}"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_subnet" "k8sMasterSubnetAD1" {
  availability_domain        = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0],"name")}"
  cidr_block                 = "${lookup(var.network_cidrs, "masterSubnetAD1")}"
  compartment_id             = "${var.compartment_ocid}"
  display_name               = "${var.label_prefix}${var.control_plane_subnet_access}K8SMasterSubnetAD1"
  dns_label                  = "${lookup(var.network_subnet_dns, "masterSubnetAD1")}"
  vcn_id                     = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id             = "${var.control_plane_subnet_access == "private" ? coalesce(join(" ", oci_core_route_table.NATInstanceAD1RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD2RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD3RouteTable.*.id), oci_core_route_table.PublicRouteTable.id) : oci_core_route_table.PublicRouteTable.id}"
  dhcp_options_id            = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
  security_list_ids          = ["${concat(list(oci_core_security_list.K8SMasterSubnet.id), var.additional_k8smaster_security_lists_ids)}"]
  prohibit_public_ip_on_vnic = "${var.control_plane_subnet_access == "private" ? "true" : "false"}"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_subnet" "k8sMasterSubnetAD2" {
  availability_domain        = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[1],"name")}"
  cidr_block                 = "${lookup(var.network_cidrs, "masterSubnetAD2")}"
  compartment_id             = "${var.compartment_ocid}"
  display_name               = "${var.label_prefix}${var.control_plane_subnet_access}K8SMasterSubnetAD2"
  dns_label                  = "${lookup(var.network_subnet_dns, "masterSubnetAD2")}"
  vcn_id                     = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id             = "${var.control_plane_subnet_access == "private" ? coalesce(join(" ", oci_core_route_table.NATInstanceAD2RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD1RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD3RouteTable.*.id), oci_core_route_table.PublicRouteTable.id) : oci_core_route_table.PublicRouteTable.id}"
  dhcp_options_id            = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
  security_list_ids          = ["${concat(list(oci_core_security_list.K8SMasterSubnet.id), var.additional_k8smaster_security_lists_ids)}"]
  prohibit_public_ip_on_vnic = "${var.control_plane_subnet_access == "private" ? "true" : "false"}"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_subnet" "k8sMasterSubnetAD3" {
  availability_domain        = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[2],"name")}"
  cidr_block                 = "${lookup(var.network_cidrs, "masterSubnetAD3")}"
  compartment_id             = "${var.compartment_ocid}"
  display_name               = "${var.label_prefix}${var.control_plane_subnet_access}K8SMasterSubnetAD3"
  dns_label                  = "${lookup(var.network_subnet_dns, "masterSubnetAD3")}"
  vcn_id                     = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id             = "${var.control_plane_subnet_access == "private" ? coalesce(join(" ", oci_core_route_table.NATInstanceAD3RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD1RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD2RouteTable.*.id), oci_core_route_table.PublicRouteTable.id) : oci_core_route_table.PublicRouteTable.id}"
  dhcp_options_id            = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
  security_list_ids          = ["${concat(list(oci_core_security_list.K8SMasterSubnet.id), var.additional_k8smaster_security_lists_ids)}"]
  prohibit_public_ip_on_vnic = "${var.control_plane_subnet_access == "private" ? "true" : "false"}"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_subnet" "k8sWorkerSubnetAD1" {
  availability_domain        = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0],"name")}"
  cidr_block                 = "${lookup(var.network_cidrs, "workerSubnetAD1")}"
  compartment_id             = "${var.compartment_ocid}"
  display_name               = "${var.label_prefix}${var.control_plane_subnet_access}K8SWorkerSubnetAD1"
  dns_label                  = "${lookup(var.network_subnet_dns, "workerSubnetAD1")}"
  vcn_id                     = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id             = "${var.control_plane_subnet_access == "private" ? coalesce(join(" ", oci_core_route_table.NATInstanceAD1RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD2RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD3RouteTable.*.id), oci_core_route_table.PublicRouteTable.id) : oci_core_route_table.PublicRouteTable.id}"
  dhcp_options_id            = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
  security_list_ids          = ["${concat(list(oci_core_security_list.K8SWorkerSubnet.id), var.additional_k8sworker_security_lists_ids)}"]
  prohibit_public_ip_on_vnic = "${var.control_plane_subnet_access == "private" ? "true" : "false"}"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_subnet" "k8sWorkerSubnetAD2" {
  availability_domain        = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[1],"name")}"
  cidr_block                 = "${lookup(var.network_cidrs, "workerSubnetAD2")}"
  compartment_id             = "${var.compartment_ocid}"
  display_name               = "${var.label_prefix}${var.control_plane_subnet_access}K8SWorkerSubnetAD2"
  dns_label                  = "${lookup(var.network_subnet_dns, "workerSubnetAD2")}"
  vcn_id                     = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id             = "${var.control_plane_subnet_access == "private" ? coalesce(join(" ", oci_core_route_table.NATInstanceAD2RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD1RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD3RouteTable.*.id), oci_core_route_table.PublicRouteTable.id) : oci_core_route_table.PublicRouteTable.id}"
  dhcp_options_id            = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
  security_list_ids          = ["${concat(list(oci_core_security_list.K8SWorkerSubnet.id), var.additional_k8sworker_security_lists_ids)}"]
  prohibit_public_ip_on_vnic = "${var.control_plane_subnet_access == "private" ? "true" : "false"}"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_subnet" "k8sWorkerSubnetAD3" {
  availability_domain        = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[2],"name")}"
  cidr_block                 = "${lookup(var.network_cidrs, "workerSubnetAD3")}"
  compartment_id             = "${var.compartment_ocid}"
  display_name               = "${var.label_prefix}${var.control_plane_subnet_access}K8SWorkerSubnetAD3"
  dns_label                  = "${lookup(var.network_subnet_dns, "workerSubnetAD3")}"
  vcn_id                     = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id             = "${var.control_plane_subnet_access == "private" ? coalesce(join(" ", oci_core_route_table.NATInstanceAD3RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD1RouteTable.*.id), join(" ", oci_core_route_table.NATInstanceAD2RouteTable.*.id), oci_core_route_table.PublicRouteTable.id) : oci_core_route_table.PublicRouteTable.id}"
  dhcp_options_id            = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
  security_list_ids          = ["${concat(list(oci_core_security_list.K8SWorkerSubnet.id), var.additional_k8sworker_security_lists_ids)}"]
  prohibit_public_ip_on_vnic = "${var.control_plane_subnet_access == "private" ? "true" : "false"}"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}


##### LB Subnets

resource "oci_core_subnet" "k8sCCMLBSubnetAD1" {
  availability_domain        = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[0],"name")}"
  cidr_block                 = "${lookup(var.network_cidrs, "k8sCCMLBSubnetAD1")}"
  compartment_id             = "${var.compartment_ocid}"
  display_name               = "${var.label_prefix}PublicK8SCCMLBSubnetAD1"
  dns_label                  = "${lookup(var.network_subnet_dns, "k8sCCMLBSubnetAD1")}"
  vcn_id                     = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id             = "${oci_core_route_table.PublicRouteTable.id}"
  dhcp_options_id            = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
  security_list_ids          = ["${oci_core_security_list.K8SCCMLBSubnet.id}"]
  prohibit_public_ip_on_vnic = "false"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_subnet" "k8sCCMLBSubnetAD2" {
  availability_domain        = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[1],"name")}"
  cidr_block                 = "${lookup(var.network_cidrs, "k8sCCMLBSubnetAD2")}"
  compartment_id             = "${var.compartment_ocid}"
  display_name               = "${var.label_prefix}PublicK8SCCMLBSubnetAD2"
  dns_label                  = "${lookup(var.network_subnet_dns, "k8sCCMLBSubnetAD2")}"
  vcn_id                     = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id             = "${oci_core_route_table.PublicRouteTable.id}"
  dhcp_options_id            = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
  security_list_ids          = ["${oci_core_security_list.K8SCCMLBSubnet.id}"]
  prohibit_public_ip_on_vnic = "false"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_subnet" "k8sCCMLBSubnetAD3" {
  availability_domain        = "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[2],"name")}"
  cidr_block                 = "${lookup(var.network_cidrs, "k8sCCMLBSubnetAD3")}"
  compartment_id             = "${var.compartment_ocid}"
  display_name               = "${var.label_prefix}PublicK8SCCMLBSubnetAD3"
  dns_label                  = "${lookup(var.network_subnet_dns, "k8sCCMLBSubnetAD3")}"
  vcn_id                     = "${oci_core_virtual_network.CompleteVCN.id}"
  route_table_id             = "${oci_core_route_table.PublicRouteTable.id}"
  dhcp_options_id            = "${oci_core_virtual_network.CompleteVCN.default_dhcp_options_id}"
  security_list_ids          = ["${oci_core_security_list.K8SCCMLBSubnet.id}"]
  prohibit_public_ip_on_vnic = "false"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}



