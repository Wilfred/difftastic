require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#alias_method" do
  before :each do
    @class = Class.new(ModuleSpecs::Aliasing)
    @object = @class.new
  end

  it "makes a copy of the method" do
    @class.make_alias :uno, :public_one
    @class.make_alias :double, :public_two
    @object.uno.should == @object.public_one
    @object.double(12).should == @object.public_two(12)
  end

  it "creates methods that are == to eachother" do
    @class.make_alias :uno, :public_one
    @object.method(:uno).should == @object.method(:public_one)
  end

  it "preserves the arguments information of the original methods" do
    @class.make_alias :uno, :public_one
    @class.make_alias :double, :public_two
    @class.instance_method(:uno).parameters.should == @class.instance_method(:public_one).parameters
    @class.instance_method(:double).parameters.should == @class.instance_method(:public_two).parameters
  end

  it "retains method visibility" do
    @class.make_alias :private_ichi, :private_one
    lambda { @object.private_one  }.should raise_error(NameError)
    lambda { @object.private_ichi }.should raise_error(NameError)
    @class.make_alias :public_ichi, :public_one
    @object.public_ichi.should == @object.public_one
    @class.make_alias :protected_ichi, :protected_one
    lambda { @object.protected_ichi }.should raise_error(NameError)
  end

  it "handles aliasing a stub that changes visibility" do
    @class.__send__ :public, :private_one
    @class.make_alias :was_private_one, :private_one
    @object.was_private_one.should == 1
  end

  it "fails if origin method not found" do
    lambda { @class.make_alias :ni, :san }.should raise_error(NameError) { |e|
      # a NameError and not a NoMethodError
      e.class.should == NameError
    }
  end

  it "raises RuntimeError if frozen" do
    @class.freeze
    lambda { @class.make_alias :uno, :public_one }.should raise_error(RuntimeError)
  end

  it "converts the names using #to_str" do
    @class.make_alias "un", "public_one"
    @class.make_alias :deux, "public_one"
    @class.make_alias "trois", :public_one
    @class.make_alias :quatre, :public_one
    name = mock('cinq')
    name.should_receive(:to_str).any_number_of_times.and_return("cinq")
    @class.make_alias name, "public_one"
    @class.make_alias "cinq", name
  end

  it "raises a TypeError when the given name can't be converted using to_str" do
    lambda { @class.make_alias mock('x'), :public_one }.should raise_error(TypeError)
  end

  it "is a private method" do
    lambda { @class.alias_method :ichi, :public_one }.should raise_error(NoMethodError)
  end

  it "returns self" do
    @class.send(:alias_method, :checking_return_value, :public_one).should equal(@class)
  end

  it "works in module" do
    ModuleSpecs::Allonym.new.publish.should == :report
  end

  it "works on private module methods in a module that has been reopened" do
    ModuleSpecs::ReopeningModule.foo.should == true
    lambda { ModuleSpecs::ReopeningModule.foo2 }.should_not raise_error(NoMethodError)
  end

  it "accesses a method defined on Object from Kernel" do
    Kernel.should_not have_public_instance_method(:module_specs_public_method_on_object)

    Kernel.should have_public_instance_method(:module_specs_alias_on_kernel)
    Object.should have_public_instance_method(:module_specs_alias_on_kernel)
  end

  it "can call a method with super aliased twice" do
    ModuleSpecs::AliasingSuper::Target.new.super_call(1).should == 1
  end

  it "preserves original super call after alias redefine" do
    ModuleSpecs::AliasingSuper::RedefineAfterAlias.new.alias_super_call(1).should == 1
  end

  describe "aliasing special methods" do
    before :all do
      @class = ModuleSpecs::Aliasing
      @subclass = ModuleSpecs::AliasingSubclass
    end

    it "keeps initialize private when aliasing" do
      @class.make_alias(:initialize, :public_one)
      @class.private_instance_methods.include?(:initialize).should be_true

      @subclass.make_alias(:initialize, :public_one)
      @subclass.private_instance_methods.include?(:initialize).should be_true
    end

    it "keeps initialize_copy private when aliasing" do
      @class.make_alias(:initialize_copy, :public_one)
      @class.private_instance_methods.include?(:initialize_copy).should be_true

      @subclass.make_alias(:initialize_copy, :public_one)
      @subclass.private_instance_methods.include?(:initialize_copy).should be_true
    end

    it "keeps initialize_clone private when aliasing" do
      @class.make_alias(:initialize_clone, :public_one)
      @class.private_instance_methods.include?(:initialize_clone).should be_true

      @subclass.make_alias(:initialize_clone, :public_one)
      @subclass.private_instance_methods.include?(:initialize_clone).should be_true
    end

    it "keeps initialize_dup private when aliasing" do
      @class.make_alias(:initialize_dup, :public_one)
      @class.private_instance_methods.include?(:initialize_dup).should be_true

      @subclass.make_alias(:initialize_dup, :public_one)
      @subclass.private_instance_methods.include?(:initialize_dup).should be_true
    end

    it "keeps respond_to_missing? private when aliasing" do
      @class.make_alias(:respond_to_missing?, :public_one)
      @class.private_instance_methods.include?(:respond_to_missing?).should be_true

      @subclass.make_alias(:respond_to_missing?, :public_one)
      @subclass.private_instance_methods.include?(:respond_to_missing?).should be_true
    end
  end
end
