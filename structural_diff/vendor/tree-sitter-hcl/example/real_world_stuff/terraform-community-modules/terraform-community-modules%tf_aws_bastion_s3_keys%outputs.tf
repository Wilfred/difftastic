output "ssh_user" {
  value = var.ssh_user
}

output "security_group_id" {
  value = aws_security_group.bastion.id
}

output "asg_id" {
  value = aws_autoscaling_group.bastion.id
}

