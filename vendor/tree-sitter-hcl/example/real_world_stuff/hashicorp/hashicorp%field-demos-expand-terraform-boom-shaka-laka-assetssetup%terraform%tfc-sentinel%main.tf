resource "tfe_policy_set" "sentinel" {
  name          = "limit-cost-by-workspace-name"
  description   = "Limit costs with different limits based on workspace names."
  organization  = var.TFC_ORGANIZATION
  policies_path = "gitclones/sentinel-policies"
  global = true

  vcs_repo {
    identifier         = var.GITHUB_IDENTIFIER
    branch             = "main"
    ingress_submodules = false
    oauth_token_id     = var.OAUTH_TOKEN_ID
  }
}
