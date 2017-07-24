require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/isdst', __FILE__)

describe "Time#dst?" do
  it_behaves_like(:time_isdst, :dst?)
end
