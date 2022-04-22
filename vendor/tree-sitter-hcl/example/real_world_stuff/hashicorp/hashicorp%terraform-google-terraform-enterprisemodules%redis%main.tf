resource "random_pet" "redis" {
  length = 2
}

resource "google_redis_instance" "redis" {
  count          = var.enabled ? 1 : 0
  name           = "${var.namespace}-tfe-${random_pet.redis.id}"
  tier           = "STANDARD_HA"
  memory_size_gb = var.memory_size
  auth_enabled   = var.auth_enabled

  authorized_network = var.network
  connect_mode       = "PRIVATE_SERVICE_ACCESS"

  redis_version = "REDIS_5_0"
  display_name  = "${var.namespace} TFE Instance"
}
