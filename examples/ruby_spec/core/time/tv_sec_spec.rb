require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/to_i', __FILE__)

describe "Time#tv_sec" do
  it_behaves_like(:time_to_i, :tv_sec)
end
