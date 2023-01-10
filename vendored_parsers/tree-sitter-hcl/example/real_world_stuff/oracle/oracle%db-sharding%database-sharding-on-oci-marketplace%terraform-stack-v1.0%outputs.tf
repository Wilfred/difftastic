output "connection_string" {
  description = "The Sharded database connect string for application instances."
  value       = "(DESCRIPTION = (ADDRESS = (HOST = ${oci_core_instance.gsm_vm[0].public_ip})(PORT = ${var.shard_director_port})(PROTOCOL = tcp))(CONNECT_DATA = (SERVICE_NAME = GDS$CATALOG.oradbcloud)))"
}