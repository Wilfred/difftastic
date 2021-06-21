locals {
  "bootstrapping_host" = "${var.tectonic_azure_private_cluster ?
    module.vnet.master_private_ip_addresses[0] :
    module.vnet.api_fqdn}"
}

module "bootstrapper" {
  source = "github.com/coreos/tectonic-installer//modules/bootstrap-ssh?ref=0a22c73d39f67ba4bb99106a9e72322a47179736"

  _dependencies = [
    "${module.masters.master_vm_ids}",
    "${module.etcd.etcd_vm_ids}",
    "${module.etcd_certs.id}",
    "${module.bootkube.id}",
    "${module.tectonic.id}",
    "${module.flannel_vxlan.id}",
    "${module.calico.id}",
    "${module.canal.id}",
  ]

  bootstrapping_host = "${local.bootstrapping_host}"
}
