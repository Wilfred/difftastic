# kubeconfig (/auth/kubeconfig)
data "template_file" "kubeconfig" {
  template = "${file("${path.module}/resources/kubeconfig")}"

  vars {
    root_ca_cert = "${base64encode(var.root_ca_cert_pem)}"
    admin_cert   = "${base64encode(var.admin_cert_pem)}"
    admin_key    = "${base64encode(var.admin_key_pem)}"
    server       = "${var.kube_apiserver_url}"
    cluster_name = "${var.cluster_name}"
  }
}

data "ignition_file" "kubeconfig" {
  filesystem = "root"
  path       = "/opt/tectonic/auth/kubeconfig"
  mode       = "0600"

  content {
    content = "${data.template_file.kubeconfig.rendered}"
  }
}

# kubeconfig-kubelet 
data "template_file" "kubeconfig-kubelet" {
  template = "${file("${path.module}/resources/kubeconfig-kubelet")}"

  vars {
    root_ca_cert = "${base64encode(var.root_ca_cert_pem)}"
    client_cert  = "${base64encode(var.kubelet_cert_pem)}"
    client_key   = "${base64encode(var.kubelet_key_pem)}"
    server       = "${var.kube_apiserver_url}"
    cluster_name = "${var.cluster_name}"
  }
}

data "ignition_file" "kubeconfig-kubelet" {
  filesystem = "root"
  path       = "/opt/tectonic/auth/kubeconfig-kubelet"
  mode       = "0600"

  content {
    content = "${data.template_file.kubeconfig-kubelet.rendered}"
  }
}

# bootkube.sh 
data "template_file" "bootkube_sh" {
  template = "${file("${path.module}/resources/bootkube.sh")}"

  vars {
    bootkube_image           = "${var.container_images["bootkube"]}"
    kube_core_renderer_image = "${var.container_images["kube_core_renderer"]}"
    tnc_operator_image       = "${var.container_images["tnc_operator"]}"
    etcd_cert_signer_image   = "${var.container_images["etcd_cert_signer"]}"
    etcdctl_image            = "${var.container_images["etcd"]}"
    etcd_cluster             = "${join(",", data.template_file.initial_cluster.*.rendered)}"
  }
}

data "ignition_file" "bootkube_sh" {
  filesystem = "root"
  path       = "/opt/tectonic/bootkube.sh"
  mode       = "0755"

  content {
    content = "${data.template_file.bootkube_sh.rendered}"
  }
}

# bootkube.service (available as output variable)
data "template_file" "bootkube_service" {
  template = "${file("${path.module}/resources/bootkube.service")}"
}

data "ignition_systemd_unit" "bootkube_service" {
  name    = "bootkube.service"
  enabled = false
  content = "${data.template_file.bootkube_service.rendered}"
}

data "template_file" "initial_cluster" {
  count    = "${length(var.etcd_endpoints)}"
  template = "https://${var.etcd_endpoints[count.index]}:2379"
}
