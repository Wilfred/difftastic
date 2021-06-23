// Output ID of sg_web SG we made
output "security_group_id_memcached" {
  value = "${aws_security_group.main_security_group.id}"
}
