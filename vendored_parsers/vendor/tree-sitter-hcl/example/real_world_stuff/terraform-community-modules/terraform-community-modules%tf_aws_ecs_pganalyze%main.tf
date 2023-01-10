locals {
  service_count = "${length(var.pga_api_key) > 0 ? 1 : 0}"
}

data "aws_ecs_cluster" "ecs" {
  cluster_name = "${var.ecs_cluster}"
}

data "aws_region" "current" {
  current = true
}

data "template_file" "pganalyze" {
  template = "${file("${path.module}/files/pganalyze.json")}"

  vars {
    task_identifier       = "${var.task_identifier}"
    db_url                = "postgres://${var.db_username}:${var.db_password}@${var.rds_endpoint}/${var.db_name}"
    image                 = "${var.docker_image}"
    pga_api_key           = "${var.pga_api_key}"
    aws_instance_id       = "${var.aws_instance_id}" # we can almost certainly derive this
    aws_region            = "${data.aws_region.current.name}"
    awslogs_group         = "${var.log_group}"
    awslogs_region        = "${data.aws_region.current.name}"
    awslogs_stream_prefix = "tf"
  }
}

resource "aws_ecs_task_definition" "pganalyze" {
  count                 = "${local.service_count}"
  family                = "pganalyze-${var.env}-${var.task_identifier}"
  container_definitions = "${data.template_file.pganalyze.rendered}"
  network_mode          = "bridge"
  task_role_arn         = "${aws_iam_role.pganalyze_task.arn}"
}

resource "aws_ecs_service" "pganalyze" {
  count           = "${local.service_count}"
  name            = "pganalyze-${var.env}-${var.task_identifier}"
  cluster         = "${data.aws_ecs_cluster.ecs.id}"
  task_definition = "${aws_ecs_task_definition.pganalyze.arn}"
  desired_count   = 1

  placement_strategy {
    type  = "binpack"
    field = "memory"
  }
}
