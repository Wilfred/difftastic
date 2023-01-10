resource "aws_s3_bucket" "tfe_bootstrap_bucket" {
  bucket = "${var.friendly_name_prefix}-tfe-bootstrap"
  acl    = "private"

  versioning {
    enabled = true
  }

  server_side_encryption_configuration {
    rule {
      apply_server_side_encryption_by_default {
        kms_master_key_id = var.kms_key_arn
        sse_algorithm     = "aws:kms"
      }
    }
  }

  force_destroy = true
}

resource "aws_s3_bucket_object" "tfe_license" {
  count  = var.external_bootstrap_bucket == null ? 1 : 0
  bucket = aws_s3_bucket.tfe_bootstrap_bucket.id
  key    = var.tfe_license_name
  source = var.tfe_license_filepath
}

resource "aws_s3_bucket_object" "proxy_cert_bundle" {
  count  = (var.proxy_cert_bundle_name != "" && var.external_bootstrap_bucket == null) ? 1 : 0
  bucket = aws_s3_bucket.tfe_bootstrap_bucket.id
  key    = var.proxy_cert_bundle_name
  source = var.proxy_cert_bundle_filepath
}

resource "aws_s3_bucket_public_access_block" "tfe_bootstrap_bucket" {
  bucket = aws_s3_bucket.tfe_bootstrap_bucket.id

  block_public_acls       = true
  block_public_policy     = true
  restrict_public_buckets = true
  ignore_public_acls      = true
}

resource "aws_s3_bucket" "tfe_data_bucket" {
  bucket = "${var.friendly_name_prefix}-tfe-data"
  acl    = "private"

  versioning {
    enabled = true
  }

  server_side_encryption_configuration {
    rule {
      apply_server_side_encryption_by_default {
        kms_master_key_id = var.kms_key_arn
        sse_algorithm     = "aws:kms"
      }
    }
  }

  force_destroy = true
}

resource "aws_s3_bucket_public_access_block" "tfe_data" {
  bucket = aws_s3_bucket.tfe_data_bucket.id

  block_public_acls       = true
  block_public_policy     = true
  restrict_public_buckets = true
  ignore_public_acls      = true
}
