output "script" {
  value = local.user_data
}

output "replicated_dashboard_password" {
  value = random_string.password.result
}

output "user_token" {
  value = local.base_configs.user_token
}
