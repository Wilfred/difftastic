require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/id2name', __FILE__)

describe "Symbol#id2name" do
  it_behaves_like(:symbol_id2name, :id2name)
end
