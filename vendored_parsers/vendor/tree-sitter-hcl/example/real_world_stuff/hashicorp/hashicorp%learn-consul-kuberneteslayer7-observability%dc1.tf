module "dc1" {
  source = "../environments/terraform/eks"

  datacenter_name = "layer7-observability-dc1"
  region = "us-west-2"
  output_dir = "./"
}