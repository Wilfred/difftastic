require File.expand_path('../../../spec_helper', __FILE__)
require 'csv'

describe "CSV.generate_line" do

  it "generates an empty string" do
    result = CSV.generate_line([])
    result.should == "\n"
  end

  it "generates the string 'foo,bar'" do
    result = CSV.generate_line(["foo", "bar"])
    result.should == "foo,bar\n"
  end

  it "generates the string 'foo;bar'" do
    result = CSV.generate_line(["foo", "bar"], col_sep: ?;)
    result.should == "foo;bar\n"
  end

  it "generates the string 'foo,,bar'" do
    result = CSV.generate_line(["foo", nil, "bar"])
    result.should == "foo,,bar\n"
  end

  it "generates the string 'foo;;bar'" do
    result = CSV.generate_line(["foo", nil, "bar"], col_sep: ?;)
    result.should == "foo;;bar\n"
  end
end
