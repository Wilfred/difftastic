terraform {
  required_version = ">= 0.15" # 0.14 version has a problem when refreshing data sources on destroy
  required_providers {
    helm = {
      source = "hashicorp/helm"
      version = "2.1.2"
    }
    kubernetes = {
      source = "hashicorp/kubernetes"
      version = "2.1.0"
    }
  }
  # backend "remote" {
  # }
}

# The Helm provider creates the namespace, but if we want to create it manually would be with following lines
resource "kubernetes_namespace" "consul" {
  metadata {
    name = var.cluster_namespace
  }
}

# Creating dynamically a hostname list to use later on template
# data "null_data_source" "hostnames" {
#   count = var.nodes
#   inputs = {
#       hostnames = "consul-server-${count.index}"
#   }
# }
# locals {
#   hostnames = data.null_data_source.hostnames.*.inputs.hostnames
# }

# # Let's create a secret with the json credentials
# resource "google_service_account_key" "gcp_sa_key" {
#   service_account_id = var.gcp_service_account.name
# }
# resource "kubernetes_secret" "google-application-credentials" {
#   metadata {
#     name = "gcp-creds"
#     namespace = kubernetes_namespace.consul.metadata.0.name
#   }
#   data = {
#     "credentials.json" = base64decode(google_service_account_key.gcp_sa_key.private_key)
#   }
# }
resource "kubernetes_secret" "consul-license" {
  count = var.consul_license == null ? 0 : 1
  metadata {
    name = "consul-ent-license"
    namespace = kubernetes_namespace.consul.metadata.0.name
  }
  data = {
    "key" = var.consul_license
  }
}

resource "kubernetes_secret" "consul-federation" {
  count = var.federated ? 1 : 0
  metadata {
    name = "consul-federation"
    namespace = kubernetes_namespace.consul.metadata.0.name
  }
  data = var.federation_secret
}


# Because we are executing remotely using TFC/TFE we want to save our templates in a Cloud bucket
resource "google_storage_bucket_object" "consul-config" {
  name   = "${var.cluster_name}-${formatdate("YYMMDD_HHmm",timestamp())}.yml"
  content = templatefile("${path.root}/templates/${var.values_file}",{
            # version = "1.8.4",
            image = var.enterprise ? "hashicorp/consul-enterprise:${var.consul_version}" : "consul:${var.consul_version}"
            # envoy = "envoyproxy/envoy-alpine:${var.envoy_version}"
            datacenter = var.consul_dc
            enterprise = var.enterprise
            license = var.consul_license
            nodes = var.nodes
            # http = var.tls == "enabled" ? "https" : "http",
            # disable_tls = var.tls == "enabled" ? false : true,
            # tls = var.tls
            })
  bucket = var.config_bucket
}



## I you want to create the template files locally uncomment the following lines (This is not working with remote execution in TFE)
# resource "local_file" "foo" {
#     content     = templatefile("${path.root}/templates/consul_values.yaml",{
#           hostname = var.hostname,
#           vault_version = var.vault_version
#           })
#     filename = "${path.root}/templates/vault.yaml"
# }


# We need to create a sleep to let the ingress Load Balancer be assigned, so we can get the Ingress data
# resource "time_sleep" "wait_60_seconds" {
#   depends_on = [
#     helm_release.consul,
#   ]

#   create_duration = "60s"
# }


# resource "google_dns_record_set" "consul" {
#   count = var.dns_zone != null ? 1 : 0
#   name = "${var.hostname}."
#   type = "A"
#   ttl  = 300

#   managed_zone = var.dns_zone

#   rrdatas = [data.kubernetes_service.consul-ui.load_balancer_ingress.0.ip]
# }
