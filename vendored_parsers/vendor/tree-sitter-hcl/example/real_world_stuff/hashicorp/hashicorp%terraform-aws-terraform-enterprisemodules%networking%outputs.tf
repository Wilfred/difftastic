output "network_id" {
  value = module.vpc.vpc_id

  description = "The identity of the VPC in which resources will be delpoyed."
}

output "network_private_subnets" {
  value = module.vpc.private_subnets

  description = "A list of the identities of the private subnetworks in which resources will be deployed."
}

output "network_public_subnets" {
  value = module.vpc.public_subnets

  description = "A list of the identities of the public subnetworks in which resources will be deployed."
}

output "network_private_subnet_cidrs" {
  value = module.vpc.private_subnets_cidr_blocks

  description = "A list of the CIDR blocks which comprise the private subnetworks."
}
