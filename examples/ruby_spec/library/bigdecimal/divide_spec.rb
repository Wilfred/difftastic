require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/quo', __FILE__)
require 'bigdecimal'

describe "BigDecimal#/" do
  it_behaves_like :bigdecimal_quo, :/, []
end
