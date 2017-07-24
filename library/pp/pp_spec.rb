require File.expand_path('../../../spec_helper', __FILE__)
require 'pp'

describe "PP.pp" do
  it 'works with default arguments' do
    array = [1, 2, 3]

    lambda {
      PP.pp array
    }.should output "[1, 2, 3]\n"
  end

  it 'allows specifying out explicitly' do
    array = [1, 2, 3]
    other_out = IOStub.new

    lambda {
      PP.pp array, other_out
    }.should output "" # no output on stdout

    other_out.to_s.should == "[1, 2, 3]\n"
  end

  it "needs to be reviewed for spec completeness"
end
