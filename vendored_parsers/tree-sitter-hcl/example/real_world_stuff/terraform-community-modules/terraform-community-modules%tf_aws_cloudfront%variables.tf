variable "name" {}

variable "certificate_arn" { 
  description = "Existing certificate arn."
}

variable "domains" {
  type = "list"
  default = []
}

variable "bucket_name" {
  default = "tf-cf-bucket"
}

variable "compress" {
  default = "false"
}
  
variable "ipv6_enabled" {
  default = "true"
}

variable "comment" {
  default = "Managed by Terraform"
}

variable "log_include_cookies" {
  default = "false"
}

variable "log_bucket" { }

variable "log_prefix" {
  default = "cf_logs"
}

variable "price_class" {
  default = "PriceClass_100"
}

variable "viewer_protocol_policy" {
  #default = "allow-all"
  default = "redirect-to-https"
}

variable "allowed_methods" {
  type = "list"
  default  = ["DELETE", "GET", "HEAD", "OPTIONS", "PATCH", "POST", "PUT"]
}
variable "cached_methods" { 
  type = "list"
  default = ["GET", "HEAD"]
}

variable "min_ttl" {
  default = "0"
}
variable "max_ttl" {
  default = "31536000"
}
variable "default_ttl" {
  default = "60"
}

variable "tags" {
  default = {}
}

variable "create_user_with_policy" {
  default = "false"
}

variable "iam_policy" {
  type = "string"
  default = ""
}

variable "pgp_key" {
  default = ""
}
