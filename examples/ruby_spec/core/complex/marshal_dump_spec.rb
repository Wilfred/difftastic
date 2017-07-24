require File.expand_path('../../../spec_helper', __FILE__)

describe "Complex#marshal_dump" do
  it "is a private method" do
    Complex.should have_private_instance_method(:marshal_dump, false)
  end

  it "dumps real and imaginary parts" do
    Complex(1, 2).send(:marshal_dump).should == [1, 2]
  end
end
