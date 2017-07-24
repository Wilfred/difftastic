require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

# These specs only illustrate the basic autoload cases
# and where toplevel autoload behaves differently from
# Module#autoload. See those specs for more examples.

autoload :KSAutoloadA, "autoload_a.rb"
autoload :KSAutoloadB, fixture(__FILE__, "autoload_b.rb")
autoload :KSAutoloadC, fixture(__FILE__, "autoload_c.rb")

def check_autoload(const)
  autoload? const
end

describe "Kernel#autoload" do
  before :each do
    @loaded_features = $".dup
  end

  after :each do
    $".replace @loaded_features
  end

  it "is a private method" do
    Kernel.should have_private_instance_method(:autoload)
  end

  it "registers a file to load the first time the named constant is accessed" do
    Object.autoload?(:KSAutoloadA).should == "autoload_a.rb"
  end

  it "registers a file to load the first time the named constant is accessed" do
    check_autoload(:KSAutoloadA).should == "autoload_a.rb"
  end

  it "sets the autoload constant in Object's constant table" do
    Object.should have_constant(:KSAutoloadA)
  end

  it "loads the file when the constant is accessed" do
    KSAutoloadB.loaded.should == :ksautoload_b
  end

  it "does not call Kernel.require or Kernel.load to load the file" do
    Kernel.should_not_receive(:require)
    Kernel.should_not_receive(:load)
    KSAutoloadC.loaded.should == :ksautoload_c
  end

  it "can autoload in instance_eval" do
    Object.new.instance_eval do
      autoload :KSAutoloadD, fixture(__FILE__, "autoload_d.rb")
      KSAutoloadD.loaded.should == :ksautoload_d
    end
  end

  describe "when Object is frozen" do
    it "raises a RuntimeError before defining the constant" do
      ruby_exe(fixture(__FILE__, "autoload_frozen.rb")).should == "RuntimeError - nil"
    end
  end
end

describe "Kernel#autoload?" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:autoload?)
  end

  it "returns the name of the file that will be autoloaded" do
    check_autoload(:KSAutoloadA).should == "autoload_a.rb"
  end

  it "returns nil if no file has been registered for a constant" do
    check_autoload(:Manualload).should be_nil
  end
end

Kernel.autoload :KSAutoloadBB, "no_autoload.rb"

describe "Kernel.autoload" do
  before :all do
    @non_existent = fixture __FILE__, "no_autoload.rb"
  end

  before :each do
    @loaded_features = $".dup

    ScratchPad.clear
  end

  after :each do
    $".replace @loaded_features
  end

  it "registers a file to load the first time the toplevel constant is accessed" do
    Kernel.autoload :KSAutoloadAA, @non_existent
    Kernel.autoload?(:KSAutoloadAA).should == @non_existent
  end

  it "sets the autoload constant in Object's constant table" do
    Object.should have_constant(:KSAutoloadBB)
  end

  it "calls #to_path on non-String filenames" do
    p = mock('path')
    p.should_receive(:to_path).and_return @non_existent
    Kernel.autoload :KSAutoloadAA, p
  end
end

describe "Kernel.autoload?" do
  it "returns the name of the file that will be autoloaded" do
    Kernel.autoload :KSAutoload, "autoload.rb"
    Kernel.autoload?(:KSAutoload).should == "autoload.rb"
  end

  it "returns nil if no file has been registered for a constant" do
    Kernel.autoload?(:Manualload).should be_nil
  end
end
