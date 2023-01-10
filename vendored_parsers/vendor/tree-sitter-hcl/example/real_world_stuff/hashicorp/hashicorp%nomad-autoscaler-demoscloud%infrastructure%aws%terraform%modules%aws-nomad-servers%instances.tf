resource "aws_instance" "servers" {
  count = var.instance_count

  ami                    = var.ami_id
  instance_type          = var.instance_type
  key_name               = var.key_name
  subnet_id              = element(var.subnet_ids, count.index)
  vpc_security_group_ids = var.security_group_ids
  iam_instance_profile   = aws_iam_instance_profile.servers.name
  user_data              = data.template_file.user_data.rendered

  root_block_device {
    volume_type           = "gp2"
    volume_size           = "16"
    delete_on_termination = "true"
  }

  tags = {
    Name           = "${var.stack_name}-server-${count.index + 1}"
    ConsulAutoJoin = "auto-join"
    OwnerName      = var.owner_name
    OwnerEmail     = var.owner_email
  }
}
