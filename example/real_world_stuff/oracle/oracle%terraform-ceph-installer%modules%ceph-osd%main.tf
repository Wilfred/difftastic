#------------------------------------------------------------------------------------
# Get a list of Availability Domains
#------------------------------------------------------------------------------------
data "oci_identity_availability_domains" "ADs" {
  compartment_id = "${var.tenancy_ocid}"
}

#------------------------------------------------------------------------------------
# Get the OCID of the OS image to use
#------------------------------------------------------------------------------------
data "oci_core_images" "image_ocid" {
  compartment_id = "${var.compartment_ocid}"
  display_name = "${var.instance_os}"
}

#------------------------------------------------------------------------------------
# Create Ceph OSD Server Instances
#------------------------------------------------------------------------------------
resource "oci_core_instance" "instance" {
  count = "${var.instance_count}"
  availability_domain =  "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.availability_domain_index_list[count.index] - 1],"name")}"
  compartment_id = "${var.compartment_ocid}"
  display_name = "${var.hostname_prefix}-${count.index}"
  hostname_label = "${var.hostname_prefix}-${count.index}"
  shape = "${var.shape}"
  subnet_id = "${var.subnet_id_list[var.availability_domain_index_list[count.index] - 1]}"
  source_details {
    source_type = "image"
    source_id = "${lookup(data.oci_core_images.image_ocid.images[0], "id")}"
  }
  metadata {
    ssh_authorized_keys = "${file(var.ssh_public_key_file)}"
  }
  connection {
    host = "${self.private_ip}"
    type = "ssh"
    user = "${var.ssh_username}"
    private_key = "${file(var.ssh_private_key_file)}"
  }
  provisioner "remote-exec" {
    inline = [
      " mkdir ~/${var.scripts_dst_directory}",
    ]
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/ceph.config"
    destination = "~/${var.scripts_dst_directory}/ceph.config"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/vm_init.sh"
    destination = "~/${var.scripts_dst_directory}/vm_init.sh"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/vm_pre_setup.sh"
    destination = "~/${var.scripts_dst_directory}/vm_pre_setup.sh"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/vm_setup.sh"
    destination = "~/${var.scripts_dst_directory}/vm_setup.sh"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/vm_post_setup.sh"
    destination = "~/${var.scripts_dst_directory}/vm_post_setup.sh"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/yum_repo_setup.sh"
    destination = "~/${var.scripts_dst_directory}/yum_repo_setup.sh"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/ceph_yum_repo"
    destination = "~/${var.scripts_dst_directory}/ceph_yum_repo"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/ceph_firewall_setup.sh"
    destination = "~/${var.scripts_dst_directory}/ceph_firewall_setup.sh"
  }
  timeouts {
    create = "${var.instance_create_timeout}"
  }
}

#-----------------------------------------------------------------------------------
# Create Storage for the Ceph OSD Instances
#------------------------------------------------------------------------------------
module "storage" {
  source = "./storage"
  instance_count = "${var.instance_count * var.create_volume}"
  instance_id  = "${oci_core_instance.instance.*.id}"
  compartment_id = "${var.compartment_ocid}"
  availability_domain =  "${data.oci_identity_availability_domains.ADs.availability_domains}"
  availability_domain_index =  "${var.availability_domain_index_list}"
  volume_name_prefix = "${var.volume_name_prefix}"
  volume_size_in_gbs = "${var.volume_size_in_gbs}"
  volume_attachment_type = "${var.volume_attachment_type}"
  host_addresses = "${oci_core_instance.instance.*.private_ip}"
  ssh_private_key = "${file(var.ssh_private_key_file)}"
}

#------------------------------------------------------------------------------------
# Initialize the VM
#------------------------------------------------------------------------------------
resource "null_resource" "vm_init" {
  depends_on = ["oci_core_instance.instance"]
  count = "${var.instance_count}"
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${element(oci_core_instance.instance.*.private_ip, count.index)}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "cd ${var.scripts_dst_directory}",
      "chmod +x vm_init.sh",
      "./vm_init.sh osd"
    ]
  }
}

#------------------------------------------------------------------------------------
# Setup the VM.
# Setup involves:
# 1. Pre Setup
# 2. Waiting (adding delay for the duration specified in the ceph.config file)
# 3. Setup
# 4. Waiting (adding delay for the duration specified in the ceph.config file)
# 5. Post Setup
#------------------------------------------------------------------------------------
resource "null_resource" "vm_pre_setup" {
  depends_on = ["null_resource.vm_init"]
  count = "${var.instance_count}"
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${element(oci_core_instance.instance.*.private_ip, count.index)}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "cd ${var.scripts_dst_directory}",
      "chmod +x vm_pre_setup.sh",
      "./vm_pre_setup.sh osd"
    ]
  }
}

resource "null_resource" "delay_before" {
  count = "${var.instance_count}"
  provisioner "local-exec" {
    command = "cd ${var.scripts_src_directory}; ./delay.sh before_setup"
  }
  triggers = {
    "before" = "${element(null_resource.vm_pre_setup.*.id, count.index)}"
  }
}

resource "null_resource" "vm_setup" {
  depends_on = ["null_resource.delay_before"]
  count = "${var.instance_count}"
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${element(oci_core_instance.instance.*.private_ip, count.index)}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "cd ${var.scripts_dst_directory}",
      "chmod +x vm_setup.sh",
      "./vm_setup.sh osd"
    ]
  }
}

resource "null_resource" "delay_after" {
  count = "${var.instance_count}"
  provisioner "local-exec" {
    command = "cd ${var.scripts_src_directory}; ./delay.sh after_setup"
  }
  triggers = {
    "before" = "${element(null_resource.vm_setup.*.id, count.index)}"
  }
}

resource "null_resource" "vm_post_setup" {
  depends_on = ["null_resource.delay_after"]
  count = "${var.instance_count}"
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${element(oci_core_instance.instance.*.private_ip, count.index)}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "cd ${var.scripts_dst_directory}",
      "chmod +x vm_post_setup.sh",
      "./vm_post_setup.sh osd"
    ]
  }
}
#------------------------------------------------------------------------------------
# Setup Ceph OSD Instances
#------------------------------------------------------------------------------------
resource "null_resource" "setup" {
  depends_on = ["null_resource.vm_post_setup"]
  count = "${var.instance_count}"
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${element(oci_core_instance.instance.*.private_ip, count.index)}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "cd ${var.scripts_dst_directory}",
      "chmod +x yum_repo_setup.sh",
      "./yum_repo_setup.sh",
      "chmod +x ceph_firewall_setup.sh",
      "./ceph_firewall_setup.sh osd"
    ]
  }
}

#------------------------------------------------------------------------------------
# Passwordless SSH Setup (from deployer to OSDs)
# - Get the ssh key from the Ceph Deployer Instance and install on OSDs
#------------------------------------------------------------------------------------
resource "null_resource" "wait_for_deployer_deploy" {
  depends_on = ["null_resource.setup"]
  provisioner "local-exec" {
    command = "echo 'Waited for Deployer Deploy(${var.deployer_deploy}) to complete'"
  }
}

resource "null_resource" "copy_key" {
  depends_on = ["null_resource.setup", "null_resource.wait_for_deployer_deploy"]
  count = "${var.instance_count}"
  provisioner "local-exec" {
    command = "${var.scripts_src_directory}/install_ssh_key.sh ${var.ceph_deployer_ip} ${element(oci_core_instance.instance.*.private_ip, count.index)}"
  }
}

resource "null_resource" "add_to_deployer_known_hosts" {
  depends_on = ["null_resource.copy_key"]
  count = "${var.instance_count}"
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${var.ceph_deployer_ip}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "cd ${var.scripts_dst_directory}",
      "./add_to_etc_hosts.sh ${element(oci_core_instance.instance.*.private_ip, count.index)} ${element(oci_core_instance.instance.*.hostname_label, count.index)}",
      "./add_to_known_hosts.sh ${element(oci_core_instance.instance.*.private_ip, count.index)} ${element(oci_core_instance.instance.*.hostname_label, count.index)}"
     ]
  }
}

#------------------------------------------------------------------------------------
# Deploy ceph on OSDs
#------------------------------------------------------------------------------------
resource "null_resource" "wait_for_cluster_create" {
  provisioner "local-exec" {
      command = "echo 'Waited for create new cluster ${var.new_cluster} to complete'"
  }
}

resource "null_resource" "deploy" {
  depends_on = ["null_resource.add_to_deployer_known_hosts", "null_resource.wait_for_cluster_create"]
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${var.ceph_deployer_ip}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "cd ${var.scripts_dst_directory}",
      "./ceph_deploy_osd.sh ${element(var.block_device_for_ceph, var.create_volume)} ${join(" ", oci_core_instance.instance.*.hostname_label)}"
    ]
  }
}
