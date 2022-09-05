resource "aws_kms_key" "aurora" {
  description = "RDS master key for ${var.name}-${data.aws_vpc.vpc.tags["Name"]}"
  deletion_window_in_days = 30
  enable_key_rotation = "true"
}

resource "aws_kms_alias" "aurora" {
  name = "alias/${var.name}-${data.aws_vpc.vpc.tags["Name"]}-rds-key"
  target_key_id = "${aws_kms_key.aurora.key_id}"
}
