require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/dup', __FILE__)

describe "Proc#clone" do
  it_behaves_like(:proc_dup, :clone)
end
