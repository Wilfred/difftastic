/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable "compartment_ocid" {}

variable "be1_ip_address1" {
    type="list"
}

variable "app_instance_count" {}

variable "load_balancer_count" {}

variable "load_balancer_private" {
    default = "True"
}

variable "load_balancer_name" {
}

variable "load_balancer_shape" {
  default = "100Mbps"
}

variable "load_balancer_protocol" {}

variable "load_balancer_subnet" {
  type = "list"
}

variable "load_balancer_listen_port" {
  type = "list"
  default= ["6017", "6018", "6019", "6020", "6021", "6022"]
}

variable "app_instance_listen_port" {
  type = "list"
  default= ["6017", "6018", "6019", "6020", "6021", "6022"]
}
