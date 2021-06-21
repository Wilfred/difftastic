resource "digitalocean_record" "api" {
  domain = "${var.base_domain}"
  type   = "A"
  name   = "${var.cluster_name}-api"
  value  = "${digitalocean_floating_ip.master.ip_address}"
}

resource "digitalocean_loadbalancer" "console" {
  name   = "${var.cluster_name}-con"
  region = "${var.droplet_region}"

  forwarding_rule {
    entry_port      = 80
    entry_protocol  = "tcp"
    target_port     = 32001
    target_protocol = "tcp"
  }

  forwarding_rule {
    entry_port      = 443
    entry_protocol  = "tcp"
    target_port     = 32000
    target_protocol = "tcp"
  }

  healthcheck {
    port                     = 32002
    protocol                 = "http"
    path                     = "/healthz"
    check_interval_seconds   = 5
    response_timeout_seconds = 3
    healthy_threshold        = 2
    unhealthy_threshold      = 2
  }
}

resource "digitalocean_record" "console" {
  domain = "${var.base_domain}"
  type   = "A"
  name   = "${var.cluster_name}"
  value  = "${digitalocean_loadbalancer.console.ip}"
}
