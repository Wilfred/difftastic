module MethodSpecs


  class SourceLocation
    def self.location # This needs to be on this line
      :location       # for the spec to pass
    end

    def self.redefined
      :first
    end

    def self.redefined
      :last
    end

    def original
    end

    alias :aka :original
  end

  class Methods
    def foo
      true
    end

    alias bar foo

    def same_as_foo
      true
    end

    def respond_to_missing? method, bool
      [:handled_via_method_missing, :also_handled].include? method
    end

    def method_missing(method, *arguments)
      if [:handled_via_method_missing, :also_handled].include? method
        arguments
      else
        super
      end
    end

    attr_accessor :attr

    def zero; end
    def one_req(a); end
    def two_req(a, b); end

    def zero_with_block(&blk); end
    def one_req_with_block(a, &blk); end
    def two_req_with_block(a, b, &blk); end

    def one_opt(a=nil); end
    def one_req_one_opt(a, b=nil); end
    def one_req_two_opt(a, b=nil, c=nil); end
    def two_req_one_opt(a, b, c=nil); end

    def one_opt_with_block(a=nil, &blk); end
    def one_req_one_opt_with_block(a, b=nil, &blk); end
    def one_req_two_opt_with_block(a, b=nil, c=nil, &blk); end
    def two_req_one_opt_with_block(a, b, c=nil, &blk); end

    def zero_with_splat(*a); end
    def one_req_with_splat(a, *b); end
    def two_req_with_splat(a, b, *c); end
    def one_req_one_opt_with_splat(a, b=nil, *c); end
    def two_req_one_opt_with_splat(a, b, c=nil, *d); end
    def one_req_two_opt_with_splat(a, b=nil, c=nil, *d); end

    def zero_with_splat_and_block(*a, &blk); end
    def one_req_with_splat_and_block(a, *b, &blk); end
    def two_req_with_splat_and_block(a, b, *c, &blk); end
    def one_req_one_opt_with_splat_and_block(a, b=nil, *c, &blk); end
    def two_req_one_opt_with_splat_and_block(a, b, c=nil, *d, &blk); end
    def one_req_two_opt_with_splat_and_block(a, b=nil, c=nil, *d, &blk); end

    define_method(:zero_defined_method, Proc.new {||})
    define_method(:zero_with_splat_defined_method, Proc.new {|*x|})
    define_method(:one_req_defined_method, Proc.new {|x|})
    define_method(:two_req_defined_method, Proc.new {|x, y|})
    define_method(:no_args_defined_method) {}
    define_method(:two_grouped_defined_method) {|(_x1,_x2)|}

    attr_reader :reader
    attr_writer :writer
  end

  module MyMod
    def bar; :bar; end
  end

  class MySuper
    include MyMod
  end

  class MySub < MySuper; end

  class A
    def baz(a, b)
      self.class
    end
    def overridden; end
  end

  class B < A
    def overridden; end
  end

  module BetweenBAndC
    def overridden; end
  end

  class C < B
    include BetweenBAndC
    def overridden; end
  end

  module OverrideAgain
    def overridden; end
  end

  class D
    def bar() 'done' end
  end

  class Eql

    def same_body
      1 + 1
    end

    alias :same_body_alias :same_body

    def same_body_with_args(arg)
      1 + 1
    end

    def different_body
      1 + 2
    end

    def same_body_two
      1 + 1
    end

    private
    def same_body_private
      1 + 1
    end
  end

  class Eql2

    def same_body
      1 + 1
    end

  end

  class ToProc
    def method_called(a, b)
      ScratchPad << [a, b]
    end

    def to_proc
      method(:method_called).to_proc
    end
  end

  class ToProcBeta
    def method_called(a)
      ScratchPad << a
      a
    end

    def to_proc
      method(:method_called).to_proc
    end
  end

end
