data "google_compute_image" "ubuntu" {
  name = "ubuntu-2004-focal-v20210211"

  project = "ubuntu-os-cloud"
}

module "tfe" {
  source = "../.."

  dns_zone_name        = var.dns_zone_name
  fqdn                 = var.fqdn
  namespace            = var.namespace
  node_count           = 2
  tfe_license_name     = "startup.rli"
  tfe_license_path     = var.tfe_license_path
  ssl_certificate_name = var.ssl_certificate_name

  load_balancer        = "PUBLIC"
  redis_auth_enabled   = false
  vm_disk_source_image = data.google_compute_image.ubuntu.self_link
  vm_machine_type      = "n1-standard-4"
}
