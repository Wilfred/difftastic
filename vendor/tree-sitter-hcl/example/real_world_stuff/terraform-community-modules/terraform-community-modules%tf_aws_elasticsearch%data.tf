locals {
  domain_name = var.use_prefix ? join("", [var.domain_prefix, var.domain_name]) : var.domain_name
  inside_vpc  = length(var.vpc_options["subnet_ids"]) > 0 ? true : false
}
