require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/integer', __FILE__)

describe "String#unpack with format 'I'" do
  describe "with modifier '<'" do
    it_behaves_like :string_unpack_32bit_le, 'I<'
    it_behaves_like :string_unpack_32bit_le_unsigned, 'I<'
  end

  describe "with modifier '<' and '_'" do
    it_behaves_like :string_unpack_32bit_le, 'I<_'
    it_behaves_like :string_unpack_32bit_le, 'I_<'
    it_behaves_like :string_unpack_32bit_le_unsigned, 'I<_'
    it_behaves_like :string_unpack_32bit_le_unsigned, 'I_<'
  end

  describe "with modifier '<' and '!'" do
    it_behaves_like :string_unpack_32bit_le, 'I<!'
    it_behaves_like :string_unpack_32bit_le, 'I!<'
    it_behaves_like :string_unpack_32bit_le_unsigned, 'I<!'
    it_behaves_like :string_unpack_32bit_le_unsigned, 'I!<'
  end

  describe "with modifier '>'" do
    it_behaves_like :string_unpack_32bit_be, 'I>'
    it_behaves_like :string_unpack_32bit_be_unsigned, 'I>'
  end

  describe "with modifier '>' and '_'" do
    it_behaves_like :string_unpack_32bit_be, 'I>_'
    it_behaves_like :string_unpack_32bit_be, 'I_>'
    it_behaves_like :string_unpack_32bit_be_unsigned, 'I>_'
    it_behaves_like :string_unpack_32bit_be_unsigned, 'I_>'
  end

  describe "with modifier '>' and '!'" do
    it_behaves_like :string_unpack_32bit_be, 'I>!'
    it_behaves_like :string_unpack_32bit_be, 'I!>'
    it_behaves_like :string_unpack_32bit_be_unsigned, 'I>!'
    it_behaves_like :string_unpack_32bit_be_unsigned, 'I!>'
  end
end

describe "String#unpack with format 'i'" do
  describe "with modifier '<'" do
    it_behaves_like :string_unpack_32bit_le, 'i<'
    it_behaves_like :string_unpack_32bit_le_signed, 'i<'
  end

  describe "with modifier '<' and '_'" do
    it_behaves_like :string_unpack_32bit_le, 'i<_'
    it_behaves_like :string_unpack_32bit_le, 'i_<'
    it_behaves_like :string_unpack_32bit_le_signed, 'i<_'
    it_behaves_like :string_unpack_32bit_le_signed, 'i_<'
  end

  describe "with modifier '<' and '!'" do
    it_behaves_like :string_unpack_32bit_le, 'i<!'
    it_behaves_like :string_unpack_32bit_le, 'i!<'
    it_behaves_like :string_unpack_32bit_le_signed, 'i<!'
    it_behaves_like :string_unpack_32bit_le_signed, 'i!<'
  end

  describe "with modifier '>'" do
    it_behaves_like :string_unpack_32bit_be, 'i>'
    it_behaves_like :string_unpack_32bit_be_signed, 'i>'
  end

  describe "with modifier '>' and '_'" do
    it_behaves_like :string_unpack_32bit_be, 'i>_'
    it_behaves_like :string_unpack_32bit_be, 'i_>'
    it_behaves_like :string_unpack_32bit_be_signed, 'i>_'
    it_behaves_like :string_unpack_32bit_be_signed, 'i_>'
  end

  describe "with modifier '>' and '!'" do
    it_behaves_like :string_unpack_32bit_be, 'i>!'
    it_behaves_like :string_unpack_32bit_be, 'i!>'
    it_behaves_like :string_unpack_32bit_be_signed, 'i>!'
    it_behaves_like :string_unpack_32bit_be_signed, 'i!>'
  end
end

little_endian do
  describe "String#unpack with format 'I'" do
    it_behaves_like :string_unpack_basic, 'I'
    it_behaves_like :string_unpack_32bit_le, 'I'
    it_behaves_like :string_unpack_32bit_le_unsigned, 'I'
  end

  describe "String#unpack with format 'I' with modifier '_'" do
    it_behaves_like :string_unpack_32bit_le, 'I_'
    it_behaves_like :string_unpack_32bit_le_unsigned, 'I_'
  end

  describe "String#unpack with format 'I' with modifier '!'" do
    it_behaves_like :string_unpack_32bit_le, 'I!'
    it_behaves_like :string_unpack_32bit_le_unsigned, 'I!'
  end

  describe "String#unpack with format 'i'" do
    it_behaves_like :string_unpack_basic, 'i'
    it_behaves_like :string_unpack_32bit_le, 'i'
    it_behaves_like :string_unpack_32bit_le_signed, 'i'
  end

  describe "String#unpack with format 'i' with modifier '_'" do
    it_behaves_like :string_unpack_32bit_le, 'i_'
    it_behaves_like :string_unpack_32bit_le_signed, 'i_'
  end

  describe "String#unpack with format 'i' with modifier '!'" do
    it_behaves_like :string_unpack_32bit_le, 'i!'
    it_behaves_like :string_unpack_32bit_le_signed, 'i!'
  end
end

big_endian do
  describe "String#unpack with format 'I'" do
    it_behaves_like :string_unpack_basic, 'I'
    it_behaves_like :string_unpack_32bit_be, 'I'
    it_behaves_like :string_unpack_32bit_be_unsigned, 'I'
  end

  describe "String#unpack with format 'I' with modifier '_'" do
    it_behaves_like :string_unpack_32bit_be, 'I_'
    it_behaves_like :string_unpack_32bit_be_unsigned, 'I_'
  end

  describe "String#unpack with format 'I' with modifier '!'" do
    it_behaves_like :string_unpack_32bit_be, 'I!'
    it_behaves_like :string_unpack_32bit_be_unsigned, 'I!'
  end

  describe "String#unpack with format 'i'" do
    it_behaves_like :string_unpack_basic, 'i'
    it_behaves_like :string_unpack_32bit_be, 'i'
    it_behaves_like :string_unpack_32bit_be_signed, 'i'
  end

  describe "String#unpack with format 'i' with modifier '_'" do
    it_behaves_like :string_unpack_32bit_be, 'i_'
    it_behaves_like :string_unpack_32bit_be_signed, 'i_'
  end

  describe "String#unpack with format 'i' with modifier '!'" do
    it_behaves_like :string_unpack_32bit_be, 'i!'
    it_behaves_like :string_unpack_32bit_be_signed, 'i!'
  end
end
