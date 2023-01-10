output "db_endpoint" {
  value = aws_db_instance.postgresql.endpoint

  description = "The connection endpoint of the PostgreSQL RDS instance in address:port format."
}

output "db_name" {
  value = aws_db_instance.postgresql.name

  description = "The name of the PostgreSQL RDS instance."
}

output "db_password" {
  value = aws_db_instance.postgresql.password

  description = "The password of the main PostgreSQL user."
}

output "db_username" {
  value = aws_db_instance.postgresql.username

  description = "The name of the main PostgreSQL user."
}
