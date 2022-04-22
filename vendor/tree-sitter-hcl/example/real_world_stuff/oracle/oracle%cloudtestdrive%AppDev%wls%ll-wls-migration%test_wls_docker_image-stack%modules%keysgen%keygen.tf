
# TEMP WAY OF CREATING ORACLE SSH KEY 
resource "tls_private_key" "oracle_key" {
  algorithm = "RSA"
  rsa_bits  = 4096
}

# Creating OPC key for script copy
resource "tls_private_key" "opc_key" {
  algorithm = "RSA"
  rsa_bits  = 4096
}


resource "local_file" "oracle_key_private_key_pem" { 
  filename = "keys/oracle_key.private_key_pem"
  file_permission = "600"
  content = tls_private_key.oracle_key.private_key_pem
}

resource "local_file" "oracle_key" { 
  filename = "keys/oracle_key.public_key_openssh"
  file_permission = "600"
  content = tls_private_key.oracle_key.public_key_openssh
}

resource "local_file" "opc_key_private_key_pem" { 
  filename = "keys/opc_key.private_key_pem"
  file_permission= "600"
  content = tls_private_key.opc_key.private_key_pem
}

resource "local_file" "opc_key" { 
  filename = "keys/opc_key.public_key_openssh"
  file_permission = "600"
  content = tls_private_key.opc_key.public_key_openssh
}