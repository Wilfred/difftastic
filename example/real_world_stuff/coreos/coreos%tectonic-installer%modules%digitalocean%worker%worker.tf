resource "digitalocean_droplet" "worker_node" {
  count     = "${var.droplet_count}"
  name      = "${var.cluster_name}-worker-${count.index}"
  image     = "${var.droplet_image}"
  region    = "${var.droplet_region}"
  size      = "${var.droplet_size}"
  ssh_keys  = ["${var.ssh_keys}"]
  tags      = ["${var.extra_tags}"]
  user_data = "${data.ignition_config.main.rendered}"
}

resource "digitalocean_record" "worker" {
  count  = "${var.droplet_count}"
  domain = "${var.base_domain}"
  type   = "A"
  name   = "${var.cluster_name}-worker-${count.index}"
  value  = "${element(digitalocean_droplet.worker_node.*.ipv4_address, count.index)}"
}
