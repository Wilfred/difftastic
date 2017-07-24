require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/gmtime', __FILE__)

describe "Time#gmtime" do
  it_behaves_like(:time_gmtime, :gmtime)
end
