resource "oci_containerengine_cluster" "okell_cluster" {
  #Required
  compartment_id     = var.ociCompartmentOcid
  endpoint_config {
    is_public_ip_enabled = "true"
    nsg_ids = [
    ]
    subnet_id = oci_core_subnet.endpoint_Subnet.id
  }
  kubernetes_version = "v1.19.7"
  name               = "grabdish"
  vcn_id             = oci_core_vcn.okell_vcn.id
  #Optional
  options {
    service_lb_subnet_ids = [oci_core_subnet.svclb_Subnet.id]
    #Optional
    add_ons {
      #Optional
      is_kubernetes_dashboard_enabled = "false"
      is_tiller_enabled               = "false"
    }
    admission_controller_options {
      #Optional
      is_pod_security_policy_enabled = "false"
    }
    kubernetes_network_config {
      #Optional
      pods_cidr     = "10.244.0.0/16"
      services_cidr = "10.96.0.0/16"
    }
  }
}
resource "oci_containerengine_node_pool" "okell_node_pool" {
  #Required
  cluster_id         = oci_containerengine_cluster.okell_cluster.id
  compartment_id     = var.ociCompartmentOcid
  kubernetes_version = "v1.19.7"
  name               = "Pool"
#  node_shape="VM.Standard2.4"
#  node_shape         = "VM.Standard.B2.1"
  node_shape         = "VM.Standard.E2.1"
#  node_shape         = "VM.Standard2.2"
  #subnet_ids         = [oci_core_subnet.nodePool_Subnet_1.id]
  #Optional
  node_config_details {
    placement_configs {
      availability_domain = data.oci_identity_availability_domain.ad1.name
      subnet_id           = oci_core_subnet.nodePool_Subnet.id
    }
/*    placement_configs {
      availability_domain = data.oci_identity_availability_domain.ad2.name
      subnet_id           = oci_core_subnet.nodePool_Subnet.id
    }
    placement_configs {
      availability_domain = data.oci_identity_availability_domain.ad3.name
      subnet_id           = oci_core_subnet.nodePool_Subnet.id
    }
*/
    size = "3"
  }
  node_source_details {
    #Required
    image_id    = local.oracle_linux_images.0 # Latest
    source_type = "IMAGE"
    #Optional
    #boot_volume_size_in_gbs = "60"
  }
  //quantity_per_subnet = 1
  //ssh_public_key      = var.node_pool_ssh_public_key
  //ssh_public_key =  var.resUserPublicKey
}
data "oci_containerengine_cluster_option" "okell_cluster_option" {
  cluster_option_id = "all"
}
data "oci_containerengine_node_pool_option" "okell_node_pool_option" {
  node_pool_option_id = "all"
}
locals {
  all_sources = data.oci_containerengine_node_pool_option.okell_node_pool_option.sources
  oracle_linux_images = [for source in local.all_sources : source.image_id if length(regexall("Oracle-Linux-[0-9]*.[0-9]*-20[0-9]*",source.source_name)) > 0]
}
/*
output "cluster_kubernetes_versions" {
  value = [data.oci_containerengine_cluster_option.okell_cluster_option.kubernetes_versions]
}
output "node_pool_kubernetes_version" {
  value = [data.oci_containerengine_node_pool_option.okell_node_pool_option.kubernetes_versions]
}
data "oci_containerengine_cluster_kube_config" "okell_cluster_kube_config" {
  #Required
  cluster_id = oci_containerengine_cluster.okell_cluster.id
  #Optional
  token_version = "2.0.0"
}
resource "local_file" "okell_cluster_kube_config_file" {
  content  = data.oci_containerengine_cluster_kube_config.okell_cluster_kube_config.content
  filename = "${path.module}/okell_cluster_kubeconfig"
}
variable "InstanceImageOCID" {
  type = map(string)
  default = {
    // See https://docs.us-phoenix-1.oraclecloud.com/images/
    // Oracle-provided image "Oracle-Linux-7.5-2018.10.16-0"
    us-phoenix-1   = "ocid1.image.oc1.phx.aaaaaaaadjnj3da72bztpxinmqpih62c2woscbp6l3wjn36by2cvmdhjub6a"
    us-ashburn-1   = "ocid1.image.oc1.iad.aaaaaaaawufnve5jxze4xf7orejupw5iq3pms6cuadzjc7klojix6vmk42va"
    eu-frankfurt-1 = "ocid1.image.oc1.eu-frankfurt-1.aaaaaaaagbrvhganmn7awcr7plaaf5vhabmzhx763z5afiitswjwmzh7upna"
    uk-london-1    = "ocid1.image.oc1.uk-london-1.aaaaaaaajwtut4l7fo3cvyraate6erdkyf2wdk5vpk6fp6ycng3dv2y3ymvq"
  }
}
*/