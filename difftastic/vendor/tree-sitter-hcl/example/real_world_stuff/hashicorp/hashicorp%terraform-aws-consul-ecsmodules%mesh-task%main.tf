locals {
  dev_server_enabled = var.consul_server_service_name != ""
  discover_server_container = {
    name      = "discover-servers"
    image     = var.consul_ecs_image
    essential = false
    user      = "root"
    command = [
      "discover-servers",
      "-service-name=${var.consul_server_service_name}",
      "-out=/consul/server-ip"
    ]
    mountPoints = [
      local.consul_data_mount
    ]
    environment      = []
    cpu              = 0
    portMappings     = []
    volumesFrom      = []
    logConfiguration = var.log_configuration
  }
  discover_servers_containers = local.dev_server_enabled ? [local.discover_server_container] : []
  consul_data_volume_name     = "consul_data"
  consul_data_mount = {
    sourceVolume  = local.consul_data_volume_name
    containerPath = "/consul"
  }

  // container_defs_with_depends_on is the app's container definitions with their dependsOn keys
  // modified to add in dependencies on mesh-init and sidecar-proxy.
  // We add these dependencies in so that the app containers don't start until the proxy
  // is ready to serve traffic.
  container_defs_with_depends_on = [for def in var.container_definitions :
    merge(
      def,
      {
        dependsOn = flatten(
          concat(
            lookup(def, "dependsOn", []),
            [
              {
                containerName = "mesh-init"
                condition     = "SUCCESS"
              },
              {
                containerName = "sidecar-proxy"
                condition     = "HEALTHY"
              }
            ]
        ))
      }
    )
  ]
  upstreams_flag = join(",", [for upstream in var.upstreams : "${upstream["destination_name"]}:${upstream["local_bind_port"]}"])
}

resource "aws_ecs_task_definition" "this" {
  family                   = var.family
  requires_compatibilities = ["FARGATE", "EC2"]
  network_mode             = "awsvpc"
  cpu                      = 256
  memory                   = 512
  execution_role_arn       = var.execution_role_arn
  task_role_arn            = var.task_role_arn
  volume {
    name = local.consul_data_volume_name
  }
  tags = {
    "consul.hashicorp.com/mesh" = "true"
  }
  container_definitions = jsonencode(
    flatten(
      concat(
        local.discover_servers_containers,
        local.container_defs_with_depends_on,
        [
          {
            name             = "mesh-init"
            image            = var.consul_ecs_image
            essential        = false
            logConfiguration = var.log_configuration
            command = [
              "mesh-init",
              "-envoy-bootstrap-file=/consul/envoy-bootstrap.json",
              "-port=${var.port}",
              "-upstreams=${local.upstreams_flag}"
            ]
            user = "root"
            mountPoints = [
              local.consul_data_mount
            ]
            dependsOn = local.dev_server_enabled ? [
              {
                containerName = "discover-servers"
                condition     = "SUCCESS"
              },
            ] : []
            cpu          = 0
            volumesFrom  = []
            environment  = []
            portMappings = []
          },
          {
            name      = "consul-client"
            image     = var.consul_image
            essential = false
            portMappings = [
              {
                containerPort = 8300
                hostPort      = 8300
                protocol      = "tcp"
              },
              {
                containerPort = 8300
                hostPort      = 8300
                protocol      = "udp"
              },
              {
                containerPort = 8500
                hostPort      = 8500
                protocol      = "tcp"
              },
            ]
            logConfiguration = var.log_configuration
            entryPoint       = ["/bin/sh", "-ec"]
            command = [replace(
              templatefile(
                "${path.module}/templates/consul_client_command.tpl",
                {
                  dev_server_enabled = local.dev_server_enabled
                  retry_join         = var.retry_join
                }
              ), "\r", "")
            ]
            mountPoints = [
              local.consul_data_mount
            ]
            linuxParameters = {
              initProcessEnabled = true
            }
            dependsOn = local.dev_server_enabled ? [{
              containerName = "discover-servers"
              condition     = "SUCCESS"
            }] : []
            cpu         = 0
            volumesFrom = []
            environment = []
          },
          {
            name             = "sidecar-proxy"
            image            = var.envoy_image
            essential        = false
            logConfiguration = var.log_configuration
            command          = ["envoy", "--config-path", "/consul/envoy-bootstrap.json"]
            portMappings = [
              {
                containerPort = 20000
                hostPort      = 20000
                protocol      = "tcp"
              },
            ]
            mountPoints = [
              local.consul_data_mount
            ]
            dependsOn = [
              {
                containerName = "mesh-init"
                condition     = "SUCCESS"
              },
            ]
            healthCheck = {
              command  = ["nc", "-z", "127.0.0.1", "20000"]
              interval = 30
              retries  = 3
              timeout  = 5
            }
            cpu         = 0
            volumesFrom = []
            environment = []
          }
        ]
      )
    )
  )
}
