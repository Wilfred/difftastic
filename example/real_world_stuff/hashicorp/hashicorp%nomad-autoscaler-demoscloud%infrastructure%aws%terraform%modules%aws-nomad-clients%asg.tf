locals {
  name_prefix    = format("%s-%s", var.stack_name, var.nomad_node_class)
  load_balancers = var.load_balancer_names != [""] ? var.load_balancer_names : [""]
}

resource "aws_launch_template" "clients" {
  name_prefix            = local.name_prefix
  image_id               = var.ami_id
  instance_type          = var.instance_type
  key_name               = var.key_name
  vpc_security_group_ids = var.security_group_ids
  user_data              = base64encode(data.template_file.user_data.rendered)

  iam_instance_profile {
    name = aws_iam_instance_profile.clients.name
  }

  tag_specifications {
    resource_type = "instance"
    tags = {
      Name           = "${local.name_prefix}-client"
      ConsulAutoJoin = "auto-join"
      OwnerName      = var.owner_name
      OwnerEmail     = var.owner_email
    }
  }

  block_device_mappings {
    device_name = "/dev/xvdd"
    ebs {
      volume_type           = "gp2"
      volume_size           = "50"
      delete_on_termination = "true"
    }
  }
}

resource "aws_autoscaling_group" "clients" {
  name_prefix         = local.name_prefix
  desired_capacity    = var.desired_capacity
  min_size            = var.min_size
  max_size            = var.max_size
  load_balancers      = local.load_balancers
  vpc_zone_identifier = var.subnet_ids

  launch_template {
    id      = aws_launch_template.clients.id
    version = "$Latest"
  }

  tag {
    key                 = "OwnerName"
    value               = var.owner_name
    propagate_at_launch = true
  }

  tag {
    key                 = "OwnerEmail"
    value               = var.owner_email
    propagate_at_launch = true
  }
}
