variable "tenancy_ocid" {}
variable "region" {}
variable "compartment_ocid" {}

################################ VCN

variable "holvcn_display_name" {
  default = "HOLVCN"
}
variable "holvcn_dns_label" {
  default = "holvcn"
}
variable "holvcn_public_subnet_display_name" {
  default = "HOLVCN_Public_Subnet"
}
variable "holvcn_public_security_list_display_name" {
  default = "HOLVCN_Public_SL"
}
variable "holvcn_public_dns_label" {
  default = "holvcnpublc"
}
variable "holvcn_public_route_table_display_name" {
  default = "HOLVCN_Public_RT"
}
variable "holvcn_private_subnet_display_name" {
  default = "HOLVCN_Private_subnet"
}
variable "holvcn_private_security_list_display_name" {
  default = "HOLVCN_Private_SL"
}
variable "holvcn_private_dns_label" {
  default = "holvcnprivate"
}
variable "holvcn_private_route_table_display_name" {
  default = "HOLVCN_Private_RT"
}
variable "holvcn_igw_display_name" {
  default = "HOLVCN_IGW"
}
variable "holvcn_nat_display_name" {
  default = "HOLVCN_IGW"
}
variable "holvcn_cidr_block" {
  default = "10.10.0.0/16"
}
variable "holvcn_public_cidr_block" {
  default = "10.10.0.0/24"
}
variable "holvcn_private_cidr_block" {
  default = "10.10.1.0/24"
}
variable "holvcn_igw_cidr_block" {
  default = "0.0.0.0/0"
}
variable "holvcn_nat_cidr_block" {
  default = "0.0.0.0/0"
}

################################ TARGET ATP
variable "atp_display_name" {
  default = "HOL Target ATP"
}
variable "atp_db_name" {
  default = "hol"
}
variable "atp_db_version" {
  default = "19c"
}
variable "atp_license_model" {
  default = "LICENSE_INCLUDED"
}
## FREE TIER
variable "atp_is_free_tier" {
  default = false
}
variable "atp_ocpu_count" {
  default = 1
}
variable "atp_storage_size" {
  default = 1
}
variable "atp_visibility" {
  default = "Public"
}
variable "atp_wallet_generate_type" {
  default = "SINGLE"
}
variable "atp_workload" {
  default = "OLTP"
}
variable "database_id" {
  default = ""
}

################################ SOURCE PGSQL
variable "source_pgsql_assign_public_ip" {
  default = true
}
variable "source_pgsql_boot_size_in_gbs" {
  default = "50"
}
variable "source_pgsql_hostname_label" {
  default = "sourcedb"
}

variable "source_pgsql_custom_volume_sizes" {
  default = false
}
variable "source_pgsql_display_name" {
  default = "HOL Source PGSQL"
}

variable "source_pgsql_compute_shape" {
  default = "VM.Standard.E2.1"
}

variable "source_postgre_image_ocid" {
  type = map(string)

  default = {
    	ap-chuncheon-1 	= "ocid1.image.oc1.ap-chuncheon-1.aaaaaaaa4m7auvu5xbygu3ufuxayr5hiv53kjbhuae2v23ceezfh23l5ljla"
	ap-hyderabad-1 	= "ocid1.image.oc1.ap-hyderabad-1.aaaaaaaamagn4cvnqlhl263dyeomjtquwtdb7c26rxaexnakbcv2xwe2y5za"
	ap-melbourne-1 	= "ocid1.image.oc1.ap-melbourne-1.aaaaaaaawnjddjpgrw6prdf5i3soh4ifd7afdnux3iby2aqksz2b2rblhcra"
	ap-mumbai-1 	= "ocid1.image.oc1.ap-mumbai-1.aaaaaaaaowjhuftuftocybrcshdis7fi47w7yxqpgu332h3ke4fp5rkkgwqq"
	ap-osaka-1 	= "ocid1.image.oc1.ap-osaka-1.aaaaaaaagvqhpcpunoxm3iztj2cf2oaslhi3q5z7kmkixostvtbdlhagp7nq"
	ap-seoul-1 	= "ocid1.image.oc1.ap-seoul-1.aaaaaaaatuvkpqct4yqpdygb3ootlmyoyhupne7nzzngz5fbx5pirzi7h5pa"
	ap-sydney-1 	= "ocid1.image.oc1.ap-sydney-1.aaaaaaaasqyequj27dmozbs2tgdiw723hxmakt5qw374kesfbwa7c5q7fbea"
	ap-tokyo-1 	= "ocid1.image.oc1.ap-tokyo-1.aaaaaaaawlaz3p2bplxsa3qbc7hklncl5dwzl57m3r76kn5o7mt5jtjud3qq"
	ca-montreal-1 	= "ocid1.image.oc1.ca-montreal-1.aaaaaaaablwhx3hp26hqljyt7j74tuitzmf42ptowjqvdgu4mzitmccrqpkq"
	ca-toronto-1 	= "ocid1.image.oc1.ca-toronto-1.aaaaaaaaasmi3hswr5h4tpfq2mjnkukeavy6acb7g2cd7pc47p2frtei7z6a"
	eu-amsterdam-1 	= "ocid1.image.oc1.eu-amsterdam-1.aaaaaaaacw2njhmftuhzlz66ggvvmrnol4t6fhfa7wwwareizn5z6kiql4eq"
	eu-frankfurt-1 	= "ocid1.image.oc1.eu-frankfurt-1.aaaaaaaastzzgsgf6mczjopdxq5ts6cgh7oamduy5qtu66lixjs5hqqjzocq"
	eu-zurich-1	= "ocid1.image.oc1.eu-zurich-1.aaaaaaaa5kiv4il7xufs6urxnljuugvq556cbhidkncxlz2a5trokltaix5q"
	me-dubai-1	= "ocid1.image.oc1.me-dubai-1.aaaaaaaapbettobjiffch4r6hkvp347azd4o37j34iiet6isiejltygjsica"
	me-jeddah-1	= "ocid1.image.oc1.me-jeddah-1.aaaaaaaabokpmh5qdymx3lhesw75thxvtxbeetnpy5xefnh7ph6bucagsg7a"
	sa-santiago-1 	= "ocid1.image.oc1.sa-santiago-1.aaaaaaaa6amxp6srujrdjn25ydcx6vlxxorn27zjxk2bv6nqzizm5vil2k5a"
	sa-saopaulo-1 	= "ocid1.image.oc1.sa-saopaulo-1.aaaaaaaav5a2iaqihnjzd7urhl3b5xwtbypfyw7m2qadpnkg7z32x2kjh45q"
	uk-cardiff-1 	= "ocid1.image.oc1.uk-cardiff-1.aaaaaaaao5slzhavcc5p4kfvb5wizqpkvydoa2pclqq26f25defyf33iha5a"
	uk-london-1	= "ocid1.image.oc1.uk-london-1.aaaaaaaafsngwpdx4d4nndrkhtzesln4i4hmh276pf6giqpet4pqob7et5ha"
	us-ashburn-1 	= "ocid1.image.oc1.iad.aaaaaaaawwax2iqkcrg65cxr3w656erbgsb2v7pcjbsm45aocl5qic24h2va"
	us-gov-ashburn-1 = "ocid1.image.oc3.us-gov-ashburn-1.aaaaaaaa2nktxyg4kdcr5kthm6amnbifxobroziliu3ulhwl3njm7hgtluhq"
	us-gov-chicago-1 = "ocid1.image.oc3.us-gov-chicago-1.aaaaaaaawofdj6o6gxch4h3f2vj3btdw6ah7mn5akjgt6caqm6v524toclnq"
	us-gov-phoenix-1 = "ocid1.image.oc3.us-gov-phoenix-1.aaaaaaaa6g7cj3r5jepgphp4ocfcw6hjrb2rlcykaw5nzsd5e726jaruvvxq"
	us-langley-1 	= "ocid1.image.oc2.us-langley-1.aaaaaaaa73eflc6ofgmb6zkr4vl23mp5wczbvcprwz5h4idef3vsfpz5rsha"
	us-luke-1 	= "ocid1.image.oc2.us-luke-1.aaaaaaaaqyd7ecglgqe6wolrggxmq35z66355zpc7cnra66atqjjrqd7cnkq"
	us-phoenix-1 	= "ocid1.image.oc1.phx.aaaaaaaacctmcjjajc7xawyz3uuot4ei7q2tqw4yipbh5okosppc5v3yxava"
	us-sanjose-1 	= "ocid1.image.oc1.us-sanjose-1.aaaaaaaafbd4avhggiy2a3wdlda5xi3c47qbbe6kepbt4uyhizdbkmwyxbmq"
  }
}

################################ OGG POSTGRESQL BLOCK VOLUME
//
variable "ogg_pgsql_bv_display_name" {
  default = "OGG_PGSQL BlockVolume"
}
variable "boot_size_in_gbs" {
  default = "50"
}
variable "ogg_pgsql_swap_size_in_gbs" {
  default = "50" //256
}
variable "ogg_pgsql_trails_size_in_gbs" {
  default = "50" //512
}
variable "ogg_pgsql_deployments_size_in_gbs" {
  default = "50"
}

// OGG Deployment volume
variable "ogg_pgsql_deployments_volume_id" {
  default = ""
}

// OGG Trails volume
variable "ogg_pgsql_trails_volume_id" {
  default = ""
}
################################ OGG MICRO BLOCK VOLUME
//
variable "ogg_micro_bv_display_name" {
  default = "OGG_Micro BlockVolume"
}

variable "ogg_micro_swap_size_in_gbs" {
  default = "50"  //256
}
variable "ogg_micro_trails_size_in_gbs" {
  default = "50"  //512
}
variable "ogg_micro_deployments_size_in_gbs" {
  default = "50"
}
variable "ogg_micro_cacheManager_size_in_gbs" {
  default = "50"
}

// OGG Deployment volume
variable "ogg_micro_deployments_volume_id" {
  default = ""
}
// OGG CacheManager volume
variable "ogg_micro_cacheManager_volume_id" {
  default = ""
}

// OGG Trails volume
variable "ogg_micro_trails_volume_id" {
  default = ""
}
################################ OGG PGSQL IMAGE
variable "ogg_pgsql_dbms" {
  default = "postgresql"
}
variable "ogg_pgsql_edition" {
  default = "Classic"
}
variable "ogg_pgsql_version" {
  default = "19.1.0.0.201013"
}
variable "image_compartment_id" {
  default = ""
}
################################ OGG PGSQL INSTANCE
variable "ogg_pgsql_assign_public_ip" {
  default = true
}
variable "ogg_pgsql_boot_size_in_gbs" {
  default = "50"
}
variable "ogg_pgsql_display_name" {
  default = "HOL OGG PGSQL"
}
variable "ogg_pgsql_hostname_label" {
  default = "ogg19cpgsql"
}
variable "ogg_pgsql_compute_shape" {
  default = "VM.Standard2.1"
}
variable "ogg_pgsql_custom_volume_sizes" {
  default = false
}
################################ OGG Micro IMAGE
variable "ogg_micro_dbms" {
  default = "Oracle"
}
variable "ogg_micro_edition" {
  default = "Microservices"
}
variable "ogg_micro_version" {
  default = "19.1.0.0.201013"
}

################################ OGG MICRO INSTANCE
variable "ogg_micro_assign_public_ip" {
  default = true
}
variable "ogg_micro_boot_size_in_gbs" {
  default = "50"
}
variable "ogg_micro_display_name" {
  default = "HOL OGG Microservices"
}
variable "ogg_micro_hostname_label" {
  default = "ogg19micro"
}
variable "ogg_micro_compute_shape" {
  default = "VM.Standard2.1"
}
variable "ogg_micro_custom_volume_sizes" {
  default = false
}
################################ OGG MICRO GG CONFIGURATION

variable deployments_json {
  default = ""
}

variable deployment_1_name {
  default = "Source"
}

variable deployment_1_dbms {
  default = "Oracle 11g (11.2.0.4)"
}
variable deployment_1_adb {
  default = false
}
variable deployment_1_adb_id {
  default = ""
}
variable deployment_1_adb_compartment_id {
  default = ""
}

variable deployment_2_name {
  default = "Target"
}

variable deployment_2_dbms {
  default = "Oracle 19c (19.x)"
}

variable deployment_2_adb {
  default = true
}

variable deployment_2_adb_compartment_id {
  default = ""
}

variable deployment_2_adb_id {
  default = ""
}
