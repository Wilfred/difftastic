project = "hashicups-demo-hackathon"

app "frontend" {
  path = "./front"

  build {
    # use docker {}
    use "docker-pull" {
      image = "hashicorpdemoapp/frontend"
      tag   = "v0.0.4"
    }
  }

  deploy {
    use "exec" {
      command = ["kubectl","apply","-f","<TPL>","-n","apps"]
      template {
        path = join("", ["${path.app}/", jsondecode(file("${path.project}/versions.json"))["frontend"]])
      }
    }
  }
}

app "public-api" {
  path = "./public-api"
  url {
    auto_hostname = false
  }

  build {
    use "docker-pull" {
      image = "hashicorpdemoapp/public-api"
      tag   = "v0.0.4"
    }
  }

  deploy {
    use "kubernetes" {
      annotations = {
        "consul.hashicorp.com/connect-inject" = "true"
        "consul.hashicorp.com/connect-service" = "public-api"
        # "consul.hashicorp.com/connect-service-upstreams" = "product-api:9090"
        "consul.hashicorp.com/connect-service-upstreams" = "product-api:9090,payments:9091"
      }
      service_port = "8080"
      service_account = "public-api"
      static_environment = {
        PRODUCT_API_URI = "http://localhost:9090"
        PAYMENT_API_URI = "http://localhost:9091"
        BIND_ADDRESS = ":8080"
      }
      namespace = "apps"
    }
  }

  release {
    use "kubernetes" {
      port = "8080"
      namespace = "apps"
    }
  }
}

app "product-api" {
  path = "./product-api"

  build {
    use "docker-pull" {
      image = "hashicorpdemoapp/product-api"
      tag   = "v0.0.15"
    }
  }

  deploy {
    use "exec" {
      command = ["kubectl","apply","-f","<TPL>","-n","apps"]
      template {
        path = "${path.app}/product-api.yaml"
      }
    }

  }
}

app "postgres" {
  path = "./postgres"

  build {
    use "docker-pull" {
      image = "hashicorpdemoapp/product-api-db"
      tag   = "v0.0.15"
    }
  }

  deploy {
    use "exec" {
      command = ["kubectl","apply","-f","<TPL>","-n","apps"]
      template {
        path = "${path.app}/postgres.yaml"
      }
    }
  }
}
app "payments" {
  path = "./payments"
  url {
    auto_hostname = false
  }

  build {
    use "docker-pull" {
      image = "hashicorpdemoapp/payments"
      tag   = "v0.0.11"
    }
  }

  deploy {
    use "kubernetes" {
      annotations = {
        "consul.hashicorp.com/connect-inject" = "true"
        "consul.hashicorp.com/connect-service" = "payments"
        # "consul.hashicorp.com/connect-service-port" = "9091"
      }
      service_port = "8080"
      service_account = "payments"
      static_environment = {
      }
      namespace = "apps"
    }
  }

  release {
    use "kubernetes" {
      port = "9091"
      namespace = "apps"
    }
  }
}
