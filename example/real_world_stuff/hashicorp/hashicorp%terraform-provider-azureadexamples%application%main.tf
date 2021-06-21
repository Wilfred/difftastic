resource "random_uuid" "widgets_scope_id" {}

resource "azuread_application" "widgets_service" {
  display_name = "widgets-service"
  type         = "webapp/api"

  identifier_uris = ["api://widgets-service"]

  api {
    oauth2_permission_scope {
      admin_consent_description  = "Access Widgets Service as a user"
      admin_consent_display_name = "Access Widgets Service as a user"
      id                         = random_uuid.widgets_scope_id.result
      is_enabled                 = true
      type                       = "User"
      user_consent_description   = "Access Widgets Service as a user"
      user_consent_display_name  = "Access Widgets Service as a user"
      value                      = "access_as_user"
    }
  }
}

resource "azuread_application_password" "widgets_service" {
  application_object_id = azuread_application.widgets_service.object_id
}

resource "azuread_application" "widgets_app" {
  display_name = "widgets-app"
  type         = "webapp/api"

  logout_url = "https://widgets.example.net/logout"
  reply_urls = [
    "https://widgets.example.net/",
    "https://widgets.example.net/login",
  ]

  oauth2_allow_implicit_flow = true

  required_resource_access {
    # Microsoft Graph
    resource_app_id = "00000003-0000-0000-c000-000000000000"

    resource_access {
      # User.Read
      id = "e1fe6dd8-ba31-4d61-89e7-88639da4683d"
      type = "Scope"
    }
  }

  required_resource_access {
    resource_app_id = azuread_application.widgets_service.application_id

    dynamic resource_access {
      for_each = azuread_application.widgets_service.api.0.oauth2_permission_scope
      iterator = scope

      content {
        id   = scope.value.id
        type = "Scope"
      }
    }
  }
}
