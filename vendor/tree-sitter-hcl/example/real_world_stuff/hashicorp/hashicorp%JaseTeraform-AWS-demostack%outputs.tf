////////////////////// Main //////////////////////////

output "A_Welcome_Message" {
  value = <<SHELLCOMMANDS

ooooo   ooooo                    oooo         o8o    .oooooo.
`888'   `888'                    `888         `"'   d8P'  `Y8b
 888     888   .oooo.    .oooo.o  888 .oo.   oooo  888           .ooooo.  oooo d8b oo.ooooo.
 888ooooo888  `P  )88b  d88(  "8  888P"Y88b  `888  888          d88' `88b `888""8P  888' `88b
 888     888   .oP"888  `"Y88b.   888   888   888  888          888   888  888      888   888
 888     888  d8(  888  o.  )88b  888   888   888  `88b    ooo  888   888  888      888   888
o888o   o888o `Y888""8o 8""888P' o888o o888o o888o  `Y8bood8P'  `Y8bod8P' d888b     888bod8P'
                                                                                    888
                                                                                   o888o



 |.--------_--_------------_--__--.|
 ||    /\ |_)|_)|   /\ | |(_ |_   ||
 ;;`,_/``\|__|__|__/``\|_| _)|__ ,:|
((_(-,-----------.-.----------.-.)`)
 \__ )        ,'     `.        \ _/
 :  :        |_________|       :  :
 |-'|       ,'-.-.--.-.`.      |`-|
 |_.|      (( (*  )(*  )))     |._|
 |  |       `.-`-'--`-'.'      |  |
 |-'|        | ,-.-.-. |       |._|
 |  |        |(|-|-|-|)|       |  |
 :,':        |_`-'-'-'_|       ;`.;
  \  \     ,'           `.    /._/
   \/ `._ /_______________\_,'  /
    \  / :   ___________   : \,'
     `.| |  |           |  |,'
       `.|  |           |  |
         |  | HashiCorp |  |

SHELLCOMMANDS
}

// Primary
output "Primary_Region" {
  value = var.primary_region
}

output "Primary_Consul" {
  value = module.primarycluster.consul_ui
}

output "Primary_Nomad" {
  value = module.primarycluster.nomad_ui
}

output "Primary_Vault" {
  value = module.primarycluster.vault_ui
}

output "Primary_Fabio" {
  value = module.primarycluster.fabio_lb
}

output "Primary_Traefik" {
  value = module.primarycluster.traefik_lb
}

output "Primary_Boundary" {
  value = module.primarycluster.boundary_ui
}

output "Primary_servers_nodes" {
  value = module.primarycluster.servers
}

output "Primary_workers_Nodes" {
  value = module.primarycluster.workers
}

output "Primary_nomad_tag_workers" {
  value = module.primarycluster.nomad_tag_workers
}

output "Primary_nomad_tag_servers" {
  value = module.primarycluster.nomad_tag_servers
}
/**
output "Primary_k8s_eks_endpoint"{
  value = module.primarycluster.eks_endpoint
}

output "Primary_k8s_eks_ca"{
  value = module.primarycluster.eks_ca
}
**/

// Secondary
/**
output "Secondary_Region" {
  value = var.secondary_region
}

output "Secondary_Consul" {
  value = module.secondarycluster.consul_ui
}

output "Secondary_Nomad" {
  value = module.secondarycluster.nomad_ui
}

output "Secondary_Vault" {
  value = module.secondarycluster.vault_ui
}

output "Secondary_Fabio" {
  value = module.secondarycluster.fabio_lb
}

output "Secondary_Traefik" {
  value = module.secondarycluster.traefik_lb
}


output "Secondary_Boundary" {
  value = module.secondarycluster.boundary_ui
}


output "Secondary_servers_nodes" {
  value = module.secondarycluster.servers
}
output "Secondary_workers_Nodes" {
  value = module.secondarycluster.workers
}
output "Secondary_nomad_tag_workers" {
  value = module.secondarycluster.nomad_tag_workers
}

output "Secondary_nomad_tag_servers" {
  value = module.secondarycluster.nomad_tag_servers
}
*/


// Tertiary
/*
output "Tertiary_Region" {
  value = var.tertiary_region
}

output "Tertiary_Consul" {
  value = module.tertiarycluster.consul_ui
}
output "Tertiary_Nomad" {
  value = module.tertiarycluster.nomad_ui
}
output "Tertiary_Vault" {
  value = module.tertiarycluster.vault_ui
}
output "Tertiary_Fabio" {
  value = module.tertiarycluster.fabio_lb
}
output "Tertiary_server_nodes" {
  value = module.tertiarycluster.servers
}
output "Tertiary_workers_Nodes" {
  value = module.tertiarycluster.workers
}
output "Tertiary_nomad_tag_workers"{
  value = module.tertiarycluster.nomad_tag_workers
}

output "Tertiary_nomad_tag_servers"{
  value = module.tertiarycluster.nomad_tag_servers
}
*/