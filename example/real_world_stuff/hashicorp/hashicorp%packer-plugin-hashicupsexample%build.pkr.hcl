packer {
  required_plugins {
    hashicups = {
      version = ">= 1.0.0"
      source = "github.com/hashicorp/hashicups"
    }
  }
}

locals {
  vagrante_espresso = data.hashicups-coffees.coffees.map["Vagrante espresso"]
  espresso = data.hashicups-ingredients.vagrante-ingredients.map["Espresso"]

  packer_spiced_latte = data.hashicups-coffees.coffees.map["Packer Spiced Latte"]
  semi_skimmed_milk = data.hashicups-ingredients.packer-ingredients.map["Semi Skimmed Milk"]
}

source "hashicups-order" "my-custom-order" {
  username = "education"
  password = "test123"

  item {
    coffee {
      id = local.vagrante_espresso
      name = "my custom vagrante"
      ingredient {
        id = local.espresso
        quantity = 50
      }
    }
  }

  item {
    coffee {
      id = local.packer_spiced_latte
      name = "my custom packer spiced latter"
      ingredient {
        id = local.espresso
        quantity = 50
      }
      ingredient {
        id = local.semi_skimmed_milk
        quantity = 200
      }
    }
    quantity = 2
  }
}

build {
  sources = ["sources.hashicups-order.my-custom-order"]

  provisioner "hashicups-toppings" {
    toppings = ["cinnamon", "marshmellow", "chocolate", "sprinkles"]
  }

  post-processor "hashicups-receipt" {
    format = "pdf"
  }
  post-processor "hashicups-receipt" {
    format = "txt"
  }
}