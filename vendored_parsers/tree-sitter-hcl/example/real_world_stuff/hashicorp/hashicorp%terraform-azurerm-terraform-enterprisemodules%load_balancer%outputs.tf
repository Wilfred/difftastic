output "load_balancer_backend_id" {
  value = var.load_balancer_type == "application_gateway" ? azurerm_application_gateway.tfe_ag[0].backend_address_pool[0].id : azurerm_lb_backend_address_pool.tfe_load_balancer_be[0].id
}

output "load_balancer_ip" {
  value = local.load_balancer_ip
}
