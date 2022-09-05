# placeholders for access_key / secret_key
# should be fed through env var or variable file
# https://www.terraform.io/docs/configuration/variables.html

variable "vpc_name" {
  description = "The name of the VPC to identify created resources."
  default     = "bastion"
}

variable "instance_type" {
  description = "The type of the ec2 machine."
  default     = "t2.micro"
}

variable "base_domain" {
  default     = "tectonic-ci.de"
  description = "The base domain for this cluster's FQDN"
}

variable "vpc_aws_region" {
  description = "The target AWS region for the cluster"
  default     = "us-gov-west-1"
}

variable "vpc_cidr" {
  default     = "10.0.0.0/16"
  description = "The CIDR range used for your entire VPC"
}

variable "subnet_count" {
  default     = 4
  description = "Number of private subnets to pre-create"
}

variable "local_network_cidr" {
  default     = "10.7.0.0/16"
  description = "IP range in the network your laptop is on (dosn't actually matter unless your instances need to connect to the local network your laptop is on)"
}

variable "ssh_key" {
  description = "Name of an SSH key located within the AWS region. Example: coreos-user."
  default     = ""
}

variable "nginx_username" {
  description = "Used for retrieving the OpenVPN client config file."
}

variable "nginx_password" {
  description = "Used for retrieving the OpenVPN client config file."
}

variable "mysql_password" {
  description = "Used as PowerDNS backend."
}

variable "pdns_api_key" {
  description = "Used by clients to communicate with the PowerDNS API."
}

variable "container_images" {
  description = "Container images to use"
  type        = "map"

  default = {
    powerdns = "quay.io/coreos/pdns:20678f8bffc316579367d885ca4fcb229b1dbc1d"
    mysql    = "quay.io/coreos/mysql:5.7.21"
    openvpn  = "quay.io/coreos/openvpn:2.4"
    nginx    = "quay.io/coreos/nginx:1.13.7-alpine"
  }
}

output "ovpn_url" {
  value = "http://${aws_eip.ovpn_eip.public_ip}"
}

output "base_domain" {
  value = "${var.base_domain}"
}

output "vpc_id" {
  value = "${aws_vpc.vpc.id}"
}

output "vpc_dns_ip" {
  value = "${aws_instance.bastion.private_ip}"
}

output "dns_api_url" {
  value = "http://${aws_instance.bastion.private_ip}:8081"
}

output "subnets" {
  value = "${aws_subnet.priv_subnet.*.id}"
}
