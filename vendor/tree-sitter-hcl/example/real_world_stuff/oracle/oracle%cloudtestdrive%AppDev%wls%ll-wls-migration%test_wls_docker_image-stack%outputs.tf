# Output the private and public IPs of the instance

output "instance_private_ips" {
  value = [module.wls_docker_host.instance_private_ips]
}

output "instance_public_ips" {
  value = [module.wls_docker_host.instance_public_ips]
}


output "OPCPrivateKey" {
  value = [module.compute-keygen.OPCPrivateKey.private_key_pem]
 } 

output "OPCPublicKey" {
  value = [module.compute-keygen.OPCPrivateKey.public_key_openssh]
 } 
 

output "OraclePrivateKey" {
  value = [module.compute-keygen.OraclePrivateKey.private_key_pem]
 } 

output "OraclePublicKey" {
  value = [module.compute-keygen.OraclePrivateKey.public_key_openssh]
 } 
 
 
/*
 var.opc_key.public_key_openssh,
 var.oracle_key.public_key_openssh
 
 

 
  value = "${map("public_key_openssh", tls_private_key.opc_key.public_key_openssh, "private_key_pem", tls_private_key.opc_key.private_key_pem)}"
}

output "OraclePrivateKey" {
  value = "${map("public_key_openssh", tls_private_key.oracle_key.public_key_openssh, "private_key_pem", tls_private_key.oracle_key.private_key_pem)}"
}
*/
