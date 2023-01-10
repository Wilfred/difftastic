resource "hcp_hvn" "hvn" {
  hvn_id         = "prod-hvn"
  region         = "us-west-2"
  cloud_provider = "aws"
}

resource "hcp_aws_network_peering" "peering" {
  hvn_id              = hcp_hvn.hvn.hvn_id
  peer_vpc_id         = "vpc-845f29fc"
  peer_account_id     = "572816266891"
  peer_vpc_region     = "us-west-2"
  peer_vpc_cidr_block = "172.31.0.0/16"
}