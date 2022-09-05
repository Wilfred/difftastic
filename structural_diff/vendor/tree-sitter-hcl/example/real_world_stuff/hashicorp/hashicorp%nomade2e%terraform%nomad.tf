module "nomad_server" {

  source     = "./provision-nomad"
  depends_on = [aws_instance.server]
  count      = var.server_count

  platform = "linux_amd64"
  profile  = var.profile
  role     = "server"
  index    = count.index

  # The specific version of Nomad deployed will default to whichever one of
  # nomad_sha, nomad_version, or nomad_local_binary is set, but if you want to
  # deploy multiple versions you can use the nomad_*_server variables to
  # provide a list of builds
  nomad_version = count.index < length(var.nomad_version_server) ? var.nomad_version_server[count.index] : var.nomad_version

  nomad_sha = count.index < length(var.nomad_sha_server) ? var.nomad_sha_server[count.index] : var.nomad_sha

  nomad_local_binary = count.index < length(var.nomad_local_binary_server) ? var.nomad_local_binary_server[count.index] : var.nomad_local_binary

  nomad_url = count.index < length(var.nomad_url_server) ? var.nomad_url_server[count.index] : var.nomad_url

  nomad_enterprise = var.nomad_enterprise
  nomad_license    = var.nomad_license
  nomad_acls       = var.nomad_acls
  cluster_name     = local.random_name

  connection = {
    type        = "ssh"
    user        = "ubuntu"
    host        = aws_instance.server[count.index].public_ip
    port        = 22
    private_key = "${path.root}/keys/${local.random_name}.pem"
  }
}

# TODO: split out the different Linux targets (ubuntu, centos, arm, etc.) when
# they're available
module "nomad_client_ubuntu_bionic_amd64" {

  source     = "./provision-nomad"
  depends_on = [aws_instance.client_ubuntu_bionic_amd64]
  count      = var.client_count_ubuntu_bionic_amd64

  platform = "linux_amd64"
  profile  = var.profile
  role     = "client-linux"
  index    = count.index

  # The specific version of Nomad deployed will default to whichever one of
  # nomad_sha, nomad_version, or nomad_local_binary is set, but if you want to
  # deploy multiple versions you can use the nomad_*_client_linux
  # variables to provide a list of builds
  nomad_version = count.index < length(var.nomad_version_client_ubuntu_bionic_amd64) ? var.nomad_version_client_ubuntu_bionic_amd64[count.index] : var.nomad_version

  nomad_sha = count.index < length(var.nomad_sha_client_ubuntu_bionic_amd64) ? var.nomad_sha_client_ubuntu_bionic_amd64[count.index] : var.nomad_sha

  nomad_local_binary = count.index < length(var.nomad_local_binary_client_ubuntu_bionic_amd64) ? var.nomad_local_binary_client_ubuntu_bionic_amd64[count.index] : var.nomad_local_binary

  nomad_url = count.index < length(var.nomad_url_client_ubuntu_bionic_amd64) ? var.nomad_url_client_ubuntu_bionic_amd64[count.index] : var.nomad_url

  nomad_enterprise = var.nomad_enterprise
  nomad_acls       = false
  cluster_name     = local.random_name

  connection = {
    type        = "ssh"
    user        = "ubuntu"
    host        = aws_instance.client_ubuntu_bionic_amd64[count.index].public_ip
    port        = 22
    private_key = "${path.root}/keys/${local.random_name}.pem"
  }
}

# TODO: split out the different Windows targets (2016, 2019) when they're
# available
module "nomad_client_windows_2016_amd64" {

  source     = "./provision-nomad"
  depends_on = [aws_instance.client_windows_2016_amd64]
  count      = var.client_count_windows_2016_amd64

  platform = "windows_amd64"
  profile  = var.profile
  role     = "client-windows"
  index    = count.index

  # The specific version of Nomad deployed will default to whichever one of
  # nomad_sha, nomad_version, or nomad_local_binary is set, but if you want to
  # deploy multiple versions you can use the nomad_*_client_windows
  # variables to provide a list of builds
  nomad_version = count.index < length(var.nomad_version_client_windows_2016_amd64) ? var.nomad_version_client_windows_2016_amd64[count.index] : var.nomad_version

  nomad_sha = count.index < length(var.nomad_sha_client_windows_2016_amd64) ? var.nomad_sha_client_windows_2016_amd64[count.index] : var.nomad_sha

  # if nomad_local_binary is in use, you must pass a nomad_local_binary_client_windows_2016_amd64!
  nomad_local_binary = count.index < length(var.nomad_local_binary_client_windows_2016_amd64) ? var.nomad_local_binary_client_windows_2016_amd64[count.index] : ""

  # if nomad_url is in use, you must pass a nomad_url_client_windows_2016_amd64!
  nomad_url = count.index < length(var.nomad_url_client_windows_2016_amd64) ? var.nomad_url_client_windows_2016_amd64[count.index] : ""

  nomad_enterprise = var.nomad_enterprise
  nomad_acls       = false
  cluster_name     = local.random_name


  connection = {
    type        = "ssh"
    user        = "Administrator"
    host        = aws_instance.client_windows_2016_amd64[count.index].public_ip
    port        = 22
    private_key = "${path.root}/keys/${local.random_name}.pem"
  }
}
