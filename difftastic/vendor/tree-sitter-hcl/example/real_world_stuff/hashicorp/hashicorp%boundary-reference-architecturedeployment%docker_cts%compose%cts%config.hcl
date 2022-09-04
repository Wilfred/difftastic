log_level = "info"

syslog {
  enabled = true
}

consul {
  #address = "consul:8500"
  address = "localhost:8500"
}

terraform_provider "consul" {
  #address = "consul:8500"
  address = "localhost:8500"
  datacenter = "dc1"
}


terraform_provider "boundary" {
  #addr             = "http://boundary:9200"
  addr = "http://localhost:9200"
  recovery_kms_hcl = <<EOT
kms "aead" {
  purpose = "recovery"
  aead_type = "aes-gcm"
  key = "8fZBjCUfN0TzjEGLQldGY4+iE9AkOvCfjh7+p0GtRBQ="
  key_id = "global_recovery"
}
EOT
}

driver "terraform" {
  log = true
  persist_log = false
  path = ""
  working_dir = "./cts/sync-tasks/"

  backend "consul" {
    gzip = true
  }

  required_providers {
    consul = {
      source = "hashicorp/http"
      version = "2.1.0"
    }
    boundary = {
      source = "hashicorp/boundary"
      version = "1.0.2"
    }
  }
}



task {
    name = "boundary"
    source = "./boundary"
    providers = ["http", "boundary"]
    services = ["redis","mysql"]
    buffer_period {
      min = "5s"
    }
}
