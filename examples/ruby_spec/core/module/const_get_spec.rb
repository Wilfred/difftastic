require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../fixtures/constants', __FILE__)

describe "Module#const_get" do
  it "accepts a String or Symbol name" do
    Object.const_get(:CS_CONST1).should == :const1
    Object.const_get("CS_CONST1").should == :const1
  end

  it "raises a NameError if no constant is defined in the search path" do
    lambda { ConstantSpecs.const_get :CS_CONSTX }.should raise_error(NameError)
  end

  it "raises a NameError with the not found constant symbol" do
    error_inspection = lambda { |e| e.name.should == :CS_CONSTX }
    lambda { ConstantSpecs.const_get :CS_CONSTX }.should raise_error(NameError, &error_inspection)
  end

  it "raises a NameError if the name does not start with a capital letter" do
    lambda { ConstantSpecs.const_get "name" }.should raise_error(NameError)
  end

  it "raises a NameError if the name starts with a non-alphabetic character" do
    lambda { ConstantSpecs.const_get "__CONSTX__" }.should raise_error(NameError)
    lambda { ConstantSpecs.const_get "@CS_CONST1" }.should raise_error(NameError)
    lambda { ConstantSpecs.const_get "!CS_CONST1" }.should raise_error(NameError)
  end

  it "raises a NameError if the name contains non-alphabetic characters except '_'" do
    Object.const_get("CS_CONST1").should == :const1
    lambda { ConstantSpecs.const_get "CS_CONST1=" }.should raise_error(NameError)
    lambda { ConstantSpecs.const_get "CS_CONST1?" }.should raise_error(NameError)
  end

  it "calls #to_str to convert the given name to a String" do
    name = mock("ClassA")
    name.should_receive(:to_str).and_return("ClassA")
    ConstantSpecs.const_get(name).should == ConstantSpecs::ClassA
  end

  it "raises a TypeError if conversion to a String by calling #to_str fails" do
    name = mock('123')
    lambda { ConstantSpecs.const_get(name) }.should raise_error(TypeError)

    name.should_receive(:to_str).and_return(123)
    lambda { ConstantSpecs.const_get(name) }.should raise_error(TypeError)
  end

  it "calls #const_missing on the receiver if unable to locate the constant" do
    ConstantSpecs::ContainerA.should_receive(:const_missing).with(:CS_CONSTX)
    ConstantSpecs::ContainerA.const_get(:CS_CONSTX)
  end

  it "does not search the singleton class of a Class or Module" do
    lambda do
      ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST14)
    end.should raise_error(NameError)
    lambda { ConstantSpecs.const_get(:CS_CONST14) }.should raise_error(NameError)
  end

  it "does not search the containing scope" do
    ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST20).should == :const20_2
    lambda do
      ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST5)
    end.should raise_error(NameError)
  end

  it "raises a NameError if the constant is defined in the receiver's supperclass and the inherit flag is false" do
    lambda do
      ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST4, false)
    end.should raise_error(NameError)
  end

  it "searches into the receiver superclasses if the inherit flag is true" do
    ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST4, true).should == :const4
  end

  it "raises a NameError when the receiver is a Module, the constant is defined at toplevel and the inherit flag is false" do
    lambda do
      ConstantSpecs::ModuleA.const_get(:CS_CONST1, false)
    end.should raise_error(NameError)
  end

  it "raises a NameError when the receiver is a Class, the constant is defined at toplevel and the inherit flag is false" do
    lambda do
      ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST1, false)
    end.should raise_error(NameError)
  end

  it "accepts a toplevel scope qualifier" do
    ConstantSpecs.const_get("::CS_CONST1").should == :const1
  end

  it "accepts a scoped constant name" do
    ConstantSpecs.const_get("ClassA::CS_CONST10").should == :const10_10
  end

  it "raises a NameError if only '::' is passed" do
    lambda { ConstantSpecs.const_get("::") }.should raise_error(NameError)
  end

  it "raises a NameError if a Symbol has a toplevel scope qualifier" do
    lambda { ConstantSpecs.const_get(:'::CS_CONST1') }.should raise_error(NameError)
  end

  it "raises a NameError if a Symbol is a scoped constant name" do
    lambda { ConstantSpecs.const_get(:'ClassA::CS_CONST10') }.should raise_error(NameError)
  end

  it "does read private constants" do
     ConstantSpecs.const_get(:CS_PRIVATE).should == :cs_private
  end

  describe "with statically assigned constants" do
    it "searches the immediate class or module first" do
      ConstantSpecs::ClassA.const_get(:CS_CONST10).should == :const10_10
      ConstantSpecs::ModuleA.const_get(:CS_CONST10).should == :const10_1
      ConstantSpecs::ParentA.const_get(:CS_CONST10).should == :const10_5
      ConstantSpecs::ContainerA.const_get(:CS_CONST10).should == :const10_2
      ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST10).should == :const10_3
    end

    it "searches a module included in the immediate class before the superclass" do
      ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST15).should == :const15_1
    end

    it "searches the superclass before a module included in the superclass" do
      ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST11).should == :const11_1
    end

    it "searches a module included in the superclass" do
      ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST12).should == :const12_1
    end

    it "searches the superclass chain" do
      ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST13).should == :const13
    end

    it "returns a toplevel constant when the receiver is a Class" do
      ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST1).should == :const1
    end

    it "returns a toplevel constant when the receiver is a Module" do
      ConstantSpecs.const_get(:CS_CONST1).should == :const1
      ConstantSpecs::ModuleA.const_get(:CS_CONST1).should == :const1
    end
  end

  describe "with dynamically assigned constants" do
    it "searches the immediate class or module first" do
      ConstantSpecs::ClassA::CS_CONST301 = :const301_1
      ConstantSpecs::ClassA.const_get(:CS_CONST301).should == :const301_1

      ConstantSpecs::ModuleA::CS_CONST301 = :const301_2
      ConstantSpecs::ModuleA.const_get(:CS_CONST301).should == :const301_2

      ConstantSpecs::ParentA::CS_CONST301 = :const301_3
      ConstantSpecs::ParentA.const_get(:CS_CONST301).should == :const301_3

      ConstantSpecs::ContainerA::ChildA::CS_CONST301 = :const301_5
      ConstantSpecs::ContainerA::ChildA.const_get(:CS_CONST301).should == :const301_5
    end

    it "searches a module included in the immediate class before the superclass" do
      ConstantSpecs::ParentB::CS_CONST302 = :const302_1
      ConstantSpecs::ModuleF::CS_CONST302 = :const302_2
      ConstantSpecs::ContainerB::ChildB.const_get(:CS_CONST302).should == :const302_2
    end

    it "searches the superclass before a module included in the superclass" do
      ConstantSpecs::ModuleE::CS_CONST303 = :const303_1
      ConstantSpecs::ParentB::CS_CONST303 = :const303_2
      ConstantSpecs::ContainerB::ChildB.const_get(:CS_CONST303).should == :const303_2
    end

    it "searches a module included in the superclass" do
      ConstantSpecs::ModuleA::CS_CONST304 = :const304_1
      ConstantSpecs::ModuleE::CS_CONST304 = :const304_2
      ConstantSpecs::ContainerB::ChildB.const_get(:CS_CONST304).should == :const304_2
    end

    it "searches the superclass chain" do
      ConstantSpecs::ModuleA::CS_CONST305 = :const305
      ConstantSpecs::ContainerB::ChildB.const_get(:CS_CONST305).should == :const305
    end

    it "returns a toplevel constant when the receiver is a Class" do
      Object::CS_CONST306 = :const306
      ConstantSpecs::ContainerB::ChildB.const_get(:CS_CONST306).should == :const306
    end

    it "returns a toplevel constant when the receiver is a Module" do
      Object::CS_CONST308 = :const308
      ConstantSpecs.const_get(:CS_CONST308).should == :const308
      ConstantSpecs::ModuleA.const_get(:CS_CONST308).should == :const308
    end

    it "returns the updated value of a constant" do
      ConstantSpecs::ClassB::CS_CONST309 = :const309_1
      ConstantSpecs::ClassB.const_get(:CS_CONST309).should == :const309_1

      lambda {
        ConstantSpecs::ClassB::CS_CONST309 = :const309_2
      }.should complain(/already initialized constant/)
      ConstantSpecs::ClassB.const_get(:CS_CONST309).should == :const309_2
    end
  end
end
