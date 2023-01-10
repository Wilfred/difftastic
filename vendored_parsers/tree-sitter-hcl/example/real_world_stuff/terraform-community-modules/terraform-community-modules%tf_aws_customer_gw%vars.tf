variable "name" {
  description = "Decriptive name used to label tagged resources."
}

variable "vpn_gateway_id" {
  description = "Specify which VPN Gateway the Customer Gateway will be associated with."
}


variable "customer_gateway_id" {
  description = "Specify which Customer Gateway to use. If specified the variables ip_address and bgp_asn will not be used"
  default = ""
}

variable "ip_address" {
  description = "IP address of the Customer Gateway external interface."
  default = ""
}

variable "bgp_asn" {
  description = "BGP ASN of the Customer Gateway. By convention, use 65000 if you are not running BGP."
  default = 65000
}

variable "destination_cidr_blocks" {
  type = "list"
  description = "List of comman separated CIDR blocks which should be routed to the Customer Gateway(s)."
}

variable "route_table_ids" {
  type = "list"
  description = "List of command separated Route Table IDs where routes to destination_cidr_blocks will be created."
}

variable "route_table_count" {
  description = "Number of elements in the route_table_ids list. Here because Terraform cannot calculate count from dynamic values. This should be removed when Terraform 0.9 is released."
}

variable "static_routes_only" {
  description = "Whether the VPN connection uses static routes exclusively. Static routes must be used for devices that don't support BGP. Accepts either true or false."
}

variable "add_static_routes_to_tables" {
  description = "Determines whether static routes will be added to all route tables in route_table_ids list or if vgw route propagation will be used instead. If set to true, then route_table_ids, route_table_count, and destination_cidr_blocks must also be provided."
}