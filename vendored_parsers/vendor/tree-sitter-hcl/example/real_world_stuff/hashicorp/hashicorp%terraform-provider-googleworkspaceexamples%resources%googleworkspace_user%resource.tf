resource "googleworkspace_schema" "birthday" {
  schema_name = "birthday"

  fields {
    field_name = "birthday"
    field_type = "DATE"
  }

  fields {
    field_name   = "favorite-numbers"
    field_type   = "INT64"
    multi_valued = true

    numeric_indexing_spec {
      min_value = 1
      max_value = 100
    }
  }
}

resource "googleworkspace_user" "dwight" {
  primary_email = "dwight.schrute@example.com"
  password      = "34819d7beeabb9260a5c854bc85b3e44"
  hash_function = "MD5"

  name {
    family_name = "Schrute"
    given_name  = "Dwight"
  }

  aliases = ["assistant_to_regional_manager@example.com"]

  emails {
    address = "dwight.schrute.dunder.mifflin@example.com"
    type    = "work"
  }

  relations {
    type  = "assistant"
    value = "Michael Scott"
  }

  addresses {
    country        = "USA"
    country_code   = "US"
    locality       = "Scranton"
    po_box         = "123"
    postal_code    = "18508"
    region         = "PA"
    street_address = "123 Dunder Mifflin Pkwy"
    type           = "work"
  }

  organizations {
    department = "sales"
    location   = "Scranton"
    name       = "Dunder Mifflin"
    primary    = true
    symbol     = "DUMI"
    title      = "member"
    type       = "work"
  }

  phones {
    type  = "home"
    value = "555-123-7890"
  }

  phones {
    type    = "work"
    primary = true
    value   = "555-123-0987"
  }

  keywords {
    type  = "occupation"
    value = "salesperson"
  }

  custom_schemas {
    schema_name = googleworkspace_schema.birthday.schema_name

    schema_values = {
      "birthday"         = jsonencode("1970-01-20")
      "favorite-numbers" = jsonencode([1, 2, 3])
    }
  }

  recovery_email = "dwightkschrute@example.com"
}