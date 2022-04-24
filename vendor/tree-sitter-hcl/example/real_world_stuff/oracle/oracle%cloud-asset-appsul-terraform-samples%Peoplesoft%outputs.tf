/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/

output "BastionPublicIPs" {
    value = ["${module.create_bastion.Bastion_Public_IPs}"]
}

output "PsftAppServerPrivateIPs" {
    value = ["${module.create_app.ComputePrivateIPs}"]
}

output "PsftWebServerPrivateIPs" {
    value = ["${module.create_web.ComputePrivateIPs}"]
}

output "PsftProcSchdServerPrivateIPs" {
    value = ["${module.create_process_schd.ComputePrivateIPs}"]
}

output "PsftElasticSrchServerPrivateIPs" {
    value = ["${module.create_elastic_search.ComputePrivateIPs}"]
}

output "PsftToolsServerDetails" {
  value = "${formatlist("%s:%s:%s:   %s    ", module.create_ptools.ComputePrivateIPs, module.create_ptools.ComputeWinHostNames, module.create_ptools.ComputeWinusers, module.create_ptools.ComputeWincreds)}"
}

output "PsftFilesystemFstabs" {
    value = ["${module.create_fss.FilesystemFstabs}"]
}


