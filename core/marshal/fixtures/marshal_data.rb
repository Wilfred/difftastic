# -*- encoding: binary -*-
class UserDefined
  class Nested
    def ==(other)
      other.kind_of? self.class
    end
  end

  attr_reader :a, :b

  def initialize
    @a = 'stuff'
    @b = @a
  end

  def _dump(depth)
    Marshal.dump [:stuff, :stuff]
  end

  def self._load(data)
    a, b = Marshal.load data

    obj = allocate
    obj.instance_variable_set :@a, a
    obj.instance_variable_set :@b, b

    obj
  end

  def ==(other)
    self.class === other and
    @a == other.a and
    @b == other.b
  end
end

class UserDefinedWithIvar
  attr_reader :a, :b, :c

  def initialize
    @a = 'stuff'
    @a.instance_variable_set :@foo, :UserDefinedWithIvar
    @b = 'more'
    @c = @b
  end

  def _dump(depth)
    Marshal.dump [:stuff, :more, :more]
  end

  def self._load(data)
    a, b, c = Marshal.load data

    obj = allocate
    obj.instance_variable_set :@a, a
    obj.instance_variable_set :@b, b
    obj.instance_variable_set :@c, c

    obj
  end

  def ==(other)
    self.class === other and
    @a == other.a and
    @b == other.b and
    @c == other.c and
    @a.instance_variable_get(:@foo) == other.a.instance_variable_get(:@foo)
  end
end

class UserDefinedImmediate
  def _dump(depth)
    ''
  end

  def self._load(data)
    nil
  end
end

class UserPreviouslyDefinedWithInitializedIvar
  attr_accessor :field1, :field2
end

class UserMarshal
  attr_reader :data

  def initialize
    @data = 'stuff'
  end
  def marshal_dump() :data end
  def marshal_load(data) @data = data end
  def ==(other) self.class === other and @data == other.data end
end

class UserMarshalWithClassName < UserMarshal
  def self.name
    "Never::A::Real::Class"
  end
end

class UserMarshalWithIvar
  attr_reader :data

  def initialize
    @data = 'my data'
  end

  def marshal_dump
    [:data]
  end

  def marshal_load(o)
    @data = o.first
  end

  def ==(other)
    self.class === other and
    @data = other.data
  end
end

class UserArray < Array
end

class UserHash < Hash
end

class UserHashInitParams < Hash
  def initialize(a)
    @a = a
  end
end

class UserObject
end

class UserRegexp < Regexp
end

class UserString < String
end

class UserCustomConstructorString < String
  def initialize(arg1, arg2)
  end
end

module Meths
  def meths_method() end
end

module MethsMore
  def meths_more_method() end
end

Struct.new "Pyramid"
Struct.new "Useful", :a, :b

module MarshalSpec
  class StructWithUserInitialize < Struct.new(:a)
    THREADLOCAL_KEY = :marshal_load_struct_args
    def initialize(*args)
      # using thread-local to avoid ivar marshaling
      Thread.current[THREADLOCAL_KEY] = args
      super(*args)
    end
  end

  class BasicObjectSubWithRespondToFalse < BasicObject
    def respond_to?(method_name, include_all=false)
      false
    end
  end

  def self.random_data
    randomizer = Random.new(42)
    1000.times{randomizer.rand} # Make sure we exhaust his first state of 624 random words
    dump_data = File.binread(fixture(__FILE__, 'random.dump'))
    [randomizer, dump_data]
  rescue => e
    ["Error when building Random marshal data #{e}", ""]
  end

  SwappedClass = nil
  def self.set_swapped_class(cls)
    remove_const(:SwappedClass)
    const_set(:SwappedClass, cls)
  end

  def self.reset_swapped_class
    set_swapped_class(nil)
  end

  DATA = {
    "nil" => [nil, "\004\b0"],
    "1..2" => [(1..2),
               "\004\bo:\nRange\b:\nbegini\006:\texclF:\bendi\a",
               { begin: 1, end: 2, :exclude_end? => false }],
    "1...2" => [(1...2),
                "\004\bo:\nRange\b:\nbegini\006:\texclT:\bendi\a",
               { begin: 1, end: 2, :exclude_end? => true }],
    "'a'..'b'" => [('a'..'b'),
                   "\004\bo:\nRange\b:\nbegin\"\006a:\texclF:\bend\"\006b",
                   { begin: 'a', end: 'b', :exclude_end? => false }],
    "Struct" => [Struct::Useful.new(1, 2),
                 "\004\bS:\023Struct::Useful\a:\006ai\006:\006bi\a"],
    "Symbol" => [:symbol,
                 "\004\b:\vsymbol"],
    "true" => [true,
               "\004\bT"],
    "false" => [false,
                "\004\bF"],
    "String empty" => ['',
                       "\004\b\"\000"],
    "String small" => ['small',
                       "\004\b\"\012small"],
    "String big" => ['big' * 100,
                     "\004\b\"\002,\001#{'big' * 100}"],
    "String extended" => [''.extend(Meths), # TODO: check for module on load
                          "\004\be:\nMeths\"\000"],
    "String subclass" => [UserString.new,
                          "\004\bC:\017UserString\"\000"],
    "String subclass extended" => [UserString.new.extend(Meths),
                                   "\004\be:\nMethsC:\017UserString\"\000"],
    "Symbol small" => [:big,
                       "\004\b:\010big"],
    "Symbol big" => [('big' * 100).to_sym,
                               "\004\b:\002,\001#{'big' * 100}"],
    "Bignum -2**64" => [-2**64,
                        "\004\bl-\n\000\000\000\000\000\000\000\000\001\000"],
    "Bignum -2**63" => [-2**63,
                        "\004\bl-\t\000\000\000\000\000\000\000\200"],
    "Fixnum -2**24" => [-2**24,
                        "\004\bi\375\000\000\000"],
    "Fixnum -4516727" => [-4516727,
                          "\004\bi\375\211\024\273"],
    "Fixnum -2**16" => [-2**16,
                        "\004\bi\376\000\000"],
    "Fixnum -2**8" => [-2**8,
                       "\004\bi\377\000"],
    "Fixnum -123" => [-123,
                      "\004\bi\200"],
    "Fixnum -124" => [-124, "\004\bi\377\204"],
    "Fixnum 0" => [0,
                   "\004\bi\000"],
    "Fixnum 5" => [5,
                   "\004\bi\n"],
    "Fixnum 122" => [122, "\004\bi\177"],
    "Fixnum 123" => [123, "\004\bi\001{"],
    "Fixnum 2**8" => [2**8,
                      "\004\bi\002\000\001"],
    "Fixnum 2**16" => [2**16,
                       "\004\bi\003\000\000\001"],
    "Fixnum 2**24" => [2**24,
                       "\004\bi\004\000\000\000\001"],
    "Bignum 2**64" => [2**64,
                       "\004\bl+\n\000\000\000\000\000\000\000\000\001\000"],
    "Bignum 2**90" => [2**90,
                       "\004\bl+\v#{"\000" * 11}\004"],
    "Class String" => [String,
                       "\004\bc\vString"],
    "Module Marshal" => [Marshal,
                         "\004\bm\fMarshal"],
    "Module nested" => [UserDefined::Nested.new,
                        "\004\bo:\030UserDefined::Nested\000"],
    "_dump object" => [UserDefinedWithIvar.new,
                       "\004\bu:\030UserDefinedWithIvar5\004\b[\bI\"\nstuff\006:\t@foo:\030UserDefinedWithIvar\"\tmore@\a"],
    "_dump object extended" => [UserDefined.new.extend(Meths),
                                "\004\bu:\020UserDefined\022\004\b[\a\"\nstuff@\006"],
    "marshal_dump object" => [UserMarshalWithIvar.new,
                              "\004\bU:\030UserMarshalWithIvar[\006\"\fmy data"],
    "Regexp" => [/\A.\Z/,
                 "\004\b/\n\\A.\\Z\000"],
    "Regexp subclass /i" => [UserRegexp.new('', Regexp::IGNORECASE),
                             "\004\bC:\017UserRegexp/\000\001"],
    "Float 0.0" => [0.0,
                    "\004\bf\0060"],
    "Float -0.0" => [-0.0,
                     "\004\bf\a-0"],
    "Float Infinity" => [(1.0 / 0.0),
                         "\004\bf\binf"],
    "Float -Infinity" => [(-1.0 / 0.0),
                          "\004\bf\t-inf"],
    "Float 1.0" => [1.0,
                    "\004\bf\0061"],
    "Float 8323434.342" => [8323434.342,
                            "\004\bf\0328323434.3420000002\000S\370"],
    "Float 1.0799999999999912" => [1.0799999999999912,
                            "\004\bf\0321.0799999999999912\000\341 "],
    "Hash" => [Hash.new,
               "\004\b{\000"],
    "Hash subclass" => [UserHash.new,
                        "\004\bC:\rUserHash{\000"],
    "Array" => [Array.new,
                "\004\b[\000"],
    "Array subclass" => [UserArray.new,
                     "\004\bC:\016UserArray[\000"],
    "Struct Pyramid" => [Struct::Pyramid.new,
                 "\004\bS:\024Struct::Pyramid\000"],
  }
  DATA_19 = {
    "nil" => [nil, "\004\b0"],
    "1..2" => [(1..2),
               "\004\bo:\nRange\b:\nbegini\006:\texclF:\bendi\a",
               { begin: 1, end: 2, :exclude_end? => false }],
    "1...2" => [(1...2),
                "\004\bo:\nRange\b:\nbegini\006:\texclT:\bendi\a",
               { begin: 1, end: 2, :exclude_end? => true }],
    "'a'..'b'" => [('a'..'b'),
                   "\004\bo:\nRange\b:\nbegin\"\006a:\texclF:\bend\"\006b",
                   { begin: 'a', end: 'b', :exclude_end? => false }],
    "Struct" => [Struct::Useful.new(1, 2),
                 "\004\bS:\023Struct::Useful\a:\006ai\006:\006bi\a"],
    "Symbol" => [:symbol,
                 "\004\b:\vsymbol"],
    "true" => [true,
               "\004\bT"],
    "false" => [false,
                "\004\bF"],
    "String empty" => ['',
                    "\x04\bI\"\x00\x06:\x06EF"],
    "String small" => ['small',
                    "\x04\bI\"\nsmall\x06:\x06EF"],
    "String big" => ['big' * 100,
                    "\x04\bI\"\x02,\x01bigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbigbig\x06:\x06EF"],
    "String extended" => [''.extend(Meths), # TODO: check for module on load
                          "\x04\bIe:\nMeths\"\x00\x06:\x06EF"],
    "String subclass" => [UserString.new,
                          "\004\bC:\017UserString\"\000"],
    "String subclass extended" => [UserString.new.extend(Meths),
                                   "\004\be:\nMethsC:\017UserString\"\000"],
    "Symbol small" => [:big,
                       "\004\b:\010big"],
    "Symbol big" => [('big' * 100).to_sym,
                               "\004\b:\002,\001#{'big' * 100}"],
    "Bignum -2**64" => [-2**64,
                        "\004\bl-\n\000\000\000\000\000\000\000\000\001\000"],
    "Bignum -2**63" => [-2**63,
                        "\004\bl-\t\000\000\000\000\000\000\000\200"],
    "Fixnum -2**24" => [-2**24,
                        "\004\bi\375\000\000\000"],
    "Fixnum -2**16" => [-2**16,
                        "\004\bi\376\000\000"],
    "Fixnum -2**8" => [-2**8,
                       "\004\bi\377\000"],
    "Fixnum -123" => [-123,
                      "\004\bi\200"],
    "Fixnum 0" => [0,
                   "\004\bi\000"],
    "Fixnum 5" => [5,
                   "\004\bi\n"],
    "Fixnum 2**8" => [2**8,
                      "\004\bi\002\000\001"],
    "Fixnum 2**16" => [2**16,
                       "\004\bi\003\000\000\001"],
    "Fixnum 2**24" => [2**24,
                       "\004\bi\004\000\000\000\001"],
    "Bignum 2**64" => [2**64,
                       "\004\bl+\n\000\000\000\000\000\000\000\000\001\000"],
    "Bignum 2**90" => [2**90,
                       "\004\bl+\v#{"\000" * 11}\004"],
    "Class String" => [String,
                       "\004\bc\vString"],
    "Module Marshal" => [Marshal,
                         "\004\bm\fMarshal"],
    "Module nested" => [UserDefined::Nested.new,
                        "\004\bo:\030UserDefined::Nested\000"],
    "_dump object" => [UserDefinedWithIvar.new,
          "\x04\bu:\x18UserDefinedWithIvar>\x04\b[\bI\"\nstuff\a:\x06EF:\t@foo:\x18UserDefinedWithIvarI\"\tmore\x06;\x00F@\a"],
    "_dump object extended" => [UserDefined.new.extend(Meths),
              "\x04\bu:\x10UserDefined\x18\x04\b[\aI\"\nstuff\x06:\x06EF@\x06"],
    "marshal_dump object" => [UserMarshalWithIvar.new,
                  "\x04\bU:\x18UserMarshalWithIvar[\x06I\"\fmy data\x06:\x06EF"],
    "Regexp" => [/\A.\Z/,
                 "\x04\bI/\n\\A.\\Z\x00\x06:\x06EF"],
    "Regexp subclass /i" => [UserRegexp.new('', Regexp::IGNORECASE),
                     "\x04\bIC:\x0FUserRegexp/\x00\x01\x06:\x06EF"],
    "Float 0.0" => [0.0,
                    "\004\bf\0060"],
    "Float -0.0" => [-0.0,
                     "\004\bf\a-0"],
    "Float Infinity" => [(1.0 / 0.0),
                         "\004\bf\binf"],
    "Float -Infinity" => [(-1.0 / 0.0),
                          "\004\bf\t-inf"],
    "Float 1.0" => [1.0,
                    "\004\bf\0061"],
    "Hash" => [Hash.new,
               "\004\b{\000"],
    "Hash subclass" => [UserHash.new,
                        "\004\bC:\rUserHash{\000"],
    "Array" => [Array.new,
                "\004\b[\000"],
    "Array subclass" => [UserArray.new,
                     "\004\bC:\016UserArray[\000"],
    "Struct Pyramid" => [Struct::Pyramid.new,
                 "\004\bS:\024Struct::Pyramid\000"],
    "Random" => random_data,
  }
end

class ArraySub < Array
  def initialize(*args)
    super(args)
  end
end

class ArraySubPush < Array
  def << value
    raise 'broken'
  end
  alias_method :push, :<<
end

class SameName
end

module NamespaceTest
end
