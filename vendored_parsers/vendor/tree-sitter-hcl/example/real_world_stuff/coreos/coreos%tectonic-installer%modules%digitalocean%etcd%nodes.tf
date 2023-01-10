resource "digitalocean_droplet" "etcd_node" {
  count = "${length(var.external_endpoints) == 0 ? var.droplet_count : 0}"

  name      = "${var.cluster_name}-etcd-${count.index}"
  image     = "${var.droplet_image}"
  region    = "${var.droplet_region}"
  size      = "${var.droplet_size}"
  ssh_keys  = ["${var.ssh_keys}"]
  tags      = ["${var.extra_tags}"]
  user_data = "${data.ignition_config.etcd.*.rendered[count.index]}"
}
