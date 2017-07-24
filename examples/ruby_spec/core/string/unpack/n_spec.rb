require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/integer', __FILE__)

describe "String#unpack with format 'N'" do
  it_behaves_like :string_unpack_basic, 'N'
  it_behaves_like :string_unpack_32bit_be, 'N'
  it_behaves_like :string_unpack_32bit_be_unsigned, 'N'
  it_behaves_like :string_unpack_no_platform, 'N'
end

describe "String#unpack with format 'n'" do
  it_behaves_like :string_unpack_basic, 'n'
  it_behaves_like :string_unpack_16bit_be, 'n'
  it_behaves_like :string_unpack_16bit_be_unsigned, 'n'
  it_behaves_like :string_unpack_no_platform, 'n'
end
