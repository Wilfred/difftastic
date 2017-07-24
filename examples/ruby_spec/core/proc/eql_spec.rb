require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/equal', __FILE__)

describe "Proc#eql?" do
  it_behaves_like(:proc_equal_undefined, :eql?)
end
