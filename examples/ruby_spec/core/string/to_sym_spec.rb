require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)
require File.expand_path('../shared/to_sym.rb', __FILE__)

describe "String#to_sym" do
  it_behaves_like(:string_to_sym, :to_sym)
end
