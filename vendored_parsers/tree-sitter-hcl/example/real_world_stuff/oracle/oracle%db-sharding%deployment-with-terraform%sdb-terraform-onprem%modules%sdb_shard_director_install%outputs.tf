# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

output "rendered_shard_director_env_template" {
  value = "${data.template_file.shard_director_env_template.rendered}"
}

output "rendered_shard_director_worker_template" {
  value = "${data.template_file.shard_director_worker_template.rendered}"
}

output "rendered_shard_director_rsp_template" {
  value = "${data.template_file.shard_director_rsp_template.rendered}"
}

output "rendered_deps_check" {
  value = "${data.template_file.deps_check_template.rendered}"
}