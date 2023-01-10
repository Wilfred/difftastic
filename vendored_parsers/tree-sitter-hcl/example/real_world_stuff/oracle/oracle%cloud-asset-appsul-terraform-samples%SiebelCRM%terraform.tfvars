# AD (Availability Domain to use for creating Siebel infrastructure) 
AD = "[<Availability domains in double quotes separated by commas>]"

# CIDR block of VCN to be created
vcn_cidr =  "<CIDR of VCN>"

# DNS label of VCN to be created
vcn_dns_label = "<DNS of VCN>"

# Operating system version to be used for application instances
linux_os_version = "<Operating System version of Linux>"

# Timezone of compute instance
timezone = "<timezone>"

# Login user for bastion host
bastion_user = "<Operating System user for bastion host>"

# Size of boot volume (in gb) of application instances
compute_boot_volume_size_in_gb = "<Boot volume size in gb>"

# Size of block volume (in gb) of application instances
compute_block_volume_size_in_gb = "<Block volume size in gb>"

# Login user for compute instance
compute_instance_user = "<Operating System user for compute instance>"

#Environment prefix to define name of resources
siebel_env_prefix = "<Environment prefix>"

# Number of application instances to be created
siebel_server_instance_count = "<Number of siebel server nodes>"

# Shape of app instance
siebel_server_instance_shape = "<Siebel Server instance shape>"

# Listen port of the application instance
siebel_server_instance_listen_port = "[<Siebel server listen ports separated by commas>]"

# Mount path for application filesystem
siebel_filesystem_path = "<Siebel Filesystem path>"

# Set filesystem limit
siebel_filesystem_size_limit_in_gb = "<Upper soft limit of FSS in gb>"

# Number of application instances to be created
siebel_web_instance_count ="<Number of siebel web server nodes>"

# Shape of app instance
siebel_web_instance_shape = "<Siebel web server instance shape>"

# Listen port of the application instance
siebel_web_instance_listen_port = "<Siebel web server instance listen port>"

# Number of application instances to be created
siebel_gateway_instance_count = "<Number of siebel gateway server instances>"

# Shape of app instance
siebel_gateway_instance_shape = "<Siebel gateway server instance shape>"

# Database Edition
db_edition = "<Database Edition>"

# Licensing model for database
db_license_model =  "<Database license model>"

# Database version
db_version = "<Database version>"

# Number of database nodes
db_node_count = "<Number of database Nodes (1 for  Single instance and 2 for RAC)>"

#Shape of Database nodes
db_instance_shape = "<Database node shape>"

#Database name
db_name = "<Database Name>"

#Size of Database
db_size_in_gb = "<Data size in GB>"

# Database administration (sys) password
db_admin_password = "<Database sys password>"

# Characterset of database
db_characterset = "<Database characterset>"

# National Characterset of database
db_nls_characterset = "<Database National characterset>"

# Pluggable database name
db_pdb_name = "<Pluggable database name>"

# Hostname of Load Balancer
load_balancer_hostname =  "<Load balancer hostname>"

# Shape of Load Balancer
load_balancer_shape = "<Load Balancer shape>"

#Listen port of load balancer
load_balancer_listen_port = "<Load balancer listen port>"