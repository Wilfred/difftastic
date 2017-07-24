require File.expand_path('../../../spec_helper', __FILE__)

describe "NilClass" do
  it ".allocate raises a TypeError" do
    lambda do
      NilClass.allocate
    end.should raise_error(TypeError)
  end

  it ".new is undefined" do
    lambda do
      NilClass.new
    end.should raise_error(NoMethodError)
  end
end
