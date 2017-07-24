require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)
require File.expand_path('../shared/succ.rb', __FILE__)

describe "String#succ" do
  it_behaves_like(:string_succ, :succ)
end

describe "String#succ!" do
  it_behaves_like(:string_succ_bang, :"succ!")
end
