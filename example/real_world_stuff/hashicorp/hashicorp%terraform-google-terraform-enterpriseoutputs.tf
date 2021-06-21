output "replicated_console_password" {
  value       = module.user_data.replicated_dashboard_password
  description = "Generated password for replicated dashboard"
}

output "lb_address" {
  value       = local.lb_address
  description = "Load Balancer Address"
}

output "login_url" {
  value       = "https://${local.hostname}/admin/account/new?token=${module.user_data.user_token.value}"
  description = "Login URL to setup the TFE instance once it is initialized"
}

output "network" {
  value       = local.network
  description = "The name of the VPC network to which TFE is attached."
}

output "service_account_email" {
  value       = module.service_accounts.email
  description = "The email address of the service account associated with the TFE instance."
}

output "subnetwork" {
  value       = local.subnetwork
  description = "The name of the VPC subnetwork to which TFE is attached."
}

output "dns_configuration_notice" {
  value       = "If you are using external DNS, please make sure to create a DNS record using the lb_address output that has been provided"
  description = "A warning message."
}
