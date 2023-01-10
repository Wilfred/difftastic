resource "aws_customer_gateway" "default" {
  count      = "${var.customer_gateway_id == "" ? 1 : 0}"
  bgp_asn    = "${var.bgp_asn}"
  ip_address = "${var.ip_address}"
  type       = "ipsec.1"

  tags {
    Name = "${var.name}"
  }

  lifecycle {
    create_before_destroy = true
  }
}

resource "aws_vpn_connection" "default" {
  vpn_gateway_id      = "${var.vpn_gateway_id}"
  customer_gateway_id = "${coalesce(var.customer_gateway_id, aws_customer_gateway.default.id)}"
  type                = "ipsec.1"
  static_routes_only  = "${var.static_routes_only}"

  tags {
    Name = "${var.name}"
  }

  lifecycle {
    create_before_destroy = true
  }
}

resource "aws_vpn_connection_route" "default" {
  count                  = "${length(var.destination_cidr_blocks)}"
  destination_cidr_block = "${element(var.destination_cidr_blocks, count.index)}"
  vpn_connection_id      = "${aws_vpn_connection.default.id}"

  lifecycle {
    create_before_destroy = true
  }
}

#if route_source=static and there are more route_tables than cidr_blocks(or an equal amount)
#  then add static routes in every specified route table for each destination_cidr_block=>VPN Gateway
resource "aws_route" "more_tables" {
  count                  = "${(var.add_static_routes_to_tables == "true" ? 1 : 0) * (var.route_table_count >= length(var.destination_cidr_blocks) ? 1 : 0 ) * var.route_table_count * length(var.destination_cidr_blocks)}"
  route_table_id         = "${element(var.route_table_ids, count.index % floor(max(length(var.route_table_ids),length(var.destination_cidr_blocks))))}"
  destination_cidr_block = "${element(var.destination_cidr_blocks, floor(count.index / max(length(var.route_table_ids),length(var.destination_cidr_blocks))))}"
  gateway_id             = "${var.vpn_gateway_id}"

  lifecycle {
    create_before_destroy = true
  }
}

#if route_source=static and there are more cidr_blocks than route_tables
#  then add static routes in every specified route table for each destination_cidr_block=>VPN Gateway
resource "aws_route" "more_cidrs" {
  count                  = "${(var.add_static_routes_to_tables == "true" ? 1 : 0) * (length(var.destination_cidr_blocks) > var.route_table_count ? 1 : 0 ) * var.route_table_count * length(var.destination_cidr_blocks)}"
  route_table_id         = "${element(var.route_table_ids, floor(count.index / max(length(var.route_table_ids),length(var.destination_cidr_blocks))))}"
  destination_cidr_block = "${element(var.destination_cidr_blocks, count.index % floor(max(length(var.route_table_ids),length(var.destination_cidr_blocks))))}"
  gateway_id             = "${var.vpn_gateway_id}"

  lifecycle {
    create_before_destroy = true
  }
}