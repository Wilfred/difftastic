variable "hvn_id" {
  description = "The ID of the HCP HVN."
  type        = string
}

variable "cluster_id" {
  description = "The ID of the HCP Consul cluster."
  type        = string
}

variable "region" {
  description = "The region of the HCP HVN and peer VPC."
  type        = string
}

variable "peer_id" {
  description = "The ID to use for the HCP network peering."
  type        = string
}

variable "route_id" {
  description = "The ID to use for the HCP HVN route."
  type        = string
}
