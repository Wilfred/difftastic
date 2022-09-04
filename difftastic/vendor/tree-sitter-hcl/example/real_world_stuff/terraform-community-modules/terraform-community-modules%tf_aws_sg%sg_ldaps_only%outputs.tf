// Output ID of sg_ldaps_only SG we made
output "security_group_id_ldaps_only" {
  value = "${aws_security_group.main_security_group.id}"
}
