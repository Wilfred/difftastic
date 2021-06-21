resource "aws_security_group" "agents" {
  name_prefix = "${var.stack_name}-agents"
  vpc_id      = aws_vpc.main.id

  # SSH
  ingress {
    from_port   = 22
    to_port     = 22
    protocol    = "tcp"
    cidr_blocks = var.allowed_ips
  }

  # Nomad
  ingress {
    from_port   = 4646
    to_port     = 4646
    protocol    = "tcp"
    cidr_blocks = var.allowed_ips
    security_groups = [
      aws_security_group.servers_lb.id,
    ]
  }

  # Consul
  ingress {
    from_port   = 8500
    to_port     = 8500
    protocol    = "tcp"
    cidr_blocks = var.allowed_ips
    security_groups = [
      aws_security_group.servers_lb.id,
    ]
  }

  ingress {
    from_port = 0
    to_port   = 0
    protocol  = "-1"
    self      = true
  }

  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }

  tags = {
    OwnerName  = var.owner_name
    OwnerEmail = var.owner_email
  }
}

resource "aws_security_group" "clients" {
  count = length(var.client_load_balancers)

  name_prefix = "${var.stack_name}-${var.client_load_balancers[count.index].name}-clients"
  vpc_id      = aws_vpc.main.id

  dynamic "ingress" {
    for_each = var.client_load_balancers[count.index].listeners
    content {
      protocol    = ingress.value["protocol"]
      from_port   = ingress.value["port"]
      to_port     = ingress.value["port"]
      cidr_blocks = var.allowed_ips
      security_groups = [
        aws_security_group.clients_lb[count.index].id,
      ]
    }
  }

  ingress {
    from_port = 0
    to_port   = 0
    protocol  = "-1"
    self      = true
  }

  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }

  tags = {
    OwnerName  = var.owner_name
    OwnerEmail = var.owner_email
  }
}

resource "aws_security_group" "servers_lb" {
  name_prefix = "${var.stack_name}-servers-lb"
  vpc_id      = aws_vpc.main.id

  # Nomad
  ingress {
    from_port   = 4646
    to_port     = 4646
    protocol    = "tcp"
    cidr_blocks = var.allowed_ips
  }

  # Consul
  ingress {
    from_port   = 8500
    to_port     = 8500
    protocol    = "tcp"
    cidr_blocks = var.allowed_ips
  }

  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }

  tags = {
    OwnerName  = var.owner_name
    OwnerEmail = var.owner_email
  }
}

resource "aws_security_group" "clients_lb" {
  count = length(var.client_load_balancers)

  name_prefix = "${var.stack_name}-${var.client_load_balancers[count.index].name}-clients-lb"
  vpc_id      = aws_vpc.main.id

  dynamic "ingress" {
    for_each = var.client_load_balancers[count.index].listeners
    content {
      protocol    = ingress.value["protocol"]
      from_port   = ingress.value["port"]
      to_port     = ingress.value["port"]
      cidr_blocks = var.allowed_ips
    }
  }

  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }

  tags = {
    OwnerName  = var.owner_name
    OwnerEmail = var.owner_email
  }
}
