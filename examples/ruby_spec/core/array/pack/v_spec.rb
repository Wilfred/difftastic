require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/numeric_basic', __FILE__)
require File.expand_path('../shared/integer', __FILE__)

describe "Array#pack with format 'V'" do
  it_behaves_like :array_pack_basic, 'V'
  it_behaves_like :array_pack_basic_non_float, 'V'
  it_behaves_like :array_pack_arguments, 'V'
  it_behaves_like :array_pack_numeric_basic, 'V'
  it_behaves_like :array_pack_integer, 'V'
  it_behaves_like :array_pack_no_platform, 'V'
  it_behaves_like :array_pack_32bit_le, 'V'
end

describe "Array#pack with format 'v'" do
  it_behaves_like :array_pack_basic, 'v'
  it_behaves_like :array_pack_basic_non_float, 'v'
  it_behaves_like :array_pack_arguments, 'v'
  it_behaves_like :array_pack_numeric_basic, 'v'
  it_behaves_like :array_pack_integer, 'v'
  it_behaves_like :array_pack_no_platform, 'v'
  it_behaves_like :array_pack_16bit_le, 'v'
end
