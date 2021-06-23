## *** This terraform script creates a virtual cloud network with required
## *** resources of internet connectivity.
## *** It creates two linux webservers and installs webserver software.
## *** It opens necessary ports on the host and in security lists
## *** of virtual cloud network for the webserver.


variable "tenancy_ocid" {
  type = string
}

variable "user_ocid" {
  type = string
}

variable "fingerprint" {
  type = string
}

variable "private_key_path" {
  type = string
}

variable "region" {
  type = string
}

variable "region_name" {
  type = string
}

variable "ssh_private_key" {
  type = string
}
variable "ssh_public_key" {
  type = string
}

variable compartment_ocid {
  type = string
}

variable backend_port {
  type    = number
  default = 80
}

variable backend_set_lb_cookie_session_persistence_configuration_cookie_name {
  type    = string
  default = "oci_webserver_cookie"
}

provider oci {
  version          = ">= 3.60.0"
  tenancy_ocid     = var.tenancy_ocid
  user_ocid        = var.user_ocid
  fingerprint      = var.fingerprint
  private_key_path = var.private_key_path
  region           = var.region
}

data "oci_identity_availability_domains" "region_name" {
  compartment_id = var.tenancy_ocid
}

### Network Variables #####

variable "vcn_cidr_block" {
  default = "10.0.0.0/16"
}

variable "dns_label_vcn" {
  default = "dnsvcn"
}

variable "subnet_cidr_w1" {
  default = "10.0.10.0/24"
}

variable "subnet_cidr_w2" {
  default = "10.0.20.0/24"
}

variable "instance_shape" {
  default = "VM.Standard2.1"
}

variable "load_balancer_shape" {
  default = "VM.Standard2.1"
}

#### VCN  #######

resource "oci_core_virtual_network" "vcn_w" {
  cidr_block     = var.vcn_cidr_block
  compartment_id = var.compartment_ocid
  display_name   = "vcn_webserver"
  dns_label      = "vcn"

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

#### Internet Gateay ###

resource "oci_core_internet_gateway" "igw" {
  compartment_id = var.compartment_ocid
  display_name   = "igw"
  vcn_id         = oci_core_virtual_network.vcn_w.id
}


#### Route Table #####

resource "oci_core_route_table" "rt1" {
  compartment_id = var.compartment_ocid
  vcn_id         = oci_core_virtual_network.vcn_w.id
  display_name   = "rt1"

  route_rules {
    destination       = "0.0.0.0/0"
    network_entity_id = oci_core_internet_gateway.igw.id
  }
}


##### Security Lists ######

resource "oci_core_security_list" "sl_w" {
  display_name   = "sl-loadbalancer"
  compartment_id = var.compartment_ocid
  vcn_id         = oci_core_virtual_network.vcn_w.id

  egress_security_rules {
    protocol    = "all"
    destination = "0.0.0.0/0"
  }

  # Security Rules Protocol Codes
  # 1 = ICMP
  # 6 = TCP
  # 17 = UDP
  # 58 = ICMPv6

  /* Open port 22 (for SSH) to all incomming traffic */
  ingress_security_rules {
    tcp_options {
      max = 22
      min = 22
    }

    protocol = "6" # TCP
    source   = "0.0.0.0/0"
  }

  /* Open post 80 to all incomming TCP traffic */
  ingress_security_rules {
    tcp_options {
      max = 80
      min = 80
    }

    protocol = "6" # TCP
    source   = "0.0.0.0/0"
  }

  /* Open port 443 to all incmming traffic */
  ingress_security_rules {
    tcp_options {
      max = 443
      min = 443
    }

    protocol = "6" # TCP
    source   = "0.0.0.0/0"
  }

  ingress_security_rules {
    icmp_options {
      type = 0 # ECHO Reply
    }

    protocol = 1 # ICMP
    source   = "0.0.0.0/0"
  }

  ingress_security_rules {
    icmp_options {
      type = 3 # Destination Unreachable
      code = 4 # Fragmentation Needed and Don't Fragment was set
    }

    protocol = 1 # ICMP
    source   = "0.0.0.0/0"
  }
  ingress_security_rules {
    icmp_options {
      # ECHO
      type = 8
    }

    protocol = 1 # ICMP
    source   = "0.0.0.0/0"
  }
}


#### Subnet  #######

resource "oci_core_subnet" "subnet1" {
  availability_domain = lookup(data.oci_identity_availability_domains.region_name.availability_domains[0], "name")
  cidr_block          = var.subnet_cidr_w1
  display_name        = "subnet1-AD1"
  security_list_ids   = [oci_core_security_list.sl_w.id]
  compartment_id      = var.compartment_ocid
  vcn_id              = oci_core_virtual_network.vcn_w.id
  route_table_id      = oci_core_route_table.rt1.id
  dhcp_options_id     = oci_core_virtual_network.vcn_w.default_dhcp_options_id

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

resource "oci_core_subnet" "subnet2" {
  availability_domain = lookup(data.oci_identity_availability_domains.region_name.availability_domains[1], "name")
  cidr_block          = var.subnet_cidr_w2
  display_name        = "subnet2-AD2"
  security_list_ids   = [oci_core_security_list.sl_w.id]
  compartment_id      = var.compartment_ocid
  vcn_id              = oci_core_virtual_network.vcn_w.id
  route_table_id      = oci_core_route_table.rt1.id
  dhcp_options_id     = oci_core_virtual_network.vcn_w.default_dhcp_options_id

  provisioner "local-exec" {
    command = "sleep 5"
  }
}

/* Load Balancer */
resource "oci_load_balancer_load_balancer" "webserver_load_balancer" {
  #Required
  compartment_id = var.compartment_ocid

  # Optional
  display_name = "webserver_lb"
  shape        = "100Mbps"                                                # Small
  subnet_ids   = [oci_core_subnet.subnet1.id, oci_core_subnet.subnet2.id] # var.load_balancer_subnet_ids

  #defined_tags = {"Operations.CostCenter"= "42"}
  #freeform_tags = {"Department"= "Finance"}
  ip_mode    = "IPV4"
  is_private = "false"
  # network_security_group_ids = "${var.load_balancer_network_security_group_ids}"
}

resource "oci_load_balancer_backend" "webserver_backend" {
  #Required
  backendset_name  = "webserver_backend_set"
  ip_address       = "10.0.0.3" # var.backend_ip_address
  load_balancer_id = oci_load_balancer_load_balancer.webserver_load_balancer.id
  port             = 80

  #Optional
  #backup = "${var.backend_backup}"
  #drain = "${var.backend_drain}"
  #offline = "${var.backend_offline}"
  #weight = "${var.backend_weight}"
}

resource "oci_load_balancer_backend_set" "webserver_backend_set" {
  #Required
  health_checker {
    #Required
    protocol = "HTTP"

    #Optional
    interval_ms         = 10000
    port                = 80
    response_body_regex = "^((?!false).|\\s)*$"
    retries             = 3
    return_code         = 200
    timeout_in_millis   = 3000
    url_path            = "/healthcheck"
  }
  load_balancer_id = oci_load_balancer_load_balancer.webserver_load_balancer.id
  name             = "webserver_backend_set"
  policy           = "LEAST_CONECTIONS"

  #Optional
  lb_cookie_session_persistence_configuration {

    #Optional
    cookie_name      = var.backend_set_lb_cookie_session_persistence_configuration_cookie_name
    disable_fallback = true
    # domain             = "${var.backend_set_lb_cookie_session_persistence_configuration_domain}"
    is_http_only       = false
    is_secure          = false
    max_age_in_seconds = 3600
    path               = "/lb"
  }
  session_persistence_configuration {
    #Required
    cookie_name = "sessionCookie"

    #Optional
    # disable_fallback = "${var.backend_set_session_persistence_configuration_disable_fallback}"
  }
  # ssl_configuration {
  #   #Required
  #   certificate_name = "${oci_load_balancer_certificate.test_certificate.certificate_name}"

  #   #Optional
  #   verify_depth            = "${var.backend_set_ssl_configuration_verify_depth}"
  #   verify_peer_certificate = "${var.backend_set_ssl_configuration_verify_peer_certificate}"
  # }
}

/* Instances */
resource "oci_core_instance" "Webserver-AD1" {
  availability_domain = lookup(data.oci_identity_availability_domains.region_name.availability_domains[0], "name")
  compartment_id      = var.compartment_ocid
  display_name        = "Webserver-AD1"
  shape               = var.instance_shape

  create_vnic_details {
    subnet_id        = oci_core_subnet.subnet1.id
    display_name     = "primaryvnic"
    assign_public_ip = true
  }

  source_details {
    source_type = "image"
    source_id   = "ocid1.image.oc1.iad.aaaaaaaaiu73xa6afjzskjwvt3j5shpmboxtlo7yw4xpeqpdz5czpde7px2a"
  }

  # Configure the server via an SSH session.
  metadata = {
    ssh_authorized_keys = var.ssh_public_key
    user_data           = "${base64encode(var.user-data)}"
  }

  timeouts {
    create = "60m"
  }
}


resource "oci_core_instance" "Webserver-AD2" {
  availability_domain = lookup(data.oci_identity_availability_domains.region_name.availability_domains[1], "name")
  compartment_id      = var.compartment_ocid
  display_name        = "Webserver-AD2"
  shape               = var.instance_shape

  create_vnic_details {
    subnet_id        = oci_core_subnet.subnet2.id
    display_name     = "primaryvnic"
    assign_public_ip = true
  }

  source_details {
    source_type = "image"
    source_id   = "ocid1.image.oc1.iad.aaaaaaaaiu73xa6afjzskjwvt3j5shpmboxtlo7yw4xpeqpdz5czpde7px2a"
  }

  # Configure the server via and SSH session
  metadata = {
    ssh_authorized_keys = var.ssh_public_key
    user_data           = base64encode(var.user-data)
  }

  timeouts {
    create = "60m"
  }
}

/*
 * This user-data is sent to each compute instance via an ssh
 * session, is if a person were entering these commands
 * through a secure shell session
 */
variable "user-data" {
  default = <<EOF
#!/bin/bash -x
echo '################### webserver userdata begins #####################'
touch ~opc/userdata.`date +%s`.start
# echo '########## yum update all ###############'
# yum update -y
echo '########## basic webserver ##############'
yum install -y httpd
systemctl enable  httpd.service
systemctl start  httpd.service
echo '<html><head></head><body><pre><code>' > /var/www/html/index.html
each '' >> /var/www/html/index.html
echo '<H1><p style="color:red;">' >> /var/www/html/index.html
hostname >> /var/www/html/index.html
echo '</p></H1>' >> /var/www/html/index.html
echo '<p>' >> /var/www/html/index.html
echo '<img src="http://bit.ly/2NBa8MA" alt="OOW2018" align="left">' >> /var/www/html/index.html
echo '</code></pre></body></html>' >> /var/www/html/index.html
firewall-offline-cmd --add-service=http
systemctl enable  firewalld
systemctl restart  firewalld
touch ~opc/userdata.`date +%s`.finish
echo '################### webserver userdata ends #######################'
EOF
}

output "Webserver-AD1" {
  value = ["${oci_core_instance.Webserver-AD1.public_ip}"]
}

output "Webserver-AD2" {
  value = ["${oci_core_instance.Webserver-AD2.public_ip}"]
}

output foobar {
  value = ["Hello world"]
}
