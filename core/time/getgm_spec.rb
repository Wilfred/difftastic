require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/getgm', __FILE__)

describe "Time#getgm" do
  it_behaves_like(:time_getgm, :getgm)
end
