// Configure the matchbox provider
provider "matchbox" {
  endpoint    = "${var.tectonic_metal_matchbox_rpc_endpoint}"
  client_cert = "${var.tectonic_metal_matchbox_client_cert}"
  client_key  = "${var.tectonic_metal_matchbox_client_key}"
  ca          = "${var.tectonic_metal_matchbox_ca}"
}
