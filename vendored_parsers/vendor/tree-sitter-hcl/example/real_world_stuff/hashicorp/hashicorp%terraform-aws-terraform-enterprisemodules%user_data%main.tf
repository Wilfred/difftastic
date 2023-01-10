resource "random_string" "password" {
  length  = 16
  special = false
}

resource "random_id" "archivist_token" {
  byte_length = 16
}

resource "random_id" "cookie_hash" {
  byte_length = 16
}

resource "random_id" "enc_password" {
  byte_length = 16
}

resource "random_id" "install_id" {
  byte_length = 16
}

resource "random_id" "internal_api_token" {
  byte_length = 16
}

resource "random_id" "root_secret" {
  byte_length = 16
}

resource "random_id" "registry_session_secret_key" {
  byte_length = 16
}

resource "random_id" "registry_session_encryption_key" {
  byte_length = 16
}

resource "random_id" "user_token" {
  byte_length = 16
}

locals {
  base_configs = {
    installation_type = {
      value = "production"
    }

    production_type = {
      value = "external"
    }

    hostname = {
      value = var.fqdn
    }
    user_token = {
      value = random_id.user_token.hex
    }

    archivist_token = {
      value = random_id.archivist_token.hex
    }

    cookie_hash = {
      value = random_id.cookie_hash.hex
    }

    root_secret = {
      value = random_id.root_secret.hex
    }

    registry_session_secret_key = {
      value = random_id.registry_session_secret_key.hex
    }

    registry_session_encryption_key = {
      value = random_id.registry_session_encryption_key.hex
    }

    internal_api_token = {
      value = random_id.internal_api_token.hex
    }

    install_id = {
      value = random_id.install_id.hex
    }

    iact_subnet_list = {
      value = join(",", var.iact_subnet_list)
    }

    iact_subnet_time_limit = {
      value = var.iact_subnet_time_limit != null ? tostring(var.iact_subnet_time_limit) : ""
    }
  }

  base_external_configs = {
    enable_active_active = {
      value = var.active_active ? "1" : "0"
    }

    pg_dbname = {
      value = var.pg_dbname
    }

    pg_netloc = {
      value = var.pg_netloc
    }

    pg_password = {
      value = var.pg_password
    }

    pg_user = {
      value = var.pg_user
    }

    enc_password = {
      value = random_id.enc_password.hex
    }
  }

  external_aws_configs = {
    placement = {
      value = "placement_s3"
    }

    aws_instance_profile = {
      value = "1"
    }

    s3_bucket = {
      value = var.aws_bucket_data
    }

    s3_region = {
      value = var.aws_region
    }

    s3_sse = {
      value = "aws:kms"
    }

    s3_sse_kms_key_id = {
      value = var.kms_key_arn
    }
  }

  redis_configs = {
    redis_host = {
      value = var.redis_host
    }

    redis_pass = {
      value = var.redis_pass
    }

    redis_port = {
      value = var.redis_port
    }

    redis_use_password_auth = {
      value = var.redis_use_password_auth
    }

    redis_use_tls = {
      value = var.redis_use_tls
    }
  }
}

locals {
  replicated_base_config = {
    BypassPreflightChecks        = true
    DaemonAuthenticationPassword = random_string.password.result
    DaemonAuthenticationType     = "password"
    ImportSettingsFrom           = "/etc/ptfe-settings.json"
    LicenseFileLocation          = "/etc/ptfe-license.rli"
    TlsBootstrapType             = "self-signed"
    TlsBootstrapHostname         = var.fqdn
  }
}

## Build tfe config json
locals {
  # take all the partials and merge them into the base configs, if false, merging empty map is noop
  is_redis_configs = var.active_active ? local.redis_configs : {}
  tfe_configs      = jsonencode(merge(local.base_configs, local.base_external_configs, local.external_aws_configs, local.is_redis_configs))
}

## build replicated config json
locals {
  repl_configs = jsonencode(merge(local.replicated_base_config))
}

locals {
  tfe_user_data = templatefile(
    "${path.module}/templates/tfe_ec2.sh.tpl",
    {
      s3_bucket_bootstrap = var.aws_bucket_bootstrap
      tfe_license         = var.tfe_license
      replicated          = base64encode(local.repl_configs)
      settings            = base64encode(local.tfe_configs)
      active_active       = var.active_active
      proxy_ip            = var.proxy_ip
      proxy_cert          = var.proxy_cert_bundle_name
      no_proxy = join(
        ",",
        concat(
          [
            "127.0.0.1",
            "169.254.169.254",
            ".aws.ce.redhat.com",
          ],
          var.no_proxy
        )
      )
    }
  )
}
