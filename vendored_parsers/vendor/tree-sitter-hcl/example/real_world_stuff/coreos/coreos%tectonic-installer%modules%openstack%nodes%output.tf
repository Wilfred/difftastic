output "user_data" {
  value = "${data.ignition_config.node.*.rendered}"
}
