require File.expand_path('../../../spec_helper', __FILE__)

describe "NameError#name" do
  it "returns a method name as a symbol" do
    -> {
      doesnt_exist
    }.should raise_error(NameError) {|e| e.name.should == :doesnt_exist }
  end

  it "returns a constant name as a symbol" do
    -> {
      DoesntExist
    }.should raise_error(NameError) {|e| e.name.should == :DoesntExist }
  end

  it "returns a constant name without namespace as a symbol" do
    -> {
      Object::DoesntExist
    }.should raise_error(NameError) {|e| e.name.should == :DoesntExist }
  end

  it "returns a class variable name as a symbol" do
    -> {
      -> {
        @@doesnt_exist
      }.should complain(/class variable access from toplevel/)
    }.should raise_error(NameError) { |e| e.name.should == :@@doesnt_exist }
  end

  ruby_version_is ""..."2.3" do
    it "always returns a symbol when a NameError is raised from #instance_variable_get" do
      -> {
        Object.new.instance_variable_get("invalid_ivar_name")
      }.should raise_error(NameError) { |e| e.name.should == :invalid_ivar_name }
    end

    it "always returns a symbol when a NameError is raised from #class_variable_get" do
      -> {
        Object.class_variable_get("invalid_cvar_name")
      }.should raise_error(NameError) { |e| e.name.should == :invalid_cvar_name }
    end
  end

  ruby_version_is "2.3" do
    it "returns the first argument passed to the method when a NameError is raised from #instance_variable_get" do
      invalid_ivar_name = "invalid_ivar_name"

      -> {
        Object.new.instance_variable_get(invalid_ivar_name)
      }.should raise_error(NameError) {|e| e.name.should equal(invalid_ivar_name) }
    end

    it "returns the first argument passed to the method when a NameError is raised from #class_variable_get" do
      invalid_cvar_name = "invalid_cvar_name"

      -> {
        Object.class_variable_get(invalid_cvar_name)
      }.should raise_error(NameError) {|e| e.name.should equal(invalid_cvar_name) }
    end
  end
end
