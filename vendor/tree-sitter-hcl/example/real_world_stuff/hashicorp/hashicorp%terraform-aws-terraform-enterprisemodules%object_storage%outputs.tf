output "s3_bucket_bootstrap" {
  value = aws_s3_bucket.tfe_bootstrap_bucket.id

  description = "The name of the S3 bucket which contains TFE bootstrap artifacts."
}

output "s3_bucket_bootstrap_arn" {
  value = aws_s3_bucket.tfe_bootstrap_bucket.arn

  description = "The Amazon Resource Name of the S3 bucket which contains TFE bootstrap artifacts."
}

output "s3_bucket_data" {
  value = aws_s3_bucket.tfe_data_bucket.id

  description = "The name of the S3 bucket which contains TFE runtime data."
}

output "s3_bucket_data_arn" {
  value = aws_s3_bucket.tfe_data_bucket.arn

  description = "The Amazon Resource Name of the S3 bucket which contains TFE runtime data."
}
