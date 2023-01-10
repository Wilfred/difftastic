data "aws_route53_zone" "tectonic" {
  name = "${var.base_domain}"
}

locals {
  private_zone_id = "${var.tectonic_external_private_zone == "" ?
                        join("", aws_route53_zone.tectonic_int.*.zone_id) :
                        var.tectonic_external_private_zone}"

  public_zone_id = "${join("", data.aws_route53_zone.tectonic.*.zone_id)}"

  zone_id = "${var.tectonic_private_endpoints ?
                      local.private_zone_id :
                      local.public_zone_id}"
}

resource "aws_route53_zone" "tectonic_int" {
  count         = "${var.tectonic_private_endpoints ? "${var.tectonic_external_private_zone == "" ? 1 : 0 }" : 0}"
  vpc_id        = "${var.tectonic_external_vpc_id}"
  name          = "${var.base_domain}"
  force_destroy = true

  tags = "${merge(map(
      "Name", "${var.cluster_name}_tectonic_int_zone",
      "KubernetesCluster", "${var.cluster_name}",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.tectonic_extra_tags)}"
}

resource "aws_route53_record" "tectonic_api" {
  count   = "${var.elb_alias_enabled ? 0 : 1}"
  zone_id = "${local.public_zone_id}"
  name    = "${var.cluster_name}-k8s"
  type    = "A"
  ttl     = "60"
  records = ["${var.api_ip_addresses}"]
}

resource "aws_route53_record" "tectonic_api_external" {
  count   = "${var.elb_alias_enabled ? var.tectonic_public_endpoints : 0}"
  zone_id = "${local.public_zone_id}"
  name    = "${var.custom_dns_name == "" ? var.cluster_name : var.custom_dns_name}-api.${var.base_domain}"
  type    = "A"

  alias {
    name                   = "${var.api_external_elb_dns_name}"
    zone_id                = "${var.api_external_elb_zone_id}"
    evaluate_target_health = true
  }
}

resource "aws_route53_record" "tectonic_api_internal" {
  count   = "${var.elb_alias_enabled ? var.tectonic_private_endpoints : 0}"
  zone_id = "${local.private_zone_id}"
  name    = "${var.custom_dns_name == "" ? var.cluster_name : var.custom_dns_name}-api.${var.base_domain}"
  type    = "A"

  alias {
    name                   = "${var.api_internal_elb_dns_name}"
    zone_id                = "${var.api_internal_elb_zone_id}"
    evaluate_target_health = true
  }
}

resource "aws_route53_record" "tectonic-console" {
  count   = "${var.tectonic_vanilla_k8s ? 0 : var.elb_alias_enabled ? 0 : 1}"
  zone_id = "${local.public_zone_id}"
  name    = "${var.cluster_name}"
  type    = "A"
  ttl     = "60"
  records = ["${var.worker_ip_addresses}"]
}

resource "aws_route53_record" "tectonic_ingress_public" {
  count   = "${var.elb_alias_enabled ? var.tectonic_public_endpoints : 0}"
  zone_id = "${local.public_zone_id}"
  name    = "${var.custom_dns_name == "" ? var.cluster_name : var.custom_dns_name}.${var.base_domain}"
  type    = "A"

  alias {
    name                   = "${var.console_elb_dns_name}"
    zone_id                = "${var.console_elb_zone_id}"
    evaluate_target_health = true
  }
}

resource "aws_route53_record" "tectonic_ingress_private" {
  count   = "${var.elb_alias_enabled ? var.tectonic_private_endpoints : 0}"
  zone_id = "${local.private_zone_id}"
  name    = "${var.custom_dns_name == "" ? var.cluster_name : var.custom_dns_name}.${var.base_domain}"
  type    = "A"

  alias {
    name                   = "${var.console_elb_dns_name}"
    zone_id                = "${var.console_elb_zone_id}"
    evaluate_target_health = true
  }
}
