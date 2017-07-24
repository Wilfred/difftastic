require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/gm', __FILE__)
require File.expand_path('../shared/time_params', __FILE__)

describe "Time.gm" do
  it_behaves_like(:time_gm, :gm)
  it_behaves_like(:time_params, :gm)
  it_behaves_like(:time_params_10_arg, :gm)
  it_behaves_like(:time_params_microseconds, :gm)
end
