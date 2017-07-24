# -*- encoding: binary -*-

require 'digest/sha2'

module SHA384Constants

  Contents = "Ipsum is simply dummy text of the printing and typesetting industry. \nLorem Ipsum has been the industrys standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. \nIt has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. \nIt was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."


  Klass          = ::Digest::SHA384
  BlockLength    = 128
  DigestLength   = 48
  BlankDigest    = "8\260`\247Q\254\2268L\3312~\261\261\343j!\375\267\021\024\276\aCL\f\307\277c\366\341\332'N\336\277\347oe\373\325\032\322\361H\230\271["
  Digest         = "B&\266:\314\216z\361!TD\001{`\355\323\320MW%\270\272\0034n\034\026g\a\217\"\333s\202\275\002Y*\217]\207u\f\034\244\231\266f"
  BlankHexdigest = "38b060a751ac96384cd9327eb1b1e36a21fdb71114be07434c0cc7bf63f6e1da274edebfe76f65fbd51ad2f14898b95b"
  Hexdigest      = "4226b63acc8e7af1215444017b60edd3d04d5725b8ba03346e1c1667078f22db7382bd02592a8f5d87750c1ca499b666"

end
