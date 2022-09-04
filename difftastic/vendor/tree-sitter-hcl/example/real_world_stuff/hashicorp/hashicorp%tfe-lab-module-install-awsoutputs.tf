output "tfe_url" {
  value = module.tfe.tfe_url
}

output "tfe_admin_console_url" {
  value = module.tfe.tfe_admin_console_url
}

output "tfe_admin_console_password" {
  value = module.tfe.tfe_admin_console_password
  description = "Password of TFE (Replicated) Admin Console."
}

output "tfe_admin_password" {
  value       = module.tfe.tfe_initial_admin_password
  description = "Password of TFE Initial Admin User created by tfe_bootstrap() function within user_data."
}