require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/local', __FILE__)
require File.expand_path('../shared/time_params', __FILE__)

describe "Time.local" do
  it_behaves_like(:time_local, :local)
  it_behaves_like(:time_local_10_arg, :local)
  it_behaves_like(:time_params, :local)
  it_behaves_like(:time_params_10_arg, :local)
  it_behaves_like(:time_params_microseconds, :local)
end
