variable "dbname" {}
variable "username" {}
variable "machine_type" {}
variable "availability_type" {}
variable "disk_size" {
  default = 50
}
variable "postgres_version" {
  default = "POSTGRES_9_6"
}
variable "namespace" {}
variable "backup_start_time" {}
variable "labels" {}
variable "network" {}
