# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

terraform {
  required_version = "0.11.13"
}
module "sdb_shard_director_install" {
    source = "./modules/sdb_shard_director_install"
    os_user = "${var.os_user}"
    ssh_private_key_path = "${var.ssh_private_key_path}"
    sudo_pass = "${var.sudo_pass}"
    shard_directors = "${var.shard_directors}"
    ssh_timeout = "${var.ssh_timeout}"
    oracle_base = "${var.oracle_base}"
    gsm_version = "${var.gsm_version}"
    gsm_zip_location = "${var.gsm_zip_location}"
    gsm_zip_name = "${var.gsm_zip_name}"
    ora_inventory_location = "${var.ora_inventory_location}"
    unix_group_name = "${var.unix_group_name}"
}

module "sdb_shard_db_install" {
    source = "./modules/sdb_shard_db_install"
    os_user = "${var.os_user}"
    ssh_private_key_path = "${var.ssh_private_key_path}"
    sudo_pass = "${var.sudo_pass}"
    shards = "${var.shards}"
    ssh_timeout = "${var.ssh_timeout}"
    oracle_base = "${var.oracle_base}"
    db_version = "${var.db_version}"
    db_zip_location = "${var.db_zip_location}"
    db_zip_name = "${var.db_zip_name}"
    db_home_path = "${var.db_home_path}"
    ora_inventory_location = "${var.ora_inventory_location}"
    unix_group_name = "${var.unix_group_name}"
    sys_pass = "${var.sys_pass}"
    system_pass = "${var.system_pass}"
    standby_shards = "${var.standby_shards}"
    setup_mode =  "${var.setup_mode}"
    sdb_shard_director_install_deps_check = "${module.sdb_shard_director_install.rendered_deps_check}"
}

module "sdb_shard_catalog_db_install" {
    source = "./modules/sdb_shard_catalog_db_install"
    os_user = "${var.os_user}"
    ssh_private_key_path = "${var.ssh_private_key_path}"
    sudo_pass = "${var.sudo_pass}"
    shard_catalogs = "${var.shard_catalogs}"
    ssh_timeout = "${var.ssh_timeout}"
    oracle_base = "${var.oracle_base}"
    db_version = "${var.db_version}"
    db_zip_location = "${var.db_zip_location}"
    db_zip_name = "${var.db_zip_name}"
    db_home_path = "${var.db_home_path}"
    ora_inventory_location = "${var.ora_inventory_location}"
    unix_group_name = "${var.unix_group_name}"
    sys_pass = "${var.sys_pass}"
    system_pass = "${var.system_pass}"
    shard_catalog_standbys = "${var.shard_catalog_standbys}"
    sdb_shard_db_install_deps_check = "${module.sdb_shard_db_install.rendered_deps_check}"
}

module "sdb_shard_catalog_configure" {
    source = "./modules/sdb_shard_catalog_configure"
    os_user = "${var.os_user}"
    ssh_private_key_path = "${var.ssh_private_key_path}"
    shard_catalogs = "${var.shard_catalogs}"
    ssh_timeout = "${var.ssh_timeout}"
    oracle_base = "${var.oracle_base}"
    db_home_path = "${var.db_home_path}"
    gsmcatuser_pass = "${var.gsmcatuser_pass}"
    sdb_admin_username = "${var.sdb_admin_username}"
    sdb_admin_pass = "${var.sdb_admin_pass}"
    shards = "${var.shards}"
    standby_shards = "${var.standby_shards}"
    gsmuser_pass = "${var.gsmuser_pass}"
    gsm_version = "${var.gsm_version}"
    shard_catalog_standbys = "${var.shard_catalog_standbys}"
    shard_directors = "${var.shard_directors}"
    sys_pass = "${var.sys_pass}"
    sdb_shard_catalog_create_deps_check = "${module.sdb_shard_catalog_db_install.rendered_sdb_shard_catalog_create_deps_check}"
}

module "sdb_shard_director_configure" {
    source = "./modules/sdb_shard_director_configure"
    os_user = "${var.os_user}"
    sys_pass = "${var.sys_pass}"
    ssh_private_key_path = "${var.ssh_private_key_path}"
    shard_directors = "${var.shard_directors}"
    shard_catalogs = "${var.shard_catalogs}"
    ssh_timeout = "${var.ssh_timeout}"
    oracle_base = "${var.oracle_base}"
    gsm_version = "${var.gsm_version}"
    gsmcatuser_pass = "${var.gsmcatuser_pass}"
    sdb_admin_username = "${var.sdb_admin_username}"
    sdb_admin_pass = "${var.sdb_admin_pass}"
    setup_mode = "${var.setup_mode}"
    sudo_pass = "${var.sudo_pass}"
    scheduler_agent_pass = "${var.scheduler_agent_pass}"
    sdb_shard_catalog_configure_deps_check = "${module.sdb_shard_catalog_configure.rendered_sdb_shard_catalog_configure_deps_check}"
}


module "sdb_shard_db_configure" {
    source = "./modules/sdb_shard_db_configure"
    os_user = "${var.os_user}"
    ssh_private_key_path = "${var.ssh_private_key_path}"
    shards = "${var.shards}"
    ssh_timeout = "${var.ssh_timeout}"
    oracle_base = "${var.oracle_base}"
    db_home_path = "${var.db_home_path}"
    gsmuser_pass = "${var.gsmuser_pass}"
    sys_pass = "${var.sys_pass}"
    standby_shards = "${var.standby_shards}"
    setup_mode = "${var.setup_mode}"
    scheduler_agent_pass = "${var.scheduler_agent_pass}"
    shard_catalogs = "${var.shard_catalogs}"
    sdb_shard_director_configure_deps_check = "${module.sdb_shard_director_configure.rendered_deps_check}"
}

module "sdb_deploy" {
    source = "./modules/sdb_deploy"
    os_user = "${var.os_user}"
    ssh_private_key_path = "${var.ssh_private_key_path}"
    shards = "${var.shards}"
    shard_directors = "${var.shard_directors}"
    primary_shard_groups = "${var.primary_shard_groups}"
    standby_shard_groups = "${var.standby_shard_groups}"
    ssh_timeout = "${var.ssh_timeout}"
    gsm_version = "${var.gsm_version}"
    oracle_base = "${var.oracle_base}"
    gsmuser_pass = "${var.gsmuser_pass}"
    sdb_admin_username = "${var.sdb_admin_username}"
    sdb_admin_pass = "${var.sdb_admin_pass}"
    global_services = "${var.global_services}"
    standby_shards = "${var.standby_shards}"
    setup_mode = "${var.setup_mode}"
    sys_pass = "${var.sys_pass}"
    use_dbparamfile = "${var.use_dbparamfile}"
    use_dbtemplatefile = "${var.use_dbtemplatefile}"
    use_netparamfile = "${var.use_netparamfile}"
    db_home_path = "${var.db_home_path}"
    sdb_shard_db_configure_deps_check = "${module.sdb_shard_db_configure.rendered_deps_check}" 
}

module "sdb_schema_setup" {
    source = "./modules/sdb_schema_setup"
    os_user = "${var.os_user}"
    ssh_private_key_path = "${var.ssh_private_key_path}"
    shard_catalogs = "${var.shard_catalogs}"
    ssh_timeout = "${var.ssh_timeout}"
    oracle_base = "${var.oracle_base}"
    db_home_path = "${var.db_home_path}"
    sdb_deploy_deps_check = "${module.sdb_deploy.rendered_deps_check}"
}

module "sdb_demo_setup" {
    source = "./modules/sdb_demo_setup"
    os_user = "${var.os_user}"
    ssh_private_key_path = "${var.ssh_private_key_path}"
    shard_catalogs = "${var.shard_catalogs}"
    ssh_timeout = "${var.ssh_timeout}"
    oracle_base = "${var.oracle_base}"
    db_home_path = "${var.db_home_path}"
    shard_directors = "${var.shard_directors}"
    sdb_schema_setup_deps_check = "${module.sdb_schema_setup.rendered_deps_check}"
}

module "sdb_gc"{
    source = "./modules/sdb_gc"
    os_user = "${var.os_user}"
    ssh_private_key_path = "${var.ssh_private_key_path}"
    ssh_timeout = "${var.ssh_timeout}"
    shard_directors = "${var.shard_directors}"
    shard_catalogs = "${var.shard_catalogs}"
    shards = "${var.shards}"
    standby_shards = "${var.standby_shards}"
    shard_catalog_standbys = "${var.shard_catalog_standbys}" 
}

