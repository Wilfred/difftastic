module "child" {
    source = "./child"
}

resource "aws_instance" "web" {}
