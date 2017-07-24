require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/to_s', __FILE__)

describe "Proc#to_s" do
  it_behaves_like :proc_to_s, :to_s
end
