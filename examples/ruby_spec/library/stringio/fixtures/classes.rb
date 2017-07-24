require 'stringio'

class StringSubclass < String; end

module StringIOSpecs
  def self.build
  str = <<-EOS
    each
    peach
    pear
    plum
  EOS
    StringIO.new(str)
  end
end
