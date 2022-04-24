resource "oci_core_volume" "bosh_cli_vol" {
  availability_domain = lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.bastion_ad - 1], "name")
  compartment_id      = oci_identity_compartment.bosh_compartment.id
  display_name        = "bosh_cli_vol"
  size_in_gbs         = var.size
}

resource "oci_core_volume_attachment" "bosh_cli_vol_attach" {
  attachment_type = "iscsi"
  compartment_id  = oci_identity_compartment.bosh_compartment.id
  instance_id     = oci_core_instance.bosh_cli.id
  volume_id       = oci_core_volume.bosh_cli_vol.id
}
