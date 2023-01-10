output "flex-volume-driver-yaml" {
  value = "${data.template_file.oci-flexvolume-driver-yaml.rendered}"
}
