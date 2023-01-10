# Copyright 2020, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl
data "oci_core_subnet" "shardgroup_subnet" {
    count = "${length(var.shard_groups)}"
    #Required
    subnet_id = "${lookup(var.shard_groups[element(keys(var.shard_groups), count.index)], "subnet_id")}"
}