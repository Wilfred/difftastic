require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/integer', __FILE__)

describe "String#unpack with format 'S'" do
  describe "with modifier '<'" do
    it_behaves_like :string_unpack_16bit_le, 'S<'
    it_behaves_like :string_unpack_16bit_le_unsigned, 'S<'
  end

  describe "with modifier '<' and '_'" do
    it_behaves_like :string_unpack_16bit_le, 'S<_'
    it_behaves_like :string_unpack_16bit_le, 'S_<'
    it_behaves_like :string_unpack_16bit_le_unsigned, 'S_<'
    it_behaves_like :string_unpack_16bit_le_unsigned, 'S<_'
  end

  describe "with modifier '<' and '!'" do
    it_behaves_like :string_unpack_16bit_le, 'S<!'
    it_behaves_like :string_unpack_16bit_le, 'S!<'
    it_behaves_like :string_unpack_16bit_le_unsigned, 'S!<'
    it_behaves_like :string_unpack_16bit_le_unsigned, 'S<!'
  end

  describe "with modifier '>'" do
    it_behaves_like :string_unpack_16bit_be, 'S>'
    it_behaves_like :string_unpack_16bit_be_unsigned, 'S>'
  end

  describe "with modifier '>' and '_'" do
    it_behaves_like :string_unpack_16bit_be, 'S>_'
    it_behaves_like :string_unpack_16bit_be, 'S_>'
    it_behaves_like :string_unpack_16bit_be_unsigned, 'S>_'
    it_behaves_like :string_unpack_16bit_be_unsigned, 'S_>'
  end

  describe "with modifier '>' and '!'" do
    it_behaves_like :string_unpack_16bit_be, 'S>!'
    it_behaves_like :string_unpack_16bit_be, 'S!>'
    it_behaves_like :string_unpack_16bit_be_unsigned, 'S>!'
    it_behaves_like :string_unpack_16bit_be_unsigned, 'S!>'
  end
end

describe "String#unpack with format 's'" do
  describe "with modifier '<'" do
    it_behaves_like :string_unpack_16bit_le, 's<'
    it_behaves_like :string_unpack_16bit_le_signed, 's<'
  end

  describe "with modifier '<' and '_'" do
    it_behaves_like :string_unpack_16bit_le, 's<_'
    it_behaves_like :string_unpack_16bit_le, 's_<'
    it_behaves_like :string_unpack_16bit_le_signed, 's<_'
    it_behaves_like :string_unpack_16bit_le_signed, 's_<'
  end

  describe "with modifier '<' and '!'" do
    it_behaves_like :string_unpack_16bit_le, 's<!'
    it_behaves_like :string_unpack_16bit_le, 's!<'
    it_behaves_like :string_unpack_16bit_le_signed, 's<!'
    it_behaves_like :string_unpack_16bit_le_signed, 's!<'
  end

  describe "with modifier '>'" do
    it_behaves_like :string_unpack_16bit_be, 's>'
    it_behaves_like :string_unpack_16bit_be_signed, 's>'
  end

  describe "with modifier '>' and '_'" do
    it_behaves_like :string_unpack_16bit_be, 's>_'
    it_behaves_like :string_unpack_16bit_be, 's_>'
    it_behaves_like :string_unpack_16bit_be_signed, 's>_'
    it_behaves_like :string_unpack_16bit_be_signed, 's_>'
  end

  describe "with modifier '>' and '!'" do
    it_behaves_like :string_unpack_16bit_be, 's>!'
    it_behaves_like :string_unpack_16bit_be, 's!>'
    it_behaves_like :string_unpack_16bit_be_signed, 's>!'
    it_behaves_like :string_unpack_16bit_be_signed, 's!>'
  end
end

little_endian do
  describe "String#unpack with format 'S'" do
    it_behaves_like :string_unpack_basic, 'S'
    it_behaves_like :string_unpack_16bit_le, 'S'
    it_behaves_like :string_unpack_16bit_le_unsigned, 'S'
  end

  describe "String#unpack with format 'S' with modifier '_'" do
    it_behaves_like :string_unpack_16bit_le, 'S_'
    it_behaves_like :string_unpack_16bit_le_unsigned, 'S_'
  end

  describe "String#unpack with format 'S' with modifier '!'" do
    it_behaves_like :string_unpack_16bit_le, 'S!'
    it_behaves_like :string_unpack_16bit_le_unsigned, 'S!'
  end

  describe "String#unpack with format 's'" do
    it_behaves_like :string_unpack_basic, 's'
    it_behaves_like :string_unpack_16bit_le, 's'
    it_behaves_like :string_unpack_16bit_le_signed, 's'
  end

  describe "String#unpack with format 's' with modifier '_'" do
    it_behaves_like :string_unpack_16bit_le, 's_'
    it_behaves_like :string_unpack_16bit_le_signed, 's_'
  end

  describe "String#unpack with format 's' with modifier '!'" do
    it_behaves_like :string_unpack_16bit_le, 's!'
    it_behaves_like :string_unpack_16bit_le_signed, 's!'
  end
end

big_endian do
  describe "String#unpack with format 'S'" do
    it_behaves_like :string_unpack_basic, 'S'
    it_behaves_like :string_unpack_16bit_be, 'S'
    it_behaves_like :string_unpack_16bit_be_unsigned, 'S'
  end

  describe "String#unpack with format 'S' with modifier '_'" do
    it_behaves_like :string_unpack_16bit_be, 'S_'
    it_behaves_like :string_unpack_16bit_be_unsigned, 'S_'
  end

  describe "String#unpack with format 'S' with modifier '!'" do
    it_behaves_like :string_unpack_16bit_be, 'S!'
    it_behaves_like :string_unpack_16bit_be_unsigned, 'S!'
  end

  describe "String#unpack with format 's'" do
    it_behaves_like :string_unpack_basic, 's'
    it_behaves_like :string_unpack_16bit_be, 's'
    it_behaves_like :string_unpack_16bit_be_signed, 's'
  end

  describe "String#unpack with format 's' with modifier '_'" do
    it_behaves_like :string_unpack_16bit_be, 's_'
    it_behaves_like :string_unpack_16bit_be_signed, 's_'
  end

  describe "String#unpack with format 's' with modifier '!'" do
    it_behaves_like :string_unpack_16bit_be, 's!'
    it_behaves_like :string_unpack_16bit_be_signed, 's!'
  end
end
