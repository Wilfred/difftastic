###############
# TFE CLUSTER #
###############
resource "aws_security_group" "tfe_instance" {
  name   = "${var.friendly_name_prefix}-tfe-ec2-sg"
  vpc_id = var.network_id
}

resource "aws_security_group_rule" "tfe_ui" {
  security_group_id        = aws_security_group.tfe_instance.id
  type                     = "ingress"
  from_port                = 443
  to_port                  = 443
  protocol                 = "tcp"
  source_security_group_id = var.aws_lb
  cidr_blocks              = var.aws_lb == null ? var.network_private_subnet_cidrs : null
}

resource "aws_security_group_rule" "tfe_inbound" {
  security_group_id = aws_security_group.tfe_instance.id
  type              = "ingress"
  from_port         = 0
  to_port           = 0
  protocol          = "-1"
  self              = true
}

resource "aws_security_group_rule" "tfe_outbound" {
  security_group_id = aws_security_group.tfe_instance.id
  type              = "egress"
  from_port         = 0
  to_port           = 0
  protocol          = "-1"
  cidr_blocks       = ["0.0.0.0/0"]
}

resource "aws_security_group_rule" "tfe_dashboard" {
  count                    = var.active_active ? 0 : 1
  security_group_id        = aws_security_group.tfe_instance.id
  type                     = "ingress"
  from_port                = 8800
  to_port                  = 8800
  protocol                 = "tcp"
  source_security_group_id = var.aws_lb
  cidr_blocks              = var.aws_lb == null ? var.network_private_subnet_cidrs : null
}

resource "aws_launch_configuration" "tfe" {
  name_prefix      = "${var.friendly_name_prefix}-tfe-ec2-asg-lt-"
  image_id         = var.ami_id
  instance_type    = var.instance_type
  user_data_base64 = var.user_data_base64

  iam_instance_profile = var.aws_iam_instance_profile
  key_name             = var.key_name
  security_groups      = [aws_security_group.tfe_instance.id]

  metadata_options {
    http_endpoint = "enabled"
    # A hop limit of at least 2 is required for AWS Cost Estimation to function.
    http_put_response_hop_limit = 2
    http_tokens                 = "optional"
  }

  root_block_device {
    encrypted             = true
    volume_type           = "gp2"
    volume_size           = 50
    delete_on_termination = true
  }

  lifecycle {
    create_before_destroy = true
  }
}

resource "aws_autoscaling_group" "tfe_asg" {
  name                = "${var.friendly_name_prefix}-tfe-asg"
  min_size            = var.node_count
  max_size            = var.node_count
  desired_capacity    = var.node_count
  vpc_zone_identifier = var.network_subnets_private
  target_group_arns = var.active_active ? [var.aws_lb_target_group_tfe_tg_443_arn] : [
    var.aws_lb_target_group_tfe_tg_8800_arn,
    var.aws_lb_target_group_tfe_tg_443_arn,
  ]
  # Increases grace period for any AMI that is not the default Ubuntu
  # since RHEL has longer startup time
  health_check_grace_period = var.default_ami_id ? 900 : 1500
  health_check_type         = "ELB"
  launch_configuration      = aws_launch_configuration.tfe.name

  tags = concat(
    [
      {
        key                 = "Name"
        value               = "${var.friendly_name_prefix}-tfe"
        propagate_at_launch = true
      },
    ],
    [
      for k, v in var.asg_tags : {
        key                 = k
        value               = v
        propagate_at_launch = true
      }
    ]
  )

  lifecycle {
    create_before_destroy = true
  }
}
