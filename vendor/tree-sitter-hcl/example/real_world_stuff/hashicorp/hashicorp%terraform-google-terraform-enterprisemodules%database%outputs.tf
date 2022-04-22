output "netloc" {
  value = google_sql_database_instance.tfe.private_ip_address
}
output "dbname" {
  value = google_sql_database.tfe.name
}
output "user" {
  value = google_sql_user.tfe.name
}
output "password" {
  value = google_sql_user.tfe.password
}
