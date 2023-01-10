locals {
  public_endpoints_count  = "${var.public_endpoints ? 1 : 0}"
  private_endpoints_count = "${var.private_endpoints ? 1 : 0}"
}

data "aws_route53_zone" "tectonic" {
  name = "${var.base_domain}"
}

locals {
  public_zone_id = "${join("", data.aws_route53_zone.tectonic.*.zone_id)}"

  zone_id = "${var.private_endpoints ?
                      var.private_zone_id :
                      local.public_zone_id}"
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
  count   = "${var.elb_alias_enabled ? local.public_endpoints_count : 0}"
  zone_id = "${local.public_zone_id}"
  name    = "${var.cluster_name}-api.${var.base_domain}"
  type    = "A"

  alias {
    name                   = "${var.api_external_elb_dns_name}"
    zone_id                = "${var.api_external_elb_zone_id}"
    evaluate_target_health = true
  }
}

resource "aws_route53_record" "tectonic_api_internal" {
  count   = "${var.elb_alias_enabled ? local.private_endpoints_count : 0}"
  zone_id = "${var.private_zone_id}"
  name    = "${var.cluster_name}-api.${var.base_domain}"
  type    = "A"

  alias {
    name                   = "${var.api_internal_elb_dns_name}"
    zone_id                = "${var.api_internal_elb_zone_id}"
    evaluate_target_health = true
  }
}

resource "aws_route53_record" "tectonic-console" {
  count   = "${var.elb_alias_enabled ? 0 : 1}"
  zone_id = "${local.public_zone_id}"
  name    = "${var.cluster_name}"
  type    = "A"
  ttl     = "60"
  records = ["${var.worker_ip_addresses}"]
}

resource "aws_route53_record" "tectonic_ingress_public" {
  count   = "${var.elb_alias_enabled ? local.public_endpoints_count : 0}"
  zone_id = "${local.public_zone_id}"
  name    = "${var.cluster_name}.${var.base_domain}"
  type    = "A"

  alias {
    name                   = "${var.console_elb_dns_name}"
    zone_id                = "${var.console_elb_zone_id}"
    evaluate_target_health = true
  }
}

resource "aws_route53_record" "tectonic_ingress_private" {
  count   = "${var.elb_alias_enabled ? local.private_endpoints_count : 0}"
  zone_id = "${var.private_zone_id}"
  name    = "${var.cluster_name}.${var.base_domain}"
  type    = "A"

  alias {
    name                   = "${var.console_elb_dns_name}"
    zone_id                = "${var.console_elb_zone_id}"
    evaluate_target_health = true
  }
}

resource "aws_route53_record" "routes_ingress_public" {
  count   = "${var.elb_alias_enabled ? local.public_endpoints_count : 0}"
  zone_id = "${local.public_zone_id}"
  name    = "*.${var.cluster_name}.${var.base_domain}"
  type    = "A"

  alias {
    name                   = "${var.console_elb_dns_name}"
    zone_id                = "${var.console_elb_zone_id}"
    evaluate_target_health = true
  }
}

resource "aws_route53_record" "routes_ingress_private" {
  count   = "${var.elb_alias_enabled ? local.private_endpoints_count : 0}"
  zone_id = "${var.private_zone_id}"
  name    = "*.${var.cluster_name}.${var.base_domain}"
  type    = "A"

  alias {
    name                   = "${var.console_elb_dns_name}"
    zone_id                = "${var.console_elb_zone_id}"
    evaluate_target_health = true
  }
}
