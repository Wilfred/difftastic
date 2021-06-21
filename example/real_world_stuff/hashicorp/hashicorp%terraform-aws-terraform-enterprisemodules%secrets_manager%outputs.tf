output "secretsmanager_secret_arn" {
  value = (var.deploy_secretsmanager == true) ? aws_secretsmanager_secret.tfe_install[0].arn : null

  description = "The Amazon Resource Name of the Secrets Manager secret."
}
