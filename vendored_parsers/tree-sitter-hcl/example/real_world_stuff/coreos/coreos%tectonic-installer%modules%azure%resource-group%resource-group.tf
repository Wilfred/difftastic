variable "external_rsg_id" {
  default = ""
  type    = "string"
}

variable "azure_location" {
  type = "string"
}

variable "cluster_name" {
  type = "string"
}

variable "cluster_id" {
  type = "string"
}

# Storage ID
resource "random_id" "storage_id" {
  byte_length = 2
}

variable "extra_tags" {
  type = "map"
}

resource "azurerm_resource_group" "tectonic_cluster" {
  count    = "${var.external_rsg_id == "" ? 1 : 0}"
  location = "${var.azure_location}"
  name     = "tectonic-cluster-${var.cluster_name}"

  tags = "${merge(map(
    "Name", "tectonic-cluster-${var.cluster_name}",
    "tectonicClusterID", "${var.cluster_id}"),
    var.extra_tags)}"
}

output "name" {
  value = "${var.external_rsg_id == "" ? element(concat(azurerm_resource_group.tectonic_cluster.*.name, list("")), 0) : element(split("/", var.external_rsg_id), 4)}"
}

output "storage_id" {
  value = "${random_id.storage_id.hex}"
}
