resource "oci_load_balancer" "lb-etcd" {
  count          = "${var.etcd_lb_enabled == "true" ? 1 : 0 }"
  shape          = "${var.shape}"
  compartment_id = "${var.compartment_ocid}"

  subnet_ids = ["${compact(list(var.etcd_subnet_0_id,var.etcd_subnet_1_id))}"]

  display_name = "${var.label_prefix}lb-etcd"
  is_private   = "${var.is_private}"
}

resource "oci_load_balancer_backendset" "lb-etcd-backendset-2379" {
  count            = "${var.etcd_lb_enabled == "true" ? 1 : 0 }"
  name             = "lb-backendset-etcd-2379"
  load_balancer_id = "${oci_load_balancer.lb-etcd.id}"
  policy           = "ROUND_ROBIN"

  health_checker {
    port                = "2379"
    protocol            = "TCP"
    response_body_regex = ".*"   # FIXME: this should not be needed
  }
}

resource "oci_load_balancer_backendset" "lb-etcd-backendset-2380" {
  count            = "${var.etcd_lb_enabled == "true" ? 1 : 0 }"
  name             = "lb-backendset-etcd-2380"
  load_balancer_id = "${oci_load_balancer.lb-etcd.id}"
  policy           = "ROUND_ROBIN"

  health_checker {
    port                = "2380"
    protocol            = "TCP"
    response_body_regex = ".*"   # FIXME: this should not be needed
  }
}

resource "oci_load_balancer_listener" "port-2379" {
  count                    = "${var.etcd_lb_enabled == "true" ? 1 : 0 }"
  load_balancer_id         = "${oci_load_balancer.lb-etcd.id}"
  name                     = "port-2379"
  default_backend_set_name = "${oci_load_balancer_backendset.lb-etcd-backendset-2379.name}"
  port                     = 2379
  protocol                 = "TCP"
}

resource "oci_load_balancer_listener" "port-2380" {
  count                    = "${var.etcd_lb_enabled == "true" ? 1 : 0 }"
  load_balancer_id         = "${oci_load_balancer.lb-etcd.id}"
  name                     = "port-2380"
  default_backend_set_name = "${oci_load_balancer_backendset.lb-etcd-backendset-2380.name}"
  port                     = 2380
  protocol                 = "TCP"
}

resource "oci_load_balancer_backend" "etcd-2379-backends-ad1" {
  load_balancer_id = "${oci_load_balancer.lb-etcd.id}"
  backendset_name  = "${oci_load_balancer_backendset.lb-etcd-backendset-2379.name}"
  count            = "${var.etcd_lb_enabled == "true" ? var.etcdAd1Count : 0}"
  ip_address       = "${element(var.etcd_ad1_private_ips, count.index)}"
  port             = "2379"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}

resource "oci_load_balancer_backend" "etcd-2379-backends-ad2" {
  load_balancer_id = "${oci_load_balancer.lb-etcd.id}"
  backendset_name  = "${oci_load_balancer_backendset.lb-etcd-backendset-2379.name}"
  count            = "${var.etcd_lb_enabled == "true" ? var.etcdAd2Count : 0}"
  ip_address       = "${element(var.etcd_ad2_private_ips, count.index)}"
  port             = "2379"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}

resource "oci_load_balancer_backend" "etcd-2379-backends-ad3" {
  load_balancer_id = "${oci_load_balancer.lb-etcd.id}"
  backendset_name  = "${oci_load_balancer_backendset.lb-etcd-backendset-2379.name}"
  count            = "${var.etcd_lb_enabled == "true" ? var.etcdAd3Count : 0}"
  ip_address       = "${element(var.etcd_ad3_private_ips, count.index)}"
  port             = "2379"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}

resource "oci_load_balancer_backend" "etcd-2380-backends-ad1" {
  load_balancer_id = "${oci_load_balancer.lb-etcd.id}"
  backendset_name  = "${oci_load_balancer_backendset.lb-etcd-backendset-2380.name}"
  count            = "${var.etcd_lb_enabled == "true" ? var.etcdAd1Count: 0}"
  ip_address       = "${element(var.etcd_ad1_private_ips, count.index)}"
  port             = "2380"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}

resource "oci_load_balancer_backend" "etcd-2380-backends-ad2" {
  load_balancer_id = "${oci_load_balancer.lb-etcd.id}"
  backendset_name  = "${oci_load_balancer_backendset.lb-etcd-backendset-2380.name}"
  count            = "${var.etcd_lb_enabled == "true" ? var.etcdAd2Count: 0}"
  ip_address       = "${element(var.etcd_ad2_private_ips, count.index)}"
  port             = "2380"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}

resource "oci_load_balancer_backend" "etcd-2380-backends-ad3" {
  load_balancer_id = "${oci_load_balancer.lb-etcd.id}"
  backendset_name  = "${oci_load_balancer_backendset.lb-etcd-backendset-2380.name}"
  count            = "${var.etcd_lb_enabled == "true" ? var.etcdAd3Count: 0}"
  ip_address       = "${element(var.etcd_ad3_private_ips, count.index)}"
  port             = "2380"
  backup           = false
  drain            = false
  offline          = false
  weight           = 1
}
