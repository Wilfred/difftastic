require File.expand_path('../../../spec_helper', __FILE__)
require 'pathname'

describe "Pathname#realpath" do

  it "returns a Pathname" do
    Pathname.pwd.realpath.should be_an_instance_of(Pathname)
  end

end
