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
    domain_name                = "${var.domain_name}"
    docker_ver                 = "${var.docker_ver}"
    etcd_ver                   = "${var.etcd_ver}"
    flannel_ver                = "${var.flannel_ver}"
    flannel_network_cidr       = "${var.flannel_network_cidr}"
    flannel_backend            = "${var.flannel_backend}"
    k8s_ver                    = "${var.k8s_ver}"
    docker_max_log_size        = "${var.master_docker_max_log_size}"
    docker_max_log_files       = "${var.master_docker_max_log_files}"
    etcd_discovery_url         = "${file("${path.root}/generated/discovery${var.etcd_discovery_url}")}"
    etcd_endpoints             = "${var.etcd_endpoints}"
    cloud_controller_version   = "${var.cloud_controller_version}"
    flexvolume_driver_version  = "${var.flexvolume_driver_version}"
    volume_provisioner_version = "${var.volume_provisioner_version}"
    kubernetes_network_plugin  = "${var.kubernetes_network_plugin}"
  }
}

data "template_file" "setup-preflight" {
  template = "${file("${path.module}/scripts/setup.preflight.sh")}"

  vars = {
    k8s_ver = "${var.k8s_ver}"
  }
}

data "template_file" "kube-apiserver" {
  template = "${file("${path.module}/manifests/kube-apiserver.yaml")}"

  vars = {
    api_server_count = "${var.api_server_count}"
    domain_name      = "${var.domain_name}"
    k8s_ver          = "${var.k8s_ver}"
    etcd_endpoints   = "${var.etcd_endpoints}"
  }
}

data "template_file" "kubelet-service" {
  template = "${file("${path.module}/scripts/kubelet.service")}"

  vars = {
    k8s_ver = "${var.k8s_ver}"
  }
}

data "template_file" "kube-controller-manager" {
  template = "${file("${path.module}/manifests/kube-controller-manager.yaml")}"

  vars = {
    k8s_ver              = "${var.k8s_ver}"
    flannel_network_cidr = "${var.flannel_network_cidr}"
  }
}

data "template_file" "kube-dns" {
  template = "${file("${path.module}/manifests/kube-dns.yaml")}"

  vars = {
    pillar_dns_domain = "cluster.local"
    k8s_dns_ver       = "${var.k8s_dns_ver}"
  }
}

data "template_file" "kube-proxy" {
  template = "${file("${path.module}/manifests/kube-proxy.yaml")}"

  vars = {
    k8s_ver              = "${var.k8s_ver}"
    flannel_network_cidr = "${var.flannel_network_cidr}"
  }
}

data "template_file" "kube-scheduler" {
  template = "${file("${path.module}/manifests/kube-scheduler.yaml")}"

  vars = {
    k8s_ver = "${var.k8s_ver}"
  }
}

data "template_file" "kube-dashboard" {
  template = "${file("${path.module}/manifests/kubernetes-dashboard.yaml")}"

  vars = {
    k8s_dashboard_ver = "${var.k8s_dashboard_ver}"
  }
}

data "template_file" "kube-rbac" {
  template = "${file("${path.module}/manifests/kube-rbac-role-binding.yaml")}"
}

data "template_file" "master-kubeconfig" {
  template = "${file("${path.module}/manifests/master-kubeconfig.template.yaml")}"
}

data "template_file" "token_auth_file" {
  template = "${file("${path.module}/scripts/token_auth.csv")}"

  vars {
    token_admin = "${var.k8s_apiserver_token_admin}"
  }
}

data "template_file" "kube_master_cloud_init_file" {
  template = "${file("${path.module}/cloud_init/bootstrap.template.yaml")}"

  vars = {
    k8s_ver                                  = "${var.k8s_ver}"
    setup_preflight_sh_content               = "${base64gzip(data.template_file.setup-preflight.rendered)}"
    setup_template_sh_content                = "${base64gzip(data.template_file.setup-template.rendered)}"
    kube_apiserver_template_content          = "${base64gzip(data.template_file.kube-apiserver.rendered)}"
    kube_controller_manager_template_content = "${base64gzip(data.template_file.kube-controller-manager.rendered)}"
    kube_dns_template_content                = "${base64gzip(data.template_file.kube-dns.rendered)}"
    kube_proxy_template_content              = "${base64gzip(data.template_file.kube-proxy.rendered)}"
    kube_dashboard_template_content          = "${base64gzip(data.template_file.kube-dashboard.rendered)}"
    kube_rbac_content                        = "${base64gzip(data.template_file.kube-rbac.rendered)}"
    master_kubeconfig_template_content       = "${base64gzip(data.template_file.master-kubeconfig.rendered)}"
    kube_scheduler_template_content          = "${base64gzip(data.template_file.kube-scheduler.rendered)}"
    kubelet_service_content                  = "${base64gzip(data.template_file.kubelet-service.rendered)}"
    ca-pem-content                           = "${base64gzip(var.root_ca_pem)}"
    ca-key-content                           = "${base64gzip(var.root_ca_key)}"
    api-server-key-content                   = "${base64gzip(var.api_server_private_key_pem)}"
    api-server-cert-content                  = "${base64gzip(var.api_server_cert_pem)}"
    api-token_auth_template_content          = "${base64gzip(data.template_file.token_auth_file.rendered)}"
    cloud_provider_secret_content            = "${base64gzip(var.cloud_controller_secret)}"
    flexvolume_driver_secret_content         = "${base64gzip(var.flexvolume_driver_secret)}"
    volume_provisioner_secret_content        = "${base64gzip(var.volume_provisioner_secret)}"
  }
}

data "template_cloudinit_config" "master" {
  gzip          = true
  base64_encode = true

  part {
    filename     = "bootstrap.yaml"
    content_type = "text/cloud-config"
    content      = "${data.template_file.kube_master_cloud_init_file.rendered}"
  }
}
