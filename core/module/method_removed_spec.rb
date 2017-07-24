require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#method_removed" do
  it "is a private instance method" do
    Module.should have_private_instance_method(:method_removed)
  end

  it "returns nil in the default implementation" do
    Module.new do
      method_removed(:test).should == nil
    end
  end

  it "is called when a method is removed from self" do
    begin
      Module.new do
        def self.method_removed(name)
          $method_removed = name
        end

        def test
          "test"
        end
        remove_method :test
      end

      $method_removed.should == :test
    ensure
      $method_removed = nil
    end
  end
end
