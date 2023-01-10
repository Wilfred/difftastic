resource "google_compute_network" "tfe_vpc" {
  name                    = "${var.namespace}-vpc"
  description             = "Terraform Enterprise VPC Network"
  auto_create_subnetworks = false
}

resource "google_compute_subnetwork" "tfe_subnet" {
  name          = "${var.namespace}-subnet"
  ip_cidr_range = var.subnet_range
  network       = google_compute_network.tfe_vpc.self_link
}

resource "google_compute_subnetwork" "reserve" {
  provider = google-beta

  name          = "${var.namespace}-reserve"
  ip_cidr_range = var.reserve_subnet_range
  purpose       = "INTERNAL_HTTPS_LOAD_BALANCER"
  role          = "ACTIVE"
  network       = google_compute_network.tfe_vpc.self_link
}

resource "google_compute_router" "router" {
  name    = "${var.namespace}-router"
  network = google_compute_network.tfe_vpc.self_link
}

resource "google_compute_router_nat" "nat" {
  name                               = "${var.namespace}-router-nat"
  router                             = google_compute_router.router.name
  nat_ip_allocate_option             = "AUTO_ONLY"
  source_subnetwork_ip_ranges_to_nat = "ALL_SUBNETWORKS_ALL_IP_RANGES"

  log_config {
    enable = true
    filter = "ERRORS_ONLY"
  }
}


resource "google_compute_firewall" "tfe" {
  name    = "${var.namespace}-firewall"
  network = google_compute_network.tfe_vpc.name

  target_service_accounts = [var.service_account]

  allow {
    protocol = "icmp"
  }

  allow {
    protocol = "tcp"
    ports    = concat(["80", "443", "6443", "8800", "23010"], var.firewall_ports)
  }

  source_ranges = var.ip_allow_list
}

resource "google_compute_firewall" "lb-healthchecks" {
  name          = "${var.namespace}-lb-healthcheck-firewall"
  network       = google_compute_network.tfe_vpc.name
  source_ranges = concat([google_compute_subnetwork.tfe_subnet.ip_cidr_range], var.healthcheck_ips)

  target_service_accounts = [var.service_account]

  allow {
    protocol = "tcp"
  }
}

resource "google_compute_firewall" "ssh" {
  name    = "${var.namespace}-ssh-firewall"
  network = google_compute_network.tfe_vpc.name

  description             = "The firewall which allows the ingress of SSH traffic to the TFE deployment."
  direction               = "INGRESS"
  source_ranges           = var.ssh_source_ranges
  target_service_accounts = [var.service_account]

  allow {
    protocol = "tcp"

    ports = ["22"]
  }
}

resource "google_compute_global_address" "private_ip_address" {
  name          = "${var.namespace}-private-ip-address"
  purpose       = "VPC_PEERING"
  address_type  = "INTERNAL"
  prefix_length = 20
  network       = google_compute_subnetwork.tfe_subnet.network
}

resource "google_service_networking_connection" "private_vpc_connection" {
  network = google_compute_subnetwork.tfe_subnet.network
  service = "servicenetworking.googleapis.com"

  reserved_peering_ranges = [google_compute_global_address.private_ip_address.name]
}
