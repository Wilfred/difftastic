/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


output "BastionPublicIPs" {
    value = ["${module.create_bastion.Bastion_Public_IPs}"]
}

output "ApplicationPrivateIPs" {
    value = ["${module.create_app.AppsPrvIPs}"]
}

output "FSSDetails" {
    value = ["${module.create_app.FSSFstabs}"]
}
