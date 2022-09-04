locals {
  labels                      = { "label" : "label" } # TODO - not verified until apply
  disable_services_on_destroy = false
}

resource "google_project_service" "iam" {
  service            = "iam.googleapis.com"
  disable_on_destroy = local.disable_services_on_destroy
}

resource "google_project_service" "cloudapi" {
  service            = "cloudapis.googleapis.com"
  disable_on_destroy = local.disable_services_on_destroy
}

resource "google_project_service" "servicenetworking" {
  service            = "servicenetworking.googleapis.com"
  disable_on_destroy = local.disable_services_on_destroy
}

resource "google_project_service" "sqladmin" {
  service            = "sqladmin.googleapis.com"
  disable_on_destroy = local.disable_services_on_destroy
}

resource "google_project_service" "redis" {
  service            = "redis.googleapis.com"
  disable_on_destroy = local.disable_services_on_destroy
}

locals {
  active_active = var.node_count >= 2
}

module "object_storage" {
  source = "./modules/object_storage"

  namespace    = var.namespace
  labels       = local.labels
  license_name = var.tfe_license_name
  license_path = var.tfe_license_path
}

resource "google_storage_bucket_object" "proxy_cert" {
  count  = var.proxy_cert_path != "" ? 1 : 0
  name   = var.proxy_cert_name
  source = var.proxy_cert_path
  bucket = module.object_storage.bucket
}

module "service_accounts" {
  source = "./modules/service_accounts"

  bucket    = module.object_storage.bucket
  namespace = var.namespace
}

locals {
  network_module_enabled = var.network != "" ? 0 : 1
}

module "networking" {
  source = "./modules/networking"

  count = local.network_module_enabled

  namespace            = var.namespace
  subnet_range         = var.networking_subnet_range
  reserve_subnet_range = var.networking_reserve_subnet_range
  firewall_ports       = var.networking_firewall_ports
  healthcheck_ips      = var.networking_healthcheck_ips
  service_account      = module.service_accounts.email
  ip_allow_list        = var.networking_ip_allow_list
}

locals {
  network    = local.network_module_enabled == 1 ? module.networking[0].network : var.network
  subnetwork = local.network_module_enabled == 1 ? module.networking[0].subnetwork : var.subnetwork
}

module "database" {
  source = "./modules/database"

  dbname            = var.database_name
  username          = var.database_user
  machine_type      = var.database_machine_type
  availability_type = var.database_availability_type
  namespace         = var.namespace
  backup_start_time = var.database_backup_start_time
  labels            = local.labels
  network           = local.network
}

module "redis" {
  source = "./modules/redis"

  auth_enabled = var.redis_auth_enabled
  namespace    = var.namespace
  memory_size  = var.redis_memory_size
  network      = local.network
  enabled      = local.active_active
}

locals {
  proxy_cert = length(google_storage_bucket_object.proxy_cert) > 0 ? google_storage_bucket_object.proxy_cert[0].name : ""
}

module "user_data" {
  source = "./modules/user_data"

  fqdn                    = var.fqdn
  install_id              = ""
  airgap_url              = ""
  gcs_bucket              = module.object_storage.bucket
  gcs_credentials         = module.service_accounts.credentials
  gcs_project             = module.object_storage.project
  tfe_license             = var.tfe_license_name
  pg_netloc               = module.database.netloc
  pg_dbname               = module.database.dbname
  pg_user                 = module.database.user
  pg_password             = module.database.password
  pg_extra_params         = "sslmode=require"
  redis_host              = module.redis.host
  redis_pass              = module.redis.password
  redis_port              = module.redis.port
  redis_use_password_auth = var.redis_auth_enabled
  release_sequence        = var.release_sequence
  active_active           = local.active_active
  proxy_ip                = var.proxy_ip
  proxy_cert              = local.proxy_cert
  namespace               = var.namespace
  no_proxy                = [var.fqdn, var.networking_subnet_range]
}

module "vm" {
  source = "./modules/vm"

  namespace               = var.namespace
  machine_type            = var.vm_machine_type
  disk_size               = var.vm_disk_size
  disk_source_image       = var.vm_disk_source_image
  disk_type               = var.vm_disk_type
  subnetwork              = local.subnetwork
  metadata_startup_script = module.user_data.script
  labels                  = local.labels
  auto_healing_enabled    = var.vm_auto_healing_enabled
  service_account         = module.service_accounts.email
  node_count              = var.node_count

  // This is to prevent deleting the database user before the vm is completely destroyed
  depends_on = [
    module.database
  ]
}

module "private_load_balancer" {
  count                = var.load_balancer == "PRIVATE" ? 1 : 0
  source               = "./modules/private_load_balancer"
  namespace            = var.namespace
  fqdn                 = var.fqdn
  instance_group       = module.vm.instance_group
  ssl_certificate_name = var.ssl_certificate_name
  dns_zone_name        = var.dns_zone_name
  subnet               = local.subnetwork
  dns_create_record    = var.dns_create_record
}

module "private_tcp_load_balancer" {
  count  = var.load_balancer == "PRIVATE_TCP" ? 1 : 0
  source = "./modules/private_tcp_load_balancer"

  namespace         = var.namespace
  fqdn              = var.fqdn
  instance_group    = module.vm.instance_group
  dns_zone_name     = var.dns_zone_name
  subnet            = local.subnetwork
  dns_create_record = var.dns_create_record
}

module "load_balancer" {
  count                = var.load_balancer == "PUBLIC" ? 1 : 0
  source               = "./modules/load_balancer"
  namespace            = var.namespace
  fqdn                 = var.fqdn
  instance_group       = module.vm.instance_group
  ssl_certificate_name = var.ssl_certificate_name
  dns_zone_name        = var.dns_zone_name
  subnet               = local.subnetwork
  dns_create_record    = var.dns_create_record
}

locals {
  lb_address = var.load_balancer == "PUBLIC" ? module.load_balancer.0.address : (
    var.load_balancer == "PRIVATE" ? module.private_load_balancer.0.address : module.private_tcp_load_balancer.0.address
  )
  hostname = var.dns_create_record ? var.fqdn : local.lb_address
}
