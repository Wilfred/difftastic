require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/succ', __FILE__)

describe "Symbol#succ" do
  it_behaves_like :symbol_succ, :succ
end
