require File.expand_path('../../../spec_helper', __FILE__)

describe "Proc#to_proc" do
  it "returns self" do
    [Proc.new {}, lambda {}, proc {}].each { |p|
      p.to_proc.should equal(p)
    }
  end
end
