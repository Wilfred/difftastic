describe :time_gmtime, shared: true do
  it "converts self to UTC, modifying the receiver" do
    # Testing with America/Regina here because it doesn't have DST.
    with_timezone("CST", -6) do
      t = Time.local(2007, 1, 9, 6, 0, 0)
      t.send(@method)
      t.should == Time.gm(2007, 1, 9, 12, 0, 0)
    end
  end

  it "returns self" do
    with_timezone("CST", -6) do
      t = Time.local(2007, 1, 9, 12, 0, 0)
      t.send(@method).should equal(t)
    end
  end

  describe "on a frozen time" do
    it "does not raise an error if already in UTC" do
      time = Time.gm(2007, 1, 9, 12, 0, 0)
      time.freeze
      time.send(@method).should equal(time)
    end

    it "raises a RuntimeError if the time is not UTC" do
      with_timezone("CST", -6) do
        time = Time.now
        time.freeze
        lambda { time.send(@method) }.should raise_error(RuntimeError)
      end
    end
  end
end
