require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/float', __FILE__)

little_endian do
  describe "String#unpack with format 'D'" do
    it_behaves_like :string_unpack_basic, 'D'
    it_behaves_like :string_unpack_double_le, 'D'
  end

  describe "String#unpack with format 'd'" do
    it_behaves_like :string_unpack_basic, 'd'
    it_behaves_like :string_unpack_double_le, 'd'
  end
end

big_endian do
  describe "String#unpack with format 'D'" do
    it_behaves_like :string_unpack_basic, 'D'
    it_behaves_like :string_unpack_double_be, 'D'
  end

  describe "String#unpack with format 'd'" do
    it_behaves_like :string_unpack_basic, 'd'
    it_behaves_like :string_unpack_double_be, 'd'
  end
end
