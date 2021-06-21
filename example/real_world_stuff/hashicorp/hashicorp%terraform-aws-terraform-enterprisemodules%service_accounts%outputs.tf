output "aws_iam_instance_profile" {
  value = aws_iam_instance_profile.tfe.name

  description = <<-EOD
  The name of the IAM instance profile to be attached to the TFE EC2 instance(s) which is authorized to access the S3 
  storage buckets and EC2 autoscaling group.
  EOD
}

