variable "ssh_public_key" {}
variable "ssh_private_key" {}

# Defines the number of instances to deploy
variable "NumInstances" {
  default = "2"
}

variable "instance_shape" {
  default = "VM.Standard1.1"
}

variable "instance_image_ocid" {
  type = "map"

  default = {
    // See https://docs.us-phoenix-1.oraclecloud.com/images/
    // Oracle-provided image "Oracle-Linux-7.5-2018.10.16-0"
    us-phoenix-1 = "ocid1.image.oc1.phx.aaaaaaaaoqj42sokaoh42l76wsyhn3k2beuntrh5maj3gmgmzeyr55zzrwwa"

    us-ashburn-1 = "ocid1.image.oc1.iad.aaaaaaaageeenzyuxgia726xur4ztaoxbxyjlxogdhreu3ngfj2gji3bayda"
  }
}

variable "BootStrapFile" {
  default = "./userdata/bootstrap.sh"
}

resource "oci_core_instance" "TFInstance" {
  count               = "${var.NumInstances}"
  availability_domain = "${lookup(data.oci_identity_availability_domains.ad-phx.availability_domains[count.index+1], "name")}"
  compartment_id      = "${var.compartment_ocid}"
  display_name        = "TF-Web-Server-${count.index+1}"
  shape               = "${var.instance_shape}"

  create_vnic_details {
    subnet_id        = "${oci_core_subnet.tf_web-subnet.id}"
    display_name     = "primaryvnic"
    assign_public_ip = true
    hostname_label   = "tfinstance${count.index+1}"
  }

  source_details {
    source_type = "image"
    source_id   = "${var.instance_image_ocid[var.region]}"
  }

  metadata = {
    ssh_authorized_keys = "${var.ssh_public_key}"
    # If you want to initialize the instance with a shell script
    user_data           = "${base64encode(templatefile("${path.module}/userdata/bootstrap.sh", { instance = count.index+1}))}"
    # If you want to initialize the instance with cloud-init
    #user_data           = "${base64encode(templatefile("${path.module}/userdata/cloud-config.yaml.tpl", { instance = count.index+1}))}"
  }
}

output "web-server-ips" {
  value = "${oci_core_instance.TFInstance.*.public_ip}"
}
