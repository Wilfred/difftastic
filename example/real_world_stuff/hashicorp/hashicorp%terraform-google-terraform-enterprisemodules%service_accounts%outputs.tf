output "credentials" {
  value = base64decode(google_service_account_key.key.private_key)
}
output "email" {
  value = google_service_account.main.email
}
