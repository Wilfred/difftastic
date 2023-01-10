output "id" {
  value = "${var.enabled ? "${sha1("${element(concat(local_file.calico_network_policy.*.id, list("")), 0)}")}" : "# calico policy disabled"}"
}

output "name" {
  value = "calico"
}
