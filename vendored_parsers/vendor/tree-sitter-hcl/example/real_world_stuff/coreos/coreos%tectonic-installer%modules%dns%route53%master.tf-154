resource "aws_route53_record" "master_nodes" {
  count   = "${var.elb_alias_enabled ? 0 : var.master_count}"
  zone_id = "${data.aws_route53_zone.tectonic.zone_id}"
  name    = "${var.cluster_name}-master-${count.index}"
  type    = "A"
  ttl     = "60"
  records = ["${var.master_ip_addresses[count.index]}"]
}
