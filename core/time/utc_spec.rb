require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/gm', __FILE__)
require File.expand_path('../shared/gmtime', __FILE__)
require File.expand_path('../shared/time_params', __FILE__)

describe "Time#utc?" do
  it "returns true if time represents a time in UTC (GMT)" do
    Time.now.utc?.should == false
  end
end

describe "Time.utc" do
  it_behaves_like(:time_gm, :utc)
  it_behaves_like(:time_params, :utc)
  it_behaves_like(:time_params_10_arg, :utc)
  it_behaves_like(:time_params_microseconds, :utc)
end

describe "Time#utc" do
  it_behaves_like(:time_gmtime, :utc)
end
