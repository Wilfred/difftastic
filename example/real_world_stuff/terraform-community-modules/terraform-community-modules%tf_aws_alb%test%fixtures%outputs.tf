/*
Outputs used for tests
*/

output "principle_account_id" {
  value = "${module.alb.principle_account_id}"
}

output "vpc_id" {
  value = "${module.vpc.vpc_id}"
}
