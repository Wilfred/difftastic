resource "aws_route53_record" "etcd_a_nodes" {
  count   = "${var.self_hosted_etcd != "" ? 0 : var.etcd_count}"
  type    = "A"
  ttl     = "60"
  zone_id = "${local.zone_id}"
  name    = "${var.cluster_name}-etcd-${count.index}"
  records = ["${var.etcd_ip_addresses[count.index]}"]
}
