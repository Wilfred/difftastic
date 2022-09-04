# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

output "rendered_sdb_shard_catalog_config_template" {
  value = "${data.template_file.shard_catalog_config_template.rendered}"
}

output "rendered_sdb_shard_catalog_configure_deps_check" {
  value = "${data.template_file.shard_catalog_configure_deps_check_template.rendered}"
}