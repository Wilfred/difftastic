require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Numeric#singleton_method_added" do
  before :all do
    class ::NumericSpecs::Subclass
      # We want restore default Numeric behaviour for this particular test
      remove_method :singleton_method_added
    end
  end

  after :all do
    class ::NumericSpecs::Subclass
      # Allow mocking methods again
      def singleton_method_added(val)
      end
    end
  end

  it "raises a TypeError when trying to define a singleton method on a Numeric" do
    lambda do
      a = NumericSpecs::Subclass.new
      def a.test; end
    end.should raise_error(TypeError)

    lambda do
      a = 1
      def a.test; end
    end.should raise_error(TypeError)

    lambda do
      a = 1.5
      def a.test; end
    end.should raise_error(TypeError)

    lambda do
      a = bignum_value
      def a.test; end
    end.should raise_error(TypeError)
  end
end
