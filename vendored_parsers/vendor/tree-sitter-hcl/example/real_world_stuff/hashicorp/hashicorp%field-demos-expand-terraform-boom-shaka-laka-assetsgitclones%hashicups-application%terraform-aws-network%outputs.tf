output "vpc_id" {
  value = module.vpc.vpc_id
}

output "vpc_cidr" {
  value = module.vpc.vpc_cidr_block
}

output "public_subnets" {
  value = module.vpc.public_subnets
}

output "security_group_id" {
  value = aws_security_group.security_group.id
}
