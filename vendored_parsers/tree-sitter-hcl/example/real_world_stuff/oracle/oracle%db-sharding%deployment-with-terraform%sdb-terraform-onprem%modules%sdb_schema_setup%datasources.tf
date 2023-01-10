# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

data "template_file" "system_sharding_schema_setup_template" {
  template = "${file("${path.module}/sql/system-sharding-schema-setup.template.ql")}"
  
  vars = {
    oracle_home = "${var.db_home_path}"
  }
}

data "template_file" "deps_check_template" {
  template = "${file("${path.module}/scripts/deps_check.template.sh")}"

  vars = {
    oracle_base = "${var.oracle_base}"
  }
}