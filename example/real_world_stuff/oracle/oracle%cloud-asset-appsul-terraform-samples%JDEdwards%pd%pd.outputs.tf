/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


output "WLShostNames" {
    value = ["${module.create_wls.HostNames}"]
}
output "WLSPrivateIPs" {
    value = ["${module.create_wls.PrvIPs}"]
}

output "LogicPrivateIPs" {
    value = ["${module.create_logic.PrvIPs}"]
}

output "LogichostNames" {
    value = ["${module.create_logic.HostNames}"]
}

output "BatchPrivateIPs" {
    value = ["${module.create_batch.PrvIPs}"]
}

output "BatchhostNames" {
    value = ["${module.create_batch.HostNames}"]
}

output "SMPrivateIPs" {
    value = ["${module.create_sm.PrvIPs}"]
}

output "SMhostNames" {
    value = ["${module.create_sm.HostNames}"]
}

output "DepPrivateIP" {
    value = ["${module.create_depsvr.PrvIPs}"]
}

output "DephostName" {
    value = ["${module.create_depsvr.HostNames}"]
}

output "DBhostNames" {
    value = ["${module.create_db.DBNodeHostname}"]
}

output "LogicLBPrivateIPs" {
    value = ["${module.create_logic_lb.lb_private_ip}"]
}

output "BatchLBPrivateIPs" {
    value = ["${module.create_batch_lb.lb_private_ip}"]
}

output "DNS_Zone" {
    value = "${module.create_dns.zones}"
}

output "DNS_Records" {
    value = "${module.create_dns.records}"
}
