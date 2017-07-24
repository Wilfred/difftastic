require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/day', __FILE__)

describe "Time#mday" do
  it_behaves_like(:time_day, :mday)
end
