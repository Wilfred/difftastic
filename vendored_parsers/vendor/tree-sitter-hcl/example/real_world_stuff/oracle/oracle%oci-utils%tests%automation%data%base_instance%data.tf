// Copyright (c) 2021 Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown
// at http:/oss.oracle.com/licenses/upl.

data "http" "channel_rpm" {
  url = "http://${var.server_ip}/channel_rpms/${var.os_user}/"
}