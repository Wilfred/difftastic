require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/integer', __FILE__)

describe "String#unpack with format 'V'" do
  it_behaves_like :string_unpack_basic, 'V'
  it_behaves_like :string_unpack_32bit_le, 'V'
  it_behaves_like :string_unpack_32bit_le_unsigned, 'V'
  it_behaves_like :string_unpack_no_platform, 'V'
end

describe "String#unpack with format 'v'" do
  it_behaves_like :string_unpack_basic, 'v'
  it_behaves_like :string_unpack_16bit_le, 'v'
  it_behaves_like :string_unpack_16bit_le_unsigned, 'v'
  it_behaves_like :string_unpack_no_platform, 'v'
end
