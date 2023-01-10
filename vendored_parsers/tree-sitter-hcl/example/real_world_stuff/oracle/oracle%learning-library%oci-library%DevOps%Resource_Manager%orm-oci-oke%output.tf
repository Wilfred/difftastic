// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.

output "cluster" {
  value = {
    id                 = "${oci_containerengine_cluster.test_cluster.id}"
    kubernetes_version = "${oci_containerengine_cluster.test_cluster.kubernetes_version}"
    name               = "${oci_containerengine_cluster.test_cluster.name}"
  }
}

output "node_pool" {
  value = {
    id                 = "${oci_containerengine_node_pool.test_node_pool.id}"
    kubernetes_version = "${oci_containerengine_node_pool.test_node_pool.kubernetes_version}"
    name               = "${oci_containerengine_node_pool.test_node_pool.name}"
    subnet_ids         = "${oci_containerengine_node_pool.test_node_pool.subnet_ids}"
  }
}

output "cluster_kubernetes_versions" {
  value = ["${data.oci_containerengine_cluster_option.test_cluster_option.kubernetes_versions}"]
}

output "node_pool_kubernetes_version" {
  value = ["${data.oci_containerengine_node_pool_option.test_node_pool_option.kubernetes_versions}"]
}

output "services" {
  value = ["${data.oci_core_services.test_services.services}"]
}
