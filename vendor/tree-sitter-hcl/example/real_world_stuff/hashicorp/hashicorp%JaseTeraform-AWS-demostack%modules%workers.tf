data "template_file" "workers" {
  count = var.workers

  template = join("\n", tolist([
    file("${path.module}/templates/shared/base.sh"),
    file("${path.module}/templates/shared/docker.sh"),
    file("${path.module}/templates/workers/consul.sh"),
    file("${path.module}/templates/workers/vault.sh"),
    file("${path.module}/templates/workers/nomad.sh"),
    file("${path.module}/templates/workers/ebs_volumes.sh"),
  ]))

  vars = {
    namespace  = var.namespace
    region     = var.region
    node_name  = "${var.namespace}-worker-${count.index}"
    enterprise = var.enterprise

    #me_ca     = tls_self_signed_cert.root.cert_pem
    me_ca      = var.ca_cert_pem
    me_cert    = element(tls_locally_signed_cert.workers.*.cert_pem, count.index)
    me_key     = element(tls_private_key.workers.*.private_key_pem, count.index)
    public_key = var.public_key

    # Consul
    consul_url            = var.consul_url
    consul_ent_url        = var.consul_ent_url
    consul_gossip_key     = var.consul_gossip_key
    consul_join_tag_key   = "ConsulJoin"
    consul_join_tag_value = var.consul_join_tag_value
    meta_zone_tag = "${var.namespace}-${count.index}"

    # Vault
    vault_url        = var.vault_url
    vault_ent_url    = var.vault_ent_url
    vault_root_token = random_id.vault-root-token.hex
    vault_servers    = var.workers

    # Nomad
    nomad_url      = var.nomad_url
    nomad_ent_url  = var.nomad_ent_url
    cni_plugin_url = var.cni_plugin_url
    run_nomad_jobs = var.run_nomad_jobs

    # Nomad EBS Volumes
    index      = count.index+1
    count      = var.workers
    dc1       = data.aws_availability_zones.available.names[0]
    dc2       = data.aws_availability_zones.available.names[1]
    dc3       = data.aws_availability_zones.available.names[2]
    aws_ebs_volume_mysql_id = aws_ebs_volume.shared.id
    aws_ebs_volume_mongodb_id = aws_ebs_volume.mongodb.id
    aws_ebs_volume_prometheus_id = aws_ebs_volume.prometheus.id
    aws_ebs_volume_shared_id = aws_ebs_volume.shared.id
    
 
  }
}

# Gzip cloud-init config
data "template_cloudinit_config" "workers" {
  count = var.workers

  gzip          = true
  base64_encode = true

  part {
    content_type = "text/x-shellscript"
    content      = element(data.template_file.workers.*.rendered, count.index)
  }
}

resource "aws_instance" "workers" {
  count = var.workers

  ami           = data.aws_ami.ubuntu.id
  instance_type = var.instance_type_worker
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
   function       = "worker" 
   name            = "demostack-worker-${count.index}" ,
   }
  )
  

  user_data = element(data.template_cloudinit_config.workers.*.rendered, count.index)
}
