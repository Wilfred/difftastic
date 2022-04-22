# Copyright 2017, 2019, Oracle Corporation and/or affiliates.  All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at http://oss.oracle.com/licenses/upl

resource "null_resource" "sdb_shard_db_create" {
  # depends_on  = ["null_resource.sdb_shard_db_install_sw"]
  count = "${var.setup_mode == "new_install" ? 0 : length(var.shards)}"

  #creates ssh connection 
  connection {
    type = "ssh"
    user = "${var.os_user}"
    private_key = "${file(var.ssh_private_key_path)}"
    host = "${lookup(var.shards[element(keys(var.shards), count.index)], "host")}"
    agent = false
    timeout = "${var.ssh_timeout}"
  }

    # Creating db install and tns listener 
  provisioner "remote-exec" {
    inline = [ <<EOF
    ${var.db_home_path}/bin/netca -silent -responseFile ${var.db_home_path}/assistants/netca/netca.rsp
    EOF
    ]
  }

provisioner "file" {
    content  = <<EOF
##############################################################################
##                                                                          ##
##                            DBCA response file                            ##
##                            ------------------                            ##
## Copyright(c) Oracle Corporation 1998,2019. All rights reserved.         ##
##                                                                          ##
## Specify values for the variables listed below to customize               ##
## your installation.                                         		    ##
##                                                            		    ##
## Each variable is associated with a comment. The comment    		    ##
## can help to populate the variables with the appropriate   		    ##
## values.                                                  		    ##
##                                                               	    ##
## IMPORTANT NOTE: This file contains plain text passwords and   	    ##
## should be secured to have read permission only by oracle user 	    ##
## or db administrator who owns this installation.               	    ##
##############################################################################
#-------------------------------------------------------------------------------
# Do not change the following system generated value. 
#-------------------------------------------------------------------------------
responseFileVersion=/oracle/assistants/rspfmt_dbca_response_schema_v${local.db_major_version}.0.0

#-----------------------------------------------------------------------------
# Name          : gdbName
# Datatype      : String
# Description   : Global database name of the database
# Valid values  : <db_name>.<db_domain> - when database domain isn't NULL
#                 <db_name>             - when database domain is NULL
# Default value : None
# Mandatory     : Yes
#-----------------------------------------------------------------------------
gdbName=${lookup(var.shards[element(keys(var.shards), count.index)], "globalDBName")}

#-----------------------------------------------------------------------------
# Name          : sid
# Datatype      : String
# Description   : System identifier (SID) of the database
# Valid values  : Check Oracle12c Administrator's Guide
# Default value : <db_name> specified in GDBNAME
# Mandatory     : No
#-----------------------------------------------------------------------------
sid=${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}

#-----------------------------------------------------------------------------
# Name          : databaseConfigType
# Datatype      : String
# Description   : database conf type as Single Instance, Real Application Cluster or Real Application Cluster One Nodes database
# Valid values  : SI\RAC\RACONENODE
# Default value : SI
# Mandatory     : No
#-----------------------------------------------------------------------------
databaseConfigType=SI

#-----------------------------------------------------------------------------
# Name          : RACOneNodeServiceName
# Datatype      : String
# Description   : Service is required by application to connect to RAC One 
#		  Node Database
# Valid values  : Service Name
# Default value : None
# Mandatory     : No [required in case DATABASECONFTYPE is set to RACONENODE ]
#-----------------------------------------------------------------------------
RACOneNodeServiceName=

#-----------------------------------------------------------------------------
# Name          : policyManaged
# Datatype      : Boolean
# Description   : Set to true if Database is policy managed and 
#		  set to false if  Database is admin managed
# Valid values  : TRUE\FALSE
# Default value : FALSE
# Mandatory     : No
#-----------------------------------------------------------------------------
policyManaged=false


#-----------------------------------------------------------------------------
# Name          : createServerPool
# Datatype      : Boolean
# Description   : Set to true if new server pool need to be created for database 
#		  if this option is specified then the newly created database 
#		  will use this newly created serverpool. 
#		  Multiple serverpoolname can not be specified for database
# Valid values  : TRUE\FALSE
# Default value : FALSE
# Mandatory     : No
#-----------------------------------------------------------------------------
createServerPool=false

#-----------------------------------------------------------------------------
# Name          : serverPoolName
# Datatype      : String
# Description   : Only one serverpool name need to be specified 
#		   if Create Server Pool option is specified. 
#		   Comma-separated list of Serverpool names if db need to use
#		   multiple Server pool
# Valid values  : ServerPool name

# Default value : None
# Mandatory     : No [required in case of RAC service centric database]
#-----------------------------------------------------------------------------
serverPoolName=

#-----------------------------------------------------------------------------
# Name          : cardinality
# Datatype      : Number
# Description   : Specify Cardinality for create server pool operation

# Valid values  : any positive Integer value
# Default value : Number of qualified nodes on cluster
# Mandatory     : No [Required when a new serverpool need to be created]
#-----------------------------------------------------------------------------
cardinality=

#-----------------------------------------------------------------------------
# Name          : force
# Datatype      : Boolean
# Description   : Set to true if new server pool need to be created by force 
#		  if this option is specified then the newly created serverpool
#		  will be assigned server even if no free servers are available.
#		  This may affect already running database.
#		  This flag can be specified for Admin managed as well as policy managed db.
# Valid values  : TRUE\FALSE
# Default value : FALSE
# Mandatory     : No
#-----------------------------------------------------------------------------
force=false

#-----------------------------------------------------------------------------
# Name          : pqPoolName
# Datatype      : String
# Description   : Only one serverpool name needs to be specified 
#		   if create server pool option is specified. 
#		   Comma-separated list of serverpool names if use
#		   server pool. This is required to 
#                  create Parallel Query (PQ) database. Applicable to Big Cluster
# Valid values  :  Parallel Query (PQ) pool name
# Default value : None
# Mandatory     : No [required in case of RAC service centric database]
#-----------------------------------------------------------------------------
pqPoolName=

#-----------------------------------------------------------------------------
# Name          : pqCardinality
# Datatype      : Number
# Description   : Specify Cardinality for create server pool operation.
#                 Applicable to Big Cluster 
# Valid values  : any positive Integer value
# Default value : Number of qualified nodes on cluster
# Mandatory     : No [Required when a new serverpool need to be created]
#-----------------------------------------------------------------------------
pqCardinality=

#-----------------------------------------------------------------------------
# Name          : createAsContainerDatabase 
# Datatype      : boolean
# Description   : flag to create database as container database 
# Valid values  : Check Oracle12c Administrator's Guide
# Default value : false
# Mandatory     : No
#-----------------------------------------------------------------------------
createAsContainerDatabase=false

#-----------------------------------------------------------------------------
# Name          : numberOfPDBs
# Datatype      : Number
# Description   : Specify the number of pdb to be created
# Valid values  : 0 to 252
# Default value : 0
# Mandatory     : No
#-----------------------------------------------------------------------------
numberOfPDBs=0

#-----------------------------------------------------------------------------
# Name          : pdbName 
# Datatype      : String
# Description   : Specify the pdbname/pdbanme prefix if one or more pdb need to be created
# Valid values  : Check Oracle12c Administrator's Guide
# Default value : None
# Mandatory     : No
#-----------------------------------------------------------------------------
pdbName=

#-----------------------------------------------------------------------------
# Name          : useLocalUndoForPDBs 
# Datatype      : boolean
# Description   : Flag to create local undo tablespace for all PDB's.
# Valid values  : TRUE\FALSE
# Default value : TRUE
# Mandatory     : No
#-----------------------------------------------------------------------------
useLocalUndoForPDBs=true

#-----------------------------------------------------------------------------
# Name          : pdbAdminPassword
# Datatype      : String
# Description   : PDB Administrator user password
# Valid values  : Check Oracle12c Administrator's Guide
# Default value : None
# Mandatory     : No
#-----------------------------------------------------------------------------

pdbAdminPassword=

#-----------------------------------------------------------------------------
# Name          : nodelist
# Datatype      : String
# Description   : Comma-separated list of cluster nodes
# Valid values  : Cluster node names
# Default value : None
# Mandatory     : No (Yes for RAC database-centric database )
#-----------------------------------------------------------------------------
nodelist=

#-----------------------------------------------------------------------------
# Name          : templateName
# Datatype      : String
# Description   : Name of the template
# Valid values  : Template file name
# Default value : None
# Mandatory     : Yes
#-----------------------------------------------------------------------------
templateName=${var.db_home_path}/assistants/dbca/templates/General_Purpose.dbc

#-----------------------------------------------------------------------------
# Name          : sysPassword
# Datatype      : String
# Description   : Password for SYS user
# Valid values  : Check Oracle12c Administrator's Guide
# Default value : None
# Mandatory     : Yes
#-----------------------------------------------------------------------------
sysPassword=${var.sys_pass}

#-----------------------------------------------------------------------------
# Name          : systemPassword
# Datatype      : String
# Description   : Password for SYSTEM user
# Valid values  : Check Oracle12c Administrator's Guide
# Default value : None
# Mandatory     : Yes
#-----------------------------------------------------------------------------
systemPassword=${var.system_pass}

#-----------------------------------------------------------------------------
# Name          : serviceUserPassword
# Datatype      : String
# Description   : Password for Windows Service user
# Default value : None
# Mandatory     : If Oracle home is installed with windows service user
#-----------------------------------------------------------------------------
serviceUserPassword=

#-----------------------------------------------------------------------------
# Name          : emConfiguration
# Datatype      : String
# Description   : Enterprise Manager Configuration Type
# Valid values  : CENTRAL|DBEXPRESS|BOTH|NONE
# Default value : NONE
# Mandatory     : No
#-----------------------------------------------------------------------------
emConfiguration=

#-----------------------------------------------------------------------------
# Name          : emExpressPort
# Datatype      : Number
# Description   : Enterprise Manager Configuration Type
# Valid values  : Check Oracle12c Administrator's Guide
# Default value : NONE
# Mandatory     : No, will be picked up from DBEXPRESS_HTTPS_PORT env variable
#                 or auto generates a free port between 5500 and 5599
#-----------------------------------------------------------------------------
emExpressPort=5500

#-----------------------------------------------------------------------------
# Name          : runCVUChecks
# Datatype      : Boolean
# Description   : Specify whether to run Cluster Verification Utility checks
#                 periodically in Cluster environment
# Valid values  : TRUE\FALSE
# Default value : FALSE
# Mandatory     : No
#-----------------------------------------------------------------------------
runCVUChecks=FALSE

#-----------------------------------------------------------------------------
# Name          : dbsnmpPassword
# Datatype      : String
# Description   : Password for DBSNMP user
# Valid values  : Check Oracle12c Administrator's Guide
# Default value : None
# Mandatory     : Yes, if emConfiguration is specified or
#                 the value of runCVUChecks is TRUE
#-----------------------------------------------------------------------------
dbsnmpPassword=

#-----------------------------------------------------------------------------
# Name          : omsHost
# Datatype      : String
# Description   : EM management server host name
# Default value : None
# Mandatory     : Yes, if CENTRAL is specified for emConfiguration
#-----------------------------------------------------------------------------
omsHost=

#-----------------------------------------------------------------------------
# Name          : omsPort
# Datatype      : Number
# Description   : EM management server port number
# Default value : None
# Mandatory     : Yes, if CENTRAL is specified for emConfiguration
#-----------------------------------------------------------------------------
omsPort=0

#-----------------------------------------------------------------------------
# Name          : emUser
# Datatype      : String
# Description   : EM Admin username to add or modify targets
# Default value : None
# Mandatory     : Yes, if CENTRAL is specified for emConfiguration
#-----------------------------------------------------------------------------
emUser=

#-----------------------------------------------------------------------------
# Name          : emPassword
# Datatype      : String
# Description   : EM Admin user password
# Default value : None
# Mandatory     : Yes, if CENTRAL is specified for emConfiguration
#-----------------------------------------------------------------------------
emPassword=

#-----------------------------------------------------------------------------
# Name          : dvConfiguration
# Datatype      : Boolean
# Description   : Specify "True" to configure and enable Oracle Database vault
# Valid values  : True/False
# Default value : False
# Mandatory     : No
#-----------------------------------------------------------------------------
dvConfiguration=false

#-----------------------------------------------------------------------------
# Name          : dvUserName
# Datatype      : String
# Description   : DataVault Owner
# Valid values  : Check Oracle12c Administrator's Guide
# Default value : None
# Mandatory     : Yes, if DataVault option is chosen
#-----------------------------------------------------------------------------
dvUserName=

#-----------------------------------------------------------------------------
# Name          : dvUserPassword
# Datatype      : String
# Description   : Password for DataVault Owner
# Valid values  : Check Oracle12c Administrator's Guide
# Default value : None
# Mandatory     : Yes, if DataVault option is chosen
#-----------------------------------------------------------------------------
dvUserPassword=

#-----------------------------------------------------------------------------
# Name          : dvAccountManagerName
# Datatype      : String
# Description   : DataVault Account Manager
# Valid values  : Check Oracle12c Administrator's Guide
# Default value : None
# Mandatory     : No
#-----------------------------------------------------------------------------
dvAccountManagerName=

#-----------------------------------------------------------------------------
# Name          : dvAccountManagerPassword
# Datatype      : String
# Description   : Password for  DataVault Account Manager
# Valid values  : Check Oracle12c Administrator's Guide
# Default value : None
# Mandatory     : No
#-----------------------------------------------------------------------------
dvAccountManagerPassword=

#-----------------------------------------------------------------------------
# Name          : olsConfiguration
# Datatype      : Boolean
# Description   : Specify "True" to configure and enable Oracle Label Security
# Valid values  : True/False
# Default value : False
# Mandatory     : No
#-----------------------------------------------------------------------------
olsConfiguration=false

#-----------------------------------------------------------------------------
# Name          : datafileJarLocation 
# Datatype      : String
# Description   : Location of the data file jar 
# Valid values  : Directory containing compressed datafile jar
# Default value : None
# Mandatory     : No
#-----------------------------------------------------------------------------
datafileJarLocation={ORACLE_HOME}/assistants/dbca/templates/

#-----------------------------------------------------------------------------
# Name          : datafileDestination 
# Datatype      : String
# Description   : Location of the data file's
# Valid values  : Directory for all the database files
# Default value : $ORACLE_BASE/oradata
# Mandatory     : No
#-----------------------------------------------------------------------------
datafileDestination={ORACLE_BASE}/oradata/{DB_UNIQUE_NAME}/

#-----------------------------------------------------------------------------
# Name          : recoveryAreaDestination
# Datatype      : String
# Description   : Location of the data file's
# Valid values  : Recovery Area location
# Default value : $ORACLE_BASE/flash_recovery_area
# Mandatory     : No
#-----------------------------------------------------------------------------
recoveryAreaDestination={ORACLE_BASE}/fast_recovery_area/{DB_UNIQUE_NAME}

#-----------------------------------------------------------------------------
# Name          : storageType
# Datatype      : String
# Description   : Specifies the storage on which the database is to be created
# Valid values  : FS (CFS for RAC), ASM
# Default value : FS
# Mandatory     : No
#-----------------------------------------------------------------------------
storageType=FS

#-----------------------------------------------------------------------------
# Name          : diskGroupName
# Datatype      : String
# Description   : Specifies the disk group name for the storage
# Default value : DATA
# Mandatory     : No
#-----------------------------------------------------------------------------
diskGroupName=

#-----------------------------------------------------------------------------
# Name          : asmsnmpPassword
# Datatype      : String
# Description   : Password for ASM Monitoring
# Default value : None
# Mandatory     : No
#-----------------------------------------------------------------------------
asmsnmpPassword=

#-----------------------------------------------------------------------------
# Name          : recoveryGroupName
# Datatype      : String
# Description   : Specifies the disk group name for the recovery area
# Default value : RECOVERY
# Mandatory     : No
#-----------------------------------------------------------------------------
recoveryGroupName=

#-----------------------------------------------------------------------------
# Name          : characterSet
# Datatype      : String
# Description   : Character set of the database
# Valid values  : Check Oracle12c National Language Support Guide
# Default value : "US7ASCII"
# Mandatory     : NO
#-----------------------------------------------------------------------------
characterSet=AL32UTF8

#-----------------------------------------------------------------------------
# Name          : nationalCharacterSet
# Datatype      : String
# Description   : National Character set of the database
# Valid values  : "UTF8" or "AL16UTF16". For details, check Oracle12c National Language Support Guide
# Default value : "AL16UTF16"
# Mandatory     : No
#-----------------------------------------------------------------------------
nationalCharacterSet=AL16UTF16

#-----------------------------------------------------------------------------
# Name          : registerWithDirService
# Datatype      : Boolean
# Description   : Specifies whether to register with Directory Service.
# Valid values  : TRUE \ FALSE
# Default value : FALSE
# Mandatory     : No
#-----------------------------------------------------------------------------
registerWithDirService=false


#-----------------------------------------------------------------------------
# Name          : dirServiceUserName
# Datatype      : String
# Description   : Specifies the name of the directory service user
# Mandatory     : YES, if the value of registerWithDirService is TRUE
#-----------------------------------------------------------------------------
dirServiceUserName=

#-----------------------------------------------------------------------------
# Name          : dirServicePassword
# Datatype      : String
# Description   : The password of the directory service user.
#		  You can also specify the password at the command prompt instead of here.
# Mandatory     : YES, if the value of registerWithDirService is TRUE
#-----------------------------------------------------------------------------
dirServicePassword=

#-----------------------------------------------------------------------------
# Name          : walletPassword
# Datatype      : String
# Description   : The password for wallet to created or modified.
#		  You can also specify the password at the command prompt instead of here.
# Mandatory     : YES, if the value of registerWithDirService is TRUE
#-----------------------------------------------------------------------------
walletPassword=

#-----------------------------------------------------------------------------
# Name          : listeners
# Datatype      : String
# Description   : Specifies list of listeners to register the database with.
#		  By default the database is configured for all the listeners specified in the 
#		  $ORACLE_HOME/network/admin/listener.ora 	
# Valid values  : The list should be comma separated like "listener1,listener2".
# Mandatory     : NO
#-----------------------------------------------------------------------------
listeners=

#-----------------------------------------------------------------------------
# Name          : variablesFile 
# Datatype      : String
# Description   : Location of the file containing variable value pair
# Valid values  : A valid file-system file. The variable value pair format in this file 
#		  is <variable>=<value>. Each pair should be in a new line.
# Default value : None
# Mandatory     : NO
#-----------------------------------------------------------------------------
variablesFile=

#-----------------------------------------------------------------------------
# Name          : variables
# Datatype      : String
# Description   : comma separated list of name=value pairs. Overrides variables defined in variablefile and templates
# Default value : None
# Mandatory     : NO
#-----------------------------------------------------------------------------
variables=ORACLE_BASE_HOME=${var.db_home_path},DB_UNIQUE_NAME=${lookup(var.shards[element(keys(var.shards), count.index)], "sid")},ORACLE_BASE=${var.oracle_base},PDB_NAME=,DB_NAME=${lookup(var.shards[element(keys(var.shards), count.index)], "sid")},ORACLE_HOME=${var.db_home_path},SID=${lookup(var.shards[element(keys(var.shards), count.index)], "sid")}

#-----------------------------------------------------------------------------
# Name          : initParams
# Datatype      : String
# Description   : comma separated list of name=value pairs. Overrides initialization parameters defined in templates
# Default value : None
# Mandatory     : NO
#-----------------------------------------------------------------------------
initParams=undo_tablespace=UNDOTBS1,sga_target=4569MB,db_block_size=8192BYTES,nls_language=AMERICAN,dispatchers=(PROTOCOL=TCP) (SERVICE=sh2XDB),diagnostic_dest={ORACLE_BASE},remote_login_passwordfile=EXCLUSIVE,db_create_file_dest={ORACLE_BASE}/oradata/{DB_UNIQUE_NAME}/,audit_file_dest={ORACLE_BASE}/admin/{DB_UNIQUE_NAME}/adump,processes=320,pga_aggregate_target=1524MB,nls_territory=AMERICA,local_listener=LISTENER_SHARDCAT,db_recovery_file_dest_size=8256MB,open_cursors=300,log_archive_format=%t_%s_%r.dbf,compatible=${local.db_major_version}.0.0,db_name=${lookup(var.shards[element(keys(var.shards), count.index)], "sid")},db_recovery_file_dest={ORACLE_BASE}/fast_recovery_area/{DB_UNIQUE_NAME},audit_trail=db

#-----------------------------------------------------------------------------
# Name          : sampleSchema
# Datatype      : Boolean
# Description   : Specifies whether or not to add the Sample Schemas to your database
# Valid values  : TRUE \ FALSE
# Default value : FASLE
# Mandatory     : No
#-----------------------------------------------------------------------------
sampleSchema=false

#-----------------------------------------------------------------------------
# Name          : memoryPercentage
# Datatype      : String
# Description   : percentage of physical memory for Oracle
# Default value : None
# Mandatory     : NO
#-----------------------------------------------------------------------------
memoryPercentage=40

#-----------------------------------------------------------------------------
# Name          : databaseType
# Datatype      : String
# Description   : used for memory distribution when memoryPercentage specified
# Valid values  : MULTIPURPOSE|DATA_WAREHOUSING|OLTP
# Default value : MULTIPURPOSE
# Mandatory     : NO
#-----------------------------------------------------------------------------
databaseType=MULTIPURPOSE

#-----------------------------------------------------------------------------
# Name          : automaticMemoryManagement
# Datatype      : Boolean
# Description   : flag to indicate Automatic Memory Management is used
# Valid values  : TRUE/FALSE
# Default value : TRUE
# Mandatory     : NO
#-----------------------------------------------------------------------------
automaticMemoryManagement=false

#-----------------------------------------------------------------------------
# Name          : totalMemory
# Datatype      : String
# Description   : total memory in MB to allocate to Oracle
# Valid values  : 
# Default value : 
# Mandatory     : NO
#-----------------------------------------------------------------------------
totalMemory=0
EOF
    destination = "${var.db_home_path}/dbca.rsp"
}

  # db install 
  provisioner "remote-exec" {
    inline = [ <<EOF
    cd ${var.db_home_path}/bin
    ./dbca -silent -createDatabase -responseFile ${var.db_home_path}/dbca.rsp
    rm -f ${var.db_home_path}/dbca.rsp
    EOF
    ]
  }

  provisioner "file" { 
    content  = "${data.template_file.deps_check_template.rendered}" 
    destination = "${var.db_home_path}/deps-check.sh"
  }


  provisioner "file" {
    when = "destroy"
    content  = <<-EOF
    #!/bin/bash
    source ${var.db_home_path}/shard.sh 
    lsnrctl stop
    EOF
    destination = "${var.db_home_path}/stop-tns-listener.sh"
   }

  provisioner "remote-exec" {
    when = "destroy"
    inline = [
    "chmod 700 ${var.db_home_path}/stop-tns-listener.sh",
    "${var.db_home_path}/stop-tns-listener.sh",
    "rm -f ${var.db_home_path}/stop-tns-listener.sh"
    ]
  }
}