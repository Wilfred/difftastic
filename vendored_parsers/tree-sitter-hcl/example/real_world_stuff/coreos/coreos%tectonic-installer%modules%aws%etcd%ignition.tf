locals {
  ignition_etcd_keys = ["ignition_etcd_0.json", "ignition_etcd_1.json", "ignition_etcd_2.json"]
}

data "ignition_config" "tnc" {
  count = "${var.instance_count}"

  append {
    source = "${format("http://${var.cluster_name}-tnc.${var.base_domain}/config/etcd?etcd_index=%d", count.index)}"

    # TODO: add verification
  }

  # Used for loading certificates
  append {
    source = "${format("s3://%s/%s", var.s3_bucket, local.ignition_etcd_keys[count.index])}"

    # TODO: add verification
  }
}
