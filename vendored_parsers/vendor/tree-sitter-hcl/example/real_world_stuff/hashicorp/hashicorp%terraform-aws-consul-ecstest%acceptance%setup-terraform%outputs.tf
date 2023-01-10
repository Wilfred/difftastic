output "ecs_cluster_arn" {
  value = aws_ecs_cluster.this.arn
}

output "private_subnets" {
  value = module.vpc.private_subnets
}

output "suffix" {
  value = random_string.suffix.result
}

output "log_group_name" {
  value = aws_cloudwatch_log_group.log_group.name
}

output "region" {
  value = var.region
}

output "tags" {
  value = var.tags
}
