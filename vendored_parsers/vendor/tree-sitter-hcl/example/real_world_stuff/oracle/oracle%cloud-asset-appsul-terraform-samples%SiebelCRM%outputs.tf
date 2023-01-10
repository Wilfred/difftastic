/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


output "BastionPublicIPs" {
    value = ["${module.create_bastion.Bastion_Public_IPs}"]
}

output "SiebelServerPrivateIPs" {
    value = ["${module.create_app.ComputePrivateIPs}"]
}

output "SiebelWebServerPrivateIPs" {
    value = ["${module.create_web.ComputePrivateIPs}"]
}

output "SiebelGatewayServerPrivateIPs" {
    value = ["${module.create_app_gateway.ComputePrivateIPs}"]
}

output "SiebelFilesystemFstabs" {
    value = ["${module.create_fss.FilesystemFstabs}"]
}
