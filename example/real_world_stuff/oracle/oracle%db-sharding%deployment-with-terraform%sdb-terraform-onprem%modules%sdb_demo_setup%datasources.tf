# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

data "template_file" "deps_check_template" {
  template = "${file("${path.module}/scripts/deps_check.template.sh")}"

  vars = {
    oracle_base = "${var.oracle_base}"
  }
}