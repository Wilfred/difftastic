resource "random_id" "redis_password" {
  count       = var.active_active ? 1 : 0
  byte_length = 16
}

resource "aws_security_group" "redis" {
  count       = var.active_active ? 1 : 0
  description = "The security group of the Redis deployment for TFE."
  name        = "${var.friendly_name_prefix}-tfe-redis"
  vpc_id      = var.network_id
}

resource "aws_security_group_rule" "redis_tfe_ingress" {
  count                    = var.active_active ? 1 : 0
  security_group_id        = aws_security_group.redis[0].id
  type                     = "ingress"
  from_port                = var.redis_port
  to_port                  = var.redis_port
  protocol                 = "tcp"
  source_security_group_id = var.tfe_instance_sg
}

resource "aws_security_group_rule" "redis_tfe_egress" {
  count                    = var.active_active ? 1 : 0
  security_group_id        = aws_security_group.redis[0].id
  type                     = "egress"
  from_port                = 0
  to_port                  = 0
  protocol                 = "-1"
  source_security_group_id = var.tfe_instance_sg
}

resource "aws_security_group_rule" "redis_ingress" {
  count             = var.active_active ? 1 : 0
  security_group_id = aws_security_group.redis[0].id
  type              = "ingress"
  from_port         = var.redis_port
  to_port           = var.redis_port
  protocol          = "tcp"
  cidr_blocks       = var.network_private_subnet_cidrs
}

resource "aws_security_group_rule" "redis_egress" {
  count             = var.active_active ? 1 : 0
  security_group_id = aws_security_group.redis[0].id
  type              = "egress"
  from_port         = var.redis_port
  to_port           = var.redis_port
  protocol          = "tcp"
  cidr_blocks       = var.network_private_subnet_cidrs
}

resource "aws_elasticache_subnet_group" "tfe" {
  count      = var.active_active ? 1 : 0
  name       = "${var.friendly_name_prefix}-tfe-redis"
  subnet_ids = var.network_subnets_private
}

resource "aws_elasticache_replication_group" "redis" {
  count                         = var.active_active ? 1 : 0
  node_type                     = var.cache_size
  number_cache_clusters         = 1
  replication_group_description = "The replication group of the Redis deployment for TFE."
  replication_group_id          = "${var.friendly_name_prefix}-tfe"

  apply_immediately          = true
  automatic_failover_enabled = false
  auto_minor_version_upgrade = true
  engine                     = "redis"
  engine_version             = var.engine_version
  parameter_group_name       = var.parameter_group_name
  port                       = var.redis_port
  security_group_ids         = [aws_security_group.redis[0].id]
  snapshot_retention_limit   = 0
  subnet_group_name          = aws_elasticache_subnet_group.tfe[0].name

  auth_token                 = (var.redis_encryption_in_transit == true && var.redis_require_password == true) ? random_id.redis_password[0].hex : null
  transit_encryption_enabled = var.redis_encryption_in_transit

  at_rest_encryption_enabled = var.redis_encryption_at_rest
  kms_key_id                 = (var.redis_encryption_at_rest == true) ? var.kms_key_arn : null
}
