output "user_data" {
  value = "${data.ignition_config.etcd.*.rendered}"
}
