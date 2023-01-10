/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


output "FilesystemPrivateIPs" {
  description = "FSS Private IPs"
  value       = "${data.template_file.fss_ips.*.rendered}"
}

output "FilesystemExports" {
  description = "FSS Exports"
  value       = "${local.fss_exports}"
}

output "FilesystemFstabs" {
  description = "FSS /etc/fstab Entries"
  value       = "${local.fss_fstabs}"
}