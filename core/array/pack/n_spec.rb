require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/numeric_basic', __FILE__)
require File.expand_path('../shared/integer', __FILE__)

describe "Array#pack with format 'N'" do
  it_behaves_like :array_pack_basic, 'N'
  it_behaves_like :array_pack_basic_non_float, 'N'
  it_behaves_like :array_pack_arguments, 'N'
  it_behaves_like :array_pack_numeric_basic, 'N'
  it_behaves_like :array_pack_integer, 'N'
  it_behaves_like :array_pack_no_platform, 'N'
  it_behaves_like :array_pack_32bit_be, 'N'
end

describe "Array#pack with format 'n'" do
  it_behaves_like :array_pack_basic, 'n'
  it_behaves_like :array_pack_basic_non_float, 'n'
  it_behaves_like :array_pack_arguments, 'n'
  it_behaves_like :array_pack_numeric_basic, 'n'
  it_behaves_like :array_pack_integer, 'n'
  it_behaves_like :array_pack_no_platform, 'n'
  it_behaves_like :array_pack_16bit_be, 'n'
end
