# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

# Optional OCI vars  - User may choose to override these variable values

# database_edition = "ENTERPRISE_EDITION" - Enable if Standby only mode is needed for DR purposes
database_edition = "ENTERPRISE_EDITION_EXTREME_PERFORMANCE" # - Enable if Active Standby mode is needed for both DR & for active read workloads
ssh_timeout      = "10m"

# Optional sharding specific vars - User may choose to override these variable values
opc_user               = "opc"
os_user                = "oracle"
base_install_dir       = "/u01"
oracle_base            = "/u01/app/oracle"
ora_inventory_location = "/u01/app/oraInventory"
unix_group_name        = "oinstall"
sdb_admin_username     = "mysdbadmin"

global_services = {
  "oltp_rw" = {
    service_name = "oltp_rw_srvc"
    role         = "primary"
  },
  "oltp_ro" = {
    service_name = "oltp_ro_srvc"
    role         = "physical_standby"
  }
}

replication_protection_mode      = "MAXPERFORMANCE"
protection_mode                  = "MAXIMUM_PERFORMANCE"
transport_type                   = "ASYNC"
delete_standby_db_home_on_delete = "true"

gsm_name_prefix             = "sd"
catalog_name_prefix         = "sc"
standby_catalog_name_prefix = "cs"
shard_name_prefix           = "sh"
standby_shard_name_prefix   = "ss"
shardgroup_name_prefix      = "shardgroup"
pdb_name                    = "sdbpdb"

num_of_shard_catalogs_str = "1"
chunks                    = 120