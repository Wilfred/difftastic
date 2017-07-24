require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)
require File.expand_path('../../../shared/string/times', __FILE__)

describe "String#*" do
  it_behaves_like :string_times, :*, ->(str, times) { str * times }
end
