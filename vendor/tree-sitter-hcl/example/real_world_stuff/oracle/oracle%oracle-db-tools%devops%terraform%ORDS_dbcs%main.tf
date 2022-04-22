# Start
# For ORDS Only install

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

# Create a public subnet

resource "oci_core_subnet" "vcn-public-subnet"{

  # Required
  compartment_id = oci_identity_compartment.tf-compartment.id
  vcn_id = var.vcn_ocid
  cidr_block = "10.0.0.0/24"
 
  # Optional
  #route_table_id = module.vcn.ig_route_id
  security_list_ids = [oci_core_security_list.public-security-list.id]
  display_name = "public-ords-subnet"
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

# ingress_security_rules { 
#       stateless = false
#       source = "0.0.0.0/0"
#       source_type = "CIDR_BLOCK"
#       # Get protocol numbers from https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml TCP is 6
#       protocol = "6"
#       tcp_options { 
#           min = 8080        
#           max = 8080
#       }
#     }    

ingress_security_rules { 
      stateless = false
      source = "0.0.0.0/0"
      source_type = "CIDR_BLOCK"
      # Get protocol numbers from https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml TCP is 6
      protocol = "6"
      tcp_options { 
          min = 8443        
          max = 8443
      }
    }

# ingress_security_rules { 
#       stateless = false
#       source = "0.0.0.0/0"
#       source_type = "CIDR_BLOCK"
#       # Get protocol numbers from https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml TCP is 6
#       protocol = "6"
#       tcp_options { 
#           min = 443        
#           max = 443
#       }
#     }     
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
        "sudo firewall-cmd --permanent --zone=public --add-port=8443/tcp",
        # "sudo firewall-cmd --permanent --zone=public --add-port=443/tcp",        
        "sudo firewall-cmd --reload",
        ]
    
    }

depends_on = [
    oci_core_instance.ords_compute_instance,
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

    provisioner "remote-exec" {
    connection {
            agent       = false
            timeout     = "10m"
            host        = oci_core_instance.ords_compute_instance[count.index].public_ip
            user        = "opc"
            private_key = file("/path/to/your/private/keys")
            }
    
        inline = [
        # Set the config directory
        "sudo su - oracle -c 'java -jar /opt/oracle/ords/ords.war configdir /opt/oracle/ords/conf'",

        # Uninstall then install
        "sudo su - oracle -c 'java -jar /opt/oracle/ords/ords.war uninstall --parameterFile /tmp/ords_params.properties --silent'",
        "sudo su - oracle -c 'java -jar /opt/oracle/ords/ords.war install --parameterFile /tmp/ords_params.properties --silent &'",       
        "sudo su - oracle -c 'sleep 60s'",
        "sudo rm /tmp/ords_params.properties",

        # # we need to make sure ORDS is stopped.....no matter what.....
        # "sudo su - oracle -c 'systemctl stop ords'",        
        # "sudo systemctl stop ords",
        # "sudo su - oracle -c 'ps -ef | grep java | grep -v grep | awk \"{print $2}\" | xargs kill'",     

        # #prep for starting as root on 443
        # "sudo su - oracle -c 'sed -i 's/8443/443/g' /opt/oracle/ords/conf/ords/standalone/standalone.properties'",
        # "sudo sed -i \"s,ords_owner='oracle',ords_owner='root',g\" /etc/init.d/ords",
        # "sudo systemctl start ords",         
        ]
    
    }

depends_on = [
    null_resource.remote-exec
  ]

}
