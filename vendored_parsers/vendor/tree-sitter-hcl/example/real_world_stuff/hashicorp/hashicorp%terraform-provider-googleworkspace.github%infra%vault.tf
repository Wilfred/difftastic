resource "vault_auth_backend" "approle" {
  type = "approle"
}

resource "vault_policy" "tf-acctest-policy" {
  name = "tf-acctest-policy"
  policy = file("../vault/tf-acctest-policy")
}

resource "vault_approle_auth_backend_role" "gha-role" {
  backend        = vault_auth_backend.approle.path
  role_name      = "gha-role"
  token_policies = [vault_policy.tf-acctest-policy.name]
}

resource "vault_gcp_secret_backend" "gcp" {
  path        = "gcp"
  credentials = base64decode(google_service_account_key.tf-acctest-key.private_key)
}

resource "vault_gcp_secret_roleset" "roleset" {
  backend      = vault_gcp_secret_backend.gcp.path
  roleset      = "tf-acctest"
  secret_type  = "service_account_key"
  project      = data.google_project.project.project_id
  token_scopes = ["https://www.googleapis.com/auth/cloud-platform"]

  binding {
    resource = "//cloudresourcemanager.googleapis.com/projects/${data.google_project.project.project_id}"

    roles = [
      "roles/owner",
    ]
  }

  depends_on = [google_project_iam_member.tf-acctest-sa-admin]
}
