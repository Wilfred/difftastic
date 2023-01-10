
locals {
  # Common tags to be assigned to all resources
  common_tags = {
    name            = var.namespace
    owner           = var.owner
    created-by      = var.created-by
    sleep-at-night  = var.sleep-at-night
    ttl             = var.TTL
    se-region      = var.region
    terraform      = true
    purpose        = "SE Demostack"
  }
}
variable "vault_oracle_client_url" {
  description = "The url to download vault."
  default     = "https://releases.hashicorp.com/vault-plugin-database-oracle/0.2.1/vault-plugin-database-oracle_0.2.1_linux_amd64.zip"
}

variable "region" {
  description = "The region to create resources."
  default     = "eu-west-2"
}

variable "namespace" {
  description = <<EOH
this is the differantiates different demostack deployment on the same subscription, everycluster should have a different value
EOH
  default     = "connectdemo"
}

variable "servers" {
  description = "The number of data servers (consul, nomad, etc)."
  default     = "3"
}

variable "workers" {
  description = "The number of nomad worker vms to create."
  default     = "3"
}

variable "consul_url" {
  description = "The url to download Consul."
  default     = "https://releases.hashicorp.com/consul/1.2.3/consul_1.2.3_linux_amd64.zip"
}

variable "consul_ent_url" {
  description = "The url to download Consul."
  default     = "https://s3-us-west-2.amazonaws.com/hc-enterprise-binaries/consul/ent/1.2.3/consul-enterprise_1.2.3%2Bent_linux_amd64.zip"
}

variable "fabio_url" {
  description = "The url download fabio."
  default     = "https://github.com/fabiolb/fabio/releases/download/v1.5.7/fabio-1.5.7-go1.9.2-linux_amd64"
}

variable "nomad_url" {
  description = "The url to download nomad."
  default     = "https://releases.hashicorp.com/nomad/0.8.6/nomad_0.8.6_linux_amd64.zip"
}

variable "nomad_ent_url" {
  description = "The url to download nomad."
  default     = "https://releases.hashicorp.com/nomad/0.8.6/nomad_0.8.6_linux_amd64.zip"
}

variable "cni_plugin_url" {
  description = "The url to download teh CNI plugin for nomad."
  default     = "https://github.com/containernetworking/plugins/releases/download/v0.8.2/cni-plugins-linux-amd64-v0.8.2.tgz"
}

variable "vault_url" {
  description = "The url to download vault."
  default     = "https://releases.hashicorp.com/vault/0.11.1/vault_0.11.1_linux_amd64.zip"
}

variable "vault_ent_url" {
  description = "The url to download vault."
  default     = "https://s3-us-west-2.amazonaws.com/hc-enterprise-binaries/vault/ent/0.11.1/vault-enterprise_0.11.1%2Bent_linux_amd64.zip"
}

variable "owner" {
  description = "Email address of the user responsible for lifecycle of cloud resources used for training."
}

variable "hashi_region" {
  description = "the region the owner belongs in.  e.g. NA-WEST-ENT, EU-CENTRAL"
  default = "EMEA"
}

variable "created-by" {
  description = "Tag used to identify resources created programmatically by Terraform"
  default     = "Terraform"
}

variable "sleep-at-night" {
  description = "Tag used by reaper to identify resources that can be shutdown at night"
  default     = true
}

variable "TTL" {
  description = "Hours after which resource expires, used by reaper. Do not use any unit. -1 is infinite."
  default     = "240"
}

variable "vpc_cidr_block" {
  description = "The top-level CIDR block for the VPC."
  default     = "10.1.0.0/16"
}

variable "cidr_blocks" {
  description = "The CIDR blocks to create the workstations in."
  default     = ["10.1.1.0/24", "10.1.2.0/24"]
}

variable "zone_id" {
  description = "The CIDR blocks to create the workstations in."
  default     = ""
}

variable "public_key" {
  description = "The contents of the SSH public key to use for connecting to the cluster."
}

variable "enterprise" {
  description = "do you want to use the enterprise version of the binaries"
  default     = false
}

variable "vaultlicense" {
  description = "Enterprise License for Vault"
  default     = ""
}

variable "consullicense" {
  description = "Enterprise License for Consul"
  default     = ""
}

variable "nomadlicense" {
  description = "Enterprise License for Nomad"
  default     = ""
}



variable "instance_type_server" {
  description = "The type(size) of data servers (consul, nomad, etc)."
  default     = "r4.large"
}

variable "instance_type_worker" {
  description = "The type(size) of data servers (consul, nomad, etc)."
  default     = "t2.xlarge"
}

variable "ca_key_algorithm" {
  default = ""
}

variable "ca_private_key_pem" {
  default = ""
}

variable "ca_cert_pem" {
  default = ""
}

variable "consul_gossip_key" {
  default = ""
}

variable "consul_master_token" {
  default = ""
}

variable "consul_join_tag_value" {
  default = ""
}

variable "nomad_gossip_key" {
  default = ""
}

variable "run_nomad_jobs" {
  default = "0"
}

variable "host_access_ip" {
  description = "CIDR blocks allowed to connect via SSH on port 22"
  default     = []
}

variable "primary_datacenter" {
  description = "the primary datacenter for mesh gateways"
  default     = ""
}