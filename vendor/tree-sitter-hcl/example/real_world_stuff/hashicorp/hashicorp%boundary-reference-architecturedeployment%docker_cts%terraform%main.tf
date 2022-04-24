terraform {
  required_providers {
    boundary = {
      source  = "hashicorp/boundary"
      version = "1.0.2"
    }
  }
  backend "consul" {
    address = "localhost:8500"
    scheme = "http"
    path = "terraform/boundary"
  }
}

provider "boundary" {
  addr             = "http://127.0.0.1:9200"
  recovery_kms_hcl = <<EOT
kms "aead" {
  purpose = "recovery"
  aead_type = "aes-gcm"
  key = "8fZBjCUfN0TzjEGLQldGY4+iE9AkOvCfjh7+p0GtRBQ="
  key_id = "global_recovery"
}
EOT
}

variable "users" {
  type = set(string)
  default = [
    "jim",
    "mike",
    "todd",
    "randy",
    "susmitha",
    "jeff",
    "pete",
    "harold",
    "patrick",
    "jonathan",
    "yoko",
    "brandon",
    "kyle",
    "justin",
    "melissa",
    "paul",
    "mitchell",
    "armon",
    "andy",
    "ben",
    "kristopher",
    "kris",
    "chris",
    "swarna",
  ]
}

resource "boundary_scope" "global" {
  global_scope = true
  name         = "global"
  scope_id     = "global"
}

resource "boundary_scope" "org" {
  scope_id    = boundary_scope.global.id
  name        = "primary"
  description = "Primary organization scope"
}

resource "boundary_scope" "project" {
  name                     = "databases"
  description              = "Databases project"
  scope_id                 = boundary_scope.org.id
  auto_create_admin_role   = true
  auto_create_default_role = true
}

resource "boundary_user" "user" {
  for_each    = var.users
  name        = each.key
  description = "User resource for ${each.key}"
  account_ids = [boundary_account.user[each.value].id]
  scope_id    = boundary_scope.org.id
}

resource "boundary_auth_method" "password" {
  name        = "org_password_auth"
  description = "Password auth method for org"
  type        = "password"
  scope_id    = boundary_scope.org.id
}

resource "boundary_account" "user" {
  for_each       = var.users
  name           = each.key
  description    = "User account for ${each.key}"
  type           = "password"
  login_name     = lower(each.key)
  password       = "foofoofoo"
  auth_method_id = boundary_auth_method.password.id
}

resource "boundary_role" "global_anon_listing" {
  scope_id = boundary_scope.global.id
  grant_strings = [
    "id=*;type=auth-method;actions=list,authenticate",
    "id=*;type=scope;actions=*",
    "id={{account.id}};actions=read,change-password",
    "id=*;type=host-catalog;actions=*",
    "type=host-catalog;actions=list"
  ]
  principal_ids = ["u_anon"]
}

resource "boundary_role" "org_anon_listing" {
  scope_id = boundary_scope.org.id
  grant_strings = [
    "id=*;type=auth-method;actions=list,authenticate",
    "id=*;type=scope;actions=*",
    "id={{account.id}};actions=read,change-password",
    "id=*;type=host-catalog;actions=*",
    "type=host-catalog;actions=list"
  ]
  principal_ids = ["u_anon"]
}
resource "boundary_role" "org_admin" {
  scope_id       = "global"
  grant_scope_id = boundary_scope.org.id
  grant_strings  = ["id=*;type=*;actions=*"]
  principal_ids = concat(
    [for user in boundary_user.user : user.id],
    ["u_auth"]
  )
}

resource "boundary_role" "proj_admin" {
  scope_id       = boundary_scope.org.id
  grant_scope_id = boundary_scope.project.id
  grant_strings  = ["id=*;type=*;actions=*"]
  principal_ids = concat(
    [for user in boundary_user.user : user.id],
    ["u_auth"]
  )
}

resource "boundary_role" "proj_anon_listing" {
  scope_id = boundary_scope.org.id
  grant_scope_id = boundary_scope.project.id
  grant_strings = [
    "id=*;type=auth-method;actions=list,authenticate",
    "id=*;type=scope;actions=*",
    "id={{account.id}};actions=read,change-password",
    "id=*;type=host-catalog;actions=*",
    "type=host-catalog;actions=list"
  ]
  principal_ids = ["u_anon"]
}

resource "boundary_host_catalog" "databases" {
  name        = "databases"
  description = "Database targets"
  type        = "static"
  scope_id    = boundary_scope.project.id
}

resource "boundary_host" "localhost" {
  type            = "static"
  name            = "localhost"
  description     = "Localhost host"
  address         = "localhost"
  host_catalog_id = boundary_host_catalog.databases.id
}

# Target hosts available on localhost: ssh and postgres
# Postgres is exposed to localhost for debugging of the 
# Boundary DB from the CLI. Assumes SSHD is running on
# localhost.
resource "boundary_host_set" "local" {
  type            = "static"
  name            = "local"
  description     = "Host set for local servers"
  host_catalog_id = boundary_host_catalog.databases.id
  host_ids        = [boundary_host.localhost.id]
}

resource "boundary_target" "ssh" {
  type                     = "tcp"
  name                     = "ssh"
  description              = "SSH server"
  scope_id                 = boundary_scope.project.id
  session_connection_limit = -1
  session_max_seconds      = 2
  default_port             = 22
  host_set_ids = [
    boundary_host_set.local.id
  ]
}

resource "boundary_target" "postgres" {
  type                     = "tcp"
  name                     = "postgres"
  description              = "Postgres server"
  scope_id                 = boundary_scope.project.id
  session_connection_limit = -1
  session_max_seconds      = 2
  default_port             = 5432
  host_set_ids = [
    boundary_host_set.local.id
  ]
}

#resource "boundary_auth_method_oidc" "provider" {
#  name               = "<oidc provider>"
#  description        = "OIDC auth method for AAD"
#  scope_id           = boundary_scope.org.id
#  issuer             = "<issuer_url>"
#  client_id          = "<client_id>"
#  client_secret      = "<client_secret>"
#  signing_algorithms = ["RS256"]
#  api_url_prefix     = "http://localhost:9200"
#  is_primary_for_scope = true
#  state = "active-public"
#  max_age = 0
#}

#resource "boundary_account_oidc" "oidc_user" {
#  name           = "user1"
#  description    = "OIDC account for user1"
#  auth_method_id = boundary_auth_method_oidc.provider.id
#  issuer  = "<Issuer_URL>"
#  subject = "<Object_Id>"
#}
