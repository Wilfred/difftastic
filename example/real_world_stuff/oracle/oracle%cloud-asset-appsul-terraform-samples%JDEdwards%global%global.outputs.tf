/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


output "vcn_id" {
  value = "${module.create_vcn.vcn_id}"
}
output "bastion_public_ip" {
  value = ["${module.create_bastion.Bastion_Public_IPs}"]
}



output "bassubid" {
  value = ["${module.bas_subnet.subnet_ids}"]
}

output "psntsubid" {
  value = ["${module.psnt_subnet.subnet_ids}"]
}

output "midsubid" {
  value = ["${module.mid_subnet.subnet_ids}"]
}

output "dbsubid" {
  value = ["${module.db_subnet.subnet_ids}"]
} 

output "adminsubid" {
  value = ["${module.admin_subnet.subnet_ids}"]
} 

output "lbsubid" {
  value = ["${module.lb_subnet.subnet_ids}"]
} 

output "bassubname" {
  value = ["${module.bas_subnet.subnet_names}"]
}



output "adminsubname" {
  value = ["${module.admin_subnet.subnet_names}"]
}

output "psntsubname" {
  value = ["${module.psnt_subnet.subnet_names}"]
}

output "midsubname" {
  value = ["${module.mid_subnet.subnet_names}"]
}

output "dbsubname" {
  value = ["${module.db_subnet.subnet_names}"]
}

output "lbsubname" {
  value = ["${module.lb_subnet.subnet_names}"]
}
