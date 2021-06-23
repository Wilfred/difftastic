// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.

resource "oci_containerengine_cluster" "test_cluster" {
  #Required
  compartment_id     = "${var.compartment_ocid}"
  kubernetes_version = "${data.oci_containerengine_cluster_option.test_cluster_option.kubernetes_versions.1}"
  name               = "${var.cluster_name}"
  vcn_id             = "${oci_core_virtual_network.test_vcn.id}"

  #Optional
  options {
    service_lb_subnet_ids = ["${oci_core_subnet.lb_regional_subnet.id}"]

    #Optional
    add_ons {
      #Optional
      is_kubernetes_dashboard_enabled = "${var.cluster_options_add_ons_is_kubernetes_dashboard_enabled}"
      is_tiller_enabled               = "${var.cluster_options_add_ons_is_tiller_enabled}"
    }

    kubernetes_network_config {
      #Optional
      pods_cidr     = "${var.cluster_options_kubernetes_network_config_pods_cidr}"
      services_cidr = "${var.cluster_options_kubernetes_network_config_services_cidr}"
    }
  }
}
