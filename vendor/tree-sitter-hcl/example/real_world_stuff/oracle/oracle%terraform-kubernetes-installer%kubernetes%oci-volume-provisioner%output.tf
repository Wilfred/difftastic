output "volume-provisioner-yaml" {
  value = "${data.template_file.oci-volume-provisioner-yaml.rendered}"
}
