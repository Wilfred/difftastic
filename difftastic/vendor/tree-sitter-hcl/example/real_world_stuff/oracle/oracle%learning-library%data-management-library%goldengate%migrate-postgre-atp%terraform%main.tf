// Migrate Postgresql to ATP lab materials

module "ogg_pgsql_swap_block_volume" {
	source              = "./block_volume"
	compartment_ocid    = "${var.compartment_ocid}"
	availability_domain = data.oci_identity_availability_domains.ads.availability_domains[0].name
	size_in_gbs         = "${var.ogg_pgsql_swap_size_in_gbs}"
	display_name        = "${var.ogg_pgsql_bv_display_name} (Swap)"
}
module "ogg_pgsql_trails_block_volume" {
	source              = "./block_volume"
	compartment_ocid    = "${var.compartment_ocid}"
	availability_domain = data.oci_identity_availability_domains.ads.availability_domains[0].name
	size_in_gbs         = "${var.ogg_pgsql_trails_size_in_gbs}"
	display_name        = "${var.ogg_pgsql_bv_display_name} (Trails)"
	existing_volume_id  = "${var.ogg_pgsql_trails_volume_id}"
}
module "ogg_pgsql_deployments_block_volume" {
	source              = "./block_volume"
	compartment_ocid    = "${var.compartment_ocid}"
	availability_domain = data.oci_identity_availability_domains.ads.availability_domains[0].name
	size_in_gbs         = "${var.ogg_pgsql_deployments_size_in_gbs}"
	display_name        = "${var.ogg_pgsql_bv_display_name} (Deployments)"
	existing_volume_id  = "${var.ogg_pgsql_deployments_volume_id}"
}
module "ogg_pgsql_image" {
	source            = "./ogg_pgsqlimage"
	compartment_ocid  = "${var.image_compartment_id}"
	market_image_id   = "${local.mp_listing_resource_id}"
	custom_image_name = "ogg-${var.ogg_pgsql_version}-${var.ogg_pgsql_edition}-${var.ogg_pgsql_dbms}"
}
module "source_pgsql" {
	source                	= "./source_db"
	compartment_id      	= "${var.compartment_ocid}"
	availability_domain   	= data.oci_identity_availability_domains.ads.availability_domains[0].name
	ssh_public_key			= file("~/.ssh/oci.pub")
	boot_size_in_gbs      	= "${var.source_pgsql_boot_size_in_gbs}"
	display_name          	= "${var.source_pgsql_display_name}"
	hostname_label        	= "${var.source_pgsql_hostname_label}"
	compute_shape         	= "${var.source_pgsql_compute_shape}"
	image_id              	= "${var.source_postgre_image_ocid[var.region]}"
	subnet_id             	= oci_core_subnet.holvcn_public_subnet.id
	assign_public_ip      	= "${var.source_pgsql_assign_public_ip}"
}

module "ogg_pgsql_compute" {
	source                	= "./ogg_pgsql"
	compartment_id      	= "${var.compartment_ocid}"
	availability_domain   	= data.oci_identity_availability_domains.ads.availability_domains[0].name
	ssh_public_key			= file("~/.ssh/oci.pub")
	boot_size_in_gbs      	= "${var.ogg_pgsql_boot_size_in_gbs}"
	display_name          	= "${var.ogg_pgsql_display_name}"
	hostname_label        	= "${var.ogg_pgsql_hostname_label}"
	compute_shape         	= "${var.ogg_pgsql_compute_shape}"
	image_id              	= "${module.ogg_pgsql_image.image_id}"
	swap_volume_id        	= "${module.ogg_pgsql_swap_block_volume.volume_id}"
	trails_volume_id      	= "${module.ogg_pgsql_trails_block_volume.volume_id}"
	deployments_volume_id 	= "${module.ogg_pgsql_deployments_block_volume.volume_id}"
	subnet_id             	= oci_core_subnet.holvcn_public_subnet.id
	assign_public_ip      	= "${var.ogg_pgsql_assign_public_ip}"
	source_db				= "${module.source_pgsql.Source_PGSQLDB_Public_ip}"
}

module "ogg_micro_swap_block_volume" {
	source              = "./block_volume"
	compartment_ocid    = "${var.compartment_ocid}"
	availability_domain = data.oci_identity_availability_domains.ads.availability_domains[0].name
	size_in_gbs         = "${var.ogg_micro_swap_size_in_gbs}"
	display_name        = "${var.ogg_micro_bv_display_name} (Swap)"
}

module "ogg_micro_trails_block_volume" {
	source              = "./block_volume"
	compartment_ocid    = "${var.compartment_ocid}"
	availability_domain = data.oci_identity_availability_domains.ads.availability_domains[0].name
	size_in_gbs         = "${var.ogg_micro_trails_size_in_gbs}"
	display_name        = "${var.ogg_micro_bv_display_name} (Trails)"
	existing_volume_id  = "${var.ogg_micro_trails_volume_id}"
}

module "ogg_micro_deployments_block_volume" {
	source              = "./block_volume"
	compartment_ocid    = "${var.compartment_ocid}"
	availability_domain = data.oci_identity_availability_domains.ads.availability_domains[0].name
	size_in_gbs         = "${var.ogg_micro_deployments_size_in_gbs}"
	display_name        = "${var.ogg_micro_bv_display_name} (Deployments)"
	existing_volume_id  = "${var.ogg_micro_deployments_volume_id}"
}

module "ogg_micro_cacheManager_block_volume" {
	source              = "./block_volume"
	compartment_ocid    = "${var.compartment_ocid}"
	availability_domain = data.oci_identity_availability_domains.ads.availability_domains[0].name
	size_in_gbs         = "${var.ogg_micro_cacheManager_size_in_gbs}"
	display_name        = "${var.ogg_micro_bv_display_name} (Cache Manager)"
	existing_volume_id  = "${var.ogg_micro_cacheManager_volume_id}"
}
module "ogg_micro_image" {
	source            = "./ogg_microimage"
	compartment_id    = "${var.image_compartment_id}"
	market_image_id   = "${local.mp_listing_resource_id2}"
	custom_image_name = "ogg-${var.ogg_micro_version}-${var.ogg_micro_edition}-${var.ogg_micro_dbms}"
}
module "atp" {
	source          = "./atp"
	compartment_id  = "${var.compartment_ocid}"
	display_name 	= "${var.atp_display_name}"
	db_name         = "${var.atp_db_name}"
	db_workload  	= "${var.atp_workload}"
	is_free_tier	= "${var.atp_is_free_tier}"
	db_version 		= "${var.atp_db_version}"
	cpu_core_count	= "${var.atp_ocpu_count}"
	data_storage_size_in_tbs 	= "${var.atp_storage_size}"
	license_model	= "${var.atp_license_model}"
	generate_type	= "${var.atp_wallet_generate_type}"
}
module "ogg_compute" {
	depends_on 		= [module.atp]
	source                = "./ogg_micro"
	deployments           = "${var.deployments_json  != "" ? var.deployments_json
                         :   var.deployment_2_name != "" && var.deployment_2_dbms != "" ? "[ {\"name\":\"${var.deployment_1_name}\",\"dbms\":\"${var.deployment_1_dbms}\"}, {\"name\":\"${var.deployment_2_name}\",\"dbms\":\"${var.deployment_2_dbms}\"} ]"
                                                                                        : "[ {\"name\":\"${var.deployment_1_name}\",\"dbms\":\"${var.deployment_1_dbms}\"} ]"}"

  deployment_2_wallet   = "${module.atp.wallet}"
  compartment_id        = "${var.compartment_ocid}"
  availability_domain   = data.oci_identity_availability_domains.ads.availability_domains[0].name
  ssh_public_key        = file("~/.ssh/oci.pub")
  boot_size_in_gbs      = "${var.ogg_micro_boot_size_in_gbs}"
  display_name          = "${var.ogg_micro_display_name}"
  hostname_label        = "${var.ogg_micro_hostname_label}"
  compute_shape         = "${var.ogg_micro_compute_shape}"
  image_id              = "${module.ogg_micro_image.image_id}"
  swap_volume_id        = "${module.ogg_micro_swap_block_volume.volume_id}"
  trails_volume_id      = "${module.ogg_micro_trails_block_volume.volume_id}"
  deployments_volume_id = "${module.ogg_micro_deployments_block_volume.volume_id}"
  cacheManager_volume_id = "${module.ogg_micro_cacheManager_block_volume.volume_id}"
  subnet_id             = oci_core_subnet.holvcn_public_subnet.id
  assign_public_ip      = "${var.ogg_micro_assign_public_ip}"
}

output "Source_PGSQLDB_Public_ip" {
  value = module.source_pgsql.Source_PGSQLDB_Public_ip
}

output "ATP_generated_password" {
  value = module.atp.ATP_generated_password
}
output "OGG_Microservices_Public_ip" {
  value = module.ogg_compute.OGG_Microservices_Public_ip
}
output "OGG_PGSQL_Public_ip" {
  value = module.ogg_pgsql_compute.OGG_PGSQL_Public_ip
}


