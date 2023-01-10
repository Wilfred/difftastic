// Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.

resource "local_file" "test_cluster_kube_config_file" {
  content  = "${data.oci_containerengine_cluster_kube_config.test_cluster_kube_config.content}"
  filename = "${path.module}/test_cluster_kubeconfig"
}
