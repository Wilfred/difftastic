output "cgw_id" {
  value = "${aws_customer_gateway.default.id}"
}

output "cgw_ip_address" {
  value = "${aws_customer_gateway.default.ip_address}"
}

output "cgw_bgp_asn" {
  value = "${aws_customer_gateway.default.bgp_asn}"
}