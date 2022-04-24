output "replicated_dashboard_password" {
  value = random_string.password.result

  description = "The password which is required to access the administrator dashboard."
}

output "tfe_user_data_base64" {
  value = base64encode(local.tfe_user_data)

  description = "The Base64 encoded user data script to be executed when the TFE EC2 instances are launched."
}

output "user_token" {
  value = local.base_configs.user_token

  description = "The token which is required to create the initial TFE administrator user."
}
