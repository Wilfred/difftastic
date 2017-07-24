require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/numeric_basic', __FILE__)
require File.expand_path('../shared/float', __FILE__)

describe "Array#pack with format 'F'" do
  it_behaves_like :array_pack_basic, 'F'
  it_behaves_like :array_pack_basic_float, 'F'
  it_behaves_like :array_pack_arguments, 'F'
  it_behaves_like :array_pack_no_platform, 'F'
  it_behaves_like :array_pack_numeric_basic, 'F'
  it_behaves_like :array_pack_float, 'F'

  little_endian do
    it_behaves_like :array_pack_float_le, 'F'
  end

  big_endian do
    it_behaves_like :array_pack_float_be, 'F'
  end
end

describe "Array#pack with format 'f'" do
  it_behaves_like :array_pack_basic, 'f'
  it_behaves_like :array_pack_basic_float, 'f'
  it_behaves_like :array_pack_arguments, 'f'
  it_behaves_like :array_pack_no_platform, 'f'
  it_behaves_like :array_pack_numeric_basic, 'f'
  it_behaves_like :array_pack_float, 'f'

  little_endian do
    it_behaves_like :array_pack_float_le, 'f'
  end

  big_endian do
    it_behaves_like :array_pack_float_be, 'f'
  end
end
