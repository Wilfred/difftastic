require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/eql.rb', __FILE__)


describe "BigDecimal#===" do
  it_behaves_like(:bigdecimal_eql, :===)
end
