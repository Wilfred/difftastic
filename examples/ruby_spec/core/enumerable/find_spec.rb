require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/find', __FILE__)

describe "Enumerable#find" do
  it_behaves_like(:enumerable_find , :find)
end
