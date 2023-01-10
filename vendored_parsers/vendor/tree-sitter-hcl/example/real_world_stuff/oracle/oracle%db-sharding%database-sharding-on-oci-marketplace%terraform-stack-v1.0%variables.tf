# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

locals {
  export_http_proxy_addr = "export http_proxy=${var.http_proxy_address}"

  export_https_proxy_addr = "export https_proxy=${var.https_proxy_address}"

  sdb_demo_dir = "sdb_demo_app"

  system_sharding = "system"

  user_defined_sharding = "user"

  composite_sharding = "composite"

  gsmhome_postfix = "gsmhome_1"

  gsm_home_full_path = "${var.oracle_base}/product/${var.gsm_version}/${local.gsmhome_postfix}"

  gsm_relative_path_from_base = "product/${var.gsm_version}/${local.gsmhome_postfix}"

  gsm_installer_location = "${var.oracle_base}"

  gsm_install_folder_name = "gsm"

  gsm_major_version = "${element(split(".", var.gsm_version), 0)}"

  gsm_zip_name = "gsm"

  oradata = "${var.oracle_base}/oradata"

  cat_pdb_name = "${data.oci_database_database.catalog_database[0].pdb_name}"

  #total_shards = "${var.num_of_shards} + ${length(var.standby_shards)}"

  catalog_host = "${data.oci_core_vnic.catalog_db_node_vnic[0].public_ip_address}"

  catalog_port = "${oci_database_db_system.catalog_db[0].listener_port}"

  #shard_catalog_regions = "${join(", ", var.gds_regions)}"

  shard_catalog_pdb_fqdn = "${data.oci_database_database.catalog_database[0].pdb_name}.${oci_database_db_system.catalog_db[0].domain}"

  db_home_path = "/u01/app/oracle/product/${var.db_version}/dbhome_1"

  shard_standby_config_sql = "sqlplus / as sysdba @${local.db_home_path}/shard-standby-config.sql"

  active_standby_mode = "active_standby"

  ee_xp = "ENTERPRISE_EDITION_EXTREME_PERFORMANCE"

  ee = "ENTERPRISE_EDITION"

  ee_hp = "ENTERPRISE_EDITION_HIGH_PERFORMANCE"

  num_of_ads = length(data.oci_identity_availability_domains.ADs.availability_domains)

  mp_listing_id = "ocid1.appcataloglisting.oc1..aaaaaaaarcfzjqmzha56sse6ctb7uryquew6vzjdrdxklcvigh6perp5dtlq"

  mp_listing_resource_id = "ocid1.image.oc1..aaaaaaaas56soyh5sfrau5o6vihmlrlccjh7qrep6sxsgehfx5no245nyjia"

  mp_listing_resource_version = "1.0-042220200455"

  sharding_methods = {
    system-managed = "system"
    user-defined   = "user-defined"
    composite      = "composite"
  }

}

variable "ssh_public_key" {
  description = "public key for securely logging into sharded database machines after deployment"
}

variable "ssh_timeout" {
  description = "ssh timeout"
  default     = "3m"
}

variable "os_user" {
  description = "os user name"
}

variable "opc_user" {
  description = "Oracle public cloud user"
}

variable "shard_directors" {
  description = "Map of user-friendly name of a shard director to the shard director config information"
  type        = map
  default     = {}
}

variable "oracle_base" {
  description = "Oracle Base"
}

variable "gsm_version" {
  default = "19.3.0"
}

variable "db_version" {
  default = "19.0.0"
}

variable "gsm_zip_name" {
  description = "The name of the gsm binary zip file (excluding zip extension)"
  default     = "gsm"
}

variable "ora_inventory_location" {
  description = "The full path to the ora inventory location"
}

variable "unix_group_name" {
  description = "Unix group to be set for the inventory directory"
}

variable "shards" {
  description = "Map of user-friendly name of a shard to the shard config information"
  type        = map
  default     = {}
}

variable "shard_catalogs" {
  description = "Map of user-friendly name of a shard catalog to the shard catalog config information"
  type        = map
  default     = {}
}

variable "num_of_shard_catalogs" {
  description = "Number of shard catalog databases. The total number of Shard catalog databases is determined by the value of replication factor chosen."
  type        = number
  default     = 1
}

variable "shard_catalog_standbys" {
  description = "Map of user-friendly name of a shard catalog standby to the shard catalog standby config information"
  type        = map
  default     = {}
}

variable "sdb_admin_username" {
  description = "username of the sharded database administrator"
}

variable "shard_groups" {
  description = "Map of user-friendly name of shard_groups including primary and standby shardgroups"
  type        = map
  default     = {}
}

variable "global_services" {
  description = "Map of user-friendly name of a global service to the global service config information"
  type        = map
}

variable "standby_shards" {
  description = "Map of user-friendly name of a standby shard to the standby shard config information"
  type        = map
  default     = {}
}

variable "enable_http_proxy" {
  description = "enable HTTP proxy or not"
  default     = "false"
}

variable "enable_https_proxy" {
  description = "enable HTTPS proxy or not"
  default     = "false"
}

variable "http_proxy_address" {
  description = "HTTP proxy address"
  default     = "localhost:80"
}

variable "https_proxy_address" {
  description = "HTTPS proxy address"
  default     = "localhost:80"
}

variable "base_install_dir" {
  description = "base install directory like /u01"
  default     = "/scratch"
}

variable "tenancy_ocid" {
}

variable "region" {
}

variable "compartment_ocid" {
}

# variable "compute_image_source_ocid" {
#   description = "Represents latest Oracle Linux image OCID"
# }

variable "database_edition" {
  default = "ENTERPRISE_EDITION"
}

variable "assign_public_ip" {
  default = true
}

variable "db_shape" {}

variable "catalog_db_shape" {}


variable "compute_shape" {}

variable "sdb_demo_binary_file_path" {
  default = "/tmp/sdb_demo_app.zip"
}

variable "num_of_shards" {}

# variable "gds_regions" {
#   type = list(string)
# }

variable "demo_setup" {
  description = "A demo inventory application with sample sharded data is setup on the sharded database if selected. The demo will only be setup if the sharding method selected above is system."
  default     = "false"
}

variable "sharding_method" {
  description = "Type of sharding"
  default     = "system"
}

variable "replication_type" {
  default = "DG"
}

variable "replication_protection_mode" {
  default = "MAXPERFORMANCE"
}

variable "replication_factor" {
  default = 1
}

variable "protection_mode" {
  default = "MAXIMUM_PERFORMANCE"
}

variable "transport_type" {
  default = "ASYNC"
}

variable "delete_standby_db_home_on_delete" {
  default = "true"
}

variable "catalog_name_prefix" {
}

variable "standby_catalog_name_prefix" {
}

variable "shard_name_prefix" {
}

variable "standby_shard_name_prefix" {
}

variable "pdb_name" {
  default = "sdbpdb"
}

variable "data_storage_size_in_gb" {}

variable "catalog_data_storage_size_in_gb" {}

variable "gsm_name_prefix" {}

variable "num_of_gsm" {}

variable "shard_director_port" {
  default = "1522"
}


variable "sharded_database_name" {
  description = "A unique name for the sharded database in your regional subnet"
}

variable "vcn_compartment_id" {
}
variable "subnet_compartment_id" {
}

variable "display_name" {
  default = "Oracle sharded database"
}
variable "vcn_cidr_block" {
  default = "10.2.0.0/16"
}
variable "subnet_cidr_block" {
  default = "10.2.1.0/24"
}

variable "vcn_dns_label" {
  default = "vcn"
}
variable "subnet_dns_label" {
  default = "subnet"
}

// Use existing network
variable "create_new_network" {
  default = true
}

variable "vcn_id" {
  default = ""
}

variable "subnet_id" {
  default = ""
}

variable "num_of_shard_groups" {}

variable "shardgroup_name_prefix" {}

variable "num_of_shard_catalogs_str" {
  default = "1"
}
variable "license_type" {
  default = "LICENSE_INCLUDED"
}

variable "chunks" {
  description = "Number of chunks per shard"
  type        = number
  default     = 120
}
