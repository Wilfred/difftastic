provider "vault" {
}

resource "vault_auth_backend" "b" {
}

module "local" {
  source = "./modules"
}
