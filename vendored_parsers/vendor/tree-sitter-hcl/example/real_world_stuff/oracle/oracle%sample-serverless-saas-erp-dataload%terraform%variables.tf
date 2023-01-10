# Copyright (c)  2021,  Oracle and/or its affiliates.
# Licensed under the Universal Permissive License v 1.0 as shown at https://oss.oracle.com/licenses/upl.


variable "user" {
  description = "OCI user OCID"
  type = string
}
variable "fingerprint" {
  description = "OCI key fingerprint"
  type = string

}
variable "key_file" {
  description = "OCI key file path"
  type = string
}
variable "tenancy" {
  description = "OCI tenancy OCID"
  type = string
}
variable "region" {
  description = "OCI region code"
  type = string
}

variable "pass_phrase" {
  description = "OCI key file pass phrase"
  type = string
  default = null
}

variable "functionsapp" {
  description = <<EOD
  Function application configuration
    subnet: CIDR syntax subnet for VCN
    appname: the name of the function application
    pathprefix: the base path prefix in API gateway for all functions under this application
    syslogurl: a syslog URL for sending logs to
    contextfile: absolute path to an fn context file containing the functions context information for connecting to functions
    config_template :  a template for populating application config

  EOD
  type = object({
    subnet = string
    appname = string
    pathprefix = string
    syslogurl = string
    contextfile = string
    config_template = string
  })
  validation {
    condition = fileexists(var.functionsapp.contextfile)
    error_message = "The context file must exist."
  }
  validation {
    condition = !fileexists(var.functionsapp.contextfile) || can(yamldecode(file(var.functionsapp.contextfile)).registry)
    error_message = "The context yaml file should contain a valid registry entry."
  }
}

variable "function_defaults" {
  description = <<EOD
  Function default values, merged with each function. Currently doesn't work due to limitations in terraform 1.13
  Optional value support in tf 1.14? https://github.com/hashicorp/terraform/issues/19898#issuecomment-726043534
    yamlfile: path within subdirectory to the function yaml definition file
    timeout: function timeout
  EOD
  type = object({
    yamlfile = string
    timeout = number
  })
  default = {
    yamlfile = "func.yaml"
    timeout = 30
  }
}

variable "functions" {
  description = <<EOD
  List of function definitions
    fnpath: path to subdirectory containing a function definition
    path: relative subpath for this function within API gateway
    methods: list of HTTP methods at API gateway
    yamlfile: path within subdirectory to the function yaml definition file. Optional with TF 1.14?
    timeout: function timeout.  Optional with TF 1.14?
  EOD
  type = set(object({
    fnpath = string
    path = string
    methods = list(string)
    yamlfile = string # optional in 1.14?
    timeout = number # optional in 1.14?
  }))
  validation {
    condition = !contains([for func in var.functions: fileexists("${func.fnpath}/${func.yamlfile}")], false)
    error_message = "Not able to find function yaml file."
  }
}

locals {
  functions = toset([for func in var.functions: merge(var.function_defaults, func)])
  functionmap = {for func in local.functions: basename(func.fnpath)=>func}
}

provider "oci" {
  tenancy_ocid = var.tenancy
  user_ocid = var.user
  fingerprint = var.fingerprint
  private_key_path = var.key_file
  region = var.region
  private_key_password = var.pass_phrase
}

variable "compartment_ocid" {
  description = "OCI compartment OCID"
  type = string
}

variable "oci-namespace" {
    description = "OCI Namespace where assets will be deployed to"
    type = string
}


# Email address to receive notifications
variable "notification_email" {
    description = "Email to send notifications whilst code is processing data"
    type = string
}

#
# Bucket Names used for the data files, the following names will be "prefixed" with the global prefix above
#
variable "datafile_buckets" {
    description = "Names of the various OCI buckets"
    type = object(
        {
            json_inbound_bucket_name=string
            zip_inbound_bucket_name=string
            processing_bucket_name=string
            succeeded_bucket_name=string
            failed_bucket_name=string
        })
    default = {
        json_inbound_bucket_name = "Serverless_Integration_json_inbound"
        zip_inbound_bucket_name = "Serverless_Integration_zip_inbound"
        processing_bucket_name = "Serverless_Integration_processing"
        succeeded_bucket_name = "Serverless_Integration_succeeded"
        failed_bucket_name = "Serverless_Integration_failed"
    }
}


#
# Fusion ERP FBDI defaults (for invoices)
variable "fusion_properties" {
    description = <<EOD
        ERP Import jobname and parameter list for FBDI/ESS processing
        erp_jobname : Job Name and App Name within Fusion
        erp_paramlist : Parameter list for loading invoices into fusion , see ESS job in Fusion Console for more details
    EOD
    type = object(
        {
            erp_jobname=string
            erp_paramlist=string
        })
# Modift the following erp_jobname and erp_paramlist to match your system
   default = {
        erp_jobname = "oracle/apps/ess/financials/payables/invoices/transactions,APXIIMPT"
        erp_paramlist = "#NULL,300000046987012,N,#NULL,#NULL,#NULL,1000,External,#NULL,N,#NULL,300000046975971,#NULL,1"
  }
}

variable "fusion_server" {
    description = "Server details for Fusion"
    type = object(
        {
            erp_hostname=string
            erp_username=string
        })

}