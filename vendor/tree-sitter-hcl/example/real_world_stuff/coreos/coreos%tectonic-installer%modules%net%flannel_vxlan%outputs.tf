output "id" {
  value = "${var.enabled ? sha1(element(concat(local_file.flannel.*.id, list("")), 0)) : "# flannel disabled"}"
}

output "name" {
  value = "flannel_vxlan"
}
