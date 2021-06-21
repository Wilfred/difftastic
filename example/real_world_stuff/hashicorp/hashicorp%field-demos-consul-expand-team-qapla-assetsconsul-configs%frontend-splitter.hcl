Kind = "service-splitter"
Name = "frontend"
Namespace = "apps"
Splits = [
  {
    Weight  = 50
    Service = "frontend"
    ServiceSubset = "v1"
  },
  {
    Weight  = 50
    Service = "frontend"
    ServiceSubset = "v2"
  },
]