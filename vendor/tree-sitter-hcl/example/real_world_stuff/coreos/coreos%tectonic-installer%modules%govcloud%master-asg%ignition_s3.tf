resource "aws_s3_bucket_object" "ignition_master" {
  bucket  = "${var.s3_bucket}"
  key     = "ignition_master.json"
  content = "${data.ignition_config.main.rendered}"
  acl     = "private"

  server_side_encryption = "AES256"

  tags = "${merge(map(
      "Name", "${var.cluster_name}-ignition-etcd-${count.index}",
      "KubernetesCluster", "${var.cluster_name}",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"
}

data "ignition_config" "s3" {
  replace {
    source       = "${format("s3://%s/%s", var.s3_bucket, aws_s3_bucket_object.ignition_master.key)}"
    verification = "sha512-${sha512(data.ignition_config.main.rendered)}"
  }
}
