
#===============================================================
# Module Inputs 
#===============================================================

variable "tenancy_ocid" {
  description = "The OCI tenancy id"
}

variable "compartment_id" {
  description = "The OCI compartment id"
}
 
variable "create_new_vcn" {
  description = "If true, a New VCN and Gateway will be created; If false, an existing VCN ID (in the same region) must be provided via the variable existing_vcn_id"
  default = false 
}

variable existing_vcn_id {
  description = "If create_new_vcn is false, provide the id of an existing VCN to use"
  default = [ "" ]
}

variable "vcn_cidr" {
  description = "The CIDR for the new VCN (if created)"
  default = "10.0.0.0/16"
}

variable "vcn_name" {
  description = "The name for the new VCN (if created)"
  default = "cephvcn"
}

variable "gateway_name" { 
  description = "The name of the gateway for the new VCN (if created)"
  default = "cephgw"
}

variable "route_table_name" { 
  description = "The name of the route table for the new VCN (if created)"
  default = "cephrt"
}

variable "create_new_subnets" {
  description = "If true, new subnets will be created; If false, existing subnet ids must be provided via the variable existing_subnet_ids"
  default = false 
}

variable "new_subnet_count" {
  description = "The nubner of subnets to create"
  default = "0"
}

variable existing_subnet_ids {
  description = "If create_new_subnets is false, provide the list of ids of existing subnets to use"
  default = [ "" ]
}

variable "availability_domain_index_list" {
  description = "Specifies the availability domain indexes for the subnets"
  default = ["1", "2", "3"]
}

variable "subnet_name_prefix" {
  description = "The prefix for the subnet names"
  default = "cephSub"
}

variable "subnet_cidr_blocks" {
  description = "The CIDR for the new subnets(if created)"
  default = [ "10.0.1.0/24", "10.0.2.0/24", "10.0.3.0/24" ]
}
