//--------------------------EMEA-SE_PLAYGROUND-2019-----------------------------------------
# Using a single workspace:

terraform {
  backend "remote" {
    hostname     = "app.terraform.io"
    organization = "emea-se-playground-2019"
    workspaces {
      name = "Jason-AWS-Demostack"
    }
  }
}

// Workspace Data
data "terraform_remote_state" "tls" {
  backend = "remote"
  config = {
    hostname     = "app.terraform.io"
    organization = "emea-se-playground-2019"
    workspaces = {
      name = "tls-root-certificate"
    }
  } //config
}

data "terraform_remote_state" "dns" {
  backend = "remote"

  config = {
    hostname     = "app.terraform.io"
    organization = "emea-se-playground-2019"
    workspaces = {
      name = "Jason-DNS-Zone"
    }
  } //network
}
//--------------------------------------------------------------------

provider "aws" {
  region  = var.primary_region
  alias   = "primary"
  version = "~> 2.0"
}

provider "aws" {
  region  = var.secondary_region
  alias   = "secondary"
  version = "~> 2.0"
}

provider "aws" {
  region  = var.tertiary_region
  alias   = "tertiary"
  version = "~> 2.0"
}

module "primarycluster" {
  providers = {
    aws.demostack = aws.primary
    aws           = aws.primary
  }
  source               = "./modules"
  # count   = var.create_primary_cluster ? 1 : 0
  owner                = var.owner
  region               = var.primary_region
  namespace            = var.primary_namespace
  public_key           = var.public_key
  servers              = var.servers
  workers              = var.workers
  vaultlicense         = var.vaultlicense
  consullicense        = var.consullicense
  nomadlicense         = var.nomadlicense
  enterprise           = var.enterprise
  consul_url           = var.consul_url
  consul_ent_url       = var.consul_ent_url
  fabio_url            = var.fabio_url
  nomad_url            = var.nomad_url
  nomad_ent_url        = var.nomad_ent_url
  cni_plugin_url       = var.cni_plugin_url
  vault_url            = var.vault_url
  vault_ent_url        = var.vault_ent_url
  created-by           = var.created-by
  sleep-at-night       = var.sleep-at-night
  TTL                  = var.TTL
  vpc_cidr_block       = var.vpc_cidr_block
  cidr_blocks          = var.cidr_blocks
  instance_type_server = var.instance_type_server
  instance_type_worker = var.instance_type_worker
  zone_id              = data.terraform_remote_state.dns.outputs.aws_sub_zone_id
  run_nomad_jobs       = var.run_nomad_jobs
  host_access_ip       = var.host_access_ip
  primary_datacenter   = var.primary_namespace

  # EMEA-SE-PLAYGROUND
  ca_key_algorithm      = data.terraform_remote_state.tls.outputs.ca_key_algorithm
  ca_private_key_pem    = data.terraform_remote_state.tls.outputs.ca_private_key_pem
  ca_cert_pem           = data.terraform_remote_state.tls.outputs.ca_cert_pem
  consul_join_tag_value = "${var.namespace}-${data.terraform_remote_state.tls.outputs.consul_join_tag_value}"
  consul_gossip_key     = data.terraform_remote_state.tls.outputs.consul_gossip_key
  consul_master_token   = data.terraform_remote_state.tls.outputs.consul_master_token
  nomad_gossip_key      = data.terraform_remote_state.tls.outputs.nomad_gossip_key
}


module "secondarycluster" {
  providers = {
    aws.demostack = aws.secondary
    aws           = aws.secondary
  }
  source               = "./modules"
  count   = var.create_secondary_cluster ? 1 : 0
  owner                = var.owner
  region               = var.secondary_region
  namespace            = var.secondary_namespace
  public_key           = var.public_key
  servers              = var.servers
  workers              = var.workers
  vaultlicense         = var.vaultlicense
  consullicense        = var.consullicense
  enterprise           = var.enterprise
  consul_url           = var.consul_url
  consul_ent_url       = var.consul_ent_url
  fabio_url            = var.fabio_url
  nomad_url            = var.nomad_url
  nomad_ent_url        = var.nomad_ent_url
  cni_plugin_url       = var.cni_plugin_url
  vault_url            = var.vault_url
  vault_ent_url        = var.vault_ent_url
  created-by           = var.created-by
  sleep-at-night       = var.sleep-at-night
  TTL                  = var.TTL
  vpc_cidr_block       = var.vpc_cidr_block
  cidr_blocks          = var.cidr_blocks
  instance_type_server = var.instance_type_server
  instance_type_worker = var.instance_type_worker
  zone_id              = data.terraform_remote_state.dns.outputs.aws_sub_zone_id
  run_nomad_jobs       = var.run_nomad_jobs
  host_access_ip       = var.host_access_ip
  primary_datacenter   = var.primary_namespace
  # EMEA-SE-PLAYGROUND
  ca_key_algorithm      = data.terraform_remote_state.tls.outputs.ca_key_algorithm
  ca_private_key_pem    = data.terraform_remote_state.tls.outputs.ca_private_key_pem
  ca_cert_pem           = data.terraform_remote_state.tls.outputs.ca_cert_pem
  consul_join_tag_value = "${var.namespace}-${data.terraform_remote_state.tls.outputs.consul_join_tag_value}"
  consul_gossip_key     = data.terraform_remote_state.tls.outputs.consul_gossip_key
  consul_master_token   = data.terraform_remote_state.tls.outputs.consul_master_token
  nomad_gossip_key      = data.terraform_remote_state.tls.outputs.nomad_gossip_key
}



module "tertiarycluster" {
   providers = {
    aws.demostack = aws.tertiary
    aws           = aws.tertiary
  }
   source = "./modules"
   count   = var.create_secondary_cluster ? 1 : 0
  owner                = var.owner
  region              = var.tertiary_region
  namespace           = var.tertiary_namespace
  public_key           = var.public_key
  servers              = var.servers
  workers              = var.workers
  vaultlicense         = var.vaultlicense
  consullicense        = var.consullicense
  enterprise           = var.enterprise
  consul_url           = var.consul_url
  consul_ent_url       = var.consul_ent_url
  fabio_url            = var.fabio_url
  nomad_url            = var.nomad_url
  nomad_ent_url        = var.nomad_ent_url
  cni_plugin_url       = var.cni_plugin_url
  vault_url            = var.vault_url
  vault_ent_url        = var.vault_ent_url
  created-by           = var.created-by
  sleep-at-night       = var.sleep-at-night
  TTL                  = var.TTL
  vpc_cidr_block       = var.vpc_cidr_block
  cidr_blocks          = var.cidr_blocks
  instance_type_server = var.instance_type_server
  instance_type_worker = var.instance_type_worker
  zone_id              = data.terraform_remote_state.dns.outputs.aws_sub_zone_id
  run_nomad_jobs       = var.run_nomad_jobs
  host_access_ip       = var.host_access_ip
  primary_datacenter   = var.primary_datacenter
  # EMEA-SE-PLAYGROUND
  ca_key_algorithm      = data.terraform_remote_state.tls.outputs.ca_key_algorithm
  ca_private_key_pem    = data.terraform_remote_state.tls.outputs.ca_private_key_pem
  ca_cert_pem           = data.terraform_remote_state.tls.outputs.ca_cert_pem
  consul_join_tag_value = "${var.namespace}-${data.terraform_remote_state.tls.outputs.consul_join_tag_value}"
  consul_gossip_key     = data.terraform_remote_state.tls.outputs.consul_gossip_key
  consul_master_token   = data.terraform_remote_state.tls.outputs.consul_master_token
  nomad_gossip_key      = data.terraform_remote_state.tls.outputs.nomad_gossip_key
}

