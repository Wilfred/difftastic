require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/defined', __FILE__)

describe "The defined? keyword for literals" do
  it "returns 'self' for self" do
    ret = defined?(self)
    ret.should == "self"
  end

  it "returns 'nil' for nil" do
    ret = defined?(nil)
    ret.should == "nil"
  end

  it "returns 'true' for true" do
    ret = defined?(true)
    ret.should == "true"
  end

  it "returns 'false' for false" do
    ret = defined?(false)
    ret.should == "false"
  end

  describe "for a literal Array" do

    it "returns 'expression' if each element is defined" do
      ret = defined?([Object, Array])
      ret.should == "expression"
    end

    it "returns nil if one element is not defined" do
      ret = defined?([NonExistantConstant, Array])
      ret.should == nil
    end

    it "returns nil if all elements are not defined" do
      ret = defined?([NonExistantConstant, AnotherNonExistantConstant])
      ret.should == nil
    end

  end
end

describe "The defined? keyword when called with a method name" do
  describe "without a receiver" do
    it "returns 'method' if the method is defined" do
      defined?(puts).should == "method"
    end

    it "returns nil if the method is not defined" do
      defined?(defined_specs_undefined_method).should be_nil
    end

    it "returns 'method' if the method is defined and private" do
      obj = DefinedSpecs::Basic.new
      obj.private_method_defined.should == "method"
    end

    it "returns 'method' if the predicate method is defined and private" do
      obj = DefinedSpecs::Basic.new
      obj.private_predicate_defined.should == "method"
    end
  end

  describe "having a module as receiver" do
    it "returns 'method' if the method is defined" do
      defined?(Kernel.puts).should == "method"
    end

    it "returns nil if the method is private" do
      defined?(Object.print).should be_nil
    end

    it "returns nil if the method is protected" do
      defined?(DefinedSpecs::Basic.new.protected_method).should be_nil
    end

    it "returns nil if the method is not defined" do
      defined?(Kernel.defined_specs_undefined_method).should be_nil
    end

    it "returns nil if the class is not defined" do
      defined?(DefinedSpecsUndefined.puts).should be_nil
    end

    it "returns nil if the subclass is not defined" do
      defined?(DefinedSpecs::Undefined.puts).should be_nil
    end
  end

  describe "having a local variable as receiver" do
    it "returns 'method' if the method is defined" do
      obj = DefinedSpecs::Basic.new
      defined?(obj.a_defined_method).should == "method"
    end

    it "returns nil if the method is not defined" do
      obj = DefinedSpecs::Basic.new
      defined?(obj.an_undefined_method).should be_nil
    end

    it "returns nil if the variable does not exist" do
      defined?(nonexistent_local_variable.some_method).should be_nil
    end

    it "calls #respond_to_missing?" do
      obj = mock("respond_to_missing object")
      obj.should_receive(:respond_to_missing?).and_return(true)
      defined?(obj.something_undefined).should == "method"
    end
  end

  describe "having an instance variable as receiver" do
    it "returns 'method' if the method is defined" do
      @defined_specs_obj = DefinedSpecs::Basic.new
      defined?(@defined_specs_obj.a_defined_method).should == "method"
    end

    it "returns nil if the method is not defined" do
      @defined_specs_obj = DefinedSpecs::Basic.new
      defined?(@defined_specs_obj.an_undefined_method).should be_nil
    end

    it "returns nil if the variable does not exist" do
      defined?(@nonexistent_instance_variable.some_method).should be_nil
    end
  end

  describe "having a global variable as receiver" do
    it "returns 'method' if the method is defined" do
      $defined_specs_obj = DefinedSpecs::Basic.new
      defined?($defined_specs_obj.a_defined_method).should == "method"
    end

    it "returns nil if the method is not defined" do
      $defined_specs_obj = DefinedSpecs::Basic.new
      defined?($defined_specs_obj.an_undefined_method).should be_nil
    end

    it "returns nil if the variable does not exist" do
      defined?($nonexistent_global_variable.some_method).should be_nil
    end
  end

  describe "having a method call as a receiver" do
    it "returns nil if evaluating the receiver raises an exception" do
      defined?(DefinedSpecs.exception_method / 2).should be_nil
      ScratchPad.recorded.should == :defined_specs_exception
    end

    it "returns nil if the method is not defined on the object the receiver returns" do
      defined?(DefinedSpecs.side_effects / 2).should be_nil
      ScratchPad.recorded.should == :defined_specs_side_effects
    end

    it "returns 'method' if the method is defined on the object the receiver returns" do
      defined?(DefinedSpecs.fixnum_method / 2).should == "method"
      ScratchPad.recorded.should == :defined_specs_fixnum_method
    end
  end
end

describe "The defined? keyword for an expression" do
  before :each do
    ScratchPad.clear
  end

  it "returns 'assignment' for assigning a local variable" do
    defined?(x = 2).should == "assignment"
  end

  it "returns 'assignment' for assigning an instance variable" do
    defined?(@defined_specs_x = 2).should == "assignment"
  end

  it "returns 'assignment' for assigning a global variable" do
    defined?($defined_specs_x = 2).should == "assignment"
  end

  it "returns 'assignment' for assigning a class variable" do
    defined?(@@defined_specs_x = 2).should == "assignment"
  end

  it "returns 'assignment' for assigning multiple variables" do
    defined?((a, b = 1, 2)).should == "assignment"
  end

  it "returns 'assignment' for an expression with '%='" do
    defined?(x %= 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '/='" do
    defined?(x /= 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '-='" do
    defined?(x -= 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '+='" do
    defined?(x += 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '*='" do
    defined?(x *= 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '|='" do
    defined?(x |= 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '&='" do
    defined?(x &= 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '^='" do
    defined?(x ^= 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '~='" do
    defined?(x = 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '<<='" do
    defined?(x <<= 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '>>='" do
    defined?(x >>= 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '||='" do
    defined?(x ||= 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '&&='" do
    defined?(x &&= 2).should == "assignment"
  end

  it "returns 'assignment' for an expression with '**='" do
    defined?(x **= 2).should == "assignment"
  end

  it "returns nil for an expression with == and an undefined method" do
    defined?(defined_specs_undefined_method == 2).should be_nil
  end

  it "returns nil for an expression with != and an undefined method" do
    defined?(defined_specs_undefined_method != 2).should be_nil
  end

  it "returns nil for an expression with !~ and an undefined method" do
    defined?(defined_specs_undefined_method !~ 2).should be_nil
  end

  it "returns 'method' for an expression with '=='" do
    x = 42
    defined?(x == 2).should == "method"
  end

  it "returns 'method' for an expression with '!='" do
    x = 42
    defined?(x != 2).should == "method"
  end

  it "returns 'method' for an expression with '!~'" do
    x = 42
    defined?(x !~ 2).should == "method"
  end

  describe "with logical connectives" do
    it "returns nil for an expression with '!' and an undefined method" do
      defined?(!defined_specs_undefined_method).should be_nil
    end

    it "returns nil for an expression with '!' and an unset class variable" do
      -> {
        @result = defined?(!@@defined_specs_undefined_class_variable)
      }.should complain(/class variable access from toplevel/)
      @result.should be_nil
    end

    it "returns nil for an expression with 'not' and an undefined method" do
      defined?(not defined_specs_undefined_method).should be_nil
    end

    it "returns nil for an expression with 'not' and an unset class variable" do
      -> {
        @result = defined?(not @@defined_specs_undefined_class_variable)
      }.should complain(/class variable access from toplevel/)
      @result.should be_nil
    end

    it "does not propagate an exception raised by a method in a 'not' expression" do
      defined?(not DefinedSpecs.exception_method).should be_nil
      ScratchPad.recorded.should == :defined_specs_exception
    end

    it "returns 'expression' for an expression with '&&/and' and an unset global variable" do
      defined?($defined_specs_undefined_global_variable && true).should == "expression"
      defined?(true && $defined_specs_undefined_global_variable).should == "expression"
      defined?($defined_specs_undefined_global_variable and true).should == "expression"
    end

    it "returns 'expression' for an expression with '&&/and' and an unset instance variable" do
      defined?(@defined_specs_undefined_instance_variable && true).should == "expression"
      defined?(true && @defined_specs_undefined_instance_variable).should == "expression"
      defined?(@defined_specs_undefined_instance_variable and true).should == "expression"
    end

    it "returns 'expression' for an expression '&&/and' regardless of its truth value" do
      defined?(true && false).should == "expression"
      defined?(true and false).should == "expression"
    end

    it "returns 'expression' for an expression with '||/or' and an unset global variable" do
      defined?($defined_specs_undefined_global_variable || true).should == "expression"
      defined?(true || $defined_specs_undefined_global_variable).should == "expression"
      defined?($defined_specs_undefined_global_variable or true).should == "expression"
    end

    it "returns 'expression' for an expression with '||/or' and an unset instance variable" do
      defined?(@defined_specs_undefined_instance_variable || true).should == "expression"
      defined?(true || @defined_specs_undefined_instance_variable).should == "expression"
      defined?(@defined_specs_undefined_instance_variable or true).should == "expression"
    end

    it "returns 'expression' for an expression '||/or' regardless of its truth value" do
      defined?(true || false).should == "expression"
      defined?(true or false).should == "expression"
    end

    it "returns nil for an expression with '!' and an unset global variable" do
      defined?(!$defined_specs_undefined_global_variable).should be_nil
    end

    it "returns nil for an expression with '!' and an unset instance variable" do
      defined?(!@defined_specs_undefined_instance_variable).should be_nil
    end

    it "returns 'method' for a 'not' expression with a method" do
      defined?(not DefinedSpecs.side_effects).should == "method"
    end

    it "calls a method in a 'not' expression and returns 'method'" do
      defined?(not DefinedSpecs.side_effects).should == "method"
      ScratchPad.recorded.should == :defined_specs_side_effects
    end

    it "returns nil for an expression with 'not' and an unset global variable" do
      defined?(not $defined_specs_undefined_global_variable).should be_nil
    end

    it "returns nil for an expression with 'not' and an unset instance variable" do
      defined?(not @defined_specs_undefined_instance_variable).should be_nil
    end

    it "returns 'expression' for an expression with '&&/and' and an undefined method" do
      defined?(defined_specs_undefined_method && true).should == "expression"
      defined?(defined_specs_undefined_method and true).should == "expression"
    end

    it "returns 'expression' for an expression with '&&/and' and an unset class variable" do
      defined?(@@defined_specs_undefined_class_variable && true).should == "expression"
      defined?(@@defined_specs_undefined_class_variable and true).should == "expression"
    end

    it "does not call a method in an '&&' expression and returns 'expression'" do
      defined?(DefinedSpecs.side_effects && true).should == "expression"
      ScratchPad.recorded.should be_nil
    end

    it "does not call a method in an 'and' expression and returns 'expression'" do
      defined?(DefinedSpecs.side_effects and true).should == "expression"
      ScratchPad.recorded.should be_nil
    end

    it "returns 'expression' for an expression with '||/or' and an undefined method" do
      defined?(defined_specs_undefined_method || true).should == "expression"
      defined?(defined_specs_undefined_method or true).should == "expression"
    end

    it "returns 'expression' for an expression with '||/or' and an unset class variable" do
      defined?(@@defined_specs_undefined_class_variable || true).should == "expression"
      defined?(@@defined_specs_undefined_class_variable or true).should == "expression"
    end

    it "does not call a method in an '||' expression and returns 'expression'" do
      defined?(DefinedSpecs.side_effects || true).should == "expression"
      ScratchPad.recorded.should be_nil
    end

    it "does not call a method in an 'or' expression and returns 'expression'" do
      defined?(DefinedSpecs.side_effects or true).should == "expression"
      ScratchPad.recorded.should be_nil
    end
  end

  it "returns 'expression' when passed a String" do
    defined?("garble gooble gable").should == "expression"
  end

  describe "with a dynamic String" do
    it "returns 'expression' when the String contains a literal" do
      defined?("garble #{42}").should == "expression"
    end

    it "returns 'expression' when the String contains a call to a defined method" do
      defined?("garble #{DefinedSpecs.side_effects}").should == "expression"
    end

    it "returns 'expression' when the String contains a call to an undefined method" do
      defined?("garble #{DefinedSpecs.undefined_method}").should == "expression"
    end

    it "does not call the method in the String" do
      defined?("garble #{DefinedSpecs.dynamic_string}").should == "expression"
      ScratchPad.recorded.should be_nil
    end
  end

  describe "with a dynamic Regexp" do
    it "returns 'expression' when the Regexp contains a literal" do
      defined?(/garble #{42}/).should == "expression"
    end

    it "returns 'expression' when the Regexp contains a call to a defined method" do
      defined?(/garble #{DefinedSpecs.side_effects}/).should == "expression"
    end

    it "returns 'expression' when the Regexp contains a call to an undefined method" do
      defined?(/garble #{DefinedSpecs.undefined_method}/).should == "expression"
    end

    it "does not call the method in the Regexp" do
      defined?(/garble #{DefinedSpecs.dynamic_string}/).should == "expression"
      ScratchPad.recorded.should be_nil
    end
  end

  it "returns 'expression' when passed a Fixnum literal" do
    defined?(42).should == "expression"
  end

  it "returns 'expression' when passed a Bignum literal" do
    defined?(0xdead_beef_deed_feed).should == "expression"
  end

  it "returns 'expression' when passed a Float literal" do
    defined?(1.5).should == "expression"
  end

  it "returns 'expression' when passed a Range literal" do
    defined?(0..2).should == "expression"
  end

  it "returns 'expression' when passed a Regexp literal" do
    defined?(/undefined/).should == "expression"
  end

  it "returns 'expression' when passed an Array literal" do
    defined?([1, 2]).should == "expression"
  end

  it "returns 'expression' when passed a Hash literal" do
    defined?({a: :b}).should == "expression"
  end

  it "returns 'expression' when passed a Symbol literal" do
    defined?(:defined_specs).should == "expression"
  end
end

describe "The defined? keyword for variables" do
  it "returns 'local-variable' when called with the name of a local variable" do
    DefinedSpecs::Basic.new.local_variable_defined.should == "local-variable"
  end

  it "returns 'local-variable' when called with the name of a local variable assigned to nil" do
    DefinedSpecs::Basic.new.local_variable_defined_nil.should == "local-variable"
  end

  it "returns nil for an instance variable that has not been read" do
    DefinedSpecs::Basic.new.instance_variable_undefined.should be_nil
  end

  it "returns nil for an instance variable that has been read but not assigned to" do
    DefinedSpecs::Basic.new.instance_variable_read.should be_nil
  end

  it "returns 'instance-variable' for an instance variable that has been assigned" do
    DefinedSpecs::Basic.new.instance_variable_defined.should == "instance-variable"
  end

  it "returns 'instance-variable' for an instance variable that has been assigned to nil" do
    DefinedSpecs::Basic.new.instance_variable_defined_nil.should == "instance-variable"
  end

  it "returns nil for a global variable that has not been read" do
    DefinedSpecs::Basic.new.global_variable_undefined.should be_nil
  end

  it "returns nil for a global variable that has been read but not assigned to" do
    DefinedSpecs::Basic.new.global_variable_read.should be_nil
  end

  # MRI appears to special case defined? for $! and $~ in that it returns
  # 'global-variable' even when they are not set (or they are always "set"
  # but the value may be nil). In other words, 'defined?($~)' will return
  # 'global-variable' even if no match has been done.

  it "returns 'global-variable' for $!" do
    defined?($!).should == "global-variable"
  end

  it "returns 'global-variable for $~" do
    defined?($~).should == "global-variable"
  end

  describe "when a String does not match a Regexp" do
    before :each do
      "mis-matched" =~ /z(z)z/
    end

    it "returns 'global-variable' for $~" do
      defined?($~).should == "global-variable"
    end

    it "returns nil for $&" do
      defined?($&).should be_nil
    end

    it "returns nil for $`" do
      defined?($`).should be_nil
    end

    it "returns nil for $'" do
      defined?($').should be_nil
    end

    it "returns nil for $+" do
      defined?($+).should be_nil
    end

    it "returns nil for $1-$9" do
      defined?($1).should be_nil
      defined?($2).should be_nil
      defined?($3).should be_nil
      defined?($4).should be_nil
      defined?($5).should be_nil
      defined?($6).should be_nil
      defined?($7).should be_nil
      defined?($8).should be_nil
      defined?($9).should be_nil
    end
  end

  describe "when a String matches a Regexp" do
    before :each do
      "mis-matched" =~ /s(-)m(.)/
    end

    it "returns 'global-variable' for $~" do
      defined?($~).should == "global-variable"
    end

    it "returns 'global-variable' for $&" do
      defined?($&).should == "global-variable"
    end

    it "returns 'global-variable' for $`" do
      defined?($`).should == "global-variable"
    end

    it "returns 'global-variable' for $'" do
      defined?($').should == "global-variable"
    end

    it "returns 'global-variable' for $+" do
      defined?($+).should == "global-variable"
    end

    it "returns 'global-variable' for the capture references" do
      defined?($1).should == "global-variable"
      defined?($2).should == "global-variable"
    end

    it "returns nil for non-captures" do
      defined?($3).should be_nil
      defined?($4).should be_nil
      defined?($5).should be_nil
      defined?($6).should be_nil
      defined?($7).should be_nil
      defined?($8).should be_nil
      defined?($9).should be_nil
    end
  end

  describe "when a Regexp does not match a String" do
    before :each do
      /z(z)z/ =~ "mis-matched"
    end

    it "returns 'global-variable' for $~" do
      defined?($~).should == "global-variable"
    end

    it "returns nil for $&" do
      defined?($&).should be_nil
    end

    it "returns nil for $`" do
      defined?($`).should be_nil
    end

    it "returns nil for $'" do
      defined?($').should be_nil
    end

    it "returns nil for $+" do
      defined?($+).should be_nil
    end

    it "returns nil for $1-$9" do
      defined?($1).should be_nil
      defined?($2).should be_nil
      defined?($3).should be_nil
      defined?($4).should be_nil
      defined?($5).should be_nil
      defined?($6).should be_nil
      defined?($7).should be_nil
      defined?($8).should be_nil
      defined?($9).should be_nil
    end
  end

  describe "when a Regexp matches a String" do
    before :each do
      /s(-)m(.)/ =~ "mis-matched"
    end

    it "returns 'global-variable' for $~" do
      defined?($~).should == "global-variable"
    end

    it "returns 'global-variable' for $&" do
      defined?($&).should == "global-variable"
    end

    it "returns 'global-variable' for $`" do
      defined?($`).should == "global-variable"
    end

    it "returns 'global-variable' for $'" do
      defined?($').should == "global-variable"
    end

    it "returns 'global-variable' for $+" do
      defined?($+).should == "global-variable"
    end

    it "returns 'global-variable' for the capture references" do
      defined?($1).should == "global-variable"
      defined?($2).should == "global-variable"
    end

    it "returns nil for non-captures" do
      defined?($3).should be_nil
      defined?($4).should be_nil
      defined?($5).should be_nil
      defined?($6).should be_nil
      defined?($7).should be_nil
      defined?($8).should be_nil
      defined?($9).should be_nil
    end
  end
  it "returns 'global-variable' for a global variable that has been assigned" do
    DefinedSpecs::Basic.new.global_variable_defined.should == "global-variable"
  end

  it "returns nil for a class variable that has not been read" do
    DefinedSpecs::Basic.new.class_variable_undefined.should be_nil
  end

  # There is no spec for a class variable that is read before being assigned
  # to because setting up the code for this raises a NameError before you
  # get to the defined? call so it really has nothing to do with 'defined?'.

  it "returns 'class variable' when called with the name of a class variable" do
    DefinedSpecs::Basic.new.class_variable_defined.should == "class variable"
  end

  it "returns 'local-variable' when called with the name of a block local" do
    block = Proc.new { |xxx| defined?(xxx) }
    block.call(1).should == "local-variable"
  end
end

describe "The defined? keyword for a simple constant" do
  it "returns 'constant' when the constant is defined" do
    defined?(DefinedSpecs).should == "constant"
  end

  it "returns nil when the constant is not defined" do
    defined?(DefinedSpecsUndefined).should be_nil
  end

  it "does not call Object.const_missing if the constant is not defined" do
    Object.should_not_receive(:const_missing)
    defined?(DefinedSpecsUndefined).should be_nil
  end

  it "returns 'constant' for an included module" do
    DefinedSpecs::Child.module_defined.should == "constant"
  end

  it "returns 'constant' for a constant defined in an included module" do
    DefinedSpecs::Child.module_constant_defined.should == "constant"
  end
end

describe "The defined? keyword for a top-level constant" do
  it "returns 'constant' when passed the name of a top-level constant" do
    defined?(::DefinedSpecs).should == "constant"
  end

  it "retuns nil if the constant is not defined" do
    defined?(::DefinedSpecsUndefined).should be_nil
  end

  it "does not call Object.const_missing if the constant is not defined" do
    Object.should_not_receive(:const_missing)
    defined?(::DefinedSpecsUndefined).should be_nil
  end
end

describe "The defined? keyword for a scoped constant" do
  it "returns 'constant' when the scoped constant is defined" do
    defined?(DefinedSpecs::Basic).should == "constant"
  end

  it "returns nil when the scoped constant is not defined" do
    defined?(DefinedSpecs::Undefined).should be_nil
  end

  it "does not call .const_missing if the constant is not defined" do
    DefinedSpecs.should_not_receive(:const_missing)
    defined?(DefinedSpecs::UnknownChild).should be_nil
  end

  it "returns nil when an undefined constant is scoped to a defined constant" do
    defined?(DefinedSpecs::Child::B).should be_nil
  end

  it "returns nil when a constant is scoped to an undefined constant" do
    Object.should_not_receive(:const_missing)
    defined?(Undefined::Object).should be_nil
  end

  it "returns nil when the undefined constant is scoped to an undefined constant" do
    defined?(DefinedSpecs::Undefined::Undefined).should be_nil
  end

  it "returns nil when a constant is defined on top-level but not on the module" do
    defined?(DefinedSpecs::String).should be_nil
  end

  it "returns 'constant' when a constant is defined on top-level but not on the class" do
    defined?(DefinedSpecs::Basic::String).should == "constant"
  end

  it "returns 'constant' if the scoped-scoped constant is defined" do
    defined?(DefinedSpecs::Child::A).should == "constant"
  end
end

describe "The defined? keyword for a top-level scoped constant" do
  it "returns 'constant' when the scoped constant is defined" do
    defined?(::DefinedSpecs::Basic).should == "constant"
  end

  it "returns nil when the scoped constant is not defined" do
    defined?(::DefinedSpecs::Undefined).should be_nil
  end

  it "returns nil when an undefined constant is scoped to a defined constant" do
    defined?(::DefinedSpecs::Child::B).should be_nil
  end

  it "returns nil when the undefined constant is scoped to an undefined constant" do
    defined?(::DefinedSpecs::Undefined::Undefined).should be_nil
  end

  it "returns 'constant' if the scoped-scoped constant is defined" do
    defined?(::DefinedSpecs::Child::A).should == "constant"
  end
end

describe "The defined? keyword for a self-send method call scoped constant" do
  it "returns nil if the constant is not defined in the scope of the method's value" do
    defined?(defined_specs_method::Undefined).should be_nil
  end

  it "returns 'constant' if the constant is defined in the scope of the method's value" do
    defined?(defined_specs_method::Basic).should == "constant"
  end

  it "returns nil if the last constant is not defined in the scope chain" do
    defined?(defined_specs_method::Basic::Undefined).should be_nil
  end

  it "returns nil if the middle constant is not defined in the scope chain" do
    defined?(defined_specs_method::Undefined::Undefined).should be_nil
  end

  it "returns 'constant' if all the constants in the scope chain are defined" do
    defined?(defined_specs_method::Basic::A).should == "constant"
  end
end

describe "The defined? keyword for a receiver method call scoped constant" do
  it "returns nil if the constant is not defined in the scope of the method's value" do
    defined?(defined_specs_receiver.defined_method::Undefined).should be_nil
  end

  it "returns 'constant' if the constant is defined in the scope of the method's value" do
    defined?(defined_specs_receiver.defined_method::Basic).should == "constant"
  end

  it "returns nil if the last constant is not defined in the scope chain" do
    defined?(defined_specs_receiver.defined_method::Basic::Undefined).should be_nil
  end

  it "returns nil if the middle constant is not defined in the scope chain" do
    defined?(defined_specs_receiver.defined_method::Undefined::Undefined).should be_nil
  end

  it "returns 'constant' if all the constants in the scope chain are defined" do
    defined?(defined_specs_receiver.defined_method::Basic::A).should == "constant"
  end
end

describe "The defined? keyword for a module method call scoped constant" do
  it "returns nil if the constant is not defined in the scope of the method's value" do
    defined?(DefinedSpecs.defined_method::Undefined).should be_nil
  end

  it "returns 'constant' if the constant scoped by the method's value is defined" do
    defined?(DefinedSpecs.defined_method::Basic).should == "constant"
  end

  it "returns nil if the last constant in the scope chain is not defined" do
    defined?(DefinedSpecs.defined_method::Basic::Undefined).should be_nil
  end

  it "returns nil if the middle constant in the scope chain is not defined" do
    defined?(DefinedSpecs.defined_method::Undefined::Undefined).should be_nil
  end

  it "returns 'constant' if all the constants in the scope chain are defined" do
    defined?(DefinedSpecs.defined_method::Basic::A).should == "constant"
  end

  it "returns nil if the outer scope constant in the receiver is not defined" do
    defined?(Undefined::DefinedSpecs.defined_method::Basic).should be_nil
  end

  it "returns nil if the scoped constant in the receiver is not defined" do
    defined?(DefinedSpecs::Undefined.defined_method::Basic).should be_nil
  end

  it "returns 'constant' if all the constants in the receiver are defined" do
    defined?(Object::DefinedSpecs.defined_method::Basic).should == "constant"
  end

  it "returns 'constant' if all the constants in the receiver and scope chain are defined" do
    defined?(Object::DefinedSpecs.defined_method::Basic::A).should == "constant"
  end
end

describe "The defined? keyword for a variable scoped constant" do
  after :all do
    if Object.class_variable_defined? :@@defined_specs_obj
      Object.__send__(:remove_class_variable, :@@defined_specs_obj)
    end
  end

  it "returns nil if the instance scoped constant is not defined" do
    @defined_specs_obj = DefinedSpecs::Basic
    defined?(@defined_specs_obj::Undefined).should be_nil
  end

  it "returns 'constant' if the constant is defined in the scope of the instance variable" do
    @defined_specs_obj = DefinedSpecs::Basic
    defined?(@defined_specs_obj::A).should == "constant"
  end

  it "returns nil if the global scoped constant is not defined" do
    $defined_specs_obj = DefinedSpecs::Basic
    defined?($defined_specs_obj::Undefined).should be_nil
  end

  it "returns 'constant' if the constant is defined in the scope of the global variable" do
    $defined_specs_obj = DefinedSpecs::Basic
    defined?($defined_specs_obj::A).should == "constant"
  end

  it "returns nil if the class scoped constant is not defined" do
    -> {
      @@defined_specs_obj = DefinedSpecs::Basic
      defined?(@@defined_specs_obj::Undefined).should be_nil
    }.should complain(/class variable access from toplevel/)
  end

  it "returns 'constant' if the constant is defined in the scope of the class variable" do
    -> {
      @@defined_specs_obj = DefinedSpecs::Basic
      defined?(@@defined_specs_obj::A).should == "constant"
    }.should complain(/class variable access from toplevel/)
  end

  it "returns nil if the local scoped constant is not defined" do
    defined_specs_obj = DefinedSpecs::Basic
    defined?(defined_specs_obj::Undefined).should be_nil
  end

  it "returns 'constant' if the constant is defined in the scope of the local variable" do
    defined_specs_obj = DefinedSpecs::Basic
    defined?(defined_specs_obj::A).should == "constant"
  end
end

describe "The defined? keyword for a self:: scoped constant" do
  it "returns 'constant' for a constant explicitly scoped to self:: when set" do
    defined?(DefinedSpecs::SelfScoped).should == "constant"
  end

  it "returns 'constant' for a constant explicitly scoped to self:: in subclass's metaclass" do
    DefinedSpecs::Child.parent_constant_defined.should == "constant"
  end
end

describe "The defined? keyword for yield" do
  it "returns nil if no block is passed to a method not taking a block parameter" do
    DefinedSpecs::Basic.new.no_yield_block.should be_nil
  end

  it "returns nil if no block is passed to a method taking a block parameter" do
    DefinedSpecs::Basic.new.no_yield_block_parameter.should be_nil
  end

  it "returns 'yield' if a block is passed to a method not taking a block parameter" do
    DefinedSpecs::Basic.new.yield_block.should == "yield"
  end

  it "returns 'yield' if a block is passed to a method taking a block parameter" do
    DefinedSpecs::Basic.new.yield_block_parameter.should == "yield"
  end
end

describe "The defined? keyword for super" do
  it "returns nil when a superclass undef's the method" do
    DefinedSpecs::ClassWithoutMethod.new.test.should be_nil
  end

  describe "for a method taking no arguments" do
    it "returns nil when no superclass method exists" do
      DefinedSpecs::Super.new.no_super_method_no_args.should be_nil
    end

    it "returns nil from a block when no superclass method exists" do
      DefinedSpecs::Super.new.no_super_method_block_no_args.should be_nil
    end

    it "returns nil from a #define_method when no superclass method exists" do
      DefinedSpecs::Super.new.no_super_define_method_no_args.should be_nil
    end

    it "returns nil from a block in a #define_method when no superclass method exists" do
      DefinedSpecs::Super.new.no_super_define_method_block_no_args.should be_nil
    end

    it "returns 'super' when a superclass method exists" do
      DefinedSpecs::Super.new.method_no_args.should == "super"
    end

    it "returns 'super' from a block when a superclass method exists" do
      DefinedSpecs::Super.new.method_block_no_args.should == "super"
    end

    it "returns 'super' from a #define_method when a superclass method exists" do
      DefinedSpecs::Super.new.define_method_no_args.should == "super"
    end

    it "returns 'super' from a block in a #define_method when a superclass method exists" do
      DefinedSpecs::Super.new.define_method_block_no_args.should == "super"
    end

    it "returns 'super' when the method exists in a supermodule" do
      DefinedSpecs::SuperWithIntermediateModules.new.method_no_args.should == "super"
    end
  end

  describe "for a method taking arguments" do
    it "returns nil when no superclass method exists" do
      DefinedSpecs::Super.new.no_super_method_args.should be_nil
    end

    it "returns nil from a block when no superclass method exists" do
      DefinedSpecs::Super.new.no_super_method_block_args.should be_nil
    end

    it "returns nil from a #define_method when no superclass method exists" do
      DefinedSpecs::Super.new.no_super_define_method_args.should be_nil
    end

    it "returns nil from a block in a #define_method when no superclass method exists" do
      DefinedSpecs::Super.new.no_super_define_method_block_args.should be_nil
    end

    it "returns 'super' when a superclass method exists" do
      DefinedSpecs::Super.new.method_args.should == "super"
    end

    it "returns 'super' from a block when a superclass method exists" do
      DefinedSpecs::Super.new.method_block_args.should == "super"
    end

    it "returns 'super' from a #define_method when a superclass method exists" do
      DefinedSpecs::Super.new.define_method_args.should == "super"
    end

    it "returns 'super' from a block in a #define_method when a superclass method exists" do
      DefinedSpecs::Super.new.define_method_block_args.should == "super"
    end
  end

  describe "within an included module's method" do
    it "returns 'super' when a superclass method exists in the including hierarchy" do
      DefinedSpecs::Child.new.defined_super.should == "super"
    end
  end
end


describe "The defined? keyword for instance variables" do
  it "returns 'instance-variable' if assigned" do
    @assigned_ivar = "some value"
    defined?(@assigned_ivar).should == "instance-variable"
  end

  it "returns nil if not assigned" do
    defined?(@unassigned_ivar).should be_nil
  end
end

describe "The defined? keyword for pseudo-variables" do
  it "returns 'expression' for __FILE__" do
    defined?(__FILE__).should == "expression"
  end

  it "returns 'expression' for __LINE__" do
    defined?(__LINE__).should == "expression"
  end

  it "returns 'expression' for __ENCODING__" do
    defined?(__ENCODING__).should == "expression"
  end
end

describe "The defined? keyword for conditional expressions" do
  it "returns 'expression' for an 'if' conditional" do
    defined?(if x then 'x' else '' end).should == "expression"
  end

  it "returns 'expression' for an 'unless' conditional" do
    defined?(unless x then '' else 'x' end).should == "expression"
  end

  it "returns 'expression' for ternary expressions" do
    defined?(x ? 'x' : '').should == "expression"
  end
end

describe "The defined? keyword for case expressions" do
  it "returns 'expression'" do
    defined?(case x; when 'x'; 'y' end).should == "expression"
  end
end

describe "The defined? keyword for loop expressions" do
  it "returns 'expression' for a 'for' expression" do
    defined?(for n in 1..3 do true end).should == "expression"
  end

  it "returns 'expression' for a 'while' expression" do
    defined?(while x do y end).should == "expression"
  end

  it "returns 'expression' for an 'until' expression" do
    defined?(until x do y end).should == "expression"
  end

  it "returns 'expression' for a 'break' expression" do
    defined?(break).should == "expression"
  end

  it "returns 'expression' for a 'next' expression" do
    defined?(next).should == "expression"
  end

  it "returns 'expression' for a 'redo' expression" do
    defined?(redo).should == "expression"
  end

  it "returns 'expression' for a 'retry' expression" do
    defined?(retry).should == "expression"
  end
end

describe "The defined? keyword for return expressions" do
  it "returns 'expression'" do
    defined?(return).should == "expression"
  end
end

describe "The defined? keyword for exception expressions" do
  it "returns 'expression'" do
    defined?(begin 1 end).should == "expression"
  end
end
