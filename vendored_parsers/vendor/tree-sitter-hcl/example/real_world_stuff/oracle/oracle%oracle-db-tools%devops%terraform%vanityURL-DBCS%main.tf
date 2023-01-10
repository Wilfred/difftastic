# Start

# Get ADs

# <tenancy-ocid> is the compartment OCID for the root compartment.
# Use <tenancy-ocid> for the compartment OCID.

data "oci_identity_availability_domains" "ads" {
  compartment_id = var.tenancy_ocid
}

# Create a compartment

resource "oci_identity_compartment" "tf-compartment" {
    # Required
    compartment_id = var.tenancy_ocid
    description = "Compartment for Terraform resources."
    name = "ORDS_Compartment"
}

# Create a private subnet

resource "oci_core_subnet" "vcn-private-subnet"{

  # Required
  compartment_id = oci_identity_compartment.tf-compartment.id
  vcn_id = var.vcn_ocid
  cidr_block = "10.0.1.0/24"
 
  # Optional
  # Caution: For the route table id, use module.vcn.nat_route_id.
  # Do not use module.vcn.nat_gateway_id, because it is the OCID for the gateway and not the route table.
  #route_table_id = module.vcn.nat_route_id
  security_list_ids = [oci_core_security_list.private-security-list.id]
  display_name = "private-subnet"
}

# Create a public subnet

resource "oci_core_subnet" "vcn-public-subnet"{

  # Required
  compartment_id = oci_identity_compartment.tf-compartment.id
  vcn_id = var.vcn_ocid
  cidr_block = "10.0.0.0/24"
 
  # Optional
  #route_table_id = module.vcn.ig_route_id
  security_list_ids = [oci_core_security_list.public-security-list.id]
  display_name = "public-subnet"
}

# Create a private security list and some rules

resource "oci_core_security_list" "private-security-list"{

# Required
  compartment_id = oci_identity_compartment.tf-compartment.id
  vcn_id = var.vcn_ocid

# Optional
  display_name = "security-list-for-private-ords-subnet"

#   
egress_security_rules {
      stateless = false
      destination = "0.0.0.0/0"
      destination_type = "CIDR_BLOCK"
      protocol = "all" 
  }

ingress_security_rules { 
      stateless = false
      source = "10.0.0.0/16"
      source_type = "CIDR_BLOCK"
      # Get protocol numbers from https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml TCP is 6
      protocol = "6"
      tcp_options { 
          min = 22
          max = 22
      }
    }
  ingress_security_rules { 
      stateless = false
      source = "0.0.0.0/0"
      source_type = "CIDR_BLOCK"
      # Get protocol numbers from https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml ICMP is 1  
      protocol = "1"
  
      # For ICMP type and code see: https://www.iana.org/assignments/icmp-parameters/icmp-parameters.xhtml
      icmp_options {
        type = 3
        code = 4
      } 
    }   
  
  ingress_security_rules { 
      stateless = false
      source = "10.0.0.0/16"
      source_type = "CIDR_BLOCK"
      # Get protocol numbers from https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml ICMP is 1  
      protocol = "1"
  
      # For ICMP type and code see: https://www.iana.org/assignments/icmp-parameters/icmp-parameters.xhtml
      icmp_options {
        type = 3
      } 
    }
}

# Create a public security list and some rules

resource "oci_core_security_list" "public-security-list"{

# Required
  compartment_id = oci_identity_compartment.tf-compartment.id
  vcn_id = var.vcn_ocid

# Optional
  display_name = "security-list-for-public-ords-subnet"

  egress_security_rules {
      stateless = false
      destination = "0.0.0.0/0"
      destination_type = "CIDR_BLOCK"
      protocol = "all" 
  }
ingress_security_rules { 
      stateless = false
      source = "0.0.0.0/0"
      source_type = "CIDR_BLOCK"
      # Get protocol numbers from https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml TCP is 6
      protocol = "6"
      tcp_options { 
          min = 22
          max = 22
      }
    }
ingress_security_rules { 
      stateless = false
      source = "0.0.0.0/0"
      source_type = "CIDR_BLOCK"
      # Get protocol numbers from https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml TCP is 6
      protocol = "6"
      tcp_options { 
          min = 80
          max = 80
      }
    }
ingress_security_rules { 
      stateless = false
      source = "0.0.0.0/0"
      source_type = "CIDR_BLOCK"
      # Get protocol numbers from https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml TCP is 6
      protocol = "6"
      tcp_options { 
          min = 8080        
          max = 8080
      }
    }    
ingress_security_rules { 
      stateless = false
      source = "0.0.0.0/0"
      source_type = "CIDR_BLOCK"
      # Get protocol numbers from https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml TCP is 6
      protocol = "6"
      tcp_options { 
          min = 443        
          max = 443
      }
    }     
  ingress_security_rules { 
      stateless = false
      source = "0.0.0.0/0"
      source_type = "CIDR_BLOCK"
      # Get protocol numbers from https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml ICMP is 1  
      protocol = "1"
  
      # For ICMP type and code see: https://www.iana.org/assignments/icmp-parameters/icmp-parameters.xhtml
      icmp_options {
        type = 3
        code = 4
      } 
    }   
  
  ingress_security_rules { 
      stateless = false
      source = "10.0.0.0/16"
      source_type = "CIDR_BLOCK"
      # Get protocol numbers from https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml ICMP is 1  
      protocol = "1"
  
      # For ICMP type and code see: https://www.iana.org/assignments/icmp-parameters/icmp-parameters.xhtml
      icmp_options {
        type = 3
      } 
    }

}

# Create DHCP Options

resource "oci_core_dhcp_options" "dhcp-options"{

  # Required
  compartment_id = oci_identity_compartment.tf-compartment.id
  vcn_id = var.vcn_ocid
  #Options for type are either "DomainNameServer" or "SearchDomain"
  options {
      type = "DomainNameServer"  
      server_type = "VcnLocalPlusInternet"
  }
  
  # Optional
  display_name = "default-dhcp-options"
}

# Create a compute instance

resource "oci_core_instance" "ords_compute_instance" {
    # Required
    availability_domain = data.oci_identity_availability_domains.ads.availability_domains[0].name
    compartment_id = oci_identity_compartment.tf-compartment.id
    is_pv_encryption_in_transit_enabled = "true"
    count = var.number_of_midtiers
# Shape Section
#
    shape = var.vm_shape
#
# Remember to add the following section if using one of the shapes that need it. Refer to the readme
#
	  shape_config {
		  memory_in_gbs = "8"
		  ocpus = "1"
    }
#
#    
    source_details {
        # Oracle Linux 7.9
        source_id = "ocid1.image.oc1.eu-frankfurt-1.aaaaaaaaprt6uk32tylin3owcddyllao3uthmo7vheqepeybvjj6to7xkdgq"
        source_type = "image"
    }

    # Optional
    display_name = "ORDS${count.index}"
    create_vnic_details {
        assign_public_ip = true
        subnet_id = oci_core_subnet.vcn-public-subnet.id
    }
    metadata = {
        ssh_authorized_keys = file("/path/to/your/public/keys")
        block_storage_sizes_in_gbs = "20"
    } 
    preserve_boot_volume = false
}

# Create a volume

# resource "oci_core_volume" "ords_volume" {

#     availability_domain = data.oci_identity_availability_domains.ads.availability_domains[0].name
#     compartment_id = oci_identity_compartment.tf-compartment.id
#     display_name = "ords_volume"
#     size_in_gbs = "50"
# }

# # Attach the volume

# resource "oci_core_volume_attachment" "attach_volume" {

#     instance_id = oci_core_instance.ords_compute_instance.id
#     volume_id = oci_core_volume.ords_volume.id
#     attachment_type = "paravirtualized"

# }

# Load Balancer

resource "oci_load_balancer_load_balancer" "vanity_load_balancer" {

    compartment_id = oci_identity_compartment.tf-compartment.id
    display_name = "LB1"
    # LB Shape can be changed here
    shape = "10Mbps-Micro"
    subnet_ids = [oci_core_subnet.vcn-public-subnet.id]

depends_on = [
    oci_core_instance.ords_compute_instance,
  ]

}

resource "oci_load_balancer_backend" "vanity_backend" {
    count = var.number_of_midtiers
    backendset_name = oci_load_balancer_backend_set.vanity_backend_set.name
    ip_address = oci_core_instance.ords_compute_instance[count.index].private_ip
    load_balancer_id = oci_load_balancer_load_balancer.vanity_load_balancer.id
    port = "8080"

}

resource "oci_load_balancer_backend" "vanity_backend_ssl" {
    count = var.number_of_midtiers
    backendset_name = oci_load_balancer_backend_set.vanity_backend_set_ssl.name
    ip_address = oci_core_instance.ords_compute_instance[count.index].private_ip
    load_balancer_id = oci_load_balancer_load_balancer.vanity_load_balancer.id
    port = "443"

}

resource "oci_load_balancer_backend_set" "vanity_backend_set" {
    #Required
    health_checker {
        #Required
        protocol = "TCP"

        #Optional
        interval_ms = "10000"
        port = "8080"
        retries = "3"
        timeout_in_millis = "3000"
    }
    load_balancer_id = oci_load_balancer_load_balancer.vanity_load_balancer.id
    name = "ords_backendset"
    policy = "ROUND_ROBIN"

}

resource "oci_load_balancer_backend_set" "vanity_backend_set_ssl" {
    #Required
    health_checker {
        #Required
        protocol = "TCP"

        #Optional
        interval_ms = "10000"
        port = "443"
        retries = "3"
        timeout_in_millis = "3000"
    }
    load_balancer_id = oci_load_balancer_load_balancer.vanity_load_balancer.id
    name = "ords_backendset_ssl"
    policy = "ROUND_ROBIN"

}

resource "oci_load_balancer_listener" "vanity_listener" {
    #Required
    default_backend_set_name = oci_load_balancer_backend_set.vanity_backend_set.name
    load_balancer_id = oci_load_balancer_load_balancer.vanity_load_balancer.id
    name = "ORDS_BackendListener"
    port = "80"
    protocol = "TCP"

}

resource "oci_load_balancer_listener" "vanity_listener_ssl" {
    #Required
    default_backend_set_name = oci_load_balancer_backend_set.vanity_backend_set_ssl.name
    load_balancer_id = oci_load_balancer_load_balancer.vanity_load_balancer.id
    name = "ORDS_BackendListener_ssl"
    port = "443"
    protocol = "TCP"

}


# OS Stuff

resource "null_resource" "remote-exec" {

        count = var.number_of_midtiers

        provisioner "remote-exec" {
        connection {
        agent       = false
        timeout     = "10m"
        host        = oci_core_instance.ords_compute_instance[count.index].public_ip
        user        = "opc"
        private_key = file("/path/to/your/private/keys")
        }
    
        inline = [
        "sudo yum install ords -y",
        # "sudo yum install sqlcl -y",
        "sudo firewall-cmd --permanent --zone=public --add-port=8080/tcp",
        "sudo firewall-cmd --permanent --zone=public --add-port=443/tcp",        
        "sudo firewall-cmd --reload",
        ]
    
    }

depends_on = [
    oci_core_instance.ords_compute_instance,
    oci_load_balancer_listener.vanity_listener,
  ]

}


resource "null_resource" "file" {

    count = var.number_of_midtiers

    connection {
            agent       = false
            timeout     = "10m"
            host        = oci_core_instance.ords_compute_instance[count.index].public_ip
            user        = "opc"
            private_key = file("/path/to/your/private/keys")
            }

    provisioner "file" {
        source      = "ords_params.properties"
        destination = "/tmp/ords_params.properties"
  }

    provisioner "file" {
        source      = "standalone.properties.SSL"
        destination = "/tmp/standalone.properties.SSL"
  }


    provisioner "remote-exec" {
    connection {
            agent       = false
            timeout     = "10m"
            host        = oci_core_instance.ords_compute_instance[count.index].public_ip
            user        = "opc"
            private_key = file("/path/to/your/private/keys")
            }
    
        inline = [
        # Uncomment if you need APEX
        # "sudo su - oracle -c 'curl -o /opt/oracle/ords/apex.zip APEX_PAR_URL'",
        # "sudo su - oracle -c 'unzip -q /opt/oracle/ords/apex.zip -d /opt/oracle/ords'", 

        # "sudo su - oracle -c 'curl -o /opt/oracle/ords/ords_conf.zip ORDS_CONF_PAR_URL'",        
        # "sudo su - oracle -c 'unzip -q /opt/oracle/ords/ords_conf.zip -d /opt/oracle/ords/'",
        # "sudo su - oracle -c 'sed -i 's/PASSWORD_HERE/${random_string.password.result}/g' /opt/oracle/ords/conf/ords/create_user.sql'",
        # "sudo su - oracle -c 'sed -i 's/PASSWORD_HERE/${random_string.password.result}/g' /opt/oracle/ords/conf/ords/conf/apex_pu.xml'",        
        
        # Set the config directory
        "sudo su - oracle -c 'java -jar /opt/oracle/ords/ords.war configdir /opt/oracle/ords/conf'",
        "sudo su - oracle -c 'mkdir -p /opt/oracle/ords/conf/ords/standalone/doc_root/.well-known/acme-challenge'",
        
        # "sudo su - oracle -c 'sql system/${var.admin_password}@${var.db_connect_string} @/opt/oracle/ords/conf/ords/create_user.sql'",
        # "sudo su - oracle -c 'java -jar -Duser.timezone=UTC /opt/oracle/ords/ords.war standalone &'",
        # slient install syntax java-jar ords.war install --silent --parameterFile /path/to/my_params.properties
        
        # Use the approiprate properties file for APEX or not 
        "sudo su - oracle -c 'java -jar /opt/oracle/ords/ords.war uninstall --parameterFile /tmp/ords_params.properties --silent'",
        "sudo su - oracle -c 'java -jar /opt/oracle/ords/ords.war install --parameterFile /tmp/ords_params.properties --silent &'",        
        "sudo su - oracle -c 'sleep 210s'",
        "sudo rm /tmp/ords_params.properties",    
        ]
    
    }

depends_on = [
    null_resource.remote-exec
  ]

}



resource "null_resource" "cert" {

    count = var.number_of_midtiers

    connection {
            agent       = false
            timeout     = "10m"
            host        = oci_core_instance.ords_compute_instance[count.index].public_ip
            user        = "opc"
            private_key = file("/path/to/your/private/keys")
            }


    provisioner "remote-exec" {
    connection {
            agent       = false
            timeout     = "10m"
            host        = oci_core_instance.ords_compute_instance[count.index].public_ip
            user        = "opc"
            private_key = file("/path/to/your/private/keys")
            }
    
        inline = [

        "sudo su - oracle -c 'curl --silent https://raw.githubusercontent.com/srvrco/getssl/master/getssl > getssl ; chmod 700 getssl'",
        "sudo su - oracle -c './getssl -c ${var.domain_name}'",
        "sudo su - oracle -c 'cd ~/.getssl ; cd $(ls -d */|head -n 1) ; echo 'PRIVATE_KEY_ALG=\"rsa\"' >> getssl.cfg ; echo \"ACL=('/opt/oracle/ords/conf/ords/standalone/doc_root/.well-known/acme-challenge')\" >> getssl.cfg ; echo 'USE_SINGLE_ACL=\"true\"' >> getssl.cfg ; '",
        "sudo su - oracle -c 'cd ~/.getssl ; sed -i 's/acme-staging-v02/acme-v02/g' getssl.cfg'",
        "sudo su - oracle -c './getssl ${var.domain_name}'",
        "sudo su - oracle -c 'cd ~/.getssl; cd $(ls -d */|head -n 1); cp ${var.domain_name}.crt /opt/oracle/ords/conf/ords/standalone/domain.crt; cp ${var.domain_name}.key /opt/oracle/ords/conf/ords/standalone/domain.key; '",
        "sudo su - oracle -c 'openssl pkcs8 -topk8 -inform PEM -outform PEM -nocrypt -in /opt/oracle/ords/conf/ords/standalone/domain.key -out /opt/oracle/ords/conf/ords/standalone/domain.pkcs8.key'",
        "sudo su - oracle -c 'openssl pkcs8 -topk8 -inform PEM -outform DER -in /opt/oracle/ords/conf/ords/standalone/domain.pkcs8.key -out /opt/oracle/ords/conf/ords/standalone/domain.pkcs8.der -nocrypt'",
        "sudo su - oracle -c 'rm /opt/oracle/ords/conf/ords/standalone/domain.pkcs8.key'",
        "sudo su - oracle -c 'cp /opt/oracle/ords/conf/ords/standalone/standalone.properties /opt/oracle/ords/conf/ords/standalone/standalone.properties.nonSSL'",        
        "sudo su - oracle -c 'cp /tmp/standalone.properties.SSL /opt/oracle/ords/conf/ords/standalone/standalone.properties'",
# we need to make sure ORDS is stopped.....no matter what.....
        "sudo su - oracle -c 'systemctl stop ords'",        
        "sudo systemctl stop ords",
        "sudo su - oracle -c 'ps -ef | grep java | grep -v grep | awk \"{print $2}\" | xargs kill'",        
#        "echo 'JAVA_OPTIONS=-Xmx512M' | sudo tee -a /etc/ords/ords.conf",
        "sudo sed -i \"s,ords_owner='oracle',ords_owner='root',g\" /etc/init.d/ords",
        "sudo systemctl start ords",
#        "sudo su - oracle -c 'ps -ef | grep java | grep -v grep | awk \"{print $2}\" | xargs kill'",
#        "sudo java -Xmx512M -jar -Duser.timezone=UTC /opt/oracle/ords/ords.war standalone &",
        ]
    
    }

depends_on = [
    null_resource.file
  ]

}

