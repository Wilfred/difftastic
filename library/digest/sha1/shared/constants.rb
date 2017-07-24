# -*- encoding: binary -*-

require 'digest/sha1'

module SHA1Constants

  Contents = "Ipsum is simply dummy text of the printing and typesetting industry. \nLorem Ipsum has been the industrys standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. \nIt has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. \nIt was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."

  Klass          = ::Digest::SHA1
  BlockLength    = 64
  DigestLength   = 20
  BlankDigest    = "\3329\243\356^kK\r2U\277\357\225`\030\220\257\330\a\t"
  Digest         = "X!\255b\323\035\352\314a|q\344+\376\317\361V9\324\343"
  BlankHexdigest = "da39a3ee5e6b4b0d3255bfef95601890afd80709"
  Hexdigest      = "e907d2ba21c6c74bc0efd76e44d11fb9bbb7a75e"

end
