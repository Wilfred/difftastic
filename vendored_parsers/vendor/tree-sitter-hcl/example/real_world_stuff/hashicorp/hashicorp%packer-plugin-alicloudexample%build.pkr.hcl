// This assumes you have env vars ALICLOUD_ACCESS_KEY, ALICLOUD_SECRET_KEY,
// and ALICLOUD_REGION set.
packer {
  required_plugins {
    alicloud = {
      version = ">= 1.0.0"
      source  = "github.com/hashicorp/alicloud"
    }
  }
}

source "alicloud-ecs" "test" {
  image_name           = "packer_basic"
  source_image         = "centos_7_03_64_20G_alibase_20170818.vhd"
  ssh_username         = "root"
  instance_type        = "ecs.t5-lc1m1.small"
  internet_charge_type = "PayByTraffic"
  io_optimized         = "true"
}

build {
  sources = ["source.alicloud-ecs.test"]

  provisioner "shell" {
    inline = [
      "sleep 30",
      "yum install redis.x86_64 -y"
    ]
  }
  post-processor "manifest" {
    output = "alicloud-manifest.json"
  }
}