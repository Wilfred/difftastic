require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)
require File.expand_path('../shared/succ.rb', __FILE__)

describe "String#next" do
  it_behaves_like(:string_succ, :next)
end

describe "String#next!" do
  it_behaves_like(:string_succ_bang, :"next!")
end
