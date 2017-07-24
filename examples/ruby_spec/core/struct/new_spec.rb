require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Struct.new" do
  it "creates a constant in Struct namespace with string as first argument" do
    struct = Struct.new('Animal', :name, :legs, :eyeballs)
    struct.should == Struct::Animal
    struct.name.should == "Struct::Animal"
  end

  it "overwrites previously defined constants with string as first argument" do
    first = Struct.new('Person', :height, :weight)
    first.should == Struct::Person

    second = nil
    lambda {
      second = Struct.new('Person', :hair, :sex)
    }.should complain(/redefining constant/)
    second.should == Struct::Person

    first.members.should_not == second.members
  end

  it "calls to_str on its first argument (constant name)" do
    obj = mock('Foo')
    def obj.to_str() "Foo" end
    struct = Struct.new(obj)
    struct.should == Struct::Foo
    struct.name.should == "Struct::Foo"
  end

  it "creates a new anonymous class with nil first argument" do
    struct = Struct.new(nil, :foo)
    struct.new("bar").foo.should == "bar"
    struct.should be_kind_of(Class)
    struct.name.should be_nil
  end

  it "creates a new anonymous class with symbol arguments" do
    struct = Struct.new(:make, :model)
    struct.should be_kind_of(Class)
    struct.name.should == nil
  end

  it "does not create a constant with symbol as first argument" do
    Struct.new(:Animal2, :name, :legs, :eyeballs)
    Struct.const_defined?("Animal2").should be_false
  end


  it "fails with invalid constant name as first argument" do
    lambda { Struct.new('animal', :name, :legs, :eyeballs) }.should raise_error(NameError)
  end

  it "raises a TypeError if object doesn't respond to to_sym" do
    lambda { Struct.new(:animal, mock('giraffe'))      }.should raise_error(TypeError)
    lambda { Struct.new(:animal, 1.0)                  }.should raise_error(TypeError)
    lambda { Struct.new(:animal, Time.now)             }.should raise_error(TypeError)
    lambda { Struct.new(:animal, Class)                }.should raise_error(TypeError)
    lambda { Struct.new(:animal, nil)                  }.should raise_error(TypeError)
    lambda { Struct.new(:animal, true)                 }.should raise_error(TypeError)
    lambda { Struct.new(:animal, ['chris', 'evan'])    }.should raise_error(TypeError)
    lambda { Struct.new(:animal, { name: 'chris' }) }.should raise_error(TypeError)
  end

  it "raises a TypeError if object is not a Symbol" do
    obj = mock(':ruby')
    def obj.to_sym() :ruby end
    lambda { Struct.new(:animal, obj) }.should raise_error(TypeError)
  end

  it "processes passed block with instance_eval" do
    klass = Struct.new(:something) { @something_else = 'something else entirely!' }
    klass.instance_variables.should include(:@something_else)
  end

  context "with a block" do
    it "allows class to be modified via the block" do
      klass = Struct.new(:version) do
        def platform
          :ruby
        end
      end
      instance = klass.new('2.2')

      instance.version.should == '2.2'
      instance.platform.should == :ruby
    end

    it "passes same struct class to the block" do
      given = nil
      klass = Struct.new(:attr) do |block_parameter|
        given = block_parameter
      end
      klass.should equal(given)
    end
  end

  context "on subclasses" do
    it "creates a constant in subclass' namespace" do
      struct = StructClasses::Apple.new('Computer', :size)
      struct.should == StructClasses::Apple::Computer
    end

    it "creates an instance" do
      StructClasses::Ruby.new.kind_of?(StructClasses::Ruby).should == true
    end

    it "creates reader methods" do
      StructClasses::Ruby.new.should have_method(:version)
      StructClasses::Ruby.new.should have_method(:platform)
    end

    it "creates writer methods" do
      StructClasses::Ruby.new.should have_method(:version=)
      StructClasses::Ruby.new.should have_method(:platform=)
    end

    it "fails with too many arguments" do
      lambda { StructClasses::Ruby.new('2.0', 'i686', true) }.should raise_error(ArgumentError)
    end
  end
end
