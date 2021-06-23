/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


variable load_balancer_subnet {
    type = "list"
}

variable "availability_domain" {
    type = "list"
    description = "Availability domain"
}

variable "AD" {
    type= "list"
}
variable load_balancer_name {}
variable compartment_ocid {}
variable load_balancer_shape {}
variable load_balancer_private {
    default = "True"
}
/*variable be1_ip_address1 {
    type="string"
}
*/


variable be_ip_addresses {
    type="list"
}
variable load_balancer_hostname {}

variable web_instance_listen_port {}
variable load_balancer_listen_port {}

variable web_instance_count {}