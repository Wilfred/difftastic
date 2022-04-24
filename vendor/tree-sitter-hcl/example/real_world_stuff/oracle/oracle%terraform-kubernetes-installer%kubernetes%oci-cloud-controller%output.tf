output "cloud-provider-json" {
  value = "${data.template_file.cloud-provider-json.rendered}"
}
