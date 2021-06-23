# AD (Availability Domain to use for creating EBS infrastructure) 
AD = "[<Availability domains in double quotes separated by commas>]"

# CIDR block of VCN to be created
vcn_cidr = "<CIDR of VCN>"

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

# Login user for compute instance
compute_instance_user = "<Operating System user for compute instance>"

#Environment prefix to define name of resources
ebs_env_prefix = "<Environment prefix>"

# Number of application instances to be created
ebs_app_instance_count = "<Number of application nodes>"

# Shape of app instance
ebs_app_instance_shape =  "<Application instance shape>"

# Listen port of the application instance
ebs_app_instance_listen_port = "<Application instance listen port>"

# Mount path for application filesystem
ebs_fss_primary_mount_path = "<Path of primary application filesystem>"

# Set filesystem limit
ebs_fss_limit_size_in_gb = "<Upper soft limit of FSS in gb>"

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