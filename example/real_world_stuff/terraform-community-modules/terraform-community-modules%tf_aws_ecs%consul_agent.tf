data "template_file" "consul" {
  template = "${file("${path.module}/templates/consul.json")}"

  vars {
    env                            = "${aws_ecs_cluster.cluster.name}"
    image                          = "${var.consul_image}"
    registrator_image              = "${var.registrator_image}"
    consul_memory_reservation      = "${var.consul_memory_reservation}"
    registrator_memory_reservation = "${var.registrator_memory_reservation}"
    awslogs_group                  = "consul-agent-${aws_ecs_cluster.cluster.name}"
    awslogs_stream_prefix          = "consul-agent-${aws_ecs_cluster.cluster.name}"
    awslogs_region                 = "${var.region}"
  }
}

# End Data block

resource "aws_ecs_task_definition" "consul" {
  count                 = "${var.enable_agents ? 1 : 0}"
  family                = "consul-agent-${aws_ecs_cluster.cluster.name}"
  container_definitions = "${data.template_file.consul.rendered}"
  network_mode          = "host"
  task_role_arn         = "${aws_iam_role.consul_task.arn}"

  volume {
    name      = "consul-config-dir"
    host_path = "/etc/consul"
  }

  volume {
    name      = "docker-sock"
    host_path = "/var/run/docker.sock"
  }
}

resource "aws_cloudwatch_log_group" "consul" {
  count = "${var.enable_agents ? 1 : 0}"
  name  = "${aws_ecs_task_definition.consul.family}"

  tags {
    VPC         = "${data.aws_vpc.vpc.tags["Name"]}"
    Application = "${aws_ecs_task_definition.consul.family}"
  }
}

resource "aws_ecs_service" "consul" {
  count                              = "${var.enable_agents ? 1 : 0}"
  name                               = "consul-agent-${aws_ecs_cluster.cluster.name}"
  cluster                            = "${aws_ecs_cluster.cluster.id}"
  task_definition                    = "${aws_ecs_task_definition.consul.arn}"
  desired_count                      = "${var.servers}"
  deployment_minimum_healthy_percent = "60"

  placement_constraints {
    type = "distinctInstance"
  }
}
