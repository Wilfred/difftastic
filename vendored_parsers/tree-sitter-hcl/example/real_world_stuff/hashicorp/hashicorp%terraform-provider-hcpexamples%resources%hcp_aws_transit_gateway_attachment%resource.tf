provider "aws" {
  region = "us-west-2"
}

resource "hcp_hvn" "main" {
  hvn_id         = "main-hvn"
  cloud_provider = "aws"
  region         = "us-west-2"
  cidr_block     = "172.25.16.0/20"
}

resource "aws_vpc" "example" {
  cidr_block = "172.31.0.0/16"
}

resource "aws_ec2_transit_gateway" "example" {
  tags = {
    Name = "example-tgw"
  }
}

resource "aws_ram_resource_share" "example" {
  name                      = "example-resource-share"
  allow_external_principals = true
}

resource "aws_ram_principal_association" "example" {
  resource_share_arn = aws_ram_resource_share.example.arn
  principal          = hcp_hvn.main.provider_account_id
}

resource "aws_ram_resource_association" "example" {
  resource_share_arn = aws_ram_resource_share.example.arn
  resource_arn       = aws_ec2_transit_gateway.example.arn
}

resource "hcp_aws_transit_gateway_attachment" "example" {
  depends_on = [
    aws_ram_principal_association.example,
    aws_ram_resource_association.example,
  ]

  hvn_id                        = hcp_hvn.main.hvn_id
  transit_gateway_attachment_id = "example-tgw-attachment"
  transit_gateway_id            = aws_ec2_transit_gateway.example.id
  resource_share_arn            = aws_ram_resource_share.example.arn
}

resource "hcp_hvn_route" "route" {
  hvn_link         = hcp_hvn.main.self_link
  hvn_route_id     = "hvn-to-tgw-attachment"
  destination_cidr = aws_vpc.example.cidr_block
  target_link      = hcp_aws_transit_gateway_attachment.example.self_link
}

resource "aws_ec2_transit_gateway_vpc_attachment_accepter" "example" {
  transit_gateway_attachment_id = hcp_aws_transit_gateway_attachment.example.provider_transit_gateway_attachment_id
}
