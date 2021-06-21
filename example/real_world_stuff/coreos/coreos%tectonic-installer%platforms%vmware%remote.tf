resource "null_resource" "bootstrap" {
  connection {
    type        = "ssh"
    host        = "${module.masters.ip_address[0]}"
    user        = "core"
    timeout     = "60m"
    private_key = "${file(var.tectonic_vmware_ssh_private_key_path != "" ? pathexpand(var.tectonic_vmware_ssh_private_key_path) : "/dev/null")}"
  }

  provisioner "file" {
    source      = "./generated"
    destination = "$HOME/tectonic"
  }

  provisioner "remote-exec" {
    inline = [
      "sudo mkdir -p /opt",
      "sudo rm -rf /opt/tectonic",
      "sudo mv /home/core/tectonic /opt/",
    ]
  }
}
