/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


locals {
  // VCN is /16
  bastion_subnet_prefix = "${cidrsubnet("${var.vcn_cidr}", 6, 0)}"
  lb_subnet_prefix      = "${cidrsubnet("${var.vcn_cidr}", 6, 1)}"
  app_subnet_prefix     = "${cidrsubnet("${var.vcn_cidr}", 6, 2)}"
  db_subnet_prefix      = "${cidrsubnet("${var.vcn_cidr}", 6, 3)}"
}

# Create Virtual Cloud Network (VCN)
module "create_vcn" {
  source  = "./modules/network/vcn"

  compartment_ocid  = "${var.compartment_ocid}"
  vcn_cidr          = "${var.vcn_cidr}"
  vcn_dns_label     = "${var.vcn_dns_label}"
}

# Create bastion host subnet
module "bastion_subnet" {
  source  = "./modules/network/subnets"

  compartment_ocid    = "${var.compartment_ocid}"
  AD                  = "${var.AD}"
  availability_domain = ["${data.template_file.deployment_ad.*.rendered}"]
  vcn_id              = "${module.create_vcn.vcnid}"
  vcn_subnet_cidr     =  [
    "${cidrsubnet(local.bastion_subnet_prefix, 2, 0)}",
    "${cidrsubnet(local.bastion_subnet_prefix, 2, 1)}",
    "${cidrsubnet(local.bastion_subnet_prefix, 2, 2)}",
  ]
  dns_label           = "bassubad"
  dhcp_options_id     = "${module.create_vcn.default_dhcp_id}"
  route_table_id      = "${oci_core_route_table.PublicRT.id}"
  security_list_ids   = ["${oci_core_security_list.BastionSecList.id}"]
  private_subnet      = "False"
}

# Create Load balancer subnet
module "lb_subnet" {
  source  = "./modules/network/subnets"

  compartment_ocid    = "${var.compartment_ocid}"
  AD                  = "${var.AD}"
  availability_domain = ["${data.template_file.deployment_ad.*.rendered}"]
  vcn_id              = "${module.create_vcn.vcnid}"
  vcn_subnet_cidr     =  [
    "${cidrsubnet(local.lb_subnet_prefix, 2, 0)}",
    "${cidrsubnet(local.lb_subnet_prefix, 2, 1)}",
    "${cidrsubnet(local.lb_subnet_prefix, 2, 2)}",
  ]
  dns_label           = "lbsubad"
  dhcp_options_id     = "${module.create_vcn.default_dhcp_id}"
  route_table_id      = "${oci_core_route_table.PrivateRT.id}"
  security_list_ids   = ["${oci_core_security_list.LBSecList.id}"]
  private_subnet      = "True"
}


# Create Application subnet
module "app_subnet" {
  source  = "./modules/network/subnets"

  compartment_ocid    = "${var.compartment_ocid}"
  AD                  = "${var.AD}"
  availability_domain = ["${data.template_file.deployment_ad.*.rendered}"]
  vcn_id              = "${module.create_vcn.vcnid}"
  vcn_subnet_cidr     =  [
    "${cidrsubnet(local.app_subnet_prefix, 2, 0)}",
    "${cidrsubnet(local.app_subnet_prefix, 2, 1)}",
    "${cidrsubnet(local.app_subnet_prefix, 2, 2)}",
  ]
  dns_label           = "appsubad"
  dhcp_options_id     = "${module.create_vcn.default_dhcp_id}"
  route_table_id      = "${oci_core_route_table.PrivateRT.id}"
  security_list_ids   = ["${oci_core_security_list.AppSecList.id}"]
  private_subnet      = "True"
}


# Create Database system subnet
module "db_subnet" {
  source  = "./modules/network/subnets"

  compartment_ocid    = "${var.compartment_ocid}"
  AD                  = "${var.AD}"
  availability_domain = ["${data.template_file.deployment_ad.*.rendered}"]
  vcn_id              = "${module.create_vcn.vcnid}"
  vcn_subnet_cidr     =  [
    "${cidrsubnet(local.db_subnet_prefix, 2, 0)}",
    "${cidrsubnet(local.db_subnet_prefix, 2, 1)}",
    "${cidrsubnet(local.db_subnet_prefix, 2, 2)}",
  ]
  dns_label           = "dbsubad"
  dhcp_options_id     = "${module.create_vcn.default_dhcp_id}"
  route_table_id      = "${oci_core_route_table.PrivateRT.id}"
  security_list_ids   = ["${oci_core_security_list.DBSecList.id}"]
  private_subnet      = "True"
}


# Create bastion host
module "create_bastion" {
  source  = "./modules/bastion"

  compartment_ocid        = "${var.compartment_ocid}"
  AD                      = "${var.AD}"
  availability_domain     = ["${data.template_file.deployment_ad.*.rendered}"]
  bastion_hostname_prefix = "${var.ebs_env_prefix}bas${substr(var.region, 3, 3)}"
  bastion_image           = "${data.oci_core_images.InstanceImageOCID.images.0.id}"
  bastion_instance_shape  = "${var.bastion_instance_shape}"
  bastion_subnet          = ["${module.bastion_subnet.subnetid}"]
  bastion_ssh_public_key  = "${var.bastion_ssh_public_key}"
  }

# Create Application server
module "create_app" {
  source  = "./modules/compute"

  compartment_ocid                = "${var.compartment_ocid}"
  AD                              = "${var.AD}"
  availability_domain             = ["${data.template_file.deployment_ad.*.rendered}"]
  fault_domain                    = ["${sort(data.template_file.deployment_fd.*.rendered)}"]
  compute_instance_count          = "${var.ebs_app_instance_count}"
  compute_hostname_prefix         = "${var.ebs_env_prefix}app${substr(var.region, 3, 3)}"
  compute_image                   = "${data.oci_core_images.InstanceImageOCID.images.0.id}"
  compute_instance_shape          = "${var.ebs_app_instance_shape}"
  compute_subnet                  = ["${module.app_subnet.subnetid}"]
  compute_ssh_public_key          = "${var.ssh_public_key}"
  compute_ssh_private_key         = "${var.ssh_private_key}"
  bastion_ssh_private_key         = "${var.bastion_ssh_private_key}"
  bastion_public_ip               = "${module.create_bastion.Bastion_Public_IPs[0]}"
  compute_instance_listen_port    = "${var.ebs_app_instance_listen_port}"
  fss_instance_prefix             = "${var.ebs_env_prefix}fss${substr(var.region, 3, 3)}"
  fss_subnet                      = ["${module.app_subnet.subnetid}"]
  fss_primary_mount_path          = "${var.ebs_fss_primary_mount_path}"
  fss_limit_size_in_gb            = "${var.ebs_fss_limit_size_in_gb}"
  compute_instance_user           = "${var.compute_instance_user}"
  bastion_user                    = "${var.bastion_user}"
  compute_boot_volume_size_in_gb  = "${var.compute_boot_volume_size_in_gb}"
  timezone                        = "${var.timezone}"
}

# Create Database system
  module "create_db" {
  source  = "./modules/dbsystem"

  compartment_ocid      = "${var.compartment_ocid}"
  AD                    = "${var.AD}"
  availability_domain   = ["${data.template_file.deployment_ad.*.rendered}"]
  db_edition            = "${var.db_edition}"
  db_instance_shape     = "${var.db_instance_shape}"
  db_node_count         = "${var.db_node_count}"
  db_hostname_prefix    = "${var.ebs_env_prefix}db${substr(var.region, 3, 3)}"
  db_size_in_gb         = "${var.db_size_in_gb}"
  db_license_model      = "${var.db_license_model}"
  db_subnet             = ["${module.db_subnet.subnetid}"]
  db_ssh_public_key     = "${var.ssh_public_key}"
  db_admin_password     = "${var.db_admin_password}"
  db_name               = "${var.db_name}"
  db_characterset       = "${var.db_characterset}"
  db_nls_characterset   = "${var.db_nls_characterset}"
  db_version            = "${var.db_version}"
  db_pdb_name           = "${var.db_pdb_name}"
}

# Create Load Balancer
module "create_lb" {
  source  = "./modules/loadbalancer"

  compartment_ocid              = "${var.compartment_ocid}"
  AD                            = "${var.AD}"
  availability_domain           = ["${data.template_file.deployment_ad.*.rendered}"]
  load_balancer_shape           = "${var.load_balancer_shape}"
  load_balancer_subnet          = ["${module.lb_subnet.subnetid}"]
  load_balancer_name            = "${var.ebs_env_prefix}lb${substr(var.region, 3, 3)}"
  load_balancer_hostname        = "${var.load_balancer_hostname}"
  load_balancer_listen_port     = "${var.load_balancer_listen_port}"
  compute_instance_listen_port  = "${var.ebs_app_instance_listen_port}"
  compute_instance_count        = "${var.ebs_app_instance_count}"
  be_ip_addresses               = ["${module.create_app.AppsPrvIPs}"]
}
