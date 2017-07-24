require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#method_undefined" do
  it "is a private instance method" do
    Module.should have_private_instance_method(:method_undefined)
  end

  it "returns nil in the default implementation" do
    Module.new do
      method_undefined(:test).should == nil
    end
  end

  it "is called when a method is undefined from self" do
    begin
      Module.new do
        def self.method_undefined(name)
          $method_undefined = name
        end

        def test
          "test"
        end
        undef_method :test
      end

      $method_undefined.should == :test
    ensure
      $method_undefined = nil
    end
  end
end
