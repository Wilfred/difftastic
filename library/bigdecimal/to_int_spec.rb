require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/to_int', __FILE__)
require 'bigdecimal'


describe "BigDecimal#to_int" do
  it_behaves_like(:bigdecimal_to_int, :to_int)
end
