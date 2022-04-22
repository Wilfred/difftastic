data "template_file" "source_postgre_script" {
  template = file("source_db/ubuntu.tpl")
}
data "template_cloudinit_config" "source_postgre_cloud_init" {
  gzip          = true
  base64_encode = true

  part {
    filename     = "cloud-init.sh"
    content_type = "text/x-shellscript"
    content      = data.template_file.source_postgre_script.rendered
  }
}
