require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/float', __FILE__)

little_endian do
  describe "String#unpack with format 'F'" do
    it_behaves_like :string_unpack_basic, 'F'
    it_behaves_like :string_unpack_float_le, 'F'
  end

  describe "String#unpack with format 'f'" do
    it_behaves_like :string_unpack_basic, 'f'
    it_behaves_like :string_unpack_float_le, 'f'
  end
end

big_endian do
  describe "String#unpack with format 'F'" do
    it_behaves_like :string_unpack_basic, 'F'
    it_behaves_like :string_unpack_float_be, 'F'
  end

  describe "String#unpack with format 'f'" do
    it_behaves_like :string_unpack_basic, 'f'
    it_behaves_like :string_unpack_float_be, 'f'
  end
end
