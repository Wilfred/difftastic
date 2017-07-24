require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)
require File.expand_path('../shared/length', __FILE__)

describe "String#size" do
  it_behaves_like(:string_length, :size)
end
