require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/numeric_basic', __FILE__)
require File.expand_path('../shared/integer', __FILE__)

describe "Array#pack with format 'S'" do
  it_behaves_like :array_pack_basic, 'S'
  it_behaves_like :array_pack_basic_non_float, 'S'
  it_behaves_like :array_pack_arguments, 'S'
  it_behaves_like :array_pack_numeric_basic, 'S'
  it_behaves_like :array_pack_integer, 'S'
end

describe "Array#pack with format 's'" do
  it_behaves_like :array_pack_basic, 's'
  it_behaves_like :array_pack_basic_non_float, 's'
  it_behaves_like :array_pack_arguments, 's'
  it_behaves_like :array_pack_numeric_basic, 's'
  it_behaves_like :array_pack_integer, 's'
end

describe "Array#pack with format 'S'" do
  describe "with modifier '<'" do
    it_behaves_like :array_pack_16bit_le, 'S<'
  end

  describe "with modifier '<' and '_'" do
    it_behaves_like :array_pack_16bit_le, 'S<_'
    it_behaves_like :array_pack_16bit_le, 'S_<'
  end

  describe "with modifier '<' and '!'" do
    it_behaves_like :array_pack_16bit_le, 'S<!'
    it_behaves_like :array_pack_16bit_le, 'S!<'
  end

  describe "with modifier '>'" do
    it_behaves_like :array_pack_16bit_be, 'S>'
  end

  describe "with modifier '>' and '_'" do
    it_behaves_like :array_pack_16bit_be, 'S>_'
    it_behaves_like :array_pack_16bit_be, 'S_>'
  end

  describe "with modifier '>' and '!'" do
    it_behaves_like :array_pack_16bit_be, 'S>!'
    it_behaves_like :array_pack_16bit_be, 'S!>'
  end
end

describe "Array#pack with format 's'" do
  describe "with modifier '<'" do
    it_behaves_like :array_pack_16bit_le, 's<'
  end

  describe "with modifier '<' and '_'" do
    it_behaves_like :array_pack_16bit_le, 's<_'
    it_behaves_like :array_pack_16bit_le, 's_<'
  end

  describe "with modifier '<' and '!'" do
    it_behaves_like :array_pack_16bit_le, 's<!'
    it_behaves_like :array_pack_16bit_le, 's!<'
  end

  describe "with modifier '>'" do
    it_behaves_like :array_pack_16bit_be, 's>'
  end

  describe "with modifier '>' and '_'" do
    it_behaves_like :array_pack_16bit_be, 's>_'
    it_behaves_like :array_pack_16bit_be, 's_>'
  end

  describe "with modifier '>' and '!'" do
    it_behaves_like :array_pack_16bit_be, 's>!'
    it_behaves_like :array_pack_16bit_be, 's!>'
  end
end

little_endian do
  describe "Array#pack with format 'S'" do
    it_behaves_like :array_pack_16bit_le, 'S'
  end

  describe "Array#pack with format 'S' with modifier '_'" do
    it_behaves_like :array_pack_16bit_le, 'S_'
  end

  describe "Array#pack with format 'S' with modifier '!'" do
    it_behaves_like :array_pack_16bit_le, 'S!'
  end

  describe "Array#pack with format 's'" do
    it_behaves_like :array_pack_16bit_le, 's'
  end

  describe "Array#pack with format 's' with modifier '_'" do
    it_behaves_like :array_pack_16bit_le, 's_'
  end

  describe "Array#pack with format 's' with modifier '!'" do
    it_behaves_like :array_pack_16bit_le, 's!'
  end
end

big_endian do
  describe "Array#pack with format 'S'" do
    it_behaves_like :array_pack_16bit_be, 'S'
  end

  describe "Array#pack with format 'S' with modifier '_'" do
    it_behaves_like :array_pack_16bit_be, 'S_'
  end

  describe "Array#pack with format 'S' with modifier '!'" do
    it_behaves_like :array_pack_16bit_be, 'S!'
  end

  describe "Array#pack with format 's'" do
    it_behaves_like :array_pack_16bit_be, 's'
  end

  describe "Array#pack with format 's' with modifier '_'" do
    it_behaves_like :array_pack_16bit_be, 's_'
  end

  describe "Array#pack with format 's' with modifier '!'" do
    it_behaves_like :array_pack_16bit_be, 's!'
  end
end
