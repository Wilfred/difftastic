require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/integer', __FILE__)

ruby_version_is '2.3' do
  # To handle the special case of x64-mingw32
  pointer_size = RUBY_PLATFORM =~ /\bx64\b/ ? 64 : 1.size * 8

  if pointer_size == 64 then
    little_endian do
      describe "String#unpack with format 'J'" do
        describe "with modifier '_'" do
          it_behaves_like :string_unpack_64bit_le, 'J_'
          it_behaves_like :string_unpack_64bit_le_unsigned, 'J_'
        end

        describe "with modifier '!'" do
          it_behaves_like :string_unpack_64bit_le, 'J!'
          it_behaves_like :string_unpack_64bit_le_unsigned, 'J!'
        end
      end

      describe "String#unpack with format 'j'" do
        describe "with modifier '_'" do
          it_behaves_like :string_unpack_64bit_le, 'j_'
          it_behaves_like :string_unpack_64bit_le_signed, 'j_'
        end

        describe "with modifier '!'" do
          it_behaves_like :string_unpack_64bit_le, 'j!'
          it_behaves_like :string_unpack_64bit_le_signed, 'j!'
        end
      end
    end

    big_endian do
      describe "String#unpack with format 'J'" do
        describe "with modifier '_'" do
          it_behaves_like :string_unpack_64bit_be, 'J_'
          it_behaves_like :string_unpack_64bit_be_unsigned, 'J_'
        end

        describe "with modifier '!'" do
          it_behaves_like :string_unpack_64bit_be, 'J!'
          it_behaves_like :string_unpack_64bit_be_unsigned, 'J!'
        end
      end

      describe "String#unpack with format 'j'" do
        describe "with modifier '_'" do
          it_behaves_like :string_unpack_64bit_be, 'j_'
          it_behaves_like :string_unpack_64bit_be_signed, 'j_'
        end

        describe "with modifier '!'" do
          it_behaves_like :string_unpack_64bit_be, 'j!'
          it_behaves_like :string_unpack_64bit_be_signed, 'j!'
        end
      end
    end

    describe "String#unpack with format 'J'" do
      describe "with modifier '<'" do
        it_behaves_like :string_unpack_64bit_le, 'J<'
        it_behaves_like :string_unpack_64bit_le_unsigned, 'J<'
      end

      describe "with modifier '>'" do
        it_behaves_like :string_unpack_64bit_be, 'J>'
        it_behaves_like :string_unpack_64bit_be_unsigned, 'J>'
      end

      describe "with modifier '<' and '_'" do
        it_behaves_like :string_unpack_64bit_le, 'J<_'
        it_behaves_like :string_unpack_64bit_le, 'J_<'
        it_behaves_like :string_unpack_64bit_le_unsigned, 'J<_'
        it_behaves_like :string_unpack_64bit_le_unsigned, 'J_<'
      end

      describe "with modifier '<' and '!'" do
        it_behaves_like :string_unpack_64bit_le, 'J<!'
        it_behaves_like :string_unpack_64bit_le, 'J!<'
        it_behaves_like :string_unpack_64bit_le_unsigned, 'J<!'
        it_behaves_like :string_unpack_64bit_le_unsigned, 'J!<'
      end

      describe "with modifier '>' and '_'" do
        it_behaves_like :string_unpack_64bit_be, 'J>_'
        it_behaves_like :string_unpack_64bit_be, 'J_>'
        it_behaves_like :string_unpack_64bit_be_unsigned, 'J>_'
        it_behaves_like :string_unpack_64bit_be_unsigned, 'J_>'
      end

      describe "with modifier '>' and '!'" do
        it_behaves_like :string_unpack_64bit_be, 'J>!'
        it_behaves_like :string_unpack_64bit_be, 'J!>'
        it_behaves_like :string_unpack_64bit_be_unsigned, 'J>!'
        it_behaves_like :string_unpack_64bit_be_unsigned, 'J!>'
      end
    end

    describe "String#unpack with format 'j'" do
      describe "with modifier '<'" do
        it_behaves_like :string_unpack_64bit_le, 'j<'
        it_behaves_like :string_unpack_64bit_le_signed, 'j<'
      end

      describe "with modifier '>'" do
        it_behaves_like :string_unpack_64bit_be, 'j>'
        it_behaves_like :string_unpack_64bit_be_signed, 'j>'
      end

      describe "with modifier '<' and '_'" do
        it_behaves_like :string_unpack_64bit_le, 'j<_'
        it_behaves_like :string_unpack_64bit_le, 'j_<'
        it_behaves_like :string_unpack_64bit_le_signed, 'j<_'
        it_behaves_like :string_unpack_64bit_le_signed, 'j_<'
      end

      describe "with modifier '<' and '!'" do
        it_behaves_like :string_unpack_64bit_le, 'j<!'
        it_behaves_like :string_unpack_64bit_le, 'j!<'
        it_behaves_like :string_unpack_64bit_le_signed, 'j<!'
        it_behaves_like :string_unpack_64bit_le_signed, 'j!<'
      end

      describe "with modifier '>' and '_'" do
        it_behaves_like :string_unpack_64bit_be, 'j>_'
        it_behaves_like :string_unpack_64bit_be, 'j_>'
        it_behaves_like :string_unpack_64bit_be_signed, 'j>_'
        it_behaves_like :string_unpack_64bit_be_signed, 'j_>'
      end

      describe "with modifier '>' and '!'" do
        it_behaves_like :string_unpack_64bit_be, 'j>!'
        it_behaves_like :string_unpack_64bit_be, 'j!>'
        it_behaves_like :string_unpack_64bit_be_signed, 'j>!'
        it_behaves_like :string_unpack_64bit_be_signed, 'j!>'
      end
    end
  end

  if pointer_size == 32 then
    little_endian do
      describe "String#unpack with format 'J'" do
        describe "with modifier '_'" do
          it_behaves_like :string_unpack_32bit_le, 'J_'
          it_behaves_like :string_unpack_32bit_le_unsigned, 'J_'
        end

        describe "with modifier '!'" do
          it_behaves_like :string_unpack_32bit_le, 'J!'
          it_behaves_like :string_unpack_32bit_le_unsigned, 'J!'
        end
      end

      describe "String#unpack with format 'j'" do
        describe "with modifier '_'" do
          it_behaves_like :string_unpack_32bit_le, 'j_'
          it_behaves_like :string_unpack_32bit_le_signed, 'j_'
        end

        describe "with modifier '!'" do
          it_behaves_like :string_unpack_32bit_le, 'j!'
          it_behaves_like :string_unpack_32bit_le_signed, 'j!'
        end
      end
    end

    big_endian do
      describe "String#unpack with format 'J'" do
        describe "with modifier '_'" do
          it_behaves_like :string_unpack_32bit_be, 'J_'
          it_behaves_like :string_unpack_32bit_be_unsigned, 'J_'
        end

        describe "with modifier '!'" do
          it_behaves_like :string_unpack_32bit_be, 'J!'
          it_behaves_like :string_unpack_32bit_be_unsigned, 'J!'
        end
      end

      describe "String#unpack with format 'j'" do
        describe "with modifier '_'" do
          it_behaves_like :string_unpack_32bit_be, 'j_'
          it_behaves_like :string_unpack_32bit_be_signed, 'j_'
        end

        describe "with modifier '!'" do
          it_behaves_like :string_unpack_32bit_be, 'j!'
          it_behaves_like :string_unpack_32bit_be_signed, 'j!'
        end
      end
    end

    describe "String#unpack with format 'J'" do
      describe "with modifier '<'" do
        it_behaves_like :string_unpack_32bit_le, 'J<'
        it_behaves_like :string_unpack_32bit_le_unsigned, 'J<'
      end

      describe "with modifier '>'" do
        it_behaves_like :string_unpack_32bit_be, 'J>'
        it_behaves_like :string_unpack_32bit_be_unsigned, 'J>'
      end

      describe "with modifier '<' and '_'" do
        it_behaves_like :string_unpack_32bit_le, 'J<_'
        it_behaves_like :string_unpack_32bit_le, 'J_<'
        it_behaves_like :string_unpack_32bit_le_unsigned, 'J<_'
        it_behaves_like :string_unpack_32bit_le_unsigned, 'J_<'
      end

      describe "with modifier '<' and '!'" do
        it_behaves_like :string_unpack_32bit_le, 'J<!'
        it_behaves_like :string_unpack_32bit_le, 'J!<'
        it_behaves_like :string_unpack_32bit_le_unsigned, 'J<!'
        it_behaves_like :string_unpack_32bit_le_unsigned, 'J!<'
      end

      describe "with modifier '>' and '_'" do
        it_behaves_like :string_unpack_32bit_be, 'J>_'
        it_behaves_like :string_unpack_32bit_be, 'J_>'
        it_behaves_like :string_unpack_32bit_be_unsigned, 'J>_'
        it_behaves_like :string_unpack_32bit_be_unsigned, 'J_>'
      end

      describe "with modifier '>' and '!'" do
        it_behaves_like :string_unpack_32bit_be, 'J>!'
        it_behaves_like :string_unpack_32bit_be, 'J!>'
        it_behaves_like :string_unpack_32bit_be_unsigned, 'J>!'
        it_behaves_like :string_unpack_32bit_be_unsigned, 'J!>'
      end
    end

    describe "String#unpack with format 'j'" do
      describe "with modifier '<'" do
        it_behaves_like :string_unpack_32bit_le, 'j<'
        it_behaves_like :string_unpack_32bit_le_signed, 'j<'
      end

      describe "with modifier '>'" do
        it_behaves_like :string_unpack_32bit_be, 'j>'
        it_behaves_like :string_unpack_32bit_be_signed, 'j>'
      end

      describe "with modifier '<' and '_'" do
        it_behaves_like :string_unpack_32bit_le, 'j<_'
        it_behaves_like :string_unpack_32bit_le, 'j_<'
        it_behaves_like :string_unpack_32bit_le_signed, 'j<_'
        it_behaves_like :string_unpack_32bit_le_signed, 'j_<'
      end

      describe "with modifier '<' and '!'" do
        it_behaves_like :string_unpack_32bit_le, 'j<!'
        it_behaves_like :string_unpack_32bit_le, 'j!<'
        it_behaves_like :string_unpack_32bit_le_signed, 'j<!'
        it_behaves_like :string_unpack_32bit_le_signed, 'j!<'
      end

      describe "with modifier '>' and '_'" do
        it_behaves_like :string_unpack_32bit_be, 'j>_'
        it_behaves_like :string_unpack_32bit_be, 'j_>'
        it_behaves_like :string_unpack_32bit_be_signed, 'j>_'
        it_behaves_like :string_unpack_32bit_be_signed, 'j_>'
      end

      describe "with modifier '>' and '!'" do
        it_behaves_like :string_unpack_32bit_be, 'j>!'
        it_behaves_like :string_unpack_32bit_be, 'j!>'
        it_behaves_like :string_unpack_32bit_be_signed, 'j>!'
        it_behaves_like :string_unpack_32bit_be_signed, 'j!>'
      end
    end
  end
end
