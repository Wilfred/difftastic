require File.expand_path('../../../../spec_helper', __FILE__)

ruby_version_is ''...'2.5' do
  require 'mathn'

  describe "Integer#prime_division" do
    it "performs a prime factorization of a positive integer" do
      100.prime_division.should == [[2, 2], [5, 2]]
    end

    # Proper handling of negative integers has been added to MRI trunk
    # in revision 24091. Prior to that, all versions of MRI returned nonsense.
    it "performs a prime factorization of a negative integer" do
      -26.prime_division.should == [[-1, 1], [2, 1], [13, 1]]
    end

    it "raises a ZeroDivisionError when is called on zero" do
      lambda { 0.prime_division }.should raise_error(ZeroDivisionError)
    end
  end
end
