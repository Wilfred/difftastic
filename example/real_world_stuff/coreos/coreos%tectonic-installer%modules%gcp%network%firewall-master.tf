resource "google_compute_firewall" "master-ingress" {
  name    = "${var.cluster_name}-master-ingress"
  network = "${google_compute_network.network.name}"

  # ICMP
  allow {
    protocol = "icmp"
  }

  allow {
    protocol = "tcp"
    ports    = ["22", "80", "443"] # ssh, http, https
  }

  source_ranges = ["0.0.0.0/0"]
  target_tags   = ["tectonic-masters"]
}

resource "google_compute_firewall" "master-ingress-heapster" {
  name    = "${var.cluster_name}-master-ingress-heapster"
  network = "${google_compute_network.network.name}"

  allow {
    protocol = "tcp"
    ports    = ["4194"]
  }

  source_tags = ["tectonic-masters", "tectonic-workers"]
  target_tags = ["tectonic-masters"]
}

resource "google_compute_firewall" "master-ingress-flannel" {
  name    = "${var.cluster_name}-master-ingress-flannel"
  network = "${google_compute_network.network.name}"

  allow {
    protocol = "udp"
    ports    = ["4789"]
  }

  source_tags = ["tectonic-masters", "tectonic-workers"]
  target_tags = ["tectonic-masters"]
}

resource "google_compute_firewall" "master-ingress-node-exporter" {
  name    = "${var.cluster_name}-master-ingress-node-exporter"
  network = "${google_compute_network.network.name}"

  allow {
    protocol = "tcp"
    ports    = ["9100"]
  }

  source_tags = ["tectonic-masters", "tectonic-workers"]
  target_tags = ["tectonic-masters"]
}

resource "google_compute_firewall" "master-ingress-kubelet" {
  name    = "${var.cluster_name}-master-ingress-kubelet"
  network = "${google_compute_network.network.name}"

  allow {
    protocol = "tcp"
    ports    = ["10250", "10255"] # insecure and secure ports
  }

  source_tags = ["tectonic-masters", "tectonic-workers"]
  target_tags = ["tectonic-masters"]
}

resource "google_compute_firewall" "master-ingress-etcd" {
  name    = "${var.cluster_name}-master-ingress-etcd"
  network = "${google_compute_network.network.name}"

  allow {
    protocol = "tcp"
    ports    = ["2379", "12379"] # etcd and bootstrap-etcd
  }

  source_tags = ["tectonic-masters"]
  target_tags = ["tectonic-masters", "tectonic-etcd"]
}

resource "google_compute_firewall" "master-ingress-services" {
  name    = "${var.cluster_name}-master-ingress-services"
  network = "${google_compute_network.network.name}"

  allow {
    protocol = "tcp"
    ports    = ["30000-32767"]
  }

  source_tags = ["tectonic-masters"]
  target_tags = ["tectonic-masters"]
}
