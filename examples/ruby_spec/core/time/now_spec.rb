require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/now', __FILE__)

describe "Time.now" do
  it_behaves_like(:time_now, :now)
end
