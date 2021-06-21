output "output" {
  value = <<README

frontend: ssh -i ~/.ssh/awskey.pem ubuntu@${module.frontend.public_ip}
public-api: ssh -i ~/.ssh/awskey.pem ubuntu@${module.public_api.public_ip}
product-api: ssh -i ~/.ssh/awskey.pem ubuntu@${module.product_api.public_ip}
postgres: ssh -i ~/.ssh/awskey.pem ubuntu@${module.postgres.public_ip}

Takes a few mins to install packages:
http://${module.frontend.public_ip}

README
}

output "environment" {
    value = var.environment
}
