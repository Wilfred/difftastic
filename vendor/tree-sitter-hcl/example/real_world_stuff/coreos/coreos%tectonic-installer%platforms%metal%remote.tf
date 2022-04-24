resource "null_resource" "etcd_secrets" {
  count = "${var.tectonic_etcd_tls_enabled
             && var.tectonic_self_hosted_etcd == ""
             && length(compact(var.tectonic_etcd_servers)) == 0
             ? length(var.tectonic_metal_controller_domains)
             : 0
          }"

  connection {
    type    = "ssh"
    host    = "${element(var.tectonic_metal_controller_domains, count.index)}"
    user    = "core"
    timeout = "60m"
  }

  provisioner "file" {
    content     = "${module.etcd_certs.etcd_ca_crt_pem}"
    destination = "$HOME/etcd_ca.crt"
  }

  provisioner "file" {
    content     = "${module.etcd_certs.etcd_server_crt_pem}"
    destination = "$HOME/etcd_server.crt"
  }

  provisioner "file" {
    content     = "${module.etcd_certs.etcd_server_key_pem}"
    destination = "$HOME/etcd_server.key"
  }

  provisioner "file" {
    content     = "${module.etcd_certs.etcd_peer_crt_pem}"
    destination = "$HOME/etcd_peer.crt"
  }

  provisioner "file" {
    content     = "${module.etcd_certs.etcd_peer_key_pem}"
    destination = "$HOME/etcd_peer.key"
  }

  provisioner "remote-exec" {
    inline = [
      "sudo mkdir -p /etc/ssl/etcd",
      "sudo mv /home/core/etcd_ca.crt /etc/ssl/etcd/ca.crt",
      "sudo mv /home/core/etcd_server.crt /etc/ssl/etcd/server.crt",
      "sudo mv /home/core/etcd_server.key /etc/ssl/etcd/server.key",
      "sudo mv /home/core/etcd_peer.crt /etc/ssl/etcd/peer.crt",
      "sudo mv /home/core/etcd_peer.key /etc/ssl/etcd/peer.key",
      "sudo chown etcd:etcd /etc/ssl/etcd/*",
      "sudo chmod 0400 /etc/ssl/etcd/*",
    ]
  }
}

resource "null_resource" "kubeconfig" {
  count      = "${length(var.tectonic_metal_controller_domains) + length(var.tectonic_metal_worker_domains)}"
  depends_on = ["null_resource.etcd_secrets"]

  connection {
    type    = "ssh"
    host    = "${element(concat(var.tectonic_metal_controller_domains, var.tectonic_metal_worker_domains), count.index)}"
    user    = "core"
    timeout = "60m"
  }

  provisioner "file" {
    content     = "${module.bootkube.kubeconfig}"
    destination = "$HOME/kubeconfig"
  }

  provisioner "remote-exec" {
    inline = [
      "sudo mv /home/core/kubeconfig /etc/kubernetes/kubeconfig",
    ]
  }
}

resource "null_resource" "bootstrap" {
  # Without depends_on, this remote-exec may start before the kubeconfig copy.
  # Terraform only does one task at a time, so it would try to bootstrap
  # Kubernetes and Tectonic while no Kubelets are running. Ensure all nodes
  # receive a kubeconfig before proceeding with bootkube and tectonic.
  depends_on = ["null_resource.kubeconfig"]

  connection {
    type    = "ssh"
    host    = "${element(var.tectonic_metal_controller_domains, 0)}"
    user    = "core"
    timeout = "60m"
  }

  provisioner "file" {
    source      = "./generated"
    destination = "$HOME/tectonic"
  }

  provisioner "remote-exec" {
    inline = [
      "sudo mkdir -p /opt",
      "sudo rm -rf /opt/tectonic",
      "sudo mv /home/core/tectonic /opt/",
    ]
  }
}
