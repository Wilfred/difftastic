output "cloud_controller_user" {
  value = "${oci_identity_user.cloud_controller_user.id}"
}

output "cloud_controller_public_key" {
  value = "${tls_private_key.cloud_controller_user_key.public_key_pem}"
}

output "cloud_controller_private_key" {
  sensitive = true
  value = "${tls_private_key.cloud_controller_user_key.private_key_pem}"
}

output "cloud_controller_user_fingerprint" {
  value = "run 'terraform output cloud_controller_private_key > cc_key && openssl rsa -in cc_key -pubout -outform DER | openssl md5 -c && rm cc_key' determine the fingerprint"
}

output "flexvolume_driver_user" {
  value = "${oci_identity_user.flexvolume_driver_user.id}"
}

output "flexvolume_driver_public_key" {
  value = "${tls_private_key.flexvolume_driver_user_key.public_key_pem}"
}

output "flexvolume_driver_private_key" {
  sensitive = true
  value = "${tls_private_key.flexvolume_driver_user_key.private_key_pem}"
}

output "flexvolume_driver_user_fingerprint" {
  value = "run 'terraform output flexvolume_driver_private_key > cc_key && openssl rsa -in cc_key -pubout -outform DER | openssl md5 -c && rm cc_key' determine the fingerprint"
}

output "volume_provisioner_user" {
  value = "${oci_identity_user.volume_provisioner_user.id}"
}

output "volume_provisioner_public_key" {
  value = "${tls_private_key.volume_provisioner_user_key.public_key_pem}"
}

output "volume_provisioner_private_key" {
  sensitive = true
  value = "${tls_private_key.volume_provisioner_user_key.private_key_pem}"
}

output "volume_provisioner_user_fingerprint" {
  value = "run 'terraform output volume_provisioner_private_key > cc_key && openssl rsa -in cc_key -pubout -outform DER | openssl md5 -c && rm cc_key' determine the fingerprint"
}

