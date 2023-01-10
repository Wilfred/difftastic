resource "digitalocean_floating_ip" "master" {
  region = "${var.droplet_region}"
}

resource "null_resource" "tectonic_assets" {
  # Changes to any asset requires re-provisioning
  triggers {
    assets = "${var.assets_id}"
  }

  provisioner "local-exec" {
    command = "./generated/bin/do-pusher.sh ${var.assets_path} ${var.spaces_bucket}/assets.zip"
  }
}

resource "null_resource" "kubeconfig" {
  triggers {
    assets = "${var.kubeconfig_id}"
  }
}

resource "digitalocean_droplet" "master_node" {
  count      = 1
  depends_on = ["null_resource.tectonic_assets", "null_resource.kubeconfig"]
  name       = "${var.cluster_name}-master-${count.index}"
  image      = "${var.droplet_image}"
  region     = "${var.droplet_region}"
  size       = "${var.droplet_size}"
  ssh_keys   = ["${var.ssh_keys}"]
  tags       = ["${var.extra_tags}"]
  user_data  = "${data.ignition_config.main.rendered}"

  provisioner "local-exec" {
    command = "${path.module}/resources/register-master.sh ${var.do_token} ${digitalocean_droplet.master_node.id} ${digitalocean_floating_ip.master.ip_address} ${digitalocean_loadbalancer.console.id}"
  }
}

resource "digitalocean_record" "master" {
  count  = 1
  domain = "${var.base_domain}"
  type   = "A"
  name   = "${var.cluster_name}-master-${count.index}"
  value  = "${digitalocean_droplet.master_node.ipv4_address}"
}
