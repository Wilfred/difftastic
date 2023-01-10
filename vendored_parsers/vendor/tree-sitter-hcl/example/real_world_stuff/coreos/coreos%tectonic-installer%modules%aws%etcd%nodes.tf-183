locals {
  ami_owner = "595879546273"
  arn       = "aws"
}

data "aws_ami" "coreos_ami" {
  filter {
    name   = "name"
    values = ["CoreOS-${var.container_linux_channel}-${var.container_linux_version}-*"]
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
    values = ["${local.ami_owner}"]
  }
}

resource "aws_iam_instance_profile" "etcd" {
  count = "${length(var.external_endpoints) == 0 ? 1 : 0}"
  name  = "${var.cluster_name}-etcd-profile"

  role = "${var.etcd_iam_role == "" ?
    join("|", aws_iam_role.etcd_role.*.name) :
    join("|", data.aws_iam_role.etcd_role.*.name)
  }"
}

data "aws_iam_role" "etcd_role" {
  count = "${var.etcd_iam_role == "" ? 0 : 1}"
  name  = "${var.etcd_iam_role}"
}

resource "aws_iam_role" "etcd_role" {
  count = "${length(var.external_endpoints) == 0 && var.etcd_iam_role == "" ? 1 : 0}"
  name  = "${var.cluster_name}-etcd-role"
  path  = "/"

  assume_role_policy = <<EOF
{
    "Version": "2012-10-17",
    "Statement": [
        {
            "Action": "sts:AssumeRole",
            "Principal": {
                "Service": "ec2.amazonaws.com"
            },
            "Effect": "Allow",
            "Sid": ""
        }
    ]
}
EOF
}

resource "aws_iam_role_policy" "etcd" {
  count = "${var.etcd_iam_role == "" ? 1 : 0}"
  name  = "${var.cluster_name}_etcd_policy"
  role  = "${aws_iam_role.etcd_role.id}"

  policy = <<EOF
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Effect": "Allow",
      "Action": "ec2:Describe*",
      "Resource": "*"
    },
    {
      "Effect": "Allow",
      "Action": "ec2:AttachVolume",
      "Resource": "*"
    },
    {
      "Effect": "Allow",
      "Action": "ec2:DetachVolume",
      "Resource": "*"
    },
    {
      "Action": [
        "ecr:DescribeRepositories",
        "ecr:ListImages",
        "ecr:BatchGetImage"
      ],
      "Resource": "*",
      "Effect": "Allow"
    },
    {
      "Action" : [
        "s3:GetObject"
      ],
      "Resource": "arn:${local.arn}:s3:::*",
      "Effect": "Allow"
    }
  ]
}
EOF
}

resource "aws_instance" "etcd_node" {
  count = "${length(var.external_endpoints) == 0 ? var.instance_count : 0}"
  ami   = "${coalesce(var.ec2_ami, data.aws_ami.coreos_ami.image_id)}"

  iam_instance_profile   = "${aws_iam_instance_profile.etcd.name}"
  instance_type          = "${var.ec2_type}"
  key_name               = "${var.ssh_key}"
  subnet_id              = "${element(var.subnets, count.index)}"
  user_data              = "${data.ignition_config.s3.*.rendered[count.index]}"
  vpc_security_group_ids = ["${var.sg_ids}"]

  lifecycle {
    # Ignore changes in the AMI which force recreation of the resource. This
    # avoids accidental deletion of nodes whenever a new CoreOS Release comes
    # out.
    ignore_changes = ["ami"]
  }

  tags = "${merge(map(
      "Name", "${var.cluster_name}-etcd-${count.index}",
      "kubernetes.io/cluster/${var.cluster_name}", "owned",
      "tectonicClusterID", "${var.cluster_id}"
    ), var.extra_tags)}"

  root_block_device {
    volume_type = "${var.root_volume_type}"
    volume_size = "${var.root_volume_size}"
    iops        = "${var.root_volume_type == "io1" ? var.root_volume_iops : var.root_volume_type == "gp2" ? min(10000, max(100, 3 * var.root_volume_size)) : 0}"
  }

  volume_tags = "${merge(map(
    "Name", "${var.cluster_name}-etcd-${count.index}-vol",
    "kubernetes.io/cluster/${var.cluster_name}", "owned",
    "tectonicClusterID", "${var.cluster_id}"
  ), var.extra_tags)}"
}
