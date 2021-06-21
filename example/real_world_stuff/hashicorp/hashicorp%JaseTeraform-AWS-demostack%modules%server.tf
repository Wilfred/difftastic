data "template_file" "servers" {
  count = var.servers

  template = join("\n", tolist([
    file("${path.module}/templates/shared/base.sh"),
    file("${path.module}/templates/shared/docker.sh"),
    file("${path.module}/templates/server/consul.sh"),
    file("${path.module}/templates/server/vault.sh"),
    file("${path.module}/templates/server/nomad.sh"),
  ]))

  vars = {
    region = var.region

    enterprise    = var.enterprise
    vaultlicense  = var.vaultlicense
    consullicense = var.consullicense
    kmskey        = aws_kms_key.demostackVaultKeys.id
    namespace     = var.namespace
    node_name     = "${var.namespace}-server-${count.index}"

    # me_ca         = tls_self_signed_cert.root.cert_pem
    me_ca      = var.ca_cert_pem
    me_cert    = element(tls_locally_signed_cert.server.*.cert_pem, count.index)
    me_key     = element(tls_private_key.server.*.private_key_pem, count.index)
    public_key = var.public_key

    # Consul
    primary_datacenter    = var.primary_datacenter
    consul_url            = var.consul_url
    consul_ent_url        = var.consul_ent_url
    consul_gossip_key     = var.consul_gossip_key
    consul_join_tag_key   = "ConsulJoin"
    consul_join_tag_value = var.consul_join_tag_value
    consul_master_token   = var.consul_master_token
    consul_servers        = var.servers
    meta_zone_tag = "${var.namespace}-${count.index}"

    # Nomad
    nomad_url        = var.nomad_url
    nomad_ent_url    = var.nomad_ent_url
    nomad_gossip_key = var.nomad_gossip_key
    nomad_servers    = var.servers
    cni_plugin_url   = var.cni_plugin_url
    nomadlicense     = var.nomadlicense

    # Nomad jobs
    fabio_url = var.fabio_url

    # Vault
    vault_oracle_client_url = var.vault_oracle_client_url
    vault_url        = var.vault_url
    vault_ent_url    = var.vault_ent_url
    vault_root_token = random_id.vault-root-token.hex
    vault_servers    = var.servers
    vault_api_addr = "https://${aws_route53_record.vault.fqdn}:8200"

  }
}

# Gzip cloud-init config
data "template_cloudinit_config" "servers" {
  count = var.servers

  gzip          = true
  base64_encode = true

  part {
    content_type = "text/x-shellscript"
    content      = element(data.template_file.servers.*.rendered, count.index)
  }
}


resource "aws_instance" "servers" {
  count = var.servers

  ami           = data.aws_ami.ubuntu.id
  instance_type = var.instance_type_server
  key_name      = aws_key_pair.demostack.id

  subnet_id              = element(aws_subnet.demostack.*.id, count.index)
  iam_instance_profile   = aws_iam_instance_profile.consul-join.name
  vpc_security_group_ids = [aws_security_group.demostack.id]
  root_block_device {
    volume_size           = "240"
    delete_on_termination = "true"
  }

  ebs_block_device {
    device_name           = "/dev/xvdd"
    volume_type           = "gp2"
    volume_size           = "240"
    delete_on_termination = "true"
  }

 
  tags = merge(local.common_tags ,{
   ConsulJoin     = "${var.consul_join_tag_value}" ,
   Purpose        = "demostack" ,
   function       = "server" ,
   name            = "demostack-server-${count.index}" ,
   }
  )

  user_data = element(data.template_cloudinit_config.servers.*.rendered, count.index)
}
