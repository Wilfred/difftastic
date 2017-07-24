require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#succ" do
  it "returns a new time one second later than time" do
    -> {
      @result = Time.at(100).succ
    }.should complain(/Time#succ is obsolete/)
    @result.should == Time.at(101)
  end

  it "returns a new instance" do
    t1 = Time.at(100)
    t2 = nil
    -> {
      t2 = t1.succ
    }.should complain(/Time#succ is obsolete/)
    t1.object_id.should_not == t2.object_id
  end
end
