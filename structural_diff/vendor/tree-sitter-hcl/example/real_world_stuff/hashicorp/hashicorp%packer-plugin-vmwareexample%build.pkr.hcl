source "vmware-iso" "example" {
  boot_command        = ["<esc><wait>", "<esc><wait>", "<enter><wait>", "/install/vmlinuz<wait>", " initrd=/install/initrd.gz", " auto-install/enable=true", " debconf/priority=critical", " preseed/url=http://{{ .HTTPIP }}:{{ .HTTPPort }}/preseed.cfg<wait>", " -- <wait>", "<enter><wait>"]
  boot_wait           = "10s"
  guest_os_type       = "ubuntu-64"
  headless            = true
  http_directory      = "${path.root}/http"
  iso_checksum        = "sha256:946a6077af6f5f95a51f82fdc44051c7aa19f9cfc5f737954845a6050543d7c2"
  iso_url             = "http://old-releases.ubuntu.com/releases/14.04.1/ubuntu-14.04.1-server-amd64.iso"
  shutdown_command    = "echo 'vagrant' | sudo -S shutdown -P now"
  ssh_password        = "vagrant"
  ssh_timeout         = "10000s"
  ssh_username        = "vagrant"
  tools_upload_flavor = "linux"
}

build {
  sources = ["source.vmware-iso.example"]
}
