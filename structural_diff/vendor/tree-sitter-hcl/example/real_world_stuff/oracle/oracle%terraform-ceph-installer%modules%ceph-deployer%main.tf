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
# Create the Ceph Deployer Instance
#------------------------------------------------------------------------------------
resource "oci_core_instance" "instance" {
  availability_domain =  "${lookup(data.oci_identity_availability_domains.ADs.availability_domains[var.availability_domain_index - 1],"name")}"
  compartment_id = "${var.compartment_ocid}"
  display_name = "${var.hostname}"
  hostname_label = "${var.hostname}"
  shape = "${var.shape}"
  subnet_id = "${var.subnet_id}"
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
    source = "${var.scripts_src_directory}/add_to_known_hosts.sh"
    destination = "~/${var.scripts_dst_directory}/add_to_known_hosts.sh"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/add_to_etc_hosts.sh"
    destination = "~/${var.scripts_dst_directory}/add_to_etc_hosts.sh"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/install_ssh_key.sh"
    destination = "~/${var.scripts_dst_directory}/install_ssh_key.sh"
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
  provisioner "file" {
    source = "${var.scripts_src_directory}/install_ceph_deploy.sh"
    destination = "~/${var.scripts_dst_directory}/install_ceph_deploy.sh"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/ceph_new_cluster.sh"
    destination = "~/${var.scripts_dst_directory}/ceph_new_cluster.sh"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/ceph_deploy_osd.sh"
    destination = "~/${var.scripts_dst_directory}/ceph_deploy_osd.sh"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/ceph_deploy_mds.sh"
    destination = "~/${var.scripts_dst_directory}/ceph_deploy_mds.sh"
  }
  provisioner "file" {
    source = "${var.scripts_src_directory}/ceph_deploy_client.sh"
    destination = "~/${var.scripts_dst_directory}/ceph_deploy_client.sh"
  }
  timeouts {
    create = "${var.instance_create_timeout}"
  }
}

#------------------------------------------------------------------------------------
# Initialize the VM
#------------------------------------------------------------------------------------
resource "null_resource" "vm_init" {
  depends_on = ["oci_core_instance.instance"]
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${oci_core_instance.instance.private_ip}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "chmod +x ~/${var.scripts_dst_directory}/add_to_etc_hosts.sh",
      "chmod +x ~/${var.scripts_dst_directory}/add_to_known_hosts.sh",
      "chmod +x ~/${var.scripts_dst_directory}/install_ssh_key.sh",
      "chmod +x ~/${var.scripts_dst_directory}/install_ceph_deploy.sh",
      "chmod +x ~/${var.scripts_dst_directory}/ceph_new_cluster.sh",
      "chmod +x ~/${var.scripts_dst_directory}/ceph_deploy_osd.sh",
      "chmod +x ~/${var.scripts_dst_directory}/ceph_deploy_mds.sh",
      "chmod +x ~/${var.scripts_dst_directory}/ceph_deploy_client.sh",
      "cd ${var.scripts_dst_directory}",
      "chmod +x vm_init.sh",
      "./vm_init.sh deployer"
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
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${oci_core_instance.instance.private_ip}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "cd ${var.scripts_dst_directory}",
      "chmod +x vm_pre_setup.sh",
      "./vm_pre_setup.sh deployer"
    ]
  }
}

resource "null_resource" "delay_before" {
  provisioner "local-exec" {
    command = "cd ${var.scripts_src_directory}; ./delay.sh before_setup"
  }
  triggers = {
    "before" = "${null_resource.vm_pre_setup.id}"
  }
}

resource "null_resource" "vm_setup" {
  depends_on = ["null_resource.delay_before"]
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${oci_core_instance.instance.private_ip}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "cd ${var.scripts_dst_directory}",
      "chmod +x vm_setup.sh",
      "./vm_setup.sh deployer"
    ]
  }
}

resource "null_resource" "delay_after" {
  provisioner "local-exec" {
    command = "cd ${var.scripts_src_directory}; ./delay.sh after_setup"
  }
  triggers = {
    "before" = "${null_resource.vm_setup.id}"
  }
}

resource "null_resource" "vm_post_setup" {
  depends_on = ["null_resource.delay_after"]
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${oci_core_instance.instance.private_ip}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "cd ${var.scripts_dst_directory}",
      "chmod +x vm_post_setup.sh",
      "./vm_post_setup.sh deployer"
    ]
  }
}

#------------------------------------------------------------------------------------
# Setup Ceph Deployer Instance
#------------------------------------------------------------------------------------
resource "null_resource" "setup" {
  depends_on = ["null_resource.vm_post_setup"]
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${oci_core_instance.instance.private_ip}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "rm -rf ~/.ssh/id_rsa",
      "ssh-keygen -t rsa -q -P '' -f ~/.ssh/id_rsa",
      "cd ${var.scripts_dst_directory}",
      "chmod +x yum_repo_setup.sh",
      "./yum_repo_setup.sh",
      "chmod +x ceph_firewall_setup.sh",
      "./ceph_firewall_setup.sh deployer"
    ]
  }
}

#------------------------------------------------------------------------------------
# Deploy the Ceph Deployer Instance
#------------------------------------------------------------------------------------
resource "null_resource" "deploy" {
  depends_on = ["null_resource.setup"]
  provisioner "remote-exec" {
    connection {
      agent = false
      timeout = "30m"
      host = "${oci_core_instance.instance.private_ip}"
      user = "${var.ssh_username}"
      private_key = "${file(var.ssh_private_key_file)}"
    }
    inline = [
      "cd ${var.scripts_dst_directory}",
      "chmod +x install_ceph_deploy.sh",
      "./install_ceph_deploy.sh"
    ]
  }
}
