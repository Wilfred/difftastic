output "id" {
  value = "${var.enabled ? sha1(element(concat(local_file.calico.*.id, list("")), 0)) : "# calico disabled"}"
}

output "name" {
  value = "calico"
}
