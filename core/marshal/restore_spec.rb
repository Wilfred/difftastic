require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/load', __FILE__)

describe "Marshal.restore" do
  it_behaves_like :marshal_load, :restore
end
