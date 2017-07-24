# -*- encoding: binary -*-

require 'digest/sha2'

module SHA256Constants

  Contents = "Ipsum is simply dummy text of the printing and typesetting industry. \nLorem Ipsum has been the industrys standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. \nIt has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. \nIt was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."

  Klass          = ::Digest::SHA256
  BlockLength    = 64
  DigestLength   = 32
  BlankDigest    = "\343\260\304B\230\374\034\024\232\373\364\310\231o\271$'\256A\344d\233\223L\244\225\231\exR\270U"
  Digest         = "\230b\265\344_\337\357\337\242\004\314\311A\211jb\350\373\254\370\365M\230B\002\372\020j\as\270\376"
  BlankHexdigest = "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855"
  Hexdigest      = "9862b5e45fdfefdfa204ccc941896a62e8fbacf8f54d984202fa106a0773b8fe"

end
