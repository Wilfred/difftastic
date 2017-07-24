require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/numeric_basic', __FILE__)
require File.expand_path('../shared/float', __FILE__)

describe "Array#pack with format 'E'" do
  it_behaves_like :array_pack_basic, 'E'
  it_behaves_like :array_pack_basic_float, 'E'
  it_behaves_like :array_pack_arguments, 'E'
  it_behaves_like :array_pack_no_platform, 'E'
  it_behaves_like :array_pack_numeric_basic, 'E'
  it_behaves_like :array_pack_float, 'E'
  it_behaves_like :array_pack_double_le, 'E'
end

describe "Array#pack with format 'e'" do
  it_behaves_like :array_pack_basic, 'e'
  it_behaves_like :array_pack_basic_float, 'e'
  it_behaves_like :array_pack_arguments, 'e'
  it_behaves_like :array_pack_no_platform, 'e'
  it_behaves_like :array_pack_numeric_basic, 'e'
  it_behaves_like :array_pack_float, 'e'
  it_behaves_like :array_pack_float_le, 'e'
end
