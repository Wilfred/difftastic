// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.

resource "oci_core_instance" "vm1" {
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
		user_data 			= data.template_cloudinit_config.ogg_postgre_cloud_init.rendered
	}
	extended_metadata = {
		installations_directory = var.installations_directory
		swap_device             = var.swap_device
		trails_device           = var.trails_device
		trails_directory        = var.trails_directory
		deployments_device      = var.deployments_device
		deployments_directory   = var.deployments_directory
		deployments             = var.deployments
	}
}

resource "oci_core_volume_attachment" "swap_volume_attachment" {
	attachment_type = "paravirtualized"
	instance_id     = oci_core_instance.vm1.id
	volume_id       = var.swap_volume_id
	device          = var.swap_device
}

resource "oci_core_volume_attachment" "trails_volume_attachment" {
	attachment_type = "paravirtualized"
	instance_id     = oci_core_instance.vm1.id
	volume_id       = var.trails_volume_id
	device          = var.trails_device
}

resource "oci_core_volume_attachment" "deployments_volume_attachment" {
	attachment_type = "paravirtualized"
	instance_id     = oci_core_instance.vm1.id
	volume_id       = var.deployments_volume_id
	device          = var.deployments_device
}
