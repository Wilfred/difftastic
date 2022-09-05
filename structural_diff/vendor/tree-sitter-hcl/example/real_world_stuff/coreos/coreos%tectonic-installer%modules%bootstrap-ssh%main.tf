resource "null_resource" "bootstrapper" {
  triggers {
    endpoint     = "${var.bootstrapping_host}"
    dependencies = "${join("", concat(flatten(var._dependencies)))}"
  }

  connection {
    host  = "${var.bootstrapping_host}"
    user  = "core"
    agent = true
  }

  provisioner "file" {
    when        = "create"
    source      = "./generated"
    destination = "$HOME/tectonic"
  }

  provisioner "remote-exec" {
    when = "create"

    inline = [
      "sudo mkdir -p /opt",
      "sudo rm -rf /opt/tectonic",
      "sudo mv /home/core/tectonic /opt/",
    ]
  }
}
