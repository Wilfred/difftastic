Kind = "service-router"
Name = "frontend"
Namespace = "apps"
Routes = [
  {
    Match = {
      HTTP = {
        QueryParam = [
          {
            Name  = "x-debug"
            Present = "True"
          },
        ]
      }
    }
    Destination = {
      Service = "frontend"
      ServiceSubset = "v2"
    }
  }
]
