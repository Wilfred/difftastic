require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/id2name', __FILE__)

describe "Symbol#to_s" do
  it_behaves_like(:symbol_id2name, :to_s)
end
