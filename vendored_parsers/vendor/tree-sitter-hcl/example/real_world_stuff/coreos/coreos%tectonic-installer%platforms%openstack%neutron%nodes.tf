# etcd

resource "openstack_compute_servergroup_v2" "etcd_group" {
  count    = "${var.tectonic_self_hosted_etcd != "" ? 0 : 1}"
  name     = "${var.tectonic_cluster_name}-etcd-group"
  policies = ["anti-affinity"]
}

resource "openstack_compute_instance_v2" "etcd_node" {
  count = "${var.tectonic_self_hosted_etcd != "" ? 0 : var.tectonic_etcd_count}"
  name  = "${var.tectonic_cluster_name}_etcd_node_${count.index}"

  image_name = "${var.tectonic_openstack_image_name}"
  image_id   = "${var.tectonic_openstack_image_id}"

  flavor_name = "${var.tectonic_openstack_etcd_flavor_name}"
  flavor_id   = "${var.tectonic_openstack_etcd_flavor_id}"

  metadata {
    role = "etcd"
  }

  network {
    port = "${openstack_networking_port_v2.etcd.*.id[count.index]}"
  }

  scheduler_hints {
    group = "${openstack_compute_servergroup_v2.etcd_group.id}"
  }

  user_data    = "${module.etcd.user_data[count.index]}"
  config_drive = false
}

# master

resource "openstack_compute_servergroup_v2" "master_group" {
  name     = "${var.tectonic_cluster_name}-master-group"
  policies = ["anti-affinity"]
}

resource "openstack_compute_instance_v2" "master_node" {
  count = "${var.tectonic_master_count}"
  name  = "${var.tectonic_cluster_name}-master-${count.index}"

  image_name = "${var.tectonic_openstack_image_name}"
  image_id   = "${var.tectonic_openstack_image_id}"

  flavor_name = "${var.tectonic_openstack_master_flavor_name}"
  flavor_id   = "${var.tectonic_openstack_master_flavor_id}"

  metadata {
    role = "master"
  }

  network {
    port = "${openstack_networking_port_v2.master.*.id[count.index]}"
  }

  scheduler_hints {
    group = "${openstack_compute_servergroup_v2.master_group.id}"
  }

  user_data    = "${module.master_nodes.user_data[count.index]}"
  config_drive = false
}

resource "openstack_compute_floatingip_associate_v2" "master" {
  count = "${var.tectonic_master_count}"

  floating_ip = "${openstack_networking_floatingip_v2.master.*.address[count.index]}"
  instance_id = "${openstack_compute_instance_v2.master_node.*.id[count.index]}"
}

# worker

resource "openstack_compute_servergroup_v2" "worker_group" {
  name     = "${var.tectonic_cluster_name}-worker-group"
  policies = ["anti-affinity"]
}

resource "openstack_compute_instance_v2" "worker_node" {
  count = "${var.tectonic_worker_count}"
  name  = "${var.tectonic_cluster_name}-worker-${count.index}"

  image_name = "${var.tectonic_openstack_image_name}"
  image_id   = "${var.tectonic_openstack_image_id}"

  flavor_name = "${var.tectonic_openstack_worker_flavor_name}"
  flavor_id   = "${var.tectonic_openstack_worker_flavor_id}"

  metadata {
    role = "worker"
  }

  network {
    port = "${openstack_networking_port_v2.worker.*.id[count.index]}"
  }

  scheduler_hints {
    group = "${openstack_compute_servergroup_v2.worker_group.id}"
  }

  user_data    = "${module.worker_nodes.user_data[count.index]}"
  config_drive = false
}

resource "openstack_compute_floatingip_associate_v2" "worker" {
  count = "${var.tectonic_openstack_disable_floatingip ? 0 : var.tectonic_worker_count}"

  floating_ip = "${openstack_networking_floatingip_v2.worker.*.address[count.index]}"
  instance_id = "${openstack_compute_instance_v2.worker_node.*.id[count.index]}"
}

# tectonic assets

resource "null_resource" "tectonic" {
  depends_on = [
    "module.bootkube",
    "module.tectonic",
    "module.dns",
    "module.flannel_vxlan",
    "module.calico",
    "module.canal",
    "openstack_compute_instance_v2.master_node",
    "openstack_networking_port_v2.master",
    "openstack_networking_floatingip_v2.master",
    "openstack_networking_floatingip_v2.loadbalancer",
  ]

  connection {
    host        = "${openstack_networking_floatingip_v2.master.*.address[0]}"
    private_key = "${module.secrets.core_private_key_pem}"
    user        = "core"
  }

  provisioner "file" {
    source      = "./generated"
    destination = "$HOME/tectonic"
  }

  provisioner "remote-exec" {
    inline = [
      "sudo mkdir -p /opt",
      "sudo rm -rf /opt/tectonic",
      "sudo mv /home/core/tectonic /opt/",
    ]
  }
}
