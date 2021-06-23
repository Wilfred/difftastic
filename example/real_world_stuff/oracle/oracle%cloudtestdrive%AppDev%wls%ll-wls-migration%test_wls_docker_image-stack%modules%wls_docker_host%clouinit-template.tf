
data "template_cloudinit_config" "wls-config" {
  gzip          = true
  base64_encode = true

  # cloud-config configuration file.
  # /var/lib/cloud/instance/scripts/*

  part {
    filename     = "ainit.sh"
    content_type = "text/x-shellscript"
    content      = file("${path.module}/userdata/before-bootstrap")
  }
  
    part {
    filename     = "binit.sh"
    content_type = "text/x-shellscript"
    content      = file("${path.module}/userdata/bootstrap")
  }


}
