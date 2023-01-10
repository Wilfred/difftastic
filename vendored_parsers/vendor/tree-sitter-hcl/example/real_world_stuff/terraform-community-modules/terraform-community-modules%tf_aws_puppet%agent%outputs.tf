output "private_ip" {
  value = "${aws_instance.puppet-client.private_ip}"
}

