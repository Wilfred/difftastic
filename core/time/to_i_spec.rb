require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/to_i', __FILE__)

describe "Time#to_i" do
  it_behaves_like(:time_to_i, :to_i)
end
