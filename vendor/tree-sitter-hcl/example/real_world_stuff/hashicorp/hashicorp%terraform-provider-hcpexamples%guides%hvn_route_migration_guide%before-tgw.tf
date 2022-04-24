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
  destination_cidrs             = ["10.1.0.0/24", "10.2.0.0/24"]
}