output "host" {
  value = var.enabled ? google_redis_instance.redis[0].host : ""
}

output "port" {
  value = var.enabled ? google_redis_instance.redis[0].port : ""
}

output "password" {
  value = var.enabled ? google_redis_instance.redis[0].auth_string : ""
}
