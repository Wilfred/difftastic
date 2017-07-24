module KernelSpecs
  def self.Array_function(arg)
    Array(arg)
  end

  def self.Array_method(arg)
    Kernel.Array(arg)
  end

  def self.Hash_function(arg)
    Hash(arg)
  end

  def self.Hash_method(arg)
    Kernel.Hash(arg)
  end

  def self.Integer_function(arg)
    Integer(arg)
  end

  def self.Integer_method(arg)
    Kernel.Integer(arg)
  end

  def self.putc_function(arg)
    putc arg
  end

  def self.putc_method(arg)
    Kernel.putc arg
  end

  def self.has_private_method(name)
    IO.popen([*ruby_exe, "-n", "-e", "print Kernel.private_method_defined?(#{name.inspect})"], "r+") do |io|
      io.puts
      io.close_write
      io.read
    end == "true"
  end

  def self.chop(str, method)
    IO.popen([*ruby_exe, "-n", "-e", "$_ = #{str.inspect}; #{method}; print $_"], "r+") do |io|
      io.puts
      io.close_write
      io.read
    end
  end

  def self.chomp(str, method, sep="\n")
    code = "$_ = #{str.inspect}; $/ = #{sep.inspect}; #{method}; print $_"
    IO.popen([*ruby_exe, "-n", "-e", code], "r+") do |io|
      io.puts
      io.close_write
      io.read
    end
  end

  def self.run_with_dash_n(file)
    IO.popen([*ruby_exe, "-n", file], "r+") do |io|
      io.puts
      io.close_write
      io.read
    end
  end

  # kind_of?, is_a?, instance_of?
  module SomeOtherModule; end
  module AncestorModule; end
  module MyModule; end
  module MyExtensionModule; end

  class AncestorClass < String
    include AncestorModule
  end

  class InstanceClass < AncestorClass
    include MyModule
  end

  class KindaClass < AncestorClass
    include MyModule
    def initialize
      self.extend MyExtensionModule
    end
  end

  class Method
    public :abort, :exit, :exit!, :fork, :system
  end

  class Methods

    module MetaclassMethods
      def peekaboo
      end

      protected

      def nopeeking
      end

      private

      def shoo
      end
    end

    def self.ichi; end
    def ni; end
    class << self
      def san; end
    end

    private

    def self.shi; end
    def juu_shi; end

    class << self
      def roku; end

      private

      def shichi; end
    end

    protected

    def self.hachi; end
    def ku; end

    class << self
      def juu; end

      protected

      def juu_ichi; end
    end

    public

    def self.juu_ni; end
    def juu_san; end
  end

  class PrivateSup
    def public_in_sub
    end

    private :public_in_sub
  end

  class PublicSub < PrivateSup
    def public_in_sub
    end
  end

  class A
    # There is Kernel#public_method, so we don't want this one to clash
    def pub_method; :public_method; end

    def undefed_method; :undefed_method; end
    undef_method :undefed_method

    protected
    def protected_method; :protected_method; end

    private
    def private_method; :private_method; end

    public
    define_method(:defined_method) { :defined }
  end

  class B < A
    alias aliased_pub_method pub_method
  end

  class VisibilityChange
    class << self
      private :new
    end
  end

  class Binding
    @@super_secret = "password"

    def initialize(n)
      @secret = n
    end

    def square(n)
      n * n
    end

    def get_binding
      a = true
      @bind = binding

      # Add/Change stuff
      b = true
      @secret += 1

      @bind
    end
  end


  module BlockGiven
    def self.accept_block
      block_given?
    end

    def self.accept_block_as_argument(&block)
      block_given?
    end

    class << self
      define_method(:defined_block) do
        block_given?
      end
    end
  end

  module SelfBlockGiven
    def self.accept_block
      self.send(:block_given?)
    end

    def self.accept_block_as_argument(&block)
      self.send(:block_given?)
    end

    class << self
      define_method(:defined_block) do
        self.send(:block_given?)
      end
    end
  end

  module KernelBlockGiven
    def self.accept_block
      Kernel.block_given?
    end

    def self.accept_block_as_argument(&block)
      Kernel.block_given?
    end

    class << self
      define_method(:defined_block) do
        Kernel.block_given?
      end
    end
  end

  class EvalTest
    def self.eval_yield_with_binding
      eval("yield", binding)
    end
    def self.call_yield
      yield
    end
  end

  module DuplicateM
    def repr
      self.class.name.to_s
    end
  end

  class Duplicate
    attr_accessor :one, :two

    def initialize(one, two)
      @one = one
      @two = two
    end

    def initialize_copy(other)
      ScratchPad.record object_id
    end
  end

  class Clone
    def initialize_clone(other)
      ScratchPad.record other.object_id
    end
  end

  class Dup
    def initialize_dup(other)
      ScratchPad.record other.object_id
    end
  end

  module ParentMixin
    def parent_mixin_method; end
  end

  class Parent
    include ParentMixin
    def parent_method; end
    def another_parent_method; end
    def self.parent_class_method; :foo; end
  end

  class Child < Parent
    undef_method :parent_method
  end

  class Grandchild < Child
    undef_method :parent_mixin_method
  end

  # for testing lambda
  class Lambda
    def outer
      inner
    end

    def mp(&b); b; end

    def inner
      b = mp { return :good }

      pr = lambda { |x| x.call }

      pr.call(b)

      # We shouldn't be here, b should have unwinded through
      return :bad
    end
  end

  class RespondViaMissing
    def respond_to_missing?(method, priv=false)
      case method
        when :handled_publicly
          true
        when :handled_privately
          priv
        when :not_handled
          false
        else
          raise "Typo in method name"
      end
    end

    def method_missing(method, *args)
      "Done #{method}(#{args})"
    end
  end

  class InstanceVariable
    def initialize
      @greeting = "hello"
    end
  end

  class PrivateToAry
    private

    def to_ary
      [1, 2]
    end

    def to_a
      [3, 4]
    end
  end

  class PrivateToA
    private

    def to_a
      [3, 4]
    end
  end
end

class EvalSpecs
  class A
    eval "class B; end"
    def c
      eval "class C; end"
    end
  end

  class CoercedObject
    def to_str
      '2 + 3'
    end

    def hash
      nil
    end
  end

  def f
    yield
  end

  def self.call_eval
    f = __FILE__
    eval "true", binding, "(eval)", 1
    return f
  end
end

# for Kernel#sleep to have Channel in it's specs
# TODO: switch directly to queue for both Kernel#sleep and Thread specs?
unless defined? Channel
  require 'thread'
  class Channel < Queue
    alias receive shift
  end
end
