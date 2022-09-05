# Copyright (c) 1999, 2019, Oracle and/or its affiliates. All rights reserved.
#
# Licensed under the Universal Permissive License v 1.0 as shown
# at http://oss.oracle.com/licenses/upl

output "BastionHostAddresses" {
  value = "${format("Public IP addresses (ssh connect string) of bastion host(s):\n%s",join("",formatlist("ssh opc@%s\n",oci_core_instance.bs_instance.*.public_ip)))}"
}
output "DatabaseHostAddresses" {
  value = "${format("Private IP addresses of database hosts:\n%s",join("",formatlist("%s %s\n",oci_core_instance.di_instance.*.hostname_label,oci_core_instance.di_instance.*.private_ip)))}"
}
output "ManagementHostAddresses" {
  value = "${format("Private IP addresses of mgmt hosts if offloaded from database hosts:\n%s",join("",formatlist("%s %s\n",oci_core_instance.mg_instance.*.hostname_label,oci_core_instance.mg_instance.*.private_ip)))}"
}
output "ZookeeperHostAddresses" {
  value = "${format("Private IP addresses of zookeeper hosts if offloaded:\n%s",join("",formatlist("%s %s\n",oci_core_instance.zk_instance.*.hostname_label,oci_core_instance.zk_instance.*.private_ip)))}"
}
output "ClientHostAddresses" {
  value = "${format("Private IP addresses of client hosts if any:\n%s",join("",formatlist("%s %s\n",oci_core_instance.cl_instance.*.hostname_label,oci_core_instance.cl_instance.*.private_ip)))}"
}

