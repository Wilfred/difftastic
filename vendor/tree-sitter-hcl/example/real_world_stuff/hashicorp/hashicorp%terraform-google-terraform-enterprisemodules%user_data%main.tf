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
    archivist_token = {
      value = random_id.archivist_token.hex
    }

    capacity_concurrency = {
      value = var.capacity_concurrency
    }

    capacity_memory = {
      value = var.capacity_memory
    }

    ca_certs = {
      value = var.ca_certs
    }

    cookie_hash = {
      value = random_id.cookie_hash.hex
    }

    custom_image_tag = {
      value = var.custom_image_tag
    }

    disk_path = {
      value = var.disk_path
    }

    enable_metrics_collection = {
      value = var.enable_metrics_collection
    }

    enc_password = {
      value = random_id.enc_password.hex
    }

    extra_no_proxy = {
      value = var.extra_no_proxy
    }

    hairpin_addressing = {
      value = var.hairpin_addressing ? "1" : "0"
    }

    hostname = {
      value = var.fqdn
    }

    iact_subnet_list = {
      value = var.iact_subnet_list
    }

    iact_subnet_time_limit = {
      value = var.iact_subnet_time_limit
    }

    install_id = {
      value = random_id.install_id.hex # var.install_id
    }

    installation_type = {
      value = "production"
    }

    internal_api_token = {
      value = random_id.internal_api_token.hex
    }

    production_type = {
      # if external this will be overridden by the merge function
      value = "disk"
    }

    registry_session_encryption_key = {
      value = random_id.registry_session_encryption_key.hex
    }

    registry_session_secret_key = {
      value = random_id.registry_session_secret_key.hex
    }

    root_secret = {
      value = random_id.root_secret.hex
    }

    tbw_image = {
      value = var.tbw_image
    }

    tls_vers = {
      value = var.tls_vers
    }

    user_token = {
      value = random_id.user_token.hex
    }
  }

  base_external_configs = {
    enable_active_active = {
      value = var.active_active ? "1" : "0"
    }

    pg_dbname = {
      value = var.pg_dbname
    }

    pg_extra_params = {
      value = var.pg_extra_params
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

    production_type = {
      value = "external"
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
      value = var.redis_use_password_auth ? "1" : "0"
    }

    redis_use_tls = {
      value = var.redis_use_tls ? "1" : "0"
    }
  }

  external_google_configs = {
    gcs_bucket = {
      value = var.gcs_bucket
    }

    gcs_credentials = {
      value = var.gcs_credentials
    }

    gcs_project = {
      value = var.gcs_project
    }

    placement = {
      value = "placement_gcs"
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

  airgap_config = {
    LicenseBootstrapAirgapPackagePath = "/var/lib/ptfe/ptfe.airgap"
  }

  letsencrypt_config = {
    TlsBootstrapCert = "/etc/letsencrypt/live/${var.fqdn}/fullchain.pem"
    TlsBootstrapKey  = "/etc/letsencrypt/live/${var.fqdn}/privkey.pem"
    TlsBootstrapType = "server-path"
  }

  generic_tls_config = {
    TlsBootstrapCert = var.server_cert_path
    TlsBootstrapKey  = var.server_key_path
    TlsBootstrapType = "server-path"
  }

  release_pin_config = {
    ReleaseSequence = var.release_sequence
  }
}

## Build tfe config json
locals {
  # take all the partials and merge them into the base configs, if false, merging empty map is noop
  is_redis_configs = var.active_active ? local.redis_configs : {}
  tfe_configs      = jsonencode(merge(local.base_configs, local.base_external_configs, local.external_google_configs, local.is_redis_configs))
}

## build replicated config json
locals {
  is_airgap      = var.airgap_url != "" ? local.airgap_config : {}
  is_letsencrypt = var.letsencrypt_email != "" ? local.letsencrypt_config : {}
  is_generic_tls = var.server_cert_path != "" ? local.generic_tls_config : {}
  is_pinned      = var.release_sequence != 0 ? local.release_pin_config : {}

  repl_configs = jsonencode(merge(local.replicated_base_config, local.is_airgap, local.is_letsencrypt, local.is_generic_tls, local.is_pinned))
}

locals {
  user_data = templatefile(
    "${path.module}/templates/tfe_vm.sh.tpl",
    {
      airgap_url         = var.airgap_url
      docker_config      = filebase64("${path.module}/files/daemon.json")
      bucket_name        = var.gcs_bucket
      tfe_license        = var.tfe_license
      monitoring_enabled = var.monitoring_enabled
      replicated         = base64encode(local.repl_configs)
      settings           = base64encode(local.tfe_configs)
      active_active      = var.active_active
      namespace          = var.namespace
      proxy_ip           = var.proxy_ip
      proxy_cert         = var.proxy_cert
      no_proxy = join(
        ",",
        concat(
          [
            "127.0.0.1",
            "169.254.169.254",
            ".googleapis.com",
            ".google.internal",
            ".googlecloud.com",
          ],
          var.no_proxy
        )
      )
    }
  )
}
