variable "region" {
  description = "Cloud region"
}
variable "project" {
  description = "Cloud GCP project"
}
variable "node_type" {
  description = "Machine type for nodes"
  default = "n1-standard-2"
}
variable "zone" {
  description = "availability zones"
}
variable "cluster_name" {
  description = "Name of your cluster  "
}
variable "nodes" {
  description = "Number of nodes of the cluster"
}
variable "regional_k8s" {
  description = "Set this to true if you want regional cluster with a master per zone"
  default = false
}
variable "network" {
  description = "The Network to be used for the K8s cluster"
  default = "default"
}
variable "subnetwork" {
  description = "The Network to be used for the K8s cluster"
}
variable "owner" {
  description = "Owner name to tag clusters"
}
variable "default_gke" {
  description = "Set it to true if you want to speed up GKE cluster creation by creating a default NodePool"
}
