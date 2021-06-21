disable_mlock = true

controller {
  name = "docker-controller"
  description = "A controller for a docker demo!"
  database {
      url = "env://BOUNDARY_PG_URL"
  }
}

worker {
  name = "docker-worker"
  description = "A worker for a docker demo"
  #address = "boundary"
  public_addr = "127.0.0.1"
}

listener "tcp" {
  address = "boundary"
  purpose = "api"
  tls_disable = true 
}

listener "tcp" {
  address = "boundary"
  purpose = "cluster"
  tls_disable = true 
}

listener "tcp" {
	address = "boundary"
	purpose = "proxy"
	tls_disable = true
}

kms "aead" {
  purpose = "root"
  aead_type = "aes-gcm"
  key = "sP1fnF5Xz85RrXyELHFeZg9Ad2qt4Z4bgNHVGtD6ung="
  key_id = "global_root"
}

kms "aead" {
  purpose = "worker-auth"
  aead_type = "aes-gcm"
  key = "8fZBjCUfN0TzjEGLQldGY4+iE9AkOvCfjh7+p0GtRBQ="
  key_id = "global_worker-auth"
}

kms "aead" {
  purpose = "recovery"
  aead_type = "aes-gcm"
  key = "8fZBjCUfN0TzjEGLQldGY4+iE9AkOvCfjh7+p0GtRBQ="
  key_id = "global_recovery"
}

