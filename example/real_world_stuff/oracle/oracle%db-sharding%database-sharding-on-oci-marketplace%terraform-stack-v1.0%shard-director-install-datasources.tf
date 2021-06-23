# Copyright 2020 Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

data "template_file" "shard_director_env_template" {
  template = "${file("shard-director-install-scripts/shard-director-env.template.sh")}"

  vars = {
    gsm_home_path    = "${local.gsm_home_full_path}"
    oracle_base_path = "${var.oracle_base}"
  }
}

data "template_file" "shard_director_worker_template" {
  template = "${file("shard-director-install-scripts/shard-director-worker.template.sh")}"

  vars = {
    gsm_home_path           = "${local.gsm_home_full_path}"
    oracle_base_path        = "${var.oracle_base}"
    gsm_zip_name            = "${var.gsm_zip_name}"
    gsm_install_folder_name = "${local.gsm_install_folder_name}"
    sudo_pass               = "sd${random_string.sudo_pass.result}"
    ora_inventory_location  = "${var.ora_inventory_location}"
  }
}

data "template_file" "shard_director_rsp_template" {
  template = "${file("shard-director-install-rsps/shard-director-rsp.template.rsp")}"

  vars = {
    unix_group_name        = "${var.unix_group_name}"
    ora_inventory_location = "${var.ora_inventory_location}"
    oracle_base_path       = "${var.oracle_base}"
    gsm_home_path          = "${local.gsm_home_full_path}"
    gsm_major_version      = "${local.gsm_major_version}"
  }
}

