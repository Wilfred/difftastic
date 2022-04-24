
// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.


data "oci_identity_availability_domains" "test_availability_domains" {
  compartment_id = "${var.compartment_ocid}"
}

data "oci_containerengine_cluster_option" "test_cluster_option" {
  cluster_option_id = "all"
}

data "oci_containerengine_node_pool_option" "test_node_pool_option" {
  node_pool_option_id = "all"
}


data "oci_core_services" "test_services" {
  filter {
    name   = "name"
    values = ["All .* Services In Oracle Services Network"]
    regex  = true
  }
}


data "oci_identity_availability_domains" "ad_list" {
  compartment_id = var.tenancy_ocid
}

data "template_file" "ad_names" {
  count    = length(data.oci_identity_availability_domains.ad_list.availability_domains)
  template = lookup(data.oci_identity_availability_domains.ad_list.availability_domains[count.index], "name")
}


data "oci_containerengine_cluster_kube_config" "test_cluster_kube_config" {
  #Required
  cluster_id = "${oci_containerengine_cluster.test_cluster.id}"

  #Optional
  expiration    = "${var.cluster_kube_config_expiration}"
  token_version = "${var.cluster_kube_config_token_version}"
}
