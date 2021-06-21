project = "example-nodejs"

app "example-nodejs" {
  labels = {
    "service" = "example-nodejs",
    "env"     = "dev"
  }

  build {
    use "pack" {}
    registry {
      use "docker" {
        image = "example-nodejs"
        tag   = "1"
        local = true
      }
    }
  }

  deploy {
    use "kubernetes-apply" {
      // Template the directory so that we process each file in the directory
      // as a template. This lets us inject the artifact from the previous step.
      path = templatedir("${path.app}/k8s")

      // This label determines what resources we own. Any that aren't present
      // in our folder that match this label will be deleted.
      prune_label = "app=myapp"
    }
  }
}
