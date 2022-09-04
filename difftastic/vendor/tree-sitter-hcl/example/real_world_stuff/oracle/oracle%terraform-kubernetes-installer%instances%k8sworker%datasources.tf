# Prevent oci_core_images image list from changing underneath us.
data "oci_core_images" "ImageOCID" {
  compartment_id = "${var.compartment_ocid}"
  display_name   = "${var.oracle_linux_image_name}"
}

# Cloud call to get a list of Availability Domains
data "oci_identity_availability_domains" "ADs" {
  compartment_id = "${var.tenancy_ocid}"
}

data "template_file" "setup-template" {
  template = "${file("${path.module}/scripts/setup.template.sh")}"

  vars = {
    master_lb                 = "${var.master_lb}"
    domain_name               = "${var.domain_name}"
    docker_ver                = "${var.docker_ver}"
    k8s_ver                   = "${var.k8s_ver}"
    docker_max_log_size       = "${var.worker_docker_max_log_size}"
    docker_max_log_files      = "${var.worker_docker_max_log_files}"
    worker_iscsi_volume_mount = "${var.worker_iscsi_volume_mount}"
    flexvolume_driver_version = "${var.flexvolume_driver_version}"
    reverse_proxy_setup       = "${var.reverse_proxy_setup}"
  }
}

data "template_file" "setup-preflight" {
  template = "${file("${path.module}/scripts/setup.preflight.sh")}"

  vars = {
    k8s_ver = "${var.k8s_ver}"
  }
}

data "template_file" "kube-proxy" {
  template = "${file("${path.module}/manifests/kube-proxy.template.yaml")}"

  vars = {
    master_lb            = "${var.master_lb}"
    k8s_ver              = "${var.k8s_ver}"
    domain_name          = "${var.domain_name}"
    flannel_network_cidr = "${var.flannel_network_cidr}"
  }
}

data "template_file" "worker-kubeconfig" {
  template = "${file("${path.module}/manifests/worker-kubeconfig.template.yaml")}"

  vars = {
    master_lb   = "${var.master_lb}"
    k8s_ver     = "${var.k8s_ver}"
    domain_name = "${var.domain_name}"
  }
}

data "template_file" "kubelet-service" {
  template = "${file("${path.module}/scripts/kubelet.service")}"

  vars = {
    master_lb   = "${var.master_lb}"
    k8s_ver     = "${var.k8s_ver}"
    domain_name = "${var.domain_name}"
    region      = "${var.region}"
    zone        = "${element(split(":",var.availability_domain),1)}"
  }
}

data "template_file" "kube_worker_cloud_init_file" {
  template = "${file("${path.module}/cloud_init/bootstrap.template.yaml")}"

  vars = {
    k8s_ver                            = "${var.k8s_ver}"
    setup_preflight_sh_content         = "${base64gzip(data.template_file.setup-preflight.rendered)}"
    setup_template_sh_content          = "${base64gzip(data.template_file.setup-template.rendered)}"
    kube_proxy_template_content        = "${base64gzip(data.template_file.kube-proxy.rendered)}"
    worker_kubeconfig_template_content = "${base64gzip(data.template_file.worker-kubeconfig.rendered)}"
    kubelet_service_content            = "${base64gzip(data.template_file.kubelet-service.rendered)}"
    ca-pem-content                     = "${base64gzip(var.root_ca_pem)}"
    ca-key-content                     = "${base64gzip(var.root_ca_key)}"
    api-server-key-content             = "${base64gzip(var.api_server_private_key_pem)}"
    api-server-cert-content            = "${base64gzip(var.api_server_cert_pem)}"
    reverse_proxy-content              = "${var.reverse_proxy_clount_init}"
  }
}

data "template_cloudinit_config" "master" {
  gzip          = true
  base64_encode = true

  part {
    filename     = "bootstrap.yaml"
    content_type = "text/cloud-config"
    content      = "${data.template_file.kube_worker_cloud_init_file.rendered}"
  }
}
