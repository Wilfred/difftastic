###


module "compute-keygen" {
  source = "./modules/keysgen"
}


module "wls_docker_host" {
  ##  depends_on = [module.keygen]
  source                   = "./modules/wls_docker_host"
  tenancy_ocid             = var.tenancy_ocid
  compartment_ocid         = var.compartment_ocid
  region                   = var.region
##  fingerprint              = var.fingerprint
##  private_key_path         = var.private_key_path
##  user_ocid                = var.user_ocid

  ssh_public_key = var.ssh_public_key

  opc_key    = module.compute-keygen.OPCPrivateKey
  oracle_key = module.compute-keygen.OraclePrivateKey
}

