/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

/*
 * This is derived from Caiyeon goldfish/config/sample.hcl just for testing
 * OpenGrok's HCL handling and modified arbitrarily to test other HCL syntax.
 */

# [Required] listener defines how goldfish will listen to incoming connections
listener "tcp" {
	# [Required] [Format: "address", "address:port", or ":port"]
	# goldfish's listening address and/or port. Simply ":443" would suffice.
	address          = ":8000"

	# [Optional] [Default: 0] [Allowed values: 0, 1]
	# set to 1 to disable tls & https
	tls_disable      = 1

	# [Optional] [Default: 0] [Allowed values: 0, 1]
	# set to 1 to redirect port 80 to 443 (hard-coded port numbers)
	tls_autoredirect = 0

	# Option 1: local certificate
	certificate "local" {
		cert_file = "/path/to/certificate.cert"
		key_file  = "/path/to/keyfile.pem"
	}

	# Option 2: using Vault's PKI backend [Requires vault_token at launch time]
	# goldfish will request new certificates at half-life and hot-reload,
	pki_certificate "pki" {
		# [Required]
		pki_path    = "pki/issue/<role_name>"
		common_name = "goldfish.vault.service"

		# [Optional] see Vault PKI docs for what these mean
		alt_names   = ["goldfish.vault.srv", "ui.vault.srv"]
		ip_sans     = ["10.0.0.10", "127.0.0.1", "172.0.0.1"]
	}
}

# [Required] vault defines how goldfish should bootstrap to vault
vault {
	# [Required] [Format: "protocol://address:port"]
	# This is vault's address. Vault must be up before goldfish is deployed!
	address         = "http://127.0.0.1:8200"

	# [Optional] [Default: 0] [Allowed values: 0, 1]
	# Set this to 1 to skip verifying the certificate of vault (e.g. self-signed certs)
	tls_skip_verify = 0

	# [Required] [Default: "secret/goldfish"]
	# This should be a generic secret endpoint where runtime settings are stored
	# See wiki for what key values are required in this
	runtime_config  = "secret/goldfish"

	# [Optional] [Default: "auth/approle/login"]
	# You can omit this, unless you mounted approle somewhere weird
	approle_login   = "auth/approle/login"

	# [Optional] [Default: "goldfish"]
	# You can omit this if you already customized the approle ID to be 'goldfish'
	approle_id      = "goldfish"

	# [Optional] [Default: ""]
	# If provided, goldfish will use this CA cert to verify Vault's certificate
	# This should be a path to a PEM-encoded CA cert file
	ca_cert         = ""

	# [Optional] [Default: ""]
	# See above. This should be a path to a directory instead of a single cert
	ca_path         = ""
}

# [Optional] [Default: 0] [Allowed values: 0, 1]
# Set to 1 to disable mlock. Implementation is similar to vault - see vault docs for details
# This option will be ignored on unsupported platforms (e.g Windows)
disable_mlock = 0
