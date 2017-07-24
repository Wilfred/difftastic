require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/integer', __FILE__)

describe "String#unpack with format 'L'" do
  describe "with modifier '<'" do
    it_behaves_like :string_unpack_32bit_le, 'L<'
    it_behaves_like :string_unpack_32bit_le_unsigned, 'L<'
  end

  describe "with modifier '>'" do
    it_behaves_like :string_unpack_32bit_be, 'L>'
    it_behaves_like :string_unpack_32bit_be_unsigned, 'L>'
  end

  platform_is wordsize: 32 do
    describe "with modifier '<' and '_'" do
      it_behaves_like :string_unpack_32bit_le, 'L<_'
      it_behaves_like :string_unpack_32bit_le, 'L_<'
      it_behaves_like :string_unpack_32bit_le_unsigned, 'L<_'
      it_behaves_like :string_unpack_32bit_le_unsigned, 'L_<'
    end

    describe "with modifier '<' and '!'" do
      it_behaves_like :string_unpack_32bit_le, 'L<!'
      it_behaves_like :string_unpack_32bit_le, 'L!<'
      it_behaves_like :string_unpack_32bit_le_unsigned, 'L<!'
      it_behaves_like :string_unpack_32bit_le_unsigned, 'L!<'
    end

    describe "with modifier '>' and '_'" do
      it_behaves_like :string_unpack_32bit_be, 'L>_'
      it_behaves_like :string_unpack_32bit_be, 'L_>'
      it_behaves_like :string_unpack_32bit_be_unsigned, 'L>_'
      it_behaves_like :string_unpack_32bit_be_unsigned, 'L_>'
    end

    describe "with modifier '>' and '!'" do
      it_behaves_like :string_unpack_32bit_be, 'L>!'
      it_behaves_like :string_unpack_32bit_be, 'L!>'
      it_behaves_like :string_unpack_32bit_be_unsigned, 'L>!'
      it_behaves_like :string_unpack_32bit_be_unsigned, 'L!>'
    end
  end

  platform_is wordsize: 64 do
    platform_is_not :mingw32 do
      describe "with modifier '<' and '_'" do
        it_behaves_like :string_unpack_64bit_le, 'L<_'
        it_behaves_like :string_unpack_64bit_le, 'L_<'
        it_behaves_like :string_unpack_64bit_le_unsigned, 'L<_'
        it_behaves_like :string_unpack_64bit_le_unsigned, 'L_<'
      end

      describe "with modifier '<' and '!'" do
        it_behaves_like :string_unpack_64bit_le, 'L<!'
        it_behaves_like :string_unpack_64bit_le, 'L!<'
        it_behaves_like :string_unpack_64bit_le_unsigned, 'L<!'
        it_behaves_like :string_unpack_64bit_le_unsigned, 'L!<'
      end

      describe "with modifier '>' and '_'" do
        it_behaves_like :string_unpack_64bit_be, 'L>_'
        it_behaves_like :string_unpack_64bit_be, 'L_>'
        it_behaves_like :string_unpack_64bit_be_unsigned, 'L>_'
        it_behaves_like :string_unpack_64bit_be_unsigned, 'L_>'
      end

      describe "with modifier '>' and '!'" do
        it_behaves_like :string_unpack_64bit_be, 'L>!'
        it_behaves_like :string_unpack_64bit_be, 'L!>'
        it_behaves_like :string_unpack_64bit_be_unsigned, 'L>!'
        it_behaves_like :string_unpack_64bit_be_unsigned, 'L!>'
      end
    end

    platform_is :mingw32 do
      describe "with modifier '<' and '_'" do
        it_behaves_like :string_unpack_32bit_le, 'L<_'
        it_behaves_like :string_unpack_32bit_le, 'L_<'
        it_behaves_like :string_unpack_32bit_le_unsigned, 'L<_'
        it_behaves_like :string_unpack_32bit_le_unsigned, 'L_<'
      end

      describe "with modifier '<' and '!'" do
        it_behaves_like :string_unpack_32bit_le, 'L<!'
        it_behaves_like :string_unpack_32bit_le, 'L!<'
        it_behaves_like :string_unpack_32bit_le_unsigned, 'L<!'
        it_behaves_like :string_unpack_32bit_le_unsigned, 'L!<'
      end

      describe "with modifier '>' and '_'" do
        it_behaves_like :string_unpack_32bit_be, 'L>_'
        it_behaves_like :string_unpack_32bit_be, 'L_>'
        it_behaves_like :string_unpack_32bit_be_unsigned, 'L>_'
        it_behaves_like :string_unpack_32bit_be_unsigned, 'L_>'
      end

      describe "with modifier '>' and '!'" do
        it_behaves_like :string_unpack_32bit_be, 'L>!'
        it_behaves_like :string_unpack_32bit_be, 'L!>'
        it_behaves_like :string_unpack_32bit_be_unsigned, 'L>!'
        it_behaves_like :string_unpack_32bit_be_unsigned, 'L!>'
      end
    end
  end
end

describe "String#unpack with format 'l'" do
  describe "with modifier '<'" do
    it_behaves_like :string_unpack_32bit_le, 'l<'
    it_behaves_like :string_unpack_32bit_le_signed, 'l<'
  end

  describe "with modifier '>'" do
    it_behaves_like :string_unpack_32bit_be, 'l>'
    it_behaves_like :string_unpack_32bit_be_signed, 'l>'
  end

  platform_is wordsize: 32 do
    describe "with modifier '<' and '_'" do
      it_behaves_like :string_unpack_32bit_le, 'l<_'
      it_behaves_like :string_unpack_32bit_le, 'l_<'
      it_behaves_like :string_unpack_32bit_le_signed, 'l<_'
      it_behaves_like :string_unpack_32bit_le_signed, 'l_<'
    end

    describe "with modifier '<' and '!'" do
      it_behaves_like :string_unpack_32bit_le, 'l<!'
      it_behaves_like :string_unpack_32bit_le, 'l!<'
      it_behaves_like :string_unpack_32bit_le_signed, 'l<!'
      it_behaves_like :string_unpack_32bit_le_signed, 'l!<'
    end

    describe "with modifier '>' and '_'" do
      it_behaves_like :string_unpack_32bit_be, 'l>_'
      it_behaves_like :string_unpack_32bit_be, 'l_>'
      it_behaves_like :string_unpack_32bit_be_signed, 'l>_'
      it_behaves_like :string_unpack_32bit_be_signed, 'l_>'
    end

    describe "with modifier '>' and '!'" do
      it_behaves_like :string_unpack_32bit_be, 'l>!'
      it_behaves_like :string_unpack_32bit_be, 'l!>'
      it_behaves_like :string_unpack_32bit_be_signed, 'l>!'
      it_behaves_like :string_unpack_32bit_be_signed, 'l!>'
    end
  end

  platform_is wordsize: 64 do
    platform_is_not :mingw32 do
      describe "with modifier '<' and '_'" do
        it_behaves_like :string_unpack_64bit_le, 'l<_'
        it_behaves_like :string_unpack_64bit_le, 'l_<'
        it_behaves_like :string_unpack_64bit_le_signed, 'l<_'
        it_behaves_like :string_unpack_64bit_le_signed, 'l_<'
      end

      describe "with modifier '<' and '!'" do
        it_behaves_like :string_unpack_64bit_le, 'l<!'
        it_behaves_like :string_unpack_64bit_le, 'l!<'
        it_behaves_like :string_unpack_64bit_le_signed, 'l<!'
        it_behaves_like :string_unpack_64bit_le_signed, 'l!<'
      end

      describe "with modifier '>' and '_'" do
        it_behaves_like :string_unpack_64bit_be, 'l>_'
        it_behaves_like :string_unpack_64bit_be, 'l_>'
        it_behaves_like :string_unpack_64bit_be_signed, 'l>_'
        it_behaves_like :string_unpack_64bit_be_signed, 'l_>'
      end

      describe "with modifier '>' and '!'" do
        it_behaves_like :string_unpack_64bit_be, 'l>!'
        it_behaves_like :string_unpack_64bit_be, 'l!>'
        it_behaves_like :string_unpack_64bit_be_signed, 'l>!'
        it_behaves_like :string_unpack_64bit_be_signed, 'l!>'
      end
    end

    platform_is :mingw32 do
      describe "with modifier '<' and '_'" do
        it_behaves_like :string_unpack_32bit_le, 'l<_'
        it_behaves_like :string_unpack_32bit_le, 'l_<'
        it_behaves_like :string_unpack_32bit_le_signed, 'l<_'
        it_behaves_like :string_unpack_32bit_le_signed, 'l_<'
      end

      describe "with modifier '<' and '!'" do
        it_behaves_like :string_unpack_32bit_le, 'l<!'
        it_behaves_like :string_unpack_32bit_le, 'l!<'
        it_behaves_like :string_unpack_32bit_le_signed, 'l<!'
        it_behaves_like :string_unpack_32bit_le_signed, 'l!<'
      end

      describe "with modifier '>' and '_'" do
        it_behaves_like :string_unpack_32bit_be, 'l>_'
        it_behaves_like :string_unpack_32bit_be, 'l_>'
        it_behaves_like :string_unpack_32bit_be_signed, 'l>_'
        it_behaves_like :string_unpack_32bit_be_signed, 'l_>'
      end

      describe "with modifier '>' and '!'" do
        it_behaves_like :string_unpack_32bit_be, 'l>!'
        it_behaves_like :string_unpack_32bit_be, 'l!>'
        it_behaves_like :string_unpack_32bit_be_signed, 'l>!'
        it_behaves_like :string_unpack_32bit_be_signed, 'l!>'
      end
    end
  end
end

little_endian do
  describe "String#unpack with format 'L'" do
    it_behaves_like :string_unpack_basic, 'L'
    it_behaves_like :string_unpack_32bit_le, 'L'
    it_behaves_like :string_unpack_32bit_le_unsigned, 'L'
  end

  describe "String#unpack with format 'l'" do
    it_behaves_like :string_unpack_basic, 'l'
    it_behaves_like :string_unpack_32bit_le, 'l'
    it_behaves_like :string_unpack_32bit_le_signed, 'l'
  end

  platform_is wordsize: 32 do
    describe "String#unpack with format 'L' with modifier '_'" do
      it_behaves_like :string_unpack_32bit_le, 'L_'
      it_behaves_like :string_unpack_32bit_le_unsigned, 'L_'
    end

    describe "String#unpack with format 'L' with modifier '!'" do
      it_behaves_like :string_unpack_32bit_le, 'L!'
      it_behaves_like :string_unpack_32bit_le_unsigned, 'L!'
    end

    describe "String#unpack with format 'l' with modifier '_'" do
      it_behaves_like :string_unpack_32bit_le, 'l_'
      it_behaves_like :string_unpack_32bit_le_signed, 'l'
    end

    describe "String#unpack with format 'l' with modifier '!'" do
      it_behaves_like :string_unpack_32bit_le, 'l!'
      it_behaves_like :string_unpack_32bit_le_signed, 'l'
    end
  end

  platform_is wordsize: 64 do
    platform_is_not :mingw32 do
      describe "String#unpack with format 'L' with modifier '_'" do
        it_behaves_like :string_unpack_64bit_le, 'L_'
        it_behaves_like :string_unpack_64bit_le_unsigned, 'L_'
      end

      describe "String#unpack with format 'L' with modifier '!'" do
        it_behaves_like :string_unpack_64bit_le, 'L!'
        it_behaves_like :string_unpack_64bit_le_unsigned, 'L!'
      end

      describe "String#unpack with format 'l' with modifier '_'" do
        it_behaves_like :string_unpack_64bit_le, 'l_'
        it_behaves_like :string_unpack_64bit_le_signed, 'l_'
      end

      describe "String#unpack with format 'l' with modifier '!'" do
        it_behaves_like :string_unpack_64bit_le, 'l!'
        it_behaves_like :string_unpack_64bit_le_signed, 'l!'
      end
    end

    platform_is :mingw32 do
      describe "String#unpack with format 'L' with modifier '_'" do
        it_behaves_like :string_unpack_32bit_le, 'L_'
        it_behaves_like :string_unpack_32bit_le_unsigned, 'L_'
      end

      describe "String#unpack with format 'L' with modifier '!'" do
        it_behaves_like :string_unpack_32bit_le, 'L!'
        it_behaves_like :string_unpack_32bit_le_unsigned, 'L!'
      end

      describe "String#unpack with format 'l' with modifier '_'" do
        it_behaves_like :string_unpack_32bit_le, 'l_'
        it_behaves_like :string_unpack_32bit_le_signed, 'l_'
      end

      describe "String#unpack with format 'l' with modifier '!'" do
        it_behaves_like :string_unpack_32bit_le, 'l!'
        it_behaves_like :string_unpack_32bit_le_signed, 'l!'
      end
    end
  end
end

big_endian do
  describe "String#unpack with format 'L'" do
    it_behaves_like :string_unpack_basic, 'L'
    it_behaves_like :string_unpack_32bit_be, 'L'
    it_behaves_like :string_unpack_32bit_be_unsigned, 'L'
  end

  describe "String#unpack with format 'l'" do
    it_behaves_like :string_unpack_basic, 'l'
    it_behaves_like :string_unpack_32bit_be, 'l'
    it_behaves_like :string_unpack_32bit_be_signed, 'l'
  end

  platform_is wordsize: 32 do
    describe "String#unpack with format 'L' with modifier '_'" do
      it_behaves_like :string_unpack_32bit_be, 'L_'
      it_behaves_like :string_unpack_32bit_be_unsigned, 'L_'
    end

    describe "String#unpack with format 'L' with modifier '!'" do
      it_behaves_like :string_unpack_32bit_be, 'L!'
      it_behaves_like :string_unpack_32bit_be_unsigned, 'L!'
    end

    describe "String#unpack with format 'l' with modifier '_'" do
      it_behaves_like :string_unpack_32bit_be, 'l_'
      it_behaves_like :string_unpack_32bit_be_signed, 'l'
    end

    describe "String#unpack with format 'l' with modifier '!'" do
      it_behaves_like :string_unpack_32bit_be, 'l!'
      it_behaves_like :string_unpack_32bit_be_signed, 'l'
    end
  end

  platform_is wordsize: 64 do
    platform_is_not :mingw32 do
      describe "String#unpack with format 'L' with modifier '_'" do
        it_behaves_like :string_unpack_64bit_be, 'L_'
        it_behaves_like :string_unpack_64bit_be_unsigned, 'L_'
      end

      describe "String#unpack with format 'L' with modifier '!'" do
        it_behaves_like :string_unpack_64bit_be, 'L!'
        it_behaves_like :string_unpack_64bit_be_unsigned, 'L!'
      end

      describe "String#unpack with format 'l' with modifier '_'" do
        it_behaves_like :string_unpack_64bit_be, 'l_'
        it_behaves_like :string_unpack_64bit_be_signed, 'l_'
      end

      describe "String#unpack with format 'l' with modifier '!'" do
        it_behaves_like :string_unpack_64bit_be, 'l!'
        it_behaves_like :string_unpack_64bit_be_signed, 'l!'
      end
    end

    platform_is :mingw32 do
      describe "String#unpack with format 'L' with modifier '_'" do
        it_behaves_like :string_unpack_32bit_be, 'L_'
        it_behaves_like :string_unpack_32bit_be_unsigned, 'L_'
      end

      describe "String#unpack with format 'L' with modifier '!'" do
        it_behaves_like :string_unpack_32bit_be, 'L!'
        it_behaves_like :string_unpack_32bit_be_unsigned, 'L!'
      end

      describe "String#unpack with format 'l' with modifier '_'" do
        it_behaves_like :string_unpack_32bit_be, 'l_'
        it_behaves_like :string_unpack_32bit_be_signed, 'l_'
      end

      describe "String#unpack with format 'l' with modifier '!'" do
        it_behaves_like :string_unpack_32bit_be, 'l!'
        it_behaves_like :string_unpack_32bit_be_signed, 'l!'
      end
    end
  end
end
