require File.expand_path('../../../../spec_helper', __FILE__)

ruby_version_is ''...'2.5' do
  require 'mathn'

  describe "Integer.from_prime_division" do
    it "reverses a prime factorization of an integer" do
      Integer.from_prime_division([[2, 1], [3, 2], [7, 1]]).should == 126
    end
  end
end
