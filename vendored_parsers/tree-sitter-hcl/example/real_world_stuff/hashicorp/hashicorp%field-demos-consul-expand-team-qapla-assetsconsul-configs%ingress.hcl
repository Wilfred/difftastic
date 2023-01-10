Kind = "ingress-gateway"
Name = "ingress-gateway"

# TLS {
#   Enabled = true
# }

Listeners = [
 {
    Port = 8080
    Protocol = "http"
    Services = [
      {
        Name = "frontend"
        Namespace = "apps"
        Hosts = "*"
      }
    ]
  }
]