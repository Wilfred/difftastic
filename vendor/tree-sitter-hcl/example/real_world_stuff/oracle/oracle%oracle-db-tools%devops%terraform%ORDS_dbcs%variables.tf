# Variables for ORDS Only install
# Please fill in the xxxxxx with your account values

variable "region" {
  # sample: eu-frankfurt-1
  default = "xxxxxx"
}


variable "tenancy_ocid" {
  # OCID of your OCI Account Tenancy
  default = "xxxxxx"
}

variable "vcn_ocid" {
# if using an existing VCN, add the OCID here:
# Assumption is that the vcn cidr = "10.0.0.0/16"
# If using a different CIDR, you will need to make the changes in the terraform file
#
  default = "xxxxx"

}


variable "vm_shape" {
  # shape/type of VM
  # choose from: VM.Standard.E2.1.Micro, VM.Standard.E4.Flex, VM.Standard.A1.Flex
  # if using VM.Standard.E4.Flex or VM.Standard.A1.Flex you must add the folowing lines to define the shape
  # for VM.Standard.A1.Flex, you can have up to 4 OCPUs and 24 gb of memory for free.
  #	shape_config {
	#	memory_in_gbs = "24"
	#	ocpus = "4"
	# }
  default = "xxxxxx"
}

variable "number_of_midtiers" {
  # how many midtiers you want to create
  default = 1
}


## These Variables are not used at this time

# variable "ssh_public_key" {
#   default = "xxxxxx"  
# }

# variable "ssh_private_key" {
#   default = "xxxxxx"
# }