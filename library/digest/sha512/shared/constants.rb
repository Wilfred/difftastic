# -*- encoding: binary -*-

require 'digest/sha2'

module SHA512Constants

  Contents = "Ipsum is simply dummy text of the printing and typesetting industry. \nLorem Ipsum has been the industrys standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. \nIt has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. \nIt was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."

  Klass          = ::Digest::SHA512
  BlockLength    = 128
  DigestLength   = 64
  BlankDigest    = "\317\203\3415~\357\270\275\361T(P\326m\200\a\326 \344\005\vW\025\334\203\364\251!\323l\351\316G\320\321<]\205\362\260\377\203\030\322\207~\354/c\2711\275GAz\201\24582z\371'\332>"
  Digest         = "\241\231\232\365\002z\241\331\242\310=\367F\272\004\326\331g\315n\251Q\222\250\374E\257\254=\325\225\003SM\350\244\234\220\233=\031\230A;\000\203\233\340\323t\333\271\222w\266\307\2678\344\255j\003\216\300"
  BlankHexdigest = "cf83e1357eefb8bdf1542850d66d8007d620e4050b5715dc83f4a921d36ce9ce47d0d13c5d85f2b0ff8318d2877eec2f63b931bd47417a81a538327af927da3e"
  Hexdigest      = "a1999af5027aa1d9a2c83df746ba04d6d967cd6ea95192a8fc45afac3dd59503534de8a49c909b3d1998413b00839be0d374dbb99277b6c7b738e4ad6a038ec0"

end
