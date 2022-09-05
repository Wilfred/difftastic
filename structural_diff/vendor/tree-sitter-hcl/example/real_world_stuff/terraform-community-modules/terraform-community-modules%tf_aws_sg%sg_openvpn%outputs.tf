// Output ID of sg_openvpn SG we made
output "security_group_id_openvpn" {
  value = "${aws_security_group.main_security_group.id}"
}
