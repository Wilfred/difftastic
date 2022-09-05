// Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved
// Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl.
# Outputing required info for users
output "Bridge_Instance_Public_IP" {
  value = "${data.oci_core_instance.bridge_instance.public_ip}"
}

output "PrivateInstance1_Private_IP" {
  value = "${oci_core_instance.PrivateInstance.private_ip}"
}

output "PrivateInstance2_Private_IP" {
  value = "${oci_core_instance.PrivateInstance2.private_ip}"
}

output "SSH_login_to_the_Bridge_Instance" {
  value = "ssh -A opc@${data.oci_core_instance.bridge_instance.public_ip}"
}

output "SSH_login_to_the_Private_Instance-1_after_logging_into_Bridge_Instance_as_shown_above" {
  value = "ssh -A opc@${oci_core_instance.PrivateInstance.private_ip}"
}

output "SSH_login_to_the_Private_Instance-2_after_logging_into_Bridge_Instance_as_shown_above" {
  value = "ssh -A opc@${oci_core_instance.PrivateInstance2.private_ip}"
}

output "Ping_from_PrivateInstance-1_to_PrivateInstance-2" {
  value = "ping ${oci_core_instance.PrivateInstance2.private_ip} "
}
