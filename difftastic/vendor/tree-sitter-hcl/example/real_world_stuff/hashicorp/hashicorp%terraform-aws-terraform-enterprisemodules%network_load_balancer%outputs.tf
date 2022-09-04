output "aws_lb_target_group_tfe_tg_443_arn" {
  value = aws_lb_target_group.tfe_tg_443.arn

  description = "The Amazon Resource Name of the load balancer target group for traffic on port 443."
}

output "aws_lb_target_group_tfe_tg_8800_arn" {
  value = var.active_active ? null : aws_lb_target_group.tfe_tg_8800[0].arn

  description = "The Amazon Resource Name of the load balancer target group for traffic on port 8800."
}

output "load_balancer_address" {
  value = aws_lb.tfe_lb.dns_name

  description = "The DNS name of the load balancer."
}
