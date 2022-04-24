## Autonomous database
## Autonomous database
resource "oci_database_autonomous_database" "target_atp" {
	compartment_id  = var.compartment_id
	display_name 	= var.display_name
	db_name         = var.db_name
	db_workload  	= var.db_workload
	is_free_tier	= var.is_free_tier
	db_version 		= var.db_version
	cpu_core_count	= var.cpu_core_count
	data_storage_size_in_tbs 	= var.data_storage_size_in_tbs
	admin_password	= random_string.atp_admin_password.result
	license_model	= var.license_model
}

resource "random_string" "atp_admin_password" {
  length           = 16
  min_upper        = 1
  min_lower        = 1
  min_numeric      = 1
  min_special      = 1
  override_special = "-%._"
}

## ATP Wallet
resource "oci_database_autonomous_database_wallet" "wallet" {
	autonomous_database_id = oci_database_autonomous_database.target_atp.id
	password               = random_string.atp_admin_password.result
	base64_encode_content  = true
}

resource "local_file" "atp_wallet_file" {
	content_base64 = oci_database_autonomous_database_wallet.wallet.content
	filename       = "${path.module}/atp_wallet.zip"
}
