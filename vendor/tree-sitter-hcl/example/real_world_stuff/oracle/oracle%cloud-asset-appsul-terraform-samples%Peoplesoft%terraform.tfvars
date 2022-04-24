# AD (Availability Domain to use for creating Peoplesoft infrastructure) 
AD = "[<Availability domains in double quotes separated by commas>]"

# CIDR block of VCN to be created
vcn_cidr = "<CIDR of VCN>"

# DNS label of VCN to be created
vcn_dns_label = "<DNS of VCN>"

# Operating system version to be used for compute instances
linux_os_version = "<Operating System version of Linux>"

# Size of boot volume (in gb) of compute instances
compute_boot_volume_size_in_gb = "<Boot volume size in gb>"

# Size of block volume (in gb) of compute instances
compute_block_volume_size_in_gb = "<Block volume size in gb>"

# Login user for compute instance
compute_instance_user = "<Operating System user for compute instance>"

# Login user for bastion host
bastion_user = "<Operating System user for bastion host>"

# Timezone of compute instance
timezone = "<timezone>"

#Environment prefix to define name of resources
psft_env_prefix = "<Environment prefix>"

# Number of application instances to be created
psft_app_instance_count = "<Number of application nodes>"

# Shape of app instance
psft_app_instance_shape =  "<Application instance shape>"

# Listen port range of the application instance
psft_app_instance_listen_port_range = "[<Application instance listen port range>]"

# Number of process scheduler instances to be created
psft_ps_instance_count = "<Number of process scheduler nodes>"

# Shape of process scheduler instance
psft_ps_instance_shape =  "<Process scheduler instance shape>"

# Listen port range of the process scheduler instance
psft_ps_instance_listen_port_range = "[<Process scheduler instance listen port range>]"

# Number of elastic search instances to be created
psft_es_instance_count = "<Number of elastic search nodes>"

# Shape of elastic search instance
psft_es_instance_shape =  "<Elastic search instance shape>"

# Listen port of the elastic search instance
psft_es_instance_listen_port = "<Elastic search instance listen port>"

# Shape of tools instance
psft_tls_instance_shape =  "<Tools instance shape>"

# Listen port range of the tools instance
psft_tls_instance_listen_port_range = "[<Tools instance listen port range>]"

# Number of web instances to be created
psft_web_instance_count = "<Number of web instance nodes>"

# Shape of web instance
psft_web_instance_shape =  "<Web instance shape>"

# Listen port of the web instance
psft_web_instance_listen_port = "<Web instance listen port>"

# Mount path for software stage filesystem
psft_stage_filesystem_path = "<Path of software stage filesystem>"

# Set software stage filesystem limit
psft_stage_filesystem_size_limit_in_gb = "<Upper soft limit of software stage filesystem in gb>"

# Datbase Edition
db_edition = "<Database Edition>"

# Licensing model for database
db_license_model = "<Database license model>"

# Database version
db_version =  "<Database version>"

# Number of database nodes
db_node_count =  "<Number of database Nodes (1 for  Single instance and 2 for RAC)>"

#Shape of Database nodes
db_instance_shape = "<Database node shape>"

#Database name
db_name =  "<Database Name>"

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
load_balancer_hostname = "<Load balancer hostname>"

# Shape of Load Balancer
load_balancer_shape = "<Load Balancer shape>"

#Listen port of load balancer
load_balancer_listen_port =  "<Load balancer listen port>"