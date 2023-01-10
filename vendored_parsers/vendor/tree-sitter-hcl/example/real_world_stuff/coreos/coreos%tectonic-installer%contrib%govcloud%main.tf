provider "aws" {
  region = "${var.vpc_aws_region}"
}

# Declare the data source
data "aws_availability_zones" "available" {}

resource "aws_vpc" "vpc" {
  cidr_block           = "${var.vpc_cidr}"
  enable_dns_support   = true
  enable_dns_hostnames = true

  tags {
    Name = "${var.vpc_name}"
  }
}

data "aws_ami" "coreos_ami" {
  most_recent = true

  filter {
    name   = "name"
    values = ["CoreOS-stable-*"]
  }

  filter {
    name   = "architecture"
    values = ["x86_64"]
  }

  filter {
    name   = "virtualization-type"
    values = ["hvm"]
  }

  filter {
    name   = "owner-id"
    values = ["190570271432"]
  }
}

resource "aws_instance" "bastion" {
  # 1st available AZ
  availability_zone      = "${data.aws_availability_zones.available.names[0]}"
  ami                    = "${data.aws_ami.coreos_ami.image_id}"
  instance_type          = "${var.instance_type}"
  subnet_id              = "${aws_subnet.pub_subnet_generic.id}"
  vpc_security_group_ids = ["${compact(concat(list(aws_security_group.powerdns.id), list(aws_security_group.vpn_sg.id)))}"]
  source_dest_check      = false
  key_name               = "${var.ssh_key}"
  user_data              = "${data.ignition_config.main.rendered}"

  depends_on = ["aws_eip.ovpn_eip"]

  tags {
    Name = "${var.vpc_name}-server"
  }
}

data "ignition_config" "main" {
  files = ["${data.ignition_file.nginx_conf.id}"]

  systemd = ["${compact(list(
    data.ignition_systemd_unit.gateway_service.id,
    data.ignition_systemd_unit.nginx_service.id,
    data.ignition_systemd_unit.openvpn_service.id,
    data.ignition_systemd_unit.powerdns_service.id,
    data.ignition_systemd_unit.update-engine.id,
    data.ignition_systemd_unit.locksmithd.id,
   ))}"]
}

data "ignition_systemd_unit" "update-engine" {
  name = "update-engine.service"
  mask = true
}

data "ignition_systemd_unit" "locksmithd" {
  name = "locksmithd.service"
  mask = true
}

# IGW
resource "aws_internet_gateway" "igw" {
  vpc_id = "${aws_vpc.vpc.id}"

  tags {
    Name = "${var.vpc_name}-igw"
  }
}

# General purpose public subnet. used for OVPN access and IGW/NAT attachment.
resource "aws_subnet" "pub_subnet_generic" {
  vpc_id = "${aws_vpc.vpc.id}"

  # 1st available AZ
  availability_zone       = "${data.aws_availability_zones.available.names[0]}"
  cidr_block              = "10.0.255.0/24"
  map_public_ip_on_launch = true

  tags {
    Name = "${var.vpc_name}-vpn"
  }
}

resource "aws_route_table_association" "pub_subnet_generic" {
  subnet_id      = "${aws_subnet.pub_subnet_generic.id}"
  route_table_id = "${aws_route_table.pub_rt.id}"
}

# public subnet route table
resource "aws_route_table" "pub_rt" {
  vpc_id = "${aws_vpc.vpc.id}"

  route {
    cidr_block = "0.0.0.0/0"
    gateway_id = "${aws_internet_gateway.igw.id}"
  }

  tags {
    Name = "${var.vpc_name}-public"
  }
}

# private subnets
resource "aws_subnet" "priv_subnet" {
  count             = "${var.subnet_count}"
  vpc_id            = "${aws_vpc.vpc.id}"
  availability_zone = "${element(data.aws_availability_zones.available.names, count.index)}"
  cidr_block        = "${cidrsubnet(var.vpc_cidr, 8, count.index + 100)}"

  tags {
    Name = "${var.vpc_name}-${count.index}"
  }
}

resource "aws_route_table_association" "priv_subnet" {
  count          = "${var.subnet_count}"
  subnet_id      = "${aws_subnet.priv_subnet.*.id[count.index]}"
  route_table_id = "${aws_route_table.priv_rt.id}"
}

# private subnet route table
resource "aws_route_table" "priv_rt" {
  vpc_id           = "${aws_vpc.vpc.id}"
  propagating_vgws = ["${aws_vpn_gateway.vpg.id}"]

  route {
    cidr_block  = "0.0.0.0/0"
    instance_id = "${aws_instance.bastion.id}"
  }

  route {
    cidr_block = "${var.local_network_cidr}"
    gateway_id = "${aws_vpn_gateway.vpg.id}"
  }

  tags {
    Name = "${var.vpc_name}-private"
  }
}
