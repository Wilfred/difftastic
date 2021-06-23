
data "template_file" "ogg_postgre_script" {
  template = file("ogg_pgsql/postgre.tpl")
  vars = {
	"config_file" 		= file("ogg_pgsql/odbc.ini")
	"source_postgre" 	= var.source_db
  }
}


data "template_cloudinit_config" "ogg_postgre_cloud_init" {
  gzip          = true
  base64_encode = true

  part {
    filename     = "cloudinit.sh"
    content_type = "text/x-shellscript"
    content      = data.template_file.ogg_postgre_script.rendered
  }

}