require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)
require File.expand_path('../shared/to_s.rb', __FILE__)

describe "String#to_str" do
  it_behaves_like(:string_to_s, :to_str)
end
