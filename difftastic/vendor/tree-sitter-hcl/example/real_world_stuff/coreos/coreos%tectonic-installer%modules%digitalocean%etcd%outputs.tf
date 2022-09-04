output "endpoints" {
  value = ["${digitalocean_record.etcd_nodes.*.fqdn}"]
}
