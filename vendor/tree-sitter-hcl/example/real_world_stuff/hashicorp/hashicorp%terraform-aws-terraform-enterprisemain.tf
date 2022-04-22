data "aws_region" "current" {}

data "aws_ami" "ubuntu" {
  most_recent = true

  filter {
    name   = "name"
    values = ["ubuntu/images/hvm-ssd/ubuntu-focal-20.04-amd64-server-*"]
  }

  filter {
    name   = "virtualization-type"
    values = ["hvm"]
  }

  owners = ["099720109477"] # Canonical
}

resource "aws_kms_key" "tfe_key" {
  deletion_window_in_days = var.kms_key_deletion_window
  description             = "AWS KMS Customer-managed key to encrypt TFE and other resources"
  enable_key_rotation     = false
  is_enabled              = true
  key_usage               = "ENCRYPT_DECRYPT"

  # Prefix removed until https://github.com/hashicorp/terraform-provider-aws/issues/19583 is resolved
  tags = {
    # Name = "${var.friendly_name_prefix}-tfe-kms-key"
    Name = "tfe-kms-key"
  }
}

resource "aws_kms_alias" "key_alias" {
  name          = "alias/${var.kms_key_alias}"
  target_key_id = aws_kms_key.tfe_key.key_id
}

locals {
  active_active  = var.node_count >= 2
  ami_id         = local.default_ami_id ? data.aws_ami.ubuntu.id : var.ami_id
  default_ami_id = var.ami_id == ""
  fqdn           = "${var.tfe_subdomain}.${var.domain_name}"
}

module "object_storage" {
  source = "./modules/object_storage"

  friendly_name_prefix       = var.friendly_name_prefix
  kms_key_arn                = aws_kms_key.tfe_key.arn
  tfe_license_filepath       = var.tfe_license_filepath
  external_bootstrap_bucket  = var.external_bootstrap_bucket
  tfe_license_name           = var.tfe_license_name
  proxy_cert_bundle_filepath = var.proxy_cert_bundle_filepath
  proxy_cert_bundle_name     = var.proxy_cert_bundle_name
}

module "service_accounts" {
  source = "./modules/service_accounts"

  aws_bucket_bootstrap_arn = module.object_storage.s3_bucket_bootstrap_arn
  aws_bucket_data_arn      = module.object_storage.s3_bucket_data_arn
  friendly_name_prefix     = var.friendly_name_prefix
  kms_key_arn              = aws_kms_key.tfe_key.arn
  iam_role_policy_arns     = var.iam_role_policy_arns
}

module "secrets_manager" {
  source = "./modules/secrets_manager"

  friendly_name_prefix  = var.friendly_name_prefix
  deploy_secretsmanager = var.deploy_secretsmanager
}

module "networking" {
  count = var.deploy_vpc ? 1 : 0

  source = "./modules/networking"

  friendly_name_prefix         = var.friendly_name_prefix
  network_cidr                 = var.network_cidr
  network_private_subnet_cidrs = var.network_private_subnet_cidrs
  network_public_subnet_cidrs  = var.network_public_subnet_cidrs
}

locals {
  network_id                   = var.deploy_vpc ? module.networking[0].network_id : var.network_id
  network_private_subnets      = var.deploy_vpc ? module.networking[0].network_private_subnets : var.network_private_subnets
  network_public_subnets       = var.deploy_vpc ? module.networking[0].network_public_subnets : var.network_public_subnets
  network_private_subnet_cidrs = var.deploy_vpc ? module.networking[0].network_private_subnet_cidrs : var.network_private_subnet_cidrs
}

module "redis" {
  source = "./modules/redis"

  active_active                = local.active_active
  friendly_name_prefix         = var.friendly_name_prefix
  network_id                   = local.network_id
  network_private_subnet_cidrs = var.network_private_subnet_cidrs
  network_subnets_private      = local.network_private_subnets
  tfe_instance_sg              = module.vm.tfe_instance_sg

  cache_size           = var.redis_cache_size
  engine_version       = var.redis_engine_version
  parameter_group_name = var.redis_parameter_group_name

  kms_key_arn                 = aws_kms_key.tfe_key.arn
  redis_encryption_in_transit = var.redis_encryption_in_transit
  redis_encryption_at_rest    = var.redis_encryption_at_rest
  redis_require_password      = var.redis_require_password
}

module "database" {
  source = "./modules/database"

  db_size                      = var.db_size
  engine_version               = var.postgres_engine_version
  friendly_name_prefix         = var.friendly_name_prefix
  network_id                   = local.network_id
  network_private_subnet_cidrs = var.network_private_subnet_cidrs
  network_subnets_private      = local.network_private_subnets
  tfe_instance_sg              = module.vm.tfe_instance_sg
}

module "user_data" {
  source = "./modules/user_data"

  active_active           = local.active_active
  aws_bucket_bootstrap    = var.external_bootstrap_bucket != null ? var.external_bootstrap_bucket : module.object_storage.s3_bucket_bootstrap
  aws_bucket_data         = module.object_storage.s3_bucket_data
  aws_region              = data.aws_region.current.name
  fqdn                    = local.fqdn
  iact_subnet_list        = var.iact_subnet_list
  iact_subnet_time_limit  = var.iact_subnet_time_limit
  kms_key_arn             = aws_kms_key.tfe_key.arn
  pg_dbname               = module.database.db_name
  pg_password             = module.database.db_password
  pg_netloc               = module.database.db_endpoint
  pg_user                 = module.database.db_username
  proxy_cert_bundle_name  = var.proxy_cert_bundle_name
  proxy_ip                = var.proxy_ip
  no_proxy                = var.no_proxy
  redis_host              = module.redis.redis_endpoint
  redis_pass              = module.redis.redis_password
  redis_port              = module.redis.redis_port
  redis_use_password_auth = module.redis.redis_use_password_auth
  redis_use_tls           = module.redis.redis_transit_encryption_enabled
  tfe_license             = var.tfe_license_name
}

module "load_balancer" {
  count  = var.load_balancing_scheme != "PRIVATE_TCP" ? 1 : 0
  source = "./modules/application_load_balancer"

  active_active                  = local.active_active
  admin_dashboard_ingress_ranges = var.admin_dashboard_ingress_ranges
  certificate_arn                = var.acm_certificate_arn
  domain_name                    = var.domain_name
  friendly_name_prefix           = var.friendly_name_prefix
  fqdn                           = local.fqdn
  load_balancing_scheme          = var.load_balancing_scheme
  network_id                     = local.network_id
  network_public_subnets         = local.network_public_subnets
  network_private_subnets        = local.network_private_subnets
  ssl_policy                     = var.ssl_policy
}

module "private_tcp_load_balancer" {
  count  = var.load_balancing_scheme == "PRIVATE_TCP" ? 1 : 0
  source = "./modules/network_load_balancer"

  active_active           = local.active_active
  certificate_arn         = var.acm_certificate_arn
  domain_name             = var.domain_name
  friendly_name_prefix    = var.friendly_name_prefix
  fqdn                    = local.fqdn
  network_id              = local.network_id
  network_private_subnets = local.network_private_subnets
  ssl_policy              = var.ssl_policy
}

module "vm" {
  source = "./modules/vm"

  active_active                       = local.active_active
  aws_iam_instance_profile            = module.service_accounts.aws_iam_instance_profile
  ami_id                              = local.ami_id
  aws_lb                              = var.load_balancing_scheme == "PRIVATE_TCP" ? null : module.load_balancer[0].aws_lb_security_group
  aws_lb_target_group_tfe_tg_443_arn  = var.load_balancing_scheme == "PRIVATE_TCP" ? module.private_tcp_load_balancer[0].aws_lb_target_group_tfe_tg_443_arn : module.load_balancer[0].aws_lb_target_group_tfe_tg_443_arn
  aws_lb_target_group_tfe_tg_8800_arn = var.load_balancing_scheme == "PRIVATE_TCP" ? module.private_tcp_load_balancer[0].aws_lb_target_group_tfe_tg_8800_arn : module.load_balancer[0].aws_lb_target_group_tfe_tg_8800_arn
  asg_tags                            = var.asg_tags
  default_ami_id                      = local.default_ami_id
  friendly_name_prefix                = var.friendly_name_prefix
  key_name                            = var.key_name
  instance_type                       = var.instance_type
  network_id                          = local.network_id
  network_subnets_private             = local.network_private_subnets
  network_private_subnet_cidrs        = local.network_private_subnet_cidrs
  node_count                          = var.node_count
  user_data_base64                    = module.user_data.tfe_user_data_base64
}
