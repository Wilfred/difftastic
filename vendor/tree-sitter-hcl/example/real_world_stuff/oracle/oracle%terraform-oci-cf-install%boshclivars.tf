resource "local_file" bosh_cli_env_vars {
  depends_on = [
    "oci_core_instance.bosh_cli"]

  filename = "./bootstrap/my-env-vars.yml"
  content = <<EOF
tenancy: ${var.oci_tenancy_ocid}
user: ${oci_identity_user.bosh_user.id}
compartment: ${oci_identity_compartment.bosh_compartment.id}
apikey: |${format("\n   %s",join("\n   ", split("\n", file(var.bosh_api_private_key))))}
fingerprint: ${file(var.bosh_api_fingerprint)}
ssh_key: ${file(var.bosh_ssh_public_key)}
vcn: ${oci_core_virtual_network.cloudfoundry_vcn.display_name}
vcn_id: ${oci_core_virtual_network.cloudfoundry_vcn.id}
ad1: ${oci_core_subnet.private_subnet_ad1.availability_domain}
ad2: ${oci_core_subnet.private_subnet_ad2.availability_domain}
ad3: ${oci_core_subnet.private_subnet_ad3.availability_domain}
subnet1_id: ${oci_core_subnet.private_subnet_ad1.id}
subnet2_id: ${oci_core_subnet.private_subnet_ad2.id}
subnet3_id: ${oci_core_subnet.private_subnet_ad3.id}
subnet1: ${oci_core_subnet.private_subnet_ad1.display_name}
subnet2: ${oci_core_subnet.private_subnet_ad2.display_name}
subnet3: ${oci_core_subnet.private_subnet_ad3.display_name}
internal_cidr_n1: ${oci_core_subnet.private_subnet_ad1.cidr_block}
internal_cidr_n2: ${oci_core_subnet.private_subnet_ad2.cidr_block}
internal_cidr_n3: ${oci_core_subnet.private_subnet_ad3.cidr_block}
internal_gw_n1: ${cidrhost(oci_core_subnet.private_subnet_ad1.cidr_block, 1)}
internal_gw_n2: ${cidrhost(oci_core_subnet.private_subnet_ad2.cidr_block, 1)}
internal_gw_n3: ${cidrhost(oci_core_subnet.private_subnet_ad3.cidr_block, 1)}
EOF

}

resource "local_file" bosh_cli_director_env_vars {
  depends_on = [
    "oci_core_instance.bosh_cli"]

  filename = "./bootstrap/director-env-vars.yml"
  content = <<EOF
tenancy: ${var.oci_tenancy_ocid}
user: ${oci_identity_user.bosh_user.id}
compartment: ${oci_identity_compartment.bosh_compartment.id}
apikey: |${format("\n   %s",join("\n   ", split("\n", file(var.bosh_api_private_key))))}
fingerprint: ${file(var.bosh_api_fingerprint)}
provisioned_username: ${var.bosh_ssh_username}
ssh_key: ${file(var.bosh_ssh_public_key)}
region: ${var.oci_region}
ad: ${oci_core_subnet.director_subnet_ad1.availability_domain}
vcn: ${oci_core_virtual_network.cloudfoundry_vcn.display_name}
vcn_id: ${oci_core_virtual_network.cloudfoundry_vcn.id}
subnet: ${oci_core_subnet.director_subnet_ad1.display_name}
subnet_id: ${oci_core_subnet.director_subnet_ad1.id}
internal_cidr: ${oci_core_subnet.director_subnet_ad1.cidr_block}
internal_gw: ${cidrhost(oci_core_subnet.director_subnet_ad1.cidr_block, 1)}
internal_ip: ${cidrhost(oci_core_subnet.director_subnet_ad1.cidr_block, 2)}
admin_password: admin
blobstore_agent_password: agent1
blobstore_director_password: director1
director_name: bosh-director
hm_password: hm1
mbus_bootstrap_password: mbus-secret
nats_password: nats-secret
postgres_password: postgres
EOF
}

resource "null_resource" "copy-artifacts" {
  depends_on = [
    "local_file.bosh_cli_env_vars",
    "local_file.bosh_cli_director_env_vars"]

  connection {
    agent = false
    timeout = "2m"
    host = "${data.oci_core_vnic.InstanceVnic.public_ip_address}"
    user = "ubuntu"
    private_key = "${file(var.bosh_ssh_private_key)}"
  }

  provisioner "file" {
    source = "${local_file.bosh_cli_env_vars.filename}"
    destination = "~/${basename(local_file.bosh_cli_env_vars.filename)}"
  }

  provisioner "file" {
    source = "${local_file.bosh_cli_director_env_vars.filename}"
    destination = "~/${basename(local_file.bosh_cli_director_env_vars.filename)}"
  }

  provisioner "file" {
    source = "./keys/bosh-ssh"
    destination = "~/.ssh/id_rsa"
  }

  provisioner "file" {
    source = "./keys/bosh-ssh.pub"
    destination = "~/.ssh/id_rsa.pub"
  }

  provisioner "remote-exec" {
    on_failure = "continue"

    connection {
      agent = false
      timeout = "30m"
      host = "${data.oci_core_vnic.InstanceVnic.public_ip_address}"
      user = "ubuntu"
      private_key = "${file(var.bosh_ssh_private_key)}"
    }
    inline = [
      "chmod 600 ~/.ssh/id_rsa"]
  }
}
