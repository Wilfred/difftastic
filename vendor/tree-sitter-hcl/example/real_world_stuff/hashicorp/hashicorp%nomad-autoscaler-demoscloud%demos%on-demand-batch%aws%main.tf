terraform {
  required_version = ">= 0.13"

  required_providers {
    aws = {
      version = "~> 3.39"
    }

    nomad = {
      version = "~> 1.4.14"
    }
  }
}

# Providers.
provider "http" {}

provider "aws" {
  region = var.region
}

provider "nomad" {
  address = module.network.nomad_addr
}

# Pre-flight check.
resource "null_resource" "preflight_check" {
  provisioner "local-exec" {
    command = <<EOF
aws --version && \
packer --version && \
nomad --version
EOF
  }
}

# Nomad jobs.
module "nomad_jobs" {
  source     = "../shared/terraform/modules/nomad-jobs"
  depends_on = [null_resource.preflight_check]

  nomad_addr = module.network.nomad_addr
}

resource "nomad_job" "autoscaler" {
  depends_on = [null_resource.preflight_check, module.nomad_jobs]

  jobspec = templatefile(
    "${path.module}/jobs/autoscaler.nomad.tpl",
    {
      aws_region   = var.region,
      aws_asg_name = module.clients_batch.asg_name,
    }
  )
}
