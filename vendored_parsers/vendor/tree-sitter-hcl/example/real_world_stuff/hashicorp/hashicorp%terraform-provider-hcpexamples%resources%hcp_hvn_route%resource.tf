provider "aws" {
  region = "us-west-2"
}

resource "hcp_hvn" "main" {
  hvn_id         = "main-hvn"
  cloud_provider = "aws"
  region         = "us-west-2"
  cidr_block     = "172.25.16.0/20"
}

// Creating a peering and a route for it.
resource "aws_vpc" "peer" {
  cidr_block = "192.168.0.0/20"
}

resource "hcp_aws_network_peering" "example" {
  peering_id      = "peer-example"
  hvn_id          = hcp_hvn.main.hvn_id
  peer_vpc_id     = aws_vpc.peer.id
  peer_account_id = aws_vpc.peer.owner_id
  peer_vpc_region = "us-west-2"
}

resource "aws_vpc_peering_connection_accepter" "peer" {
  vpc_peering_connection_id = hcp_aws_network_peering.example.provider_peering_id
  auto_accept               = true
}

resource "hcp_hvn_route" "example-peering-route" {
  hvn_link         = hcp_hvn.main.self_link
  hvn_route_id     = "peering-route"
  destination_cidr = aws_vpc.peer.cidr_block
  target_link      = hcp_aws_network_peering.example.self_link
}