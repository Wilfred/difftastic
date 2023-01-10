output "db_password" {
  value = var.db_password
}

output "db_username" {
  value = var.db_username
}

output "db_endpoint" {
  value = aws_db_instance.rds.endpoint
}

output "db_name" {
  value = var.db_name
}
