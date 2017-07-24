require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/inject', __FILE__)

describe "Enumerable#inject" do
  it_behaves_like :enumerable_inject, :inject
end
