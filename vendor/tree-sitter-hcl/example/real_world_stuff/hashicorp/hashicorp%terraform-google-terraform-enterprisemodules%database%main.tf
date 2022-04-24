resource "random_pet" "postgres" {
  length = 2
}

resource "google_sql_database_instance" "tfe" {
  name             = "${var.namespace}-tfe-${random_pet.postgres.id}"
  database_version = var.postgres_version

  settings {
    tier              = var.machine_type
    availability_type = var.availability_type
    disk_size         = var.disk_size
    ip_configuration {
      ipv4_enabled    = false
      private_network = var.network
    }

    backup_configuration {
      enabled    = var.backup_start_time == "" ? false : true
      start_time = var.backup_start_time
    }

    user_labels = var.labels
  }

  deletion_protection = false
}

resource "random_string" "postgres_password" {
  length  = 20
  special = false
}

resource "google_sql_database" "tfe" {
  name     = var.dbname
  instance = google_sql_database_instance.tfe.name
}

resource "google_sql_user" "tfe" {
  name     = var.username
  instance = google_sql_database_instance.tfe.name

  password = random_string.postgres_password.result

  // Needs to be deleted before the instance gets deleted
  depends_on = [google_sql_database_instance.tfe]
}
