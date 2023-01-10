variable "tectonic_openstack_neutron_config_version" {
  description = <<EOF
(internal) This declares the version of the OpenStack Neutron configuration variables.
It has no impact on generated assets but declares the version contract of the configuration.
EOF

  default = "1.0"
}

variable "tectonic_openstack_master_flavor_name" {
  type    = "string"
  default = ""

  description = <<EOF
The flavor name for master instances as given in `openstack flavor list`. Specifies the size (CPU/Memory/Drive) of the VM.

Note: Set either tectonic_openstack_master_flavor_name or tectonic_openstack_master_flavor_id.
EOF
}

variable "tectonic_openstack_worker_flavor_name" {
  type    = "string"
  default = ""

  description = <<EOF
The flavor name for worker instances as given in `openstack flavor list`. Specifies the size (CPU/Memory/Drive) of the VM.

Note: Set either tectonic_openstack_worker_flavor_name or tectonic_openstack_worker_flavor_id.
EOF
}

variable "tectonic_openstack_etcd_flavor_name" {
  type    = "string"
  default = ""

  description = <<EOF
(optional) The flavor name for etcd instances as given in `openstack flavor list`. Specifies the size (CPU/Memory/Drive) of the VM.

Note: Set either tectonic_openstack_etcd_flavor_name or tectonic_openstack_etcd_flavor_id.
Note: This value is ignored for self-hosted etcd.
EOF
}

variable "tectonic_openstack_master_flavor_id" {
  type    = "string"
  default = ""

  description = <<EOF
The flavor id for master instances as given in `openstack flavor list`. Specifies the size (CPU/Memory/Drive) of the VM.

Note: Set either tectonic_openstack_master_flavor_name or tectonic_openstack_master_flavor_id.
EOF
}

variable "tectonic_openstack_worker_flavor_id" {
  type    = "string"
  default = ""

  description = <<EOF
The flavor id for worker instances as given in `openstack flavor list`. Specifies the size (CPU/Memory/Drive) of the VM.

Note: Set either tectonic_openstack_worker_flavor_name or tectonic_openstack_worker_flavor_id.
EOF
}

variable "tectonic_openstack_etcd_flavor_id" {
  type    = "string"
  default = ""

  description = <<EOF
(optional) The flavor id for etcd instances as given in `openstack flavor list`. Specifies the size (CPU/Memory/Drive) of the VM.

Note: Set either tectonic_openstack_etcd_flavor_name or tectonic_openstack_etcd_flavor_id.
Note: This value is ignored for self-hosted etcd.
EOF
}

variable "tectonic_openstack_image_name" {
  type    = "string"
  default = ""

  description = <<EOF
The image ID as given in `openstack image list`. Specifies the OS image of the VM.

Note: Set either tectonic_openstack_image_name or tectonic_openstack_image_id.
EOF
}

variable "tectonic_openstack_image_id" {
  type    = "string"
  default = ""

  description = <<EOF
The image ID as given in `openstack image list`. Specifies the OS image of the VM.

Note: Set either tectonic_openstack_image_name or tectonic_openstack_image_id.
EOF
}

variable "tectonic_openstack_external_gateway_id" {
  type = "string"

  description = <<EOF
The ID of the network to be used as the external internet gateway as given in `openstack network list`.
EOF
}

variable "tectonic_openstack_floatingip_pool" {
  type    = "string"
  default = "public"

  description = <<EOF
The name name of the floating IP pool
as given in `openstack floating ip list`.
This pool will be used to assign floating IPs to worker and master nodes.
EOF
}

variable "tectonic_openstack_subnet_cidr" {
  type    = "string"
  default = "192.168.1.0/24"

  description = <<EOF
The subnet CIDR for the master/worker/etcd compute nodes.
This CIDR will also be assigned to the created the OpenStack subnet resource.
EOF
}

variable "tectonic_openstack_dns_nameservers" {
  type    = "list"
  default = ["8.8.8.8", "8.8.4.4"]

  description = <<EOF
The nameservers used by the nodes and the generated OpenStack subnet resource.

Example: `["8.8.8.8", "8.8.4.4"]`
EOF
}

variable "tectonic_openstack_lb_provider" {
  type    = "string"
  default = ""

  description = <<EOF
The name of a valid provider to provision the load balancer. This will depend on
how your OpenStack environment is configured.

Common options are: octavia, haproxy, f5, brocade, etc.

Please look at the OpenStack documentation for more details:
https://developer.openstack.org/api-ref/networking/v2/index.html?expanded=create-a-load-balancer-detail#lbaas-2-0-stable
EOF
}

variable "tectonic_openstack_disable_floatingip" {
  default = false

  description = <<EOF
Disable floating ip assignments for k8s nodes.
Warning: Enabling this option removes direct internet access,
which prevents NodePorts from working.
EOF
}
