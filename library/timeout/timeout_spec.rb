require File.expand_path('../../../spec_helper', __FILE__)
require 'timeout'

describe "Timeout.timeout" do
  it "raises Timeout::Error when it times out with no specified error type" do
    lambda {
      Timeout.timeout(1) do
        sleep 3
      end
    }.should raise_error(Timeout::Error)
  end

  it "raises specified error type when it times out" do
    lambda do
      Timeout.timeout(1, StandardError) do
        sleep 3
      end
    end.should raise_error(StandardError)
  end

  it "does not wait too long" do
    before_time = Time.now
    lambda do
      Timeout.timeout(1, StandardError) do
        sleep 3
      end
    end.should raise_error(StandardError)

    (Time.now - before_time).should be_close(1.0, 0.5)
  end

  it "returns back the last value in the block" do
    Timeout.timeout(1) do
      42
    end.should == 42
  end
end
