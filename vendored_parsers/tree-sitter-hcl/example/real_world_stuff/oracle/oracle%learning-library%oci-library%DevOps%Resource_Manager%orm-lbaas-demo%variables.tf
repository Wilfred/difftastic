variable "region" {
}

variable "compartment_ocid" {}

variable "backendset_name" {
  default = "ormdemobackendset"
}

variable "backendset_policy" {
  description = "The load balancer policy for the backend set."
  default     = "ROUND_ROBIN"
}
variable "bootstrap_file" {
  default = "./userdata/bootstrap"
}

variable "instance_image_ocid" {
  type = "map"

  default = {
    // Oracle-provided image "Oracle-Linux-7.x"
    // See https://docs.us-phoenix-1.oraclecloud.com/images/
    // https://docs.cloud.oracle.com/iaas/images/image/7d31cb1d-f31f-450c-95c4-0539776c3dcf/
    ca-toronto-1 = "ocid1.image.oc1.ca-toronto-1.aaaaaaaafozx4cw5fgcnptx6ukgdjjfzvjb2365chtzprratabynb573wria"
    eu-frankfurt-1 = "ocid1.image.oc1.eu-frankfurt-1.aaaaaaaagbrvhganmn7awcr7plaaf5vhabmzhx763z5afiitswjwmzh7upna"
    uk-london-1    = "ocid1.image.oc1.uk-london-1.aaaaaaaajwtut4l7fo3cvyraate6erdkyf2wdk5vpk6fp6ycng3dv2y3ymvq"
    us-ashburn-1   = "ocid1.image.oc1.iad.aaaaaaaawufnve5jxze4xf7orejupw5iq3pms6cuadzjc7klojix6vmk42va"
    us-phoenix-1 = "ocid1.image.oc1.phx.aaaaaaaadjnj3da72bztpxinmqpih62c2woscbp6l3wjn36by2cvmdhjub6a"
  }
}

variable "instance_shape" {
  description = "The shape of the compute instance"
  default = "VM.Standard2.1"
}

variable "lb_shape" {
  description = "The shape of the load balancer"
  default     = "100Mbps"
}

variable "availability_domains" {
  default = "3"
}

variable "vcn_cidr" {
  default = "10.0.0.0/16"
}
variable primary_lb_cidr {
  default = "10.0.4.0/24"
}

variable failover_lb_cidr {
  default = "10.0.5.0/24"
}

variable bs1_subnet_cidr {
  description = "Private subnet for first backend set"
  default = "10.0.1.0/24"
}

variable bs2_subnet_cidr {
  default = "10.0.2.0/24"
}

variable "non_ssl_listener_port" {
  description = "The communication port for the listener without ssl enabled."
  default     = "80"
}


variable "is_private" {
  description = "To create a public or private load balancer."
  default     = false
}

variable "hc_protocol" {
  description = "The health chheecker protocol."
  default     = "HTTP"
}
variable "hc_port" {
  description = "The backend server port against which to run the health check"
  default     = "80"
}

variable "hc_interval_ms" {
  description = "Specify how frequently to run the health check."
  default     = 30000
}

variable "hc_retries" {
  description = "The number of retries to attempt before a backend server is considered unhealthy."
  default     = 3
}

variable "hc_return_code" {
  description = "The status code a healthy backend server must return."
  default     = 200
}

variable "hc_timeout_in_millis" {
  description = "The maximum time in milliseconds to wait for a reply to a health check."
  default     = 3000
}

variable "hc_response_body_regex" {
  description = "A regular expression for parsing the response body from the backend server."
  default     = ".*"
}

variable "hc_url_path" {
  description = "A URL endpoint against which to run the health check."
  default     = "/"
}

variable ssh_public_key {
  default = ""
}
