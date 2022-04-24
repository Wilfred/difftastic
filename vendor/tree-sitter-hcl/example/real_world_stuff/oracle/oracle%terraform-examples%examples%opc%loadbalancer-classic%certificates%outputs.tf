// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.

output "ca_cert_pem" {
  value = "${tls_self_signed_cert.ca.cert_pem}"
}

output "cert_pem" {
  value = "${tls_locally_signed_cert.example.cert_pem}"
}

output "private_key_pem" {
  value = "${tls_private_key.example.private_key_pem}"
}
