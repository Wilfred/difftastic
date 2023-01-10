data "hcp_hvn_route" "example" {
  hvn_link         = var.hvn_link
  destination_cidr = var.hvn_route_id
}
