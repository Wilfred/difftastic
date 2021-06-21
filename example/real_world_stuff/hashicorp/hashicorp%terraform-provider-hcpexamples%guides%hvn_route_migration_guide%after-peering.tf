resource "hcp_hvn" "hvn" {
  hvn_id         = "prod-hvn"
  region         = "us-west-2"
  cloud_provider = "aws"
}

resource "hcp_aws_network_peering" "peering" {
  hvn_id = hcp_hvn.hvn.hvn_id
  // add `peering_id` that you can find in the HCP Portal
  peering_id      = "f03324a9-4377-4a54-9c15-958fd07ad77b"
  peer_vpc_id     = "vpc-845f29fc"
  peer_account_id = "572816266891"
  peer_vpc_region = "us-west-2"
  // remove `peer_vpc_cidr_block`
  // peer_vpc_cidr_block = "172.31.0.0/16"
}

// Add a `hcp_hvn_route` resource for the peering's CIDR
resource "hcp_hvn_route" "peering-route" {
  hvn_link = hcp_hvn.hvn.self_link
  // you can find this ID in the HCP Portal in the peering details page in the list of routes
  hvn_route_id     = "a8dda9a8-0f69-4fa0-b38c-55be302fdddb"
  destination_cidr = "172.31.0.0/16"
  target_link      = hcp_aws_network_peering.peering.self_link
}