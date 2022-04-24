/*Copyright © 2018, Oracle and/or its affiliates. All rights reserved.

The Universal Permissive License (UPL), Version 1.0*/


data "oci_core_services" "svcgtw_services" {
	filter {
		name = "name"
		#values = ["Test-Casper-Service", ".*ObjectStorage"]
		values = [".*Object.*Storage"]
		regex = true
	}
}
