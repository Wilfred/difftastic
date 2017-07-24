require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/kernel/object_id', __FILE__)

describe "Kernel#object_id" do
  it_behaves_like :object_id, :object_id, Object
end
