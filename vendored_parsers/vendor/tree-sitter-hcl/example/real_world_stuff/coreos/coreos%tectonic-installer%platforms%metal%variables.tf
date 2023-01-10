variable "tectonic_metal_config_version" {
  description = <<EOF
(internal) This declares the version of the Matchbox configuration variables.
It has no impact on generated assets but declares the version contract of the configuration.
EOF

  default = "1.0"
}

variable "tectonic_metal_matchbox_http_url" {
  type = "string"

  description = <<EOF
Matchbox HTTP read-only URL.

Example: `e.g. http://matchbox.example.com:8080`
EOF
}

variable "tectonic_metal_matchbox_rpc_endpoint" {
  type = "string"

  description = <<EOF
The Matchbox gRPC API endpoint.

Example: `matchbox.example.com:8081`
EOF
}

variable "tectonic_metal_matchbox_client_cert" {
  type = "string"

  description = <<EOF
The content of the Matchbox client TLS certificate.

Example:
```
<<EOD
-----BEGIN CERTIFICATE-----
MIIEYDCCAkigAwIBAgICEAEwDQYJKoZIhvcNAQELBQAwEjEQMA4GA1UEAwwHZmFr
...
jyXQv9IZPMTwOndF6AVLH7l1F0E=
-----END CERTIFICATE-----
EOD
```
EOF
}

variable "tectonic_metal_matchbox_client_key" {
  type = "string"

  description = <<EOF
The content of the Matchbox client TLS key.

Example:
```
<<EOD
-----BEGIN RSA PRIVATE KEY-----
MIIEpQIBAAKCAQEAr8S7x/tAS6W+aRW3X833OvNfxXjUJAiRkUV85Raln7tqVcTG
...
Pikk0rvNVB/vrPeVjAdGY9TJC/vpz3om92DRDmUifu8rCFxIHE0GrQ0=
-----END RSA PRIVATE KEY-----
EOD
```
EOF
}

variable "tectonic_metal_matchbox_ca" {
  type = "string"

  description = <<EOF
The content of the Matchbox CA certificate to trust.

Example:
```
<<EOD
-----BEGIN CERTIFICATE-----
MIIFDTCCAvWgAwIBAgIJAIuXq10k2OFlMA0GCSqGSIb3DQEBCwUAMBIxEDAOBgNV
...
Od27a+1We/P5ey7WRlwCfuEcFV7nYS/qMykYdQ9fxHSPgTPlrGrSwKstaaIIqOkE
kA==
-----END CERTIFICATE-----
EOD
```
EOF
}

variable "tectonic_metal_controller_domain" {
  type = "string"

  description = <<EOF
The domain name which resolves to controller node(s)

Example: `cluster.example.com`
EOF
}

variable "tectonic_metal_ingress_domain" {
  type = "string"

  description = <<EOF
The domain name which resolves to Tectonic Ingress (i.e. worker node(s))

Example: `tectonic.example.com`
EOF
}

variable "tectonic_metal_controller_names" {
  type = "list"

  description = <<EOF
Ordered list of controller names.

Example: `["node1"]`
EOF
}

variable "tectonic_metal_controller_domains" {
  type = "list"

  description = <<EOF
Ordered list of controller domain names.

Example: `["node2.example.com", "node3.example.com"]`
EOF
}

variable "tectonic_metal_controller_macs" {
  type = "list"

  description = <<EOF
Ordered list of controller MAC addresses for matching machines.

Example: `["52:54:00:a1:9c:ae"]`
EOF
}

variable "tectonic_metal_worker_names" {
  type = "list"

  description = <<EOF
Ordered list of worker names.

Example: `["node2", "node3"]`
EOF
}

variable "tectonic_metal_worker_domains" {
  type = "list"

  description = <<EOF
Ordered list of worker domain names.

Example: `["node2.example.com", "node3.example.com"]`
EOF
}

variable "tectonic_metal_worker_macs" {
  type = "list"

  description = <<EOF
Ordered list of worker MAC addresses for matching machines.

Example: `["52:54:00:b2:2f:86", "52:54:00:c3:61:77"]`
EOF
}

variable "tectonic_ssh_authorized_key" {
  type = "string"

  description = <<EOF
SSH public key to use as an authorized key.

Example: `ssh-rsa AAAB3N...`
EOF
}

variable "tectonic_metal_calico_mtu" {
  default = "1500"

  description = <<EOF
(optional) Sets the MTU size for workload interfaces and the IP-in-IP tunnel device.

Note: This setting is only effective, if tectonic_networking is set to `calico`.
EOF
}
