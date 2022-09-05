locals {
  client_load_balancers = [
    {
      name = "platform"
      listeners = [
        {
          port     = 8081
          protocol = "TCP"
        },
        {
          port     = 9090
          protocol = "TCP"
        },
        {
          port     = 3000
          protocol = "TCP"
        },
      ],
    },
  ]

  allowed_ips = length(var.allowed_ips) == 0 ? ["${chomp(data.http.my_ip.body)}/32"] : formatlist("%s/32", var.allowed_ips)
}

data "http" "my_ip" {
  url = "https://icanhazip.com/"
}

resource "random_pet" "stack_name" {}

module "image" {
  source     = "../../../infrastructure/aws/terraform/modules/aws-nomad-image"
  depends_on = [null_resource.preflight_check]

  ami_id      = var.ami_id
  region      = var.region
  vpc_id      = module.network.vpc_id
  subnet_id   = module.network.subnet_id
  stack_name  = random_pet.stack_name.id
  owner_name  = var.owner_name
  owner_email = var.owner_email
}

module "servers" {
  source     = "../../../infrastructure/aws/terraform/modules/aws-nomad-servers"
  depends_on = [null_resource.preflight_check]

  stack_name         = random_pet.stack_name.id
  ami_id             = module.image.id
  key_name           = var.key_name
  owner_name         = var.owner_name
  owner_email        = var.owner_email
  subnet_ids         = [module.network.subnet_id]
  security_group_ids = [module.network.agents_sg_id]
}

module "clients_platform" {
  source     = "../../../infrastructure/aws/terraform/modules/aws-nomad-clients"
  depends_on = [null_resource.preflight_check]

  nomad_datacenter    = "platform"
  stack_name          = random_pet.stack_name.id
  ami_id              = module.image.id
  key_name            = var.key_name
  owner_name          = var.owner_name
  owner_email         = var.owner_email
  security_group_ids  = [module.network.agents_sg_id, module.network.clients_sg_ids[0]]
  subnet_ids          = [module.network.subnet_id]
  load_balancer_names = [module.network.clients_lb_names[0]]
}

module "clients_batch" {
  source     = "../../../infrastructure/aws/terraform/modules/aws-nomad-clients"
  depends_on = [null_resource.preflight_check]

  nomad_datacenter   = "batch_workers"
  desired_capacity   = 0
  stack_name         = random_pet.stack_name.id
  ami_id             = module.image.id
  key_name           = var.key_name
  owner_name         = var.owner_name
  owner_email        = var.owner_email
  security_group_ids = [module.network.agents_sg_id]
  subnet_ids         = [module.network.subnet_id]
}

module "network" {
  source     = "../../../infrastructure/aws/terraform/modules/aws-nomad-network"
  depends_on = [null_resource.preflight_check]

  stack_name            = random_pet.stack_name.id
  owner_name            = var.owner_name
  owner_email           = var.owner_email
  server_ids            = module.servers.ids
  allowed_ips           = local.allowed_ips
  client_load_balancers = local.client_load_balancers
}
