resource "tls_private_key" "core" {
  algorithm = "RSA"
}

resource "openstack_compute_keypair_v2" "k8s_keypair" {
  name       = "${var.cluster_name}_keypair"
  public_key = "${tls_private_key.core.public_key_openssh}"
}

resource "null_resource" "export" {
  provisioner "local-exec" {
    command = "echo '${tls_private_key.core.private_key_pem}' >id_rsa_core && chmod 0600 id_rsa_core"
  }

  provisioner "local-exec" {
    command = "echo '${tls_private_key.core.public_key_openssh}' >id_rsa_core.pub"
  }
}

data "ignition_user" "core" {
  name = "core"

  ssh_authorized_keys = [
    "${tls_private_key.core.public_key_openssh}",
  ]
}
