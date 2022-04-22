data "googleworkspace_domain" "example" {
  domain_name = "example.com"
}

output "domain_verified" {
  value = data.googleworkspace_domain.example.verified
}