require File.expand_path('../../../spec_helper', __FILE__)
require 'weakref'

describe "WeakRef#__send__" do
  module WeakRefSpecs
    class << self
      def delegated_method
        :result
      end

      def protected_method
        :result
      end
      protected :protected_method

      def private_method
        :result
      end
      private :private_method
    end
  end

  it "delegates to public methods of the weakly-referenced object" do
    wr = WeakRef.new(WeakRefSpecs)
    wr.delegated_method.should == :result
  end

  it "delegates to protected methods of the weakly-referenced object" do
    wr = WeakRef.new(WeakRefSpecs)
    lambda { wr.protected_method }.should raise_error(NameError)
  end

  it "does not delegate to private methods of the weakly-referenced object" do
    wr = WeakRef.new(WeakRefSpecs)
    lambda { wr.private_method }.should raise_error(NameError)
  end
end
