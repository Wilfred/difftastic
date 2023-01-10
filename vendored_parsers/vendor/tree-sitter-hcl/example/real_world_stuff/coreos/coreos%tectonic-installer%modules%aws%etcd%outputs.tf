output "ip_addresses" {
  value = "${aws_instance.etcd_node.*.private_ip}"
}
