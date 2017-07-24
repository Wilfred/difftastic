require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/end', __FILE__)

describe "Range#end" do
  it_behaves_like(:range_end, :end)
end
