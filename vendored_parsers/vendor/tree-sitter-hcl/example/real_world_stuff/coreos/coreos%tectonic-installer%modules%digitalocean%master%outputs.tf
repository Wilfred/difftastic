output "cluster_fqdn" {
  value = "${digitalocean_record.api.fqdn}"
}

output "console_fqdn" {
  value = "${digitalocean_record.console.fqdn}"
}
