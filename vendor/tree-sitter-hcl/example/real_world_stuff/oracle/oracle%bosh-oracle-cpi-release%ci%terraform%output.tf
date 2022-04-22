output vcn {
  value = "${var.director_vcn}"
}
output subnet_id {
  value = "${oci_core_subnet.director_subnet.id}"

}
output compartment_id {
   value = "${oci_core_subnet.director_subnet.compartment_id}"
}

output ad {
  value = "${oci_core_subnet.director_subnet.availability_domain}"
}

output subnet_name {
  value = "${oci_core_subnet.director_subnet.display_name}"
}
output subnet_cidr {
  value = "${oci_core_subnet.director_subnet.cidr_block}"
}

output subnet_gw {
  value = "${cidrhost(oci_core_subnet.director_subnet.cidr_block, 1)}"
}

output subnet_first_ip {
   value = "${cidrhost(oci_core_subnet.director_subnet.cidr_block, 2)}"
}

output bats_subnet1_name {
   value = "${oci_core_subnet.bats_subnet1.display_name}"
}

output bats_subnet1_cidr {
   value = "${oci_core_subnet.bats_subnet1.cidr_block}"
}

output bats_subnet1_gw {
   value ="${cidrhost(oci_core_subnet.bats_subnet1.cidr_block, 1)}"
}

output bats_subnet1_reserved {
   value = "${cidrhost(oci_core_subnet.bats_subnet1.cidr_block, 2)} - ${cidrhost(oci_core_subnet.bats_subnet1.cidr_block, 9)}"
}

output bats_subnet1_static {
   value = "${cidrhost(oci_core_subnet.bats_subnet1.cidr_block, 10)} - ${cidrhost(oci_core_subnet.bats_subnet1.cidr_block, 30)}"
}

output bats_subnet1_static_ip {
   value = "${cidrhost(oci_core_subnet.bats_subnet1.cidr_block, 30)}"
}

output bats_subnet2_name {
   value = "${oci_core_subnet.bats_subnet2.display_name}"
}

output bats_subnet2_cidr {
   value = "${oci_core_subnet.bats_subnet2.cidr_block}"
}

output bats_subnet2_gw {
   value ="${cidrhost(oci_core_subnet.bats_subnet2.cidr_block, 1)}"
}

output bats_subnet2_reserved {
   value = "${cidrhost(oci_core_subnet.bats_subnet2.cidr_block, 2)} - ${cidrhost(oci_core_subnet.bats_subnet2.cidr_block, 9)}"
}

output bats_subnet2_static {
   value = "${cidrhost(oci_core_subnet.bats_subnet2.cidr_block, 10)} - ${cidrhost(oci_core_subnet.bats_subnet2.cidr_block, 30)}"
}

output bats_subnet2_static_ip {
   value = "${cidrhost(oci_core_subnet.bats_subnet2.cidr_block, 30)}"
}

/*
output director_subnet {
  value = <<EOS
{
   "subnet_id" : "${oci_core_subnet.director_subnet.id}",
   "compartment_id" : "${oci_core_subnet.director_subnet.compartment_id}",
   "ad" : "${oci_core_subnet.director_subnet.availability_domain}",
   "vcn":  "${var.director_vcn}",
   "subnet_name" : "${oci_core_subnet.director_subnet.display_name}",
   "subnet_cidr" : "${oci_core_subnet.director_subnet.cidr_block}",
   "subnet_gw" : "${cidrhost(oci_core_subnet.director_subnet.cidr_block, 1)}",
   "director_ip" : "${cidrhost(oci_core_subnet.director_subnet.cidr_block, 2)}"

}
EOS
}
*/
