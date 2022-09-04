data "aws_s3_bucket_object" "proxy_certificate" {
  bucket = var.external_bootstrap_bucket
  key    = var.proxy_certificate_bucket_object_key
}

data "aws_s3_bucket_object" "proxy_private_key" {
  bucket = var.external_bootstrap_bucket
  key    = var.proxy_private_key_bucket_object_key
}
