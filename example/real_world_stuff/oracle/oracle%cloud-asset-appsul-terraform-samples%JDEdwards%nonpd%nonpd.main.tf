/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


module "create_wls" {
  source  = "../modules/app"

  compartment_ocid        = "${var.compartment_ocid}"
  AD                      = "${var.AD}"
  availability_domain     = ["${data.template_file.user_ad.*.rendered}"]
  fault_domain            = ["${sort(data.template_file.deployment_fd.*.rendered)}"]
  app_instance_count      = "${var.wls_instance_count}"
  app_hostname_prefix     = "${var.env_prefix}wls"
  app_image               = "${data.oci_core_images.InstanceImageOCID.images.0.id}"
  app_instance_shape      = "${var.wls_instance_shape}"
  app_subnet              = ["${var.psntsubid}"]
  app_ssh_public_key      = "${var.ssh_public_key}"
  app_ssh_private_key     = "${var.ssh_private_key}"
  bastion_ssh_private_key = "${var.bastion_ssh_private_key}"
  bastion_public_ip       = "${var.bastion_public_ip}"
  unix_mount_directory    = "${var.unix_mount_directory}"
  init_dir_name           = "web"
  app_block_size          = "${var.wls_bv_size}"
}

module "create_logic" {
  source  = "../modules/app"

  compartment_ocid        = "${var.compartment_ocid}"
  AD                      = "${var.AD}"
  availability_domain     = ["${data.template_file.user_ad.*.rendered}"]
  fault_domain            = ["${sort(data.template_file.deployment_fd.*.rendered)}"]
  app_instance_count      = "${var.logic_instance_count}"
  app_hostname_prefix     = "${var.env_prefix}es"
  app_image               = "${data.oci_core_images.InstanceImageOCID.images.0.id}"
  app_instance_shape      = "${var.logic_instance_shape}"
  app_subnet              = ["${var.midsubid}"]
  app_ssh_public_key      = "${var.ssh_public_key}"
  app_ssh_private_key     = "${var.ssh_private_key}"
  bastion_public_ip       = "${var.bastion_public_ip}"
  bastion_ssh_private_key = "${var.bastion_ssh_private_key}"
  unix_mount_directory    = "${var.unix_mount_directory}"
  init_dir_name           = "ent"
  app_block_size          = "${var.logic_bv_size}"
}

module "create_batch" {
  source  = "../modules/app"

  compartment_ocid        = "${var.compartment_ocid}"
  AD                      = "${var.AD}"
  availability_domain     = ["${data.template_file.user_ad.*.rendered}"]
  fault_domain            = ["${sort(data.template_file.deployment_fd.*.rendered)}"]
  app_instance_count      = "${var.batch_instance_count}"
  app_hostname_prefix     = "${var.env_prefix}batch"
  app_image               = "${data.oci_core_images.InstanceImageOCID.images.0.id}"
  app_instance_shape      = "${var.batch_instance_shape}"
  app_subnet              = ["${var.midsubid}"]
  app_ssh_public_key      = "${var.ssh_public_key}"
  app_ssh_private_key     = "${var.ssh_private_key}"
  bastion_public_ip       = "${var.bastion_public_ip}"
  bastion_ssh_private_key = "${var.bastion_ssh_private_key}"
  unix_mount_directory    = "${var.unix_mount_directory}"
  init_dir_name           = "ent"
  app_block_size          = "${var.batch_bv_size}"
}

module "create_sm" {
  source = "../modules/app"

  compartment_ocid        = "${var.compartment_ocid}"
  AD                      = "${var.AD}"
  availability_domain     = ["${data.template_file.user_ad.*.rendered}"]
  fault_domain            = ["${sort(data.template_file.deployment_fd.*.rendered)}"]
  app_instance_count      = "${var.sm_instance_count}"
  app_hostname_prefix     = "${var.env_prefix}smc"
  app_image               = "${data.oci_core_images.InstanceImageOCID.images.0.id}"
  app_instance_shape      = "${var.sm_instance_shape}"
  app_subnet              = ["${var.adminsubid}"]
  app_ssh_public_key      = "${var.ssh_public_key}"
  app_ssh_private_key     = "${var.ssh_private_key}"
  bastion_public_ip       = "${var.bastion_public_ip}"
  bastion_ssh_private_key = "${var.bastion_ssh_private_key}"
  unix_mount_directory    = "${var.unix_mount_directory}"
  init_dir_name           = "sm"
  app_block_size          = "${var.sm_bv_size}"
}

module "create_depsvr" {
  source = "../modules/win"

  compartment_ocid        = "${var.compartment_ocid}"
  AD                      = "${var.AD}"
  availability_domain     = ["${data.template_file.user_ad.*.rendered}"]
  fault_domain            = ["${sort(data.template_file.deployment_fd.*.rendered)}"]
  app_instance_count      = "${var.dep_instance_count}"
  app_hostname_prefix     = "${var.env_prefix}dep"
  app_image               = "${data.oci_core_images.WinInstanceImageOCID.images.0.id}"
  app_instance_shape      = "${var.dep_instance_shape}"
  app_subnet              = ["${var.adminsubid}"]
}

# Module to create Database
module "create_db" {
  source = "../modules/db"
  
  compartment_ocid          = "${var.compartment_ocid}"
  availability_domain       = ["${data.template_file.user_ad.*.rendered}"]
  db_count                  = "${var.db_count}"
  #db_cpucorecount          = "${var.db_cpucorecount}"
  db_edition                = "${var.db_edition}"
  db_instance_shape         = "${var.db_instance_shape}"
  db_node_count             = "${var.db_node_count}"
  db_hostname_prefix        = "${var.env_prefix}db"
  db_size_in_gb             = "${var.db_size_in_gb}"
  db_license_model          = "${var.db_license_model}"
  db_subnet                 = ["${var.dbsubid}"]
  db_ssh_public_key         = "${var.ssh_public_key}"
  db_admin_password         = "${var.db_admin_password}"
  db_name                   = "${var.db_name}"
  db_characterset           = "${var.db_characterset}"
  db_nls_characterset       = "${var.db_nls_characterset}"
  #db_workload               = "${var.db_workload}"
  db_version                = "${var.db_version}"
  #db_disk_redundancy        = "${var.db_disk_redundancy}"
  db_pdb_name               = "${var.db_pdb_name}"
  init_dir_name             = "db"
  db_ssh_private_key        = "${var.ssh_private_key}"
  bastion_public_ip         = "${var.bastion_public_ip}"
  bastion_ssh_private_key   = "${var.bastion_ssh_private_key}"
}
