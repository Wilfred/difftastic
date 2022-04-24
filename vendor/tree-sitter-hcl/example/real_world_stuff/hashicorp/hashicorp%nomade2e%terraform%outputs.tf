output "servers" {
  value = aws_instance.server.*.public_ip
}

output "linux_clients" {
  value = aws_instance.client_ubuntu_bionic_amd64.*.public_ip
}

output "windows_clients" {
  value = aws_instance.client_windows_2016_amd64.*.public_ip
}

output "message" {
  value = <<EOM
Your cluster has been provisioned! To prepare your environment, run:

   $(terraform output --raw environment)

Then you can run tests from the e2e directory with:

   go test -v .

ssh into servers with:

%{for ip in aws_instance.server.*.public_ip~}
   ssh -i keys/${local.random_name}.pem ubuntu@${ip}
%{endfor~}

ssh into clients with:

%{for ip in aws_instance.client_ubuntu_bionic_amd64.*.public_ip~}
    ssh -i keys/${local.random_name}.pem ubuntu@${ip}
%{endfor~}
%{for ip in aws_instance.client_windows_2016_amd64.*.public_ip~}
    ssh -i keys/${local.random_name}.pem Administrator@${ip}
%{endfor~}

EOM
}

output "environment" {
  description = "get connection config by running: $(terraform output environment)"
  value       = <<EOM
export NOMAD_ADDR=http://${aws_instance.server[0].public_ip}:4646
export CONSUL_HTTP_ADDR=http://${aws_instance.server[0].public_ip}:8500
export VAULT_ADDR=http://${aws_instance.server[0].public_ip}:8200
export NOMAD_E2E=1
export NOMAD_TOKEN=${data.local_file.nomad_token.content}
export VAULT_TOKEN=${data.local_file.vault_token.content}

EOM
}
