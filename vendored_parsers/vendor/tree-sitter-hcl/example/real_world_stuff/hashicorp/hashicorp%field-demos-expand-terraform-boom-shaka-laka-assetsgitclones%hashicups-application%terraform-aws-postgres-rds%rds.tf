resource "aws_security_group" "rds_access" {
  vpc_id      = var.vpc_id

  ingress {
    from_port = 0
    to_port   = 0
    protocol  = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }

  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }
}

resource "random_id" "server" {
  byte_length = 4
}

resource "aws_db_subnet_group" "rds_subnet" {
  name_prefix = var.name
  subnet_ids  = flatten([var.vpc_subnet_ids ])
}

resource "aws_db_instance" "rds" {
  allocated_storage       = 20
  db_subnet_group_name    = aws_db_subnet_group.rds_subnet.name
  vpc_security_group_ids  = [ aws_security_group.rds_access.id ]
  publicly_accessible     = true
  engine                  = "postgres"
  engine_version          = "11.5"
  identifier              = var.name
  instance_class          = "db.t2.micro"
  name                    = var.db_name
  username                = var.db_username
  password                = var.db_password
  skip_final_snapshot     = true
  #storage_encrypted    = true

}
