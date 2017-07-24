require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/call', __FILE__)

describe "Method#call" do
  it_behaves_like(:method_call, :call)
end
