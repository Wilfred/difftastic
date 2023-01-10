
data "http" "scopes" {
    url = "http://localhost:9200/v1/scopes"
}

data "http" "project" {
    url = "http://localhost:9200/v1/scopes?scope_id=${local.primary_scope_id}"
}

data "http" "host_catalogs" {
    url = "http://localhost:9200/v1/host-catalogs?scope_id=${local.database_project_id}"
}

locals {
    primary_scope_id = [for i in jsondecode(data.http.scopes.body).items : i.id if i.name == "primary"][0]
    database_project_id = [for i in jsondecode(data.http.project.body).items : i.id if i.name == "databases"][0]
    database_host_catalog_id = [for i in jsondecode(data.http.host_catalogs.body).items : i.id if i.name == "databases"][0]
    # Create a map of service names to instance IDs to then build
    # a map of service names to instances
    consul_service_ids = transpose({
      for id, s in var.services : id => [s.name]
    })

    # Group service instances by service name
    # consul_services = {
    #   "app" = [
    #     {
    #       "id" = "app-id-01"
    #       "name" = "app"
    #       "node_address" = "192.168.10.10"
    #     }
    #   ]
    # }
    consul_services = {
      for name, ids in local.consul_service_ids :
      name => [for id in ids : var.services[id]]
    }
}

output "test" {
  value = local.consul_services
}

resource "boundary_host" "mysql" {
  for_each = {for s in local.consul_services["mysql"] : s.id => s}
  type        = "static"
  name        = "mysql"
  description = "Private mysql container"
  address         = each.value.address
  host_catalog_id = local.database_host_catalog_id
}

resource "boundary_host_set" "mysql" {
  type            = "static"
  name            = "mysql"
  description     = "Host set for mysql containers"
  host_catalog_id = local.database_host_catalog_id
  host_ids        = [for k,v in boundary_host.mysql : v.id]
}

resource "boundary_target" "mysql" {
  type                     = "tcp"
  name                     = "mysql"
  description              = "MySQL server"
  scope_id                 = local.database_project_id
  session_connection_limit = -1
  session_max_seconds      = 300
  default_port             = 3306
  host_set_ids = [
    boundary_host_set.mysql.id
  ]
}

resource "boundary_host" "redis" {
  for_each = {for s in local.consul_services["redis"] : s.id => s}
  type        = "static"
  name        = each.key
  description = "Private redis container"
  address         = each.value.address
  host_catalog_id = local.database_host_catalog_id
}

resource "boundary_host_set" "redis" {
  type            = "static"
  name            = "redis"
  description     = "Host set for redis containers"
  host_catalog_id = local.database_host_catalog_id
  host_ids        = [for k,v in boundary_host.redis : v.id]
}

resource "boundary_target" "redis" {
  type                     = "tcp"
  name                     = "redis"
  description              = "Redis server"
  scope_id                 = local.database_project_id
  session_connection_limit = -1
  session_max_seconds      = 300
  default_port             = 6379
  host_set_ids = [
    boundary_host_set.redis.id
  ]
}