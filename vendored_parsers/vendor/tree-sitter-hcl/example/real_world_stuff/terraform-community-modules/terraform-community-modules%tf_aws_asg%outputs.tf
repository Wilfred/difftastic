//
// Module: tf_aws_asg
//

// Output the ID of the Launch Config
output "launch_config_id" {
    value = "${aws_launch_configuration.launch_config.id}"
}

// Output the ID of the Launch Config
output "asg_id" {
    value = "${aws_autoscaling_group.main_asg.id}"
}
