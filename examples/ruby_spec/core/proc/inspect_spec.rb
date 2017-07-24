require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/to_s', __FILE__)

describe "Proc#inspect" do
  it_behaves_like :proc_to_s, :inspect
end
