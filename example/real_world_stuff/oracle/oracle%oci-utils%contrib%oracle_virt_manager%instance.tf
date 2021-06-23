// Copyright (c) 2020 Oracle and/or its affiliates. All rights reserved.
// Licensed under the Universal Permissive License v 1.0 as shown
// at http://oss.oracle.com/licenses/upl.
terraform {
  required_providers {
    oci = ">= 3.56.0"
  }
}

variable "tenancy_ocid" {}
variable "user_ocid" {}
variable "fingerprint" {}
variable "private_key_path" {}
variable "region" {
  default = "uk-london-1"
}
variable "compartment_id" {}
variable "availability_domain_id" {}
variable "subnet_id" {}
variable "instance_shape" {
  default = "VM.Standard2.4"
}
variable "instance_image_ocid" {
  default = "ocid1.image.oc1.uk-london-1.aaaaaaaav6vnrgev7zgrkk2infary43tr5lh3rpheqbul3qowv26a3erb7ua"
}

variable "ssh_private_key_path" {}
variable "ssh_public_key_path" {}
variable "ssh_authorized_key_path" {}
variable "ssh_user" {
  default = "opc"
}
variable "http_proxy_url" {}
variable "https_proxy_url" {}

data "oci_core_subnet" "kvminstance_subnet" {
  subnet_id = var.subnet_id
}


provider "oci" {
  tenancy_ocid     = var.tenancy_ocid
  user_ocid        = var.user_ocid
  fingerprint      = var.fingerprint
  private_key_path = var.private_key_path
  region           = var.region
}

data "template_file" "tests_environement" {
  template = file(join("/", [abspath(path.root), "userdata", "oci-tests-env"]))
  vars = {
    http_proxy_url  = var.http_proxy_url
    https_proxy_url = var.https_proxy_url
  }
}


resource "oci_core_instance" "kvm_instance" {
  availability_domain = var.availability_domain_id
  compartment_id      = var.compartment_id
  display_name        = "KVMMgmtInstance_oVIRT"
  shape               = var.instance_shape


  create_vnic_details {
    subnet_id        = data.oci_core_subnet.kvminstance_subnet.id
    display_name     = "Primaryvnic"
    assign_public_ip = false
  }

  source_details {
    source_type = "image"
    source_id   = var.instance_image_ocid
  }

  preserve_boot_volume = false

  metadata = {
    ssh_authorized_keys = file(var.ssh_authorized_key_path)
  }


}

resource "oci_core_instance_console_connection" "kvm_instance_console_connection" {
  depends_on = [oci_core_instance.kvm_instance]
  #Required
  instance_id = oci_core_instance.kvm_instance.id
  public_key  = file(var.ssh_public_key_path)
}

resource "oci_core_vnic_attachment" "test_vnic_attachment_nic0" {
  count = 2
  create_vnic_details {
    subnet_id        = data.oci_core_subnet.kvminstance_subnet.id
    assign_public_ip = false
  }

  instance_id = oci_core_instance.kvm_instance.id
  nic_index   = 0
}



resource "oci_core_volume" "vm_tank_volume" {
  availability_domain = var.availability_domain_id
  compartment_id      = var.compartment_id
  display_name        = "KVMMgmtInstanceTank"
  size_in_gbs         = 256
}
resource "oci_core_volume_attachment" "vm_tank_volume_attachment" {
  attachment_type = "iscsi"
  instance_id     = oci_core_instance.kvm_instance.id
  volume_id       = oci_core_volume.vm_tank_volume.id

  is_read_only = false

}

output "instance_private_ip" {
  value = oci_core_instance.kvm_instance.private_ip
}
output "instance_fqdn" {
  value = format("%s.%s", oci_core_instance.kvm_instance.hostname_label, data.oci_core_subnet.kvminstance_subnet.subnet_domain_name)
}

output "instance_dns_label" {
  value = oci_core_instance.kvm_instance.hostname_label
}

output "instance_ssh_con" {
  value = oci_core_instance_console_connection.kvm_instance_console_connection.connection_string
}

resource "null_resource" "deploy_virt_mgr" {
  depends_on = [oci_core_instance.kvm_instance]

  provisioner "file" {
    content     = data.template_file.tests_environement.rendered
    destination = "/tmp/oci-tests-env.sh"

    connection {
      type        = "ssh"
      agent       = false
      user        = var.ssh_user
      host        = oci_core_instance.kvm_instance.private_ip
      timeout     = "15m"
      private_key = file(var.ssh_private_key_path)
    }
  }

  // do this right now as other command may need it
  provisioner "remote-exec" {
    connection {
      type        = "ssh"
      agent       = false
      user        = var.ssh_user
      host        = oci_core_instance.kvm_instance.private_ip
      timeout     = "15m"
      private_key = file(var.ssh_private_key_path)
    }
    inline = [
      "/bin/sudo /bin/mv --force /tmp/oci-tests-env.sh /etc/profile.d"
    ]
  }

  provisioner "remote-exec" {
    connection {
      type        = "ssh"
      agent       = false
      user        = var.ssh_user
      host        = oci_core_instance.kvm_instance.private_ip
      timeout     = "15m"
      private_key = file(var.ssh_private_key_path)
    }

    inline = [
      "/bin/sudo --login yum install --quiet --assumeyes oracle-ovirt-release-el7",
      "/bin/sudo --login yum-config-manager --disable ovirt-4.2",
      "/bin/sudo --login yum-config-manager --disable ovirt-4.2-extra",
      "/bin/sudo --login yum install --quiet --assumeyes ovirt-engine",
      "/bin/sudo --login yum install --quiet --assumeyes ovirt-log-collector",
      "/bin/sudo --login yum install --quiet --assumeyes cockpit-ovirt-dashboard",
      "/bin/sudo --login /usr/bin/systemctl enable cockpit.socket",
      "/bin/sudo --login /usr/bin/systemctl start cockpit.socket",
      "/bin/sudo --login firewall-cmd --permanent --add-service=cockpit"
    ]
  }

}
resource "null_resource" "configure_virt_mgr" {
  depends_on = [null_resource.deploy_virt_mgr]

  provisioner "file" {
    connection {
      type        = "ssh"
      agent       = false
      user        = var.ssh_user
      host        = oci_core_instance.kvm_instance.private_ip
      timeout     = "15m"
      private_key = file(var.ssh_private_key_path)
    }
    source      = join("/", [abspath(path.root), "userdata", "ovirt-engine-setup-answers.conf"])
    destination = "/var/tmp/ovirt-engine-setup-answers.conf"
  }
  provisioner "file" {
    connection {
      type        = "ssh"
      agent       = false
      user        = var.ssh_user
      host        = oci_core_instance.kvm_instance.private_ip
      timeout     = "15m"
      private_key = file(var.ssh_private_key_path)
    }
    content = format("[environment:default]\nQUESTION/1/OVESETUP_NETWORK_FQDN_this=str:%s.%s\nQUESTION/1/OVESETUP_PKI_ORG=str:%s",
      oci_core_instance.kvm_instance.hostname_label,
      data.oci_core_subnet.kvminstance_subnet.subnet_domain_name,
    data.oci_core_subnet.kvminstance_subnet.subnet_domain_name)
    destination = "/var/tmp/ovirt-engine-setup-answers-extra.conf"
  }

  provisioner "remote-exec" {
    connection {
      type        = "ssh"
      agent       = false
      user        = var.ssh_user
      host        = oci_core_instance.kvm_instance.private_ip
      timeout     = "15m"
      private_key = file(var.ssh_private_key_path)
    }

    inline = [
      "sudo --login /bin/engine-setup --config=/var/tmp/ovirt-engine-setup-answers.conf --config-append=/var/tmp/ovirt-engine-setup-answers-extra.conf"
    ]
  }
  # TODO : remove these configuration files
}

resource "null_resource" "tweak_virt_mgr_host" {
  depends_on = [null_resource.configure_virt_mgr]
  provisioner "remote-exec" {
    connection {
      type        = "ssh"
      agent       = false
      user        = var.ssh_user
      host        = oci_core_instance.kvm_instance.private_ip
      timeout     = "15m"
      private_key = file(var.ssh_private_key_path)
    }

    inline = [
      # we install python3, that's break otopi as rpmUtils library is not installed for python3
      # force otopi to use python2
      "sudo --login mkdir -p /etc/otopi.env.d",
      "sudo --login touch /etc/otopi.env.d/10-python.env",
      "echo OTOPI_PYTHON=/usr/bin/python2.7 | sudo --login tee /etc/otopi.env.d/10-python.env",
      "sudo --login chmod a+r /etc/otopi.env.d/10-python.env"
    ]
  }

  provisioner "file" {
    connection {
      type        = "ssh"
      agent       = false
      user        = var.ssh_user
      host        = oci_core_instance.kvm_instance.private_ip
      timeout     = "15m"
      private_key = file(var.ssh_private_key_path)
    }
    content = format("Match User root Address %s LocalAddress %s\n\tPermitRootLogin without-password",
      oci_core_instance.kvm_instance.private_ip,
      oci_core_instance.kvm_instance.private_ip
    )
    destination = "/tmp/local-ssh.conf"
  }
  provisioner "remote-exec" {
    connection {
      type        = "ssh"
      agent       = false
      user        = var.ssh_user
      host        = oci_core_instance.kvm_instance.private_ip
      timeout     = "15m"
      private_key = file(var.ssh_private_key_path)
    }

    inline = [
      # engine reuire root ssh access, allow it for local loop
      "/bin/cat /tmp/local-ssh.conf | sudo --login tee -a /etc/ssh/sshd_config",
      "/bin/rm /tmp/local-ssh.conf"
    ]
  }
  provisioner "remote-exec" {
    connection {
      type        = "ssh"
      agent       = false
      user        = var.ssh_user
      host        = oci_core_instance.kvm_instance.private_ip
      timeout     = "15m"
      private_key = file(var.ssh_private_key_path)
    }

    inline = [
      # ovirt host deploy set credential add it as default
      "echo export LIBVIRT_DEFAULT_URI=\"qemu:///system?authfile=/etc/ovirt-hosted-engine/virsh_auth.conf\" >> /home/${var.ssh_user}/.bashrc",
      "echo export LIBVIRT_DEFAULT_URI=\"qemu:///system?authfile=/etc/ovirt-hosted-engine/virsh_auth.conf\" | sudo --login tee -a  /root/.bashrc"
    ]
  }

}

resource "null_resource" "deploy_iso" {
  depends_on = [null_resource.deploy_virt_mgr]

  provisioner "remote-exec" {
    connection {
      type        = "ssh"
      agent       = false
      user        = var.ssh_user
      host        = oci_core_instance.kvm_instance.private_ip
      timeout     = "15m"
      private_key = file(var.ssh_private_key_path)
    }
    inline = [
      "wget -O /var/tmp/OracleLinux-R7-U9-Server-x86_64-dvd.iso --no-directories --progress=bar https://ca-artifacts.us.oracle.com/ISOs/build-isos/x86_64-el7-u9-isos/LATEST/OracleLinux-R7-U9-Server-x86_64-dvd.iso"
    ]
  }
}

resource "null_resource" "prepare_local_storage" {
  depends_on = [oci_core_volume_attachment.vm_tank_volume_attachment]

  provisioner "remote-exec" {
    connection {
      type        = "ssh"
      agent       = false
      user        = var.ssh_user
      host        = oci_core_instance.kvm_instance.private_ip
      timeout     = "15m"
      private_key = file(var.ssh_private_key_path)
    }
    inline = [
      "sudo --login mkdir -p /data/images",
      "sudo --login chown 36:36 /data /data/images",
      "sudo --login chmod 0755 /data /data/images"
    ]
  }
}
