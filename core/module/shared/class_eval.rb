describe :module_class_eval, shared: true do
  # TODO: This should probably be replaced with a "should behave like" that uses
  # the many scoping/binding specs from kernel/eval_spec, since most of those
  # behaviors are the same for instance_eval. See also module_eval/class_eval.

  it "evaluates a given string in the context of self" do
    ModuleSpecs.send(@method, "self").should == ModuleSpecs
    ModuleSpecs.send(@method, "1 + 1").should == 2
  end

  it "does not add defined methods to other classes" do
    FalseClass.send(@method) do
      def foo
        'foo'
      end
    end
    lambda {42.foo}.should raise_error(NoMethodError)
  end

  it "resolves constants in the caller scope" do
    ModuleSpecs::ClassEvalTest.get_constant_from_scope.should == ModuleSpecs::Lookup
  end

  it "resolves constants in the caller scope ignoring send" do
    ModuleSpecs::ClassEvalTest.get_constant_from_scope_with_send(@method).should == ModuleSpecs::Lookup
  end

  it "resolves constants in the receiver's scope" do
    ModuleSpecs.send(@method, "Lookup").should == ModuleSpecs::Lookup
    ModuleSpecs.send(@method, "Lookup::LOOKIE").should == ModuleSpecs::Lookup::LOOKIE
  end

  it "defines constants in the receiver's scope" do
    ModuleSpecs.send(@method, "module NewEvaluatedModule;end")
    ModuleSpecs.const_defined?(:NewEvaluatedModule, false).should == true
  end

  it "evaluates a given block in the context of self" do
    ModuleSpecs.send(@method) { self }.should == ModuleSpecs
    ModuleSpecs.send(@method) { 1 + 1 }.should == 2
  end

  it "passes the module as the first argument of the block" do
    given = nil
    ModuleSpecs.send(@method) do |block_parameter|
      given = block_parameter
    end
    given.should equal ModuleSpecs
  end

  it "uses the optional filename and lineno parameters for error messages" do
    ModuleSpecs.send(@method, "[__FILE__, __LINE__]", "test", 102).should == ["test", 102]
  end

  it "converts a non-string filename to a string using to_str" do
    (file = mock(__FILE__)).should_receive(:to_str).and_return(__FILE__)
    ModuleSpecs.send(@method, "1+1", file)
  end

  it "raises a TypeError when the given filename can't be converted to string using to_str" do
    (file = mock('123')).should_receive(:to_str).and_return(123)
    lambda { ModuleSpecs.send(@method, "1+1", file) }.should raise_error(TypeError)
  end

  it "converts non string eval-string to string using to_str" do
    (o = mock('1 + 1')).should_receive(:to_str).and_return("1 + 1")
    ModuleSpecs.send(@method, o).should == 2
  end

  it "raises a TypeError when the given eval-string can't be converted to string using to_str" do
    o = mock('x')
    lambda { ModuleSpecs.send(@method, o) }.should raise_error(TypeError)

    (o = mock('123')).should_receive(:to_str).and_return(123)
    lambda { ModuleSpecs.send(@method, o) }.should raise_error(TypeError)
  end

  it "raises an ArgumentError when no arguments and no block are given" do
    lambda { ModuleSpecs.send(@method) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when more than 3 arguments are given" do
    lambda {
      ModuleSpecs.send(@method, "1 + 1", "some file", 0, "bogus")
    }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when a block and normal arguments are given" do
    lambda {
      ModuleSpecs.send(@method, "1 + 1") { 1 + 1 }
    }.should raise_error(ArgumentError)
  end

  # This case was found because Rubinius was caching the compiled
  # version of the string and not duping the methods within the
  # eval, causing the method addition to change the static scope
  # of the shared CompiledCode.
  it "adds methods respecting the lexical constant scope" do
    code = "def self.attribute; C; end"

    a = Class.new do
      self::C = "A"
    end

    b = Class.new do
      self::C = "B"
    end

    a.send @method, code
    b.send @method, code

    a.attribute.should == "A"
    b.attribute.should == "B"
  end
end
