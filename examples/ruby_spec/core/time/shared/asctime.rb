describe :time_asctime, shared: true do
  it "returns a canonical string representation of time" do
    t = Time.now
    t.send(@method).should == t.strftime("%a %b %e %H:%M:%S %Y")
  end
end
