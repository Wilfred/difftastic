# Authentication
variable "oci_tenancy_ocid" {}
variable "oci_user_ocid" {}
variable "oci_fingerprint" {}
variable "oci_private_key_path" {}
variable "oci_region" {
    default = "us-phoenix-1"
}

# Identity
variable "bosh_compartment_name" {
    default = "bosh"
}
variable "bosh_user_name" {
    default = "bosh"
}
variable "bosh_group_name" {
    default = "bosh"
}

variable "bosh_api_public_key" {
    default = "./keys/bosh-api-public-key.pem"
}

variable "bosh_api_private_key" {
    default = "./keys/bosh-api-private-key.pem"
}

variable "bosh_api_fingerprint" {
    default = "./keys/bosh-api-fingerprint"
}

variable "bosh_ssh_public_key" {
    default = "./keys/bosh-ssh.pub"
}
variable "bosh_ssh_private_key" {
    default = "./keys/bosh-ssh"
}
variable "bosh_ssh_username" {
    default = "vcap"
}

# Networking

variable "vpc_cidr" {
    default = "10.0.0.0/16"
}

variable "public_subnet_ad1_cidr" {
    default = "10.0.1.0/24"
}

variable "bastion_subnet_ad1_cidr" {
    default = "10.0.2.0/24"
}
variable "director_subnet_ad1_cidr" {
    default = "10.0.3.0/24"
}

variable "private_subnet_ad1_cidr" {
    default = "10.0.4.0/24"
}

variable "public_subnet_ad2_cidr" {
    default = "10.0.5.0/24"
}

variable "private_subnet_ad2_cidr" {
    default = "10.0.6.0/24"
}

variable "private_subnet_ad3_cidr" {
    default = "10.0.7.0/24"
}

# Bastion VM

# Choose an Availability Domain for the Bastion instance.
variable "bastion_ad" {
    default = "1"
}

variable "bastion_image_id" {
    default = "ocid1.image.oc1.phx.aaaaaaaaxsufrpzn72dvhry5swbuwnuldcn3eko3cx6g7z4tw4qfwkq2zkra"
}

variable "bastion_boot_timeout_minutes" {
    default = 5
}

variable "bastion_instance_shape" {
    default = "VM.Standard1.1"
}

variable "bastion_instance_os" {
    default = "Ubuntu"
}

variable "bastion_instance_os_version" {
    default = "16.04"
}

variable "256GB" {
    default = "256"
}

variable "bastion_bootstrap_file" {
    default = "./userdata/bootstrap"
}
