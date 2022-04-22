resource "oci_core_instance" "vm0" {
	availability_domain = var.availability_domain
	compartment_id    	= var.compartment_id
	display_name        = var.display_name
	shape               = var.compute_shape
	create_vnic_details {
		subnet_id        = var.subnet_id
		display_name     = var.display_name
		assign_public_ip = var.assign_public_ip
		hostname_label   = var.hostname_label
	}
	source_details {
		source_type             = "image"
		source_id               = var.image_id
		boot_volume_size_in_gbs = var.boot_size_in_gbs
	}
	metadata = {
		ssh_authorized_keys = var.ssh_public_key
		user_data = data.template_cloudinit_config.source_postgre_cloud_init.rendered
	}
}