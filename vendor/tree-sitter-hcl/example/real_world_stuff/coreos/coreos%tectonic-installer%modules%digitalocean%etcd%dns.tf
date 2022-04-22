resource "digitalocean_record" "etcd_nodes" {
  count  = "${var.droplet_count}"
  type   = "A"
  domain = "${var.base_domain}"
  name   = "${var.cluster_name}-etcd-${count.index}"
  value  = "${digitalocean_droplet.etcd_node.*.ipv4_address[count.index]}"
}
