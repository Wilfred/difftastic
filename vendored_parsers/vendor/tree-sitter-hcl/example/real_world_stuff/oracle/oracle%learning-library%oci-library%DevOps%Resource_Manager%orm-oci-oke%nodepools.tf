// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.

resource "oci_containerengine_node_pool" "test_node_pool" {
  #Required
  cluster_id         = "${oci_containerengine_cluster.test_cluster.id}"
  compartment_id     = "${var.compartment_ocid}"
  kubernetes_version = "${data.oci_containerengine_node_pool_option.test_node_pool_option.kubernetes_versions.1}"
  name               = "${var.node_pool_name}"
  node_image_name    = "${var.node_pool_node_image_name}"
  node_shape         = "${var.node_pool_node_shape}"
  depends_on         = ["oci_containerengine_cluster.test_cluster"]

  #Optional
  initial_node_labels {
    #Optional
    key   = "${var.node_pool_initial_node_labels_key}"
    value = "${var.node_pool_initial_node_labels_value}"
  }

  node_config_details {

   dynamic "placement_configs" {
      iterator = ad_iterator
      for_each = "${data.template_file.ad_names.*.rendered}"
      content {
      	availability_domain = ad_iterator.value
        subnet_id           = "${oci_core_subnet.nodepool_regional_subnet.id}"
      }
   }

    # set number of nodes in the node pool
    size = "${var.number_of_nodes}"
   }

  ssh_public_key      = "${var.node_pool_ssh_public_key}"
}
