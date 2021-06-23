# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
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

 gsm_major_version = "${element(split(".", var.gsm_version),0)}"

 gsm_zip_name = "gsm"

 oradata = "${var.oracle_base}/oradata"

 cat_pdb_name = "${data.oci_database_database.catalog_database[0].pdb_name}"

 total_shards = "${length(var.shards)} + ${length(var.standby_shards)}"

 catalog_host =  "${oci_database_db_system.catalog_db[0].hostname}.${oci_database_db_system.catalog_db[0].domain}"

 catalog_port = "${oci_database_db_system.catalog_db[0].listener_port}"

 shard_catalog_sdb_name = "cust_sdb"

 shard_catalog_regions = "${join(", ", var.gds_regions)}"

 shard_catalog_pdb_fqdn = "${data.oci_database_database.catalog_database[0].pdb_name}.${oci_database_db_system.catalog_db[0].domain}"

 db_home_path = "/u01/app/oracle/product/${var.db_version}/dbhome_1"

 shard_standby_config_sql = "sqlplus / as sysdba @${local.db_home_path}/shard-standby-config.sql"

 active_standby_mode = "active_standby"

 ee_xp = "ENTERPRISE_EDITION_EXTREME_PERFORMANCE"

 ee = "ENTERPRISE_EDITION"

 ee_hp = "ENTERPRISE_EDITION_HIGH_PERFORMANCE"

}

# ssh keys
variable "ssh_private_key_path" {
  description = "path to ssh private key on the current machine"
  default     = "~/.ssh/id_rsa"
}

variable "ssh_public_key_path" {
  description = "path to ssh public key on the current machine"
  default     = "~/.ssh/id_rsa.pub"
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

variable "sudo_pass" {
  description = "os user sudo password."
}

variable "shard_directors" {
  description = "Map of user-friendly name of a shard director to the shard director config information"
  type        = map
  default = {}
}

variable "oracle_base" {
  description = "Oracle Base"
}

variable "gsm_version" {
  description = "Oracle GSM version"
}

variable "db_version" {
  description = "Oracle database version"
}

variable "gsm_zip_location" {
  description = "The full path of the gsm binary zip file including the filename and zip extension"
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
  default = {}
}

variable "sys_pass" {
  description = "Password for SYS user"
}

variable "system_pass" {
  description = "Password for SYSTEM user"
}

variable "shard_catalogs" {
  description = "Map of user-friendly name of a shard catalog to the shard catalog config information"
  type        = map
  default = {}
}

variable "shard_catalog_standbys" {
  description = "Map of user-friendly name of a shard catalog standby to the shard catalog standby config information"
  type        = map
  default = {}
}

variable "gsmcatuser_pass" {
  description = "GSM catalog user password"
}

variable "sdb_admin_username" {
  description = "username of the sharded database administrator"
}

variable "sdb_admin_pass" {
  description = "password of the sharded database administrator"
}

variable "gsmuser_pass" {
  description = "password of the gsm user"
}

variable "shard_groups" {
  description = "Map of user-friendly name of shard_groups including primary and standby shardgroups"
  type        = map
  default = {}
}

variable "global_services" {
  description = "Map of user-friendly name of a global service to the global service config information"
  type        = map
}

variable "standby_shards" {
  description = "Map of user-friendly name of a standby shard to the standby shard config information"
  type        = map
  default = {}
}

variable "setup_mode" {
  description = "represents the setup mode either from scratch or from existing dbs"
  default     = "from_existing_databases"
}

variable "use_dbparamfile" {
  description = "Use True as the value to specify the path to the file name on the local machine running terraform, containing database Configuration Assistant (DBCA) parameters to use during database creation on the remote machine. Otherwise, to disable this option and use the defaults, please specify false as the value"
  default     = "false"
}

variable "use_dbtemplatefile" {
  description = "Use True as the value to specify the path to the file name on the local machine running terraform, containing Database Configuration Assistant (DBCA) database template information to use during database creation on the remote machine. Otherwise, to disable this option and use the defaults, please specify false as the value"
  default     = "false"
}

variable "use_netparamfile" {
  description = "Use True as the value to specify the path to the file name on the local machine running terraform, containing Net Configuration Assistant (NETCA) parameters to use during network listener setup on the remote machine. Otherwise, to disable this option and use the defaults, please specify false as the value"
  default     = "false"
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

variable "gsmrootuser_pass" {
  description = "password of the gsm root user"
}


variable "tenancy_ocid" {
}

variable "user_ocid" {
}

variable "fingerprint" {
}

variable "private_key_path" {
}

variable "region" {
}

variable "compartment_ocid" {
}

variable "compute_image_source_ocid" {
  description = "Represents latest Oracle Linux image OCID"
}

variable "database_edition" {
  default = "ENTERPRISE_EDITION"
}

variable "assign_public_ip" {
  default = false
}

variable "db_shape" {}

variable "compute_shape" {}

variable "sdb_demo_binary_file_path" {
  default = "/tmp/sdb_demo_app.zip"
}

variable "num_of_shards" {
  description = "number of primary shards"  
}

variable "gds_regions" {
  type = list(string)
}

variable "demo_setup" {
  description = "sdb demo is setup if true"
  default = "false"
}

variable "local_user" {
  description = "local user who will invoke terraform commands"
}

variable "sharding_method" {
  description = "Type of sharding"
  default = "system"
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
  default ="MAXIMUM_PERFORMANCE"
}

variable "transport_type" {
  default="ASYNC"
}

variable "delete_standby_db_home_on_delete" {
  default ="true"
}

variable "catalog_name_prefix" {
  default="cat"
}

variable "standby_catalog_name_prefix" {
  default="stdby-cat"
}

variable "shard_name_prefix" {
  default="sh"
}

variable "standby_shard_name_prefix" {
  default="stdby-sh"
}

variable "pdb_name" {
  default="sdbpdb"
}

variable "data_storage_size_in_gb" {
  default=256
}

variable "gsm_name_prefix" {
  default="gsm"
}

variable "num_of_gsm_per_ad" {
  default=1
}