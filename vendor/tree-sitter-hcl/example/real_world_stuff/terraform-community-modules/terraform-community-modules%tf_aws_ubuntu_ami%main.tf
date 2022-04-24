variable "region" {}
variable "distribution" {}
variable "architecture" {
  default = "amd64"
}
variable "virttype" {}
variable "storagetype" {
  default = "instance-store"
}

output "ami_id" {
    value = "${lookup(var.all_amis, format("%s-%s-%s-%s-%s", var.region, var.distribution, var.architecture, var.virttype, var.storagetype), "ERROR: no AMI matching '${format("%s-%s-%s-%s-%s", var.region, var.distribution, var.architecture, var.virttype, var.storagetype)}' found")}"
}
