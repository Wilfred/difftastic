// The name of the cluster.
// The openstack keypairs will be prefixed with this.
variable "cluster_name" {
  type = "string"
}

output "core_private_key_pem" {
  value = "${tls_private_key.core.private_key_pem}"
}

output "core_public_key_openssh" {
  value = "${tls_private_key.core.public_key_openssh}"
}
