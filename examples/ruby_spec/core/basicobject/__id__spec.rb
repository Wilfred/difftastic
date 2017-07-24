require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/kernel/object_id', __FILE__)

describe "BasicObject#__id__" do
  it_behaves_like :object_id, :__id__, BasicObject
end
