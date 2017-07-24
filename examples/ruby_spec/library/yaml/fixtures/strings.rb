$complex_key_1 = <<EOY
    ? # PLAY SCHEDULE
      - Detroit Tigers
      - Chicago Cubs
    :
      - 2001-07-23

    ? [ New York Yankees,
        Atlanta Braves ]
    : [ 2001-07-02, 2001-08-12,
       2001-08-14 ]
EOY

$to_yaml_hash =
<<EOY
-
  avg: 0.278
  hr: 65
  name: Mark McGwire
-
  avg: 0.288
  hr: 63
  name: Sammy Sosa
EOY

$multidocument = <<EOY
---
- Mark McGwire
- Sammy Sosa
- Ken Griffey

# Team ranking
---
- Chicago Cubs
- St Louis Cardinals
EOY
