output "lb_address" {
  value       = module.tfe.lb_address
  description = "Load Balancer Address"
}

output "login_url" {
  value       = module.tfe.login_url
  description = "Login URL to setup the TFE instance once it is initialized"
}
