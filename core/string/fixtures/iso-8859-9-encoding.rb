# -*- encoding: iso-8859-9 -*-
module StringSpecs
  class ISO88599Encoding
    def source_encoding; __ENCODING__; end
    def x_escape; [0xDF].pack('C').force_encoding("iso-8859-9"); end
    def ascii_only; "glark"; end
    def cedilla; "Ş"; end
  end
end
