variable "tectonic_aws_config_version" {
  description = <<EOF
(internal) This declares the version of the AWS configuration variables.
It has no impact on generated assets but declares the version contract of the configuration.
EOF

  default = "1.0"
}

variable "tectonic_aws_profile" {
  description = <<EOF
(optional) This declares the AWS credentials profile to use.
EOF

  type    = "string"
  default = "default"
}

variable "tectonic_aws_ssh_key" {
  type        = "string"
  description = "Name of an SSH key located within the AWS region. Example: coreos-user."
}

variable "tectonic_aws_master_ec2_type" {
  type        = "string"
  description = "Instance size for the master node(s). Example: `t2.medium`."
  default     = "t2.medium"
}

variable "tectonic_aws_worker_ec2_type" {
  type        = "string"
  description = "Instance size for the worker node(s). Example: `t2.medium`."
  default     = "t2.medium"
}

variable "tectonic_aws_etcd_ec2_type" {
  type = "string"

  description = <<EOF
  Instance size for the etcd node(s). Example: `t2.medium`. Read the [etcd recommended hardware](https://coreos.com/etcd/docs/latest/op-guide/hardware.html) guide for best performance
  EOF

  default = "t2.medium"
}

variable "tectonic_aws_etcd_extra_sg_ids" {
  description = <<EOF
(optional) List of additional security group IDs for etcd nodes.

Example: `["sg-51530134", "sg-b253d7cc"]`
EOF

  type    = "list"
  default = []
}

variable "tectonic_aws_assets_s3_bucket_name" {
  type    = "string"
  default = ""

  description = <<EOF
(optional) Unique name under which the Amazon S3 bucket will be created. Bucket name must start with a lower case name and is limited to 63 characters.
The Tectonic Installer uses the bucket to store tectonic assets and kubeconfig.
If name is not provided the installer will construct the name using "tectonic_cluster_name", current AWS region and "tectonic_base_domain"
EOF
}

variable "tectonic_aws_master_extra_sg_ids" {
  description = <<EOF
(optional) List of additional security group IDs for master nodes.

Example: `["sg-51530134", "sg-b253d7cc"]`
EOF

  type    = "list"
  default = []
}

variable "tectonic_aws_worker_extra_sg_ids" {
  description = <<EOF
(optional) List of additional security group IDs for worker nodes.

Example: `["sg-51530134", "sg-b253d7cc"]`
EOF

  type    = "list"
  default = []
}

variable "tectonic_aws_vpc_cidr_block" {
  type    = "string"
  default = "10.0.0.0/16"

  description = <<EOF
Block of IP addresses used by the VPC.
This should not overlap with any other networks, such as a private datacenter connected via Direct Connect.
EOF
}

variable "tectonic_aws_external_vpc_id" {
  type = "string"

  description = <<EOF
(optional) ID of an existing VPC to launch nodes into.
If unset a new VPC is created.

Example: `vpc-123456`
EOF

  default = ""
}

variable "tectonic_aws_private_endpoints" {
  default = true

  description = <<EOF
(optional) If set to true, create private-facing ingress resources (ELB, A-records).
If set to false, no private-facing ingress resources will be provisioned and all DNS records will be created in the public Route53 zone.
EOF
}

variable "tectonic_aws_public_endpoints" {
  default = true

  description = <<EOF
(optional) If set to true, create public-facing ingress resources (ELB, A-records).
If set to false, no public-facing ingress resources will be created.
EOF
}

variable "tectonic_aws_external_private_zone" {
  default = ""

  description = <<EOF
(optional) If set, the given Route53 zone ID will be used as the internal (private) zone.
This zone will be used to create etcd DNS records as well as internal API and internal Ingress records.
If set, no additional private zone will be created.

Example: `"Z1ILINNUJGTAO1"`
EOF
}

variable "tectonic_aws_external_master_subnet_ids" {
  type = "list"

  description = <<EOF
(optional) List of subnet IDs within an existing VPC to deploy master nodes into.
Required to use an existing VPC and the list must match the AZ count.

Example: `["subnet-111111", "subnet-222222", "subnet-333333"]`
EOF

  default = []
}

variable "tectonic_aws_external_worker_subnet_ids" {
  type = "list"

  description = <<EOF
(optional) List of subnet IDs within an existing VPC to deploy worker nodes into.
Required to use an existing VPC and the list must match the AZ count.

Example: `["subnet-111111", "subnet-222222", "subnet-333333"]`
EOF

  default = []
}

variable "tectonic_aws_extra_tags" {
  type        = "map"
  description = "(optional) Extra AWS tags to be applied to created resources."
  default     = {}
}

variable "tectonic_autoscaling_group_extra_tags" {
  type    = "list"
  default = []

  description = <<EOF
(optional) Extra AWS tags to be applied to created autoscaling group resources.
This is a list of maps having the keys `key`, `value` and `propagate_at_launch`.

Example: `[ { key = "foo", value = "bar", propagate_at_launch = true } ]`
EOF
}

variable "tectonic_dns_name" {
  type        = "string"
  default     = ""
  description = "(optional) DNS prefix used to construct the console and API server endpoints."
}

variable "tectonic_aws_etcd_root_volume_type" {
  type        = "string"
  default     = "gp2"
  description = "The type of volume for the root block device of etcd nodes."
}

variable "tectonic_aws_etcd_root_volume_size" {
  type        = "string"
  default     = "30"
  description = "The size of the volume in gigabytes for the root block device of etcd nodes."
}

variable "tectonic_aws_etcd_root_volume_iops" {
  type    = "string"
  default = "100"

  description = <<EOF
The amount of provisioned IOPS for the root block device of etcd nodes.
Ignored if the volume type is not io1.
EOF
}

variable "tectonic_aws_master_root_volume_type" {
  type        = "string"
  default     = "gp2"
  description = "The type of volume for the root block device of master nodes."
}

variable "tectonic_aws_master_root_volume_size" {
  type        = "string"
  default     = "30"
  description = "The size of the volume in gigabytes for the root block device of master nodes."
}

variable "tectonic_aws_master_root_volume_iops" {
  type    = "string"
  default = "100"

  description = <<EOF
The amount of provisioned IOPS for the root block device of master nodes.
Ignored if the volume type is not io1.
EOF
}

variable "tectonic_aws_worker_root_volume_type" {
  type        = "string"
  default     = "gp2"
  description = "The type of volume for the root block device of worker nodes."
}

variable "tectonic_aws_worker_root_volume_size" {
  type        = "string"
  default     = "30"
  description = "The size of the volume in gigabytes for the root block device of worker nodes."
}

variable "tectonic_aws_worker_root_volume_iops" {
  type    = "string"
  default = "100"

  description = <<EOF
The amount of provisioned IOPS for the root block device of worker nodes.
Ignored if the volume type is not io1.
EOF
}

variable "tectonic_aws_master_custom_subnets" {
  type    = "map"
  default = {}

  description = <<EOF
(optional) This configures master availability zones and their corresponding subnet CIDRs directly.

Example:
`{ eu-west-1a = "10.0.0.0/20", eu-west-1b = "10.0.16.0/20" }`
EOF
}

variable "tectonic_aws_worker_custom_subnets" {
  type    = "map"
  default = {}

  description = <<EOF
(optional) This configures worker availability zones and their corresponding subnet CIDRs directly.

Example: `{ eu-west-1a = "10.0.64.0/20", eu-west-1b = "10.0.80.0/20" }`
EOF
}

variable "tectonic_aws_region" {
  type        = "string"
  default     = "eu-west-1"
  description = "The target AWS region for the cluster."
}

variable "tectonic_aws_master_iam_role_name" {
  type    = "string"
  default = ""

  description = <<EOF
(optional) Name of IAM role to use for the instance profiles of master nodes.
The name is also the last part of a role's ARN.

Example:
 * Role ARN  = arn:aws:iam::123456789012:role/tectonic-installer
 * Role Name = tectonic-installer
EOF
}

variable "tectonic_aws_worker_iam_role_name" {
  type    = "string"
  default = ""

  description = <<EOF
(optional) Name of IAM role to use for the instance profiles of worker nodes.
The name is also the last part of a role's ARN.

Example:
 * Role ARN  = arn:aws:iam::123456789012:role/tectonic-installer
 * Role Name = tectonic-installer
EOF
}

variable "tectonic_aws_worker_load_balancers" {
  type    = "list"
  default = []

  description = <<EOF
(optional) List of ELBs to attach all worker instances to.
This is useful for exposing NodePort services via load-balancers managed separately from the cluster.

Example:
 * `["ingress-nginx"]`
EOF
}
