// Output the ID of the EC2 instance created
output "ec2_instance_id" {
  value = "${aws_instance.ec2_instance.id}"
}
