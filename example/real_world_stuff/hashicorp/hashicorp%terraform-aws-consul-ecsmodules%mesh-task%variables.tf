variable "family" {
  description = "Task definition family (https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#family). This name will also be used as the Consul service name."
  type        = string
}

variable "execution_role_arn" {
  description = "ARN for the task's execution role. This role is used internally by ECS."
  type        = string
}

variable "task_role_arn" {
  description = "ARN for the task's task role. This role defines permissions for the containers running in the task."
  type        = string
}

variable "port" {
  description = "Port that the application listens on. If the application does not listen on a port, set outbound_only to true."
  type        = number
  default     = 0
}

variable "outbound_only" {
  description = "Whether the application only makes outward requests and does not receive any requests. Must be set to true if port is 0."
  type        = bool
  default     = false
}

variable "consul_image" {
  description = "Consul Docker image."
  type        = string
  default     = "docker.mirror.hashicorp.services/hashicorp/consul:1.9.5"
}

variable "consul_ecs_image" {
  description = "consul-ecs Docker image."
  type        = string
  default     = "docker.mirror.hashicorp.services/hashicorp/consul-ecs:0.1.2"
}

variable "envoy_image" {
  description = "Envoy Docker image."
  type        = string
  default     = "docker.mirror.hashicorp.services/envoyproxy/envoy-alpine:v1.16.2"
}

variable "log_configuration" {
  description = "Task definition log configuration object (https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_LogConfiguration.html)."
  type        = any
  default     = null
}

variable "container_definitions" {
  description = "Application container definitions (https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#container_definitions)."
  type        = list(any)
}

variable "upstreams" {
  description = <<-EOT
  Upstream services this service will call. In the form [{destination_name = $name, local_bind_port = $port}] where
  destination_name is the name of the upstream service and local_bind_port is the local port that this application should
  use when calling the upstream service.
  EOT

  type = list(
    object({
      destination_name = string
      local_bind_port  = number
    })
  )
  default = []
}

variable "consul_server_service_name" {
  description = "Name of Consul server ECS service when using dev server. This or retry_join must be set."
  type        = string
  default     = ""
}

variable "retry_join" {
  description = "Argument to pass to -retry-join (https://www.consul.io/docs/agent/options#_retry_join). This or consul_server_service_name must be set."
  type        = string
  default     = ""
}

variable "tags" {
  description = "A map of tags to add to all resources."
  type        = map(string)
  default     = {}
}
