output "tfe_userdata_base64_encoded" {
  value = base64encode(local.tfe_user_data)
}

output "tfe_console_password" {
  value = random_string.password.result
}

output "user_token" {
  value = local.base_configs.user_token
}
