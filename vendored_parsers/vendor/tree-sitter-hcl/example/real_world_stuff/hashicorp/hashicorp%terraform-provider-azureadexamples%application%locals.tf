locals {
  widgets_service_scopes = [for s in azuread_application.widgets_service.api.0.oauth2_permission_scope : "${azuread_application.widgets_service.identifier_uris[0]}/${s.value}"]
}
