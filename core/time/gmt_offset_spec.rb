require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/gmt_offset', __FILE__)

describe "Time#gmt_offset" do
  it_behaves_like(:time_gmt_offset, :gmt_offset)
end
