resource "google_compute_firewall" "etcd-ingress" {
  name    = "${var.cluster_name}-etcd-ingress"
  network = "${google_compute_network.network.name}"

  # ICMP
  allow {
    protocol = "icmp"
  }

  allow {
    protocol = "tcp"
    ports    = ["22"] # ssh
  }

  source_ranges = ["0.0.0.0/0"]
  target_tags   = ["tectonic-etcd"]
}

resource "google_compute_firewall" "etcd" {
  name    = "${var.cluster_name}-etcd"
  network = "${google_compute_network.network.name}"

  allow {
    protocol = "tcp"
    ports    = ["2379", "2380", "12379"] # etcd and bootstrap-etcd
  }

  source_tags = ["tectonic-etcd"]
  target_tags = ["tectonic-etcd"]
}
