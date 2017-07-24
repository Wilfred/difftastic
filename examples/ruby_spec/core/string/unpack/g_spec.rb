require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/float', __FILE__)

describe "String#unpack with format 'G'" do
  it_behaves_like :string_unpack_basic, 'G'
  it_behaves_like :string_unpack_double_be, 'G'
end

describe "String#unpack with format 'g'" do
  it_behaves_like :string_unpack_basic, 'g'
  it_behaves_like :string_unpack_float_be, 'g'
end
