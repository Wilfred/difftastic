resource "vsphere_virtual_machine" "etcd_node" {
  count         = "${length(var.external_endpoints) == 0 ? var.instance_count : 0}"
  name          = "${var.hostname["${count.index}"]}"
  datacenter    = "${var.vmware_datacenters["${count.index}"]}"
  cluster       = "${var.vmware_clusters["${count.index}"]}"
  resource_pool = "${var.vmware_resource_pool["${count.index}"]}"
  vcpu          = "${var.vm_vcpu}"
  memory        = "${var.vm_memory}"
  folder        = "${var.vmware_folder}"
  domain        = "${var.base_domain}"

  network_interface {
    label = "${var.vm_network_labels["${count.index}"]}"
  }

  disk {
    datastore = "${var.vm_disk_datastores["${count.index}"]}"
    template  = "${var.vm_disk_template_folder}/${var.vm_disk_template}"
    type      = "thin"
  }

  custom_configuration_parameters {
    guestinfo.coreos.config.data.encoding = "base64"
    guestinfo.coreos.config.data          = "${base64encode(data.ignition_config.etcd.*.rendered[count.index])}"
  }
}
