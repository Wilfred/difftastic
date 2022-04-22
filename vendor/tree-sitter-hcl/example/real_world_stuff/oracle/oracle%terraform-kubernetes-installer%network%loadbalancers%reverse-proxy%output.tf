output "setup" {
  value = "${data.template_file.setup.rendered}"
}

output "clount_init" {
  value = "${data.template_file.clount_init.rendered}"
}
