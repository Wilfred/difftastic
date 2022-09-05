////////////////////// Module //////////////////////////

output "servers" {
  value = aws_route53_record.servers.*.fqdn
}

output "workers" {
  value = aws_route53_record.workers.*.fqdn
}

output "vpc_id" {
  value = aws_vpc.demostack.id
}

output "subnet_ids" {
  value = aws_subnet.demostack.*.id
}

output "traefik_lb" {
  value = "http://${aws_route53_record.traefik.fqdn}:8080"
}

output "fabio_lb" {
  value = "http://${aws_route53_record.fabio.fqdn}:9999"
}

output "vault_ui" {
  value = "https://${aws_route53_record.vault.fqdn}:8200"
}

output "nomad_ui" {
  value = "https://${aws_route53_record.nomad.fqdn}:4646"
}

output "consul_ui" {
  value = "https://${aws_route53_record.consul.fqdn}:8500"
}

output "boundary_ui" {
 value = "http://${aws_route53_record.boundary.fqdn}:9200"
 # value = "troubleshooting"
}


output "nomad_tag_workers" {
  value = data.template_file.workers.*.vars.node_name
}

output "nomad_tag_servers" {
  value = data.template_file.servers.*.vars.node_name
}

/*
output "eks_endpoint" {
  value = aws_eks_cluster.eks.endpoint
}
output "eks_ca" {
 // value = aws_eks_cluster.eks.endpoint
  value = aws_eks_cluster.eks.certificate_authority.0.data
}
*/