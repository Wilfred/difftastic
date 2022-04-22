// Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.

output "image_id" {
  value = "${oci_core_instance.vm2.source_details.0.source_id}"
}

output "instance_id" {
  value = "${oci_core_instance.vm2.id}"
}

output "OGG_Microservices_Public_ip" {
  value = oci_core_instance.vm2.public_ip
}
