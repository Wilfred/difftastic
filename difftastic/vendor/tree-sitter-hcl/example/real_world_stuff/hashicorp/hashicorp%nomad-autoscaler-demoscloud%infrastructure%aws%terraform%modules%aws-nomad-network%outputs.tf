# Security groups.
output "agents_sg_id" {
  value = aws_security_group.agents.id
}

output "clients_sg_ids" {
  value = aws_security_group.clients.*.id
}

# Servers ELB outputs.
output "servers_lb_id" {
  value = aws_elb.servers.id
}

output "servers_lb_dns" {
  value = aws_elb.servers.dns_name
}

output "servers_lb_zone_id" {
  value = aws_elb.servers.zone_id
}

# Clients ELBs outputs.
output "clients_lb_ids" {
  value = aws_elb.clients.*.id
}

output "clients_lb_dns_names" {
  value = aws_elb.clients.*.dns_name
}

output "clients_lb_names" {
  value = aws_elb.clients.*.name
}

output "clients_lb_zone_ids" {
  value = aws_elb.clients.*.zone_id
}

# Nomad and Consul address.
output "consul_addr" {
  value = "http://${aws_elb.servers.dns_name}:8500"
}

output "nomad_addr" {
  value = "http://${aws_elb.servers.dns_name}:4646"
}

# VPC and subnets
output "vpc_id" {
  value = aws_vpc.main.id
}

output "subnet_id" {
  value = aws_subnet.public.id
}
