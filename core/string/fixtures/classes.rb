class Object
  # This helper is defined here rather than in MSpec because
  # it is only used in #unpack specs.
  def unpack_format(count=nil, repeat=nil)
    format = "#{instance_variable_get(:@method)}#{count}"
    format *= repeat if repeat
    format
  end
end

module StringSpecs
  class MyString < String; end
  class MyArray < Array; end
  class MyRange < Range; end

  class SubString < String
    attr_reader :special

    def initialize(str=nil)
      @special = str
    end
  end

  class InitializeString < String
    attr_reader :ivar

    def initialize(other)
      super
      @ivar = 1
    end

    def initialize_copy(other)
      ScratchPad.record object_id
    end
  end

  module StringModule
    def repr
      1
    end
  end

  class StringWithRaisingConstructor < String
    def initialize(str)
      raise ArgumentError.new('constructor was called') unless str == 'silly:string'
      self.replace(str)
    end
  end
end
