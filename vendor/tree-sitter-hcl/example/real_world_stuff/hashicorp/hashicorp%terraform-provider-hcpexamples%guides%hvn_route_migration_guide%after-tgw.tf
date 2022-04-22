resource "hcp_hvn" "hvn" {
  hvn_id         = "prod-hvn"
  region         = "us-west-2"
  cloud_provider = "aws"
}

resource "hcp_aws_transit_gateway_attachment" "prod" {
  hvn_id                        = hcp_hvn.hvn.hvn_id
  transit_gateway_attachment_id = "prod-tgw-attachment"
  transit_gateway_id            = "tgw-0ee94b1a1167cf89d"
  resource_share_arn            = "arn:aws:ram:us-west-2:..."
  // remove `destination_cidrs`
  // destination_cidrs             = ["10.1.0.0/24", "10.2.0.0/24"]
}

// add a new `hcp_hvn_route` for each CIDR associated with the transit gateway attachment
resource "hcp_hvn_route" "tgw-route-1" {
  hvn_link = hcp_hvn.hvn.self_link
  // you can find this ID in the HCP Portal in the TGW attachment details page in the list of Routes
  hvn_route_id     = "35392425-215a-44ec-bbd0-051bb777ce5f"
  destination_cidr = "10.1.0.0/24"
  target_link      = hcp_aws_transit_gateway_attachment.prod.self_link
}

resource "hcp_hvn_route" "tgw-route-2" {
  hvn_link = hcp_hvn.hvn.self_link
  // you can find this ID in the HCP Portal in the transit gateway attachment details page in the list of routes
  hvn_route_id     = "9867959a-d81b-4e52-ae8e-ca56f9dd06fc"
  destination_cidr = "10.2.0.0/24"
  target_link      = hcp_aws_transit_gateway_attachment.prod.self_link
}