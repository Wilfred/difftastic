
#-------------------------------------------------------------------------------------------
# Create and/or Identify the Network / Sub-networks
#-------------------------------------------------------------------------------------------
module "ceph_network" {
  source = "modules/network"
  tenancy_ocid = "${var.tenancy_ocid}"
  compartment_id = "${var.compartment_ocid}"
  create_new_vcn = "${var.create_new_vcn}"
  existing_vcn_id = "${var.existing_vcn_id}"
  vcn_cidr = "${var.vcn_cidr}"
  vcn_name = "${var.vcn_name}"
  create_new_subnets = "${var.create_new_subnets}"
  new_subnet_count = "${var.new_subnet_count}"
  existing_subnet_ids = "${var.existing_subnet_ids}"
  availability_domain_index_list = "${var.availability_domain_index_list_for_subnets}"
  gateway_name = "${var.gateway_name}"
  route_table_name = "${var.route_table_name}"
  subnet_name_prefix = "${var.subnet_name_prefix}"
  subnet_cidr_blocks = "${var.subnet_cidr_blocks}"
}

#-------------------------------------------------------------------------------------------
# Create and Setup the Ceph Deployer
#-------------------------------------------------------------------------------------------
module "ceph_deployer" {
  source = "modules/ceph-deployer/"
  tenancy_ocid = "${var.tenancy_ocid}"
  compartment_ocid = "${var.compartment_ocid}"
  instance_os = "${var.instance_os}"
  availability_domain_index = "${var.availability_domain_index_for_deployer[0]}"
  hostname = "${var.deployer_hostname}"
  shape = "${var.instance_shapes["deployer"]}"
  subnet_id = "${element(module.ceph_network.subnet_id_list, var.availability_domain_index_for_deployer[0]-1)}"
  ssh_public_key_file = "${var.ssh_public_key_file}"
  ssh_private_key_file = "${var.ssh_private_key_file}"
  ssh_username = "${var.ssh_username}"
  instance_create_timeout = "${var.instance_create_timeout}"
  scripts_src_directory = "${var.scripts_src_directory}"
  scripts_dst_directory = "${var.scripts_dst_directory}"
}

#-------------------------------------------------------------------------------------------
# Create and Setup the Ceph Monitors
#-------------------------------------------------------------------------------------------
module "ceph_monitors" {
  source = "modules/ceph-monitor/"
  tenancy_ocid = "${var.tenancy_ocid}"
  compartment_ocid = "${var.compartment_ocid}"
  instance_count = "${var.monitor_instance_count}"
  instance_os = "${var.instance_os}"
  availability_domain_index_list = "${var.availability_domain_index_list_for_monitors}"
  hostname_prefix = "${var.monitor_hostname_prefix}"
  shape = "${var.instance_shapes["monitor"]}"
  subnet_id_list = "${module.ceph_network.subnet_id_list}"
  ssh_public_key_file = "${var.ssh_public_key_file}"
  ssh_private_key_file = "${var.ssh_private_key_file}"
  ssh_username = "${var.ssh_username}"
  instance_create_timeout = "${var.instance_create_timeout}"
  ceph_deployer_ip = "${module.ceph_deployer.ip}"
  scripts_src_directory = "${var.scripts_src_directory}"
  scripts_dst_directory = "${var.scripts_dst_directory}"
  deployer_deploy = "${module.ceph_deployer.deploy}"
}

#-------------------------------------------------------------------------------------------
# Create and Setup the Ceph OSDs
#-------------------------------------------------------------------------------------------
module "ceph_osds" {
  source = "modules/ceph-osd/"
  tenancy_ocid = "${var.tenancy_ocid}"
  compartment_ocid = "${var.compartment_ocid}"
  instance_count = "${var.osd_instance_count}"
  instance_os = "${var.instance_os}"
  availability_domain_index_list = "${var.availability_domain_index_list_for_osds}"
  hostname_prefix = "${var.osd_hostname_prefix}"
  shape = "${var.instance_shapes["osd"]}"
  subnet_id_list = "${module.ceph_network.subnet_id_list}"
  ssh_public_key_file = "${var.ssh_public_key_file}"
  ssh_private_key_file = "${var.ssh_private_key_file}"
  ssh_username = "${var.ssh_username}"
  instance_create_timeout = "${var.instance_create_timeout}"
  ceph_deployer_ip = "${module.ceph_deployer.ip}"
  create_volume = "${var.create_volume}"
  volume_name_prefix = "${var.volume_name_prefix}"
  volume_size_in_gbs = "${var.volume_size_in_gbs}"
  volume_attachment_type = "${var.volume_attachment_type}"
  scripts_src_directory = "${var.scripts_src_directory}"
  scripts_dst_directory = "${var.scripts_dst_directory}"
  block_device_for_ceph = "${var.block_device_for_ceph}"
  deployer_deploy = "${module.ceph_deployer.deploy}"
  new_cluster= "${module.ceph_monitors.new_cluster}"
}

#-------------------------------------------------------------------------------------------
# Create and Setup the Ceph MDSs
#-------------------------------------------------------------------------------------------
module "ceph_mds" {
  source = "modules/ceph-mds/"
  instance_count = "${var.mds_instance_count}"
  tenancy_ocid = "${var.tenancy_ocid}"
  compartment_ocid = "${var.compartment_ocid}"
  instance_os = "${var.instance_os}"
  availability_domain_index_list = "${var.availability_domain_index_list_for_mds}"
  hostname_prefix= "${var.mds_hostname_prefix}"
  shape = "${var.instance_shapes["mds"]}"
  subnet_id_list = "${module.ceph_network.subnet_id_list}"
  ssh_public_key_file = "${var.ssh_public_key_file}"
  ssh_private_key_file = "${var.ssh_private_key_file}"
  ssh_username = "${var.ssh_username}"
  instance_create_timeout = "${var.instance_create_timeout}"
  ceph_deployer_ip = "${module.ceph_deployer.ip}"
  scripts_src_directory = "${var.scripts_src_directory}"
  scripts_dst_directory = "${var.scripts_dst_directory}"
  deployer_deploy = "${module.ceph_deployer.deploy}"
  new_cluster = "${module.ceph_monitors.new_cluster}"
}

#-------------------------------------------------------------------------------------------
# Create and Setup the Ceph Client
#-------------------------------------------------------------------------------------------
module "ceph_client" {
  source = "modules/ceph-client/"
  num_client = "${var.create_client}"
  tenancy_ocid = "${var.tenancy_ocid}"
  compartment_ocid = "${var.compartment_ocid}"
  instance_os = "${var.instance_os}"
  availability_domain_index = "${var.availability_domain_index_list_for_client[0]}"
  hostname = "${var.client_hostname}"
  shape = "${var.instance_shapes["client"]}"
  subnet_id = "${element(module.ceph_network.subnet_id_list, var.availability_domain_index_list_for_client[0] - 1)}"
  ssh_public_key_file = "${var.ssh_public_key_file}"
  ssh_private_key_file = "${var.ssh_private_key_file}"
  ssh_username = "${var.ssh_username}"
  instance_create_timeout = "${var.instance_create_timeout}"
  ceph_deployer_ip = "${module.ceph_deployer.ip}"
  scripts_src_directory = "${var.scripts_src_directory}"
  scripts_dst_directory = "${var.scripts_dst_directory}"
  deployer_deploy = "${module.ceph_deployer.deploy}"
  new_cluster = "${module.ceph_monitors.new_cluster}"
  osd_deploy = "${module.ceph_osds.deploy}"
}
