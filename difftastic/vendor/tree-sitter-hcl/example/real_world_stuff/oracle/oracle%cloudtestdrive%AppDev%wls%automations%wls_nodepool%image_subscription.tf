
# Hard coded, and to be copied out of the Stack Definition downloaded in step 1
variable "instance_image_id" {
default = "ocid1.image.oc1..ocid_to_copy_from_stack"
}

# Hard coded, and to be copied out of the Stack Definition downloaded in step 1
variable "mp_listing_id" {
default = "ocid1.appcataloglisting.oc1..ocid_to_copy_from_stack"
}

# Hard coded, and to be copied out of the Stack Definition downloaded in step 1
variable "mp_listing_resource_version" {
default = "version_to_copy_from_stack"
}


#Get Image Agreement
resource "oci_core_app_catalog_listing_resource_version_agreement" "mp_image_agreement" {
  listing_id               = var.mp_listing_id
  listing_resource_version = var.mp_listing_resource_version
}

#Accept Terms and Subscribe to the image, placing the image in a particular compartment
resource "oci_core_app_catalog_subscription" "mp_image_subscription" {
  compartment_id           = var.compartment_ocid
  eula_link                = oci_core_app_catalog_listing_resource_version_agreement.mp_image_agreement.eula_link
  listing_id               = oci_core_app_catalog_listing_resource_version_agreement.mp_image_agreement.listing_id
  listing_resource_version = oci_core_app_catalog_listing_resource_version_agreement.mp_image_agreement.listing_resource_version
  oracle_terms_of_use_link = oci_core_app_catalog_listing_resource_version_agreement.mp_image_agreement.oracle_terms_of_use_link
  signature                = oci_core_app_catalog_listing_resource_version_agreement.mp_image_agreement.signature
  time_retrieved           = oci_core_app_catalog_listing_resource_version_agreement.mp_image_agreement.time_retrieved

  timeouts {
    create = "20m"
  }
}

data "oci_core_app_catalog_listing_resource_version" "test_catalog_listing" {
  listing_id = oci_core_app_catalog_listing_resource_version_agreement.mp_image_agreement.listing_id
  resource_version = oci_core_app_catalog_listing_resource_version_agreement.mp_image_agreement.listing_resource_version
}

# Gets the partner image subscription
data "oci_core_app_catalog_subscriptions" "mp_image_subscription" {
  compartment_id = var.compartment_ocid
  listing_id = var.mp_listing_id
  filter {
    name = "listing_resource_version"
    values = [var.mp_listing_resource_version]
  }
}


locals {
	 	ad_nums2 = [
			for ad_key in range(length(data.oci_identity_availability_domains.ads.availability_domains)) :
	      	lookup(data.oci_identity_availability_domains.ads.availability_domains[ad_key],"name")
			]
    oke_id = "ocid1.cluster.oc1.eu-frankfurt-1.your_OKE_ocid"
    subnet_id = "ocid1.subnet.oc1.eu-frankfurt-1.your_subnet_ocid"

	}

resource "oci_containerengine_node_pool" "K8S_pool1" {
	cluster_id = local.oke_id
	compartment_id = var.compartment_ocid
  kubernetes_version = "v1.18.10"
	name = "wls_uc_pool"
	node_shape = var.compute_shape
	node_config_details {
    	dynamic "placement_configs" {
				for_each = local.ad_nums2

				content {
      		availability_domain = placement_configs.value
      		subnet_id           = local.subnet_id
					}
			}
   size = 1
	}
  node_source_details {
    image_id    = data.oci_core_app_catalog_listing_resource_version.test_catalog_listing.listing_resource_id
    source_type = "IMAGE"
  }
}
