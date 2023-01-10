data "template_file" "kubeconfig" {
  template = <<EOF
kubectl config set-cluster ${var.name}-cluster --server=${var.k8s_master} --insecure-skip-tls-verify=true
kubectl config set users.default-admin.client-certificate-data ${base64encode(var.api_server_cert_pem)}
kubectl config set users.default-admin.client-key-data ${base64encode(var.api_server_private_key_pem)}
kubectl config set-context ${var.name}-context --cluster=${var.name}-cluster --user=default-admin
kubectl config use-context ${var.name}-context
EOF
}

resource "null_resource" "kubeconfig" {
  provisioner "local-exec" {
    command = <<LOCAL_EXEC
export KUBECONFIG="${path.root}/generated/kubeconfig"
kubectl config set-cluster ${var.name}-cluster --server=${var.k8s_master} --insecure-skip-tls-verify=true
kubectl config set users.default-admin.client-certificate-data ${base64encode(var.api_server_cert_pem)}
kubectl config set users.default-admin.client-key-data ${base64encode(var.api_server_private_key_pem)}
kubectl config set-context ${var.name}-context --cluster=${var.name}-cluster --user=default-admin
kubectl config use-context ${var.name}-context
LOCAL_EXEC
  }
}
