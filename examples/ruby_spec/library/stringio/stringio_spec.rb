require File.expand_path('../../../spec_helper', __FILE__)
require "stringio"

describe "StringIO" do
  it "includes the Enumerable module" do
    StringIO.should include(Enumerable)
  end
end

