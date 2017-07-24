require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)
require File.expand_path('../shared/new', __FILE__)

describe "Exception.new" do
  it_behaves_like(:exception_new, :new)
end
