require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/float', __FILE__)

describe "String#unpack with format 'E'" do
  it_behaves_like :string_unpack_basic, 'E'
  it_behaves_like :string_unpack_double_le, 'E'
end

describe "String#unpack with format 'e'" do
  it_behaves_like :string_unpack_basic, 'e'
  it_behaves_like :string_unpack_float_le, 'e'
end
