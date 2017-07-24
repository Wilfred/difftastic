# -*- encoding: binary -*-
require File.expand_path('../spec_helper', __FILE__)

load_extension("integer")

describe "CApiIntegerSpecs" do
  before :each do
    @s = CApiIntegerSpecs.new
  end

  describe "rb_integer_pack" do
    it "converts zero" do
      words = "\000" * 9
      result = @s.rb_integer_pack(0, words, 1, 9, 0,
          CApiIntegerSpecs::BIG_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
      result.should == 0
      words.should == "\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    end

    describe "without two's complement flag" do
      before :each do
        @value = 0x9876_abcd_4532_ef01_0123_4567_89ab_cdef
        @words = "\000" * 16
      end

      describe "with big endian output" do
        it "converts a positive number" do
          result = @s.rb_integer_pack(@value, @words, 2, 8, 0,
              CApiIntegerSpecs::BIG_ENDIAN)
          result.should == 1
          @words.should == "\x98\x76\xAB\xCD\x45\x32\xEF\x01\x01\x23\x45\x67\x89\xAB\xCD\xEF"
        end

        it "converts a negative number" do
          result = @s.rb_integer_pack(-@value, @words, 2, 8, 0,
              CApiIntegerSpecs::BIG_ENDIAN)
          result.should == -1
          @words.should == "\x98\x76\xAB\xCD\x45\x32\xEF\x01\x01\x23\x45\x67\x89\xAB\xCD\xEF"
        end

        it "converts a negative number exactly -2**(numwords*wordsize*8)" do
          result = @s.rb_integer_pack(-2**(2*8*8), @words, 2, 8, 0,
              CApiIntegerSpecs::BIG_ENDIAN)
          result.should == -2
          @words.should == "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        end
      end

      describe "with little endian output" do
        it "converts a positive number" do
          result = @s.rb_integer_pack(@value, @words, 2, 8, 0,
              CApiIntegerSpecs::LITTLE_ENDIAN)
          result.should == 1
          @words.should == "\xEF\xCD\xAB\x89\x67\x45\x23\x01\x01\xEF\x32\x45\xCD\xAB\x76\x98"
        end

        it "converts a negative number" do
          result = @s.rb_integer_pack(-@value, @words, 2, 8, 0,
              CApiIntegerSpecs::LITTLE_ENDIAN)
          result.should == -1
          @words.should == "\xEF\xCD\xAB\x89\x67\x45\x23\x01\x01\xEF\x32\x45\xCD\xAB\x76\x98"
        end

        it "converts a negative number exactly -2**(numwords*wordsize*8)" do
          result = @s.rb_integer_pack(-2**(2*8*8), @words, 2, 8, 0,
              CApiIntegerSpecs::LITTLE_ENDIAN)
          result.should == -2
          @words.should == "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        end
      end
    end

    describe "with two's complement flag" do
      describe "with input less than 64 bits" do
        before :each do
          @value = 0x0123_4567_89ab_cdef
          @words = "\000" * 8
        end

        describe "with big endian output" do
          it "converts a positive number" do
            result = @s.rb_integer_pack(@value, @words, 1, 8, 0,
                CApiIntegerSpecs::BIG_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
            result.should == 1
            @words.should == "\x01\x23\x45\x67\x89\xAB\xCD\xEF"
          end

          it "converts a negative number" do
            result = @s.rb_integer_pack(-@value, @words, 1, 8, 0,
                CApiIntegerSpecs::BIG_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
            result.should == -1
            @words.should == "\xFE\xDC\xBA\x98\x76\x54\x32\x11"
          end
        end

        describe "with little endian output" do
          it "converts a positive number" do
            result = @s.rb_integer_pack(@value, @words, 1, 8, 0,
                CApiIntegerSpecs::LITTLE_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
            result.should == 1
            @words.should == "\xEF\xCD\xAB\x89\x67\x45\x23\x01"
          end

          it "converts a negative number" do
            result = @s.rb_integer_pack(-@value, @words, 1, 8, 0,
                CApiIntegerSpecs::LITTLE_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
            result.should == -1
            @words.should == "\x11\x32\x54\x76\x98\xBA\xDC\xFE"
          end
        end

        describe "with native endian output" do
          big_endian do
            it "converts a positive number" do
              result = @s.rb_integer_pack(@value, @words, 1, 8, 0,
                  CApiIntegerSpecs::NATIVE|CApiIntegerSpecs::PACK_2COMP)
              result.should == 1
              @words.should == "\x01\x23\x45\x67\x89\xAB\xCD\xEF"
            end

            it "converts a negative number" do
              result = @s.rb_integer_pack(-@value, @words, 1, 8, 0,
                  CApiIntegerSpecs::NATIVE|CApiIntegerSpecs::PACK_2COMP)
              result.should == -1
              @words.should == "\xFE\xDC\xBA\x98\x76\x54\x32\x11"
            end
          end

          little_endian do
            it "converts a positive number" do
              result = @s.rb_integer_pack(@value, @words, 1, 8, 0,
                  CApiIntegerSpecs::NATIVE|CApiIntegerSpecs::PACK_2COMP)
              result.should == 1
              @words.should == "\xEF\xCD\xAB\x89\x67\x45\x23\x01"
            end

            it "converts a negative number" do
              result = @s.rb_integer_pack(-@value, @words, 1, 8, 0,
                  CApiIntegerSpecs::NATIVE|CApiIntegerSpecs::PACK_2COMP)
              result.should == -1
              @words.should == "\x11\x32\x54\x76\x98\xBA\xDC\xFE"
            end
          end
        end
      end

      describe "with input greater than 64 bits" do
        before :each do
          @value = 0x9876_abcd_4532_ef01_0123_4567_89ab_cdef
          @words = "\000" * 16
        end

        describe "with big endian output" do
          it "converts a positive number" do
            result = @s.rb_integer_pack(@value, @words, 2, 8, 0,
                CApiIntegerSpecs::BIG_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
            result.should == 1
            @words.should == "\x98\x76\xAB\xCD\x45\x32\xEF\x01\x01\x23\x45\x67\x89\xAB\xCD\xEF"
          end

          it "converts a negative number" do
            result = @s.rb_integer_pack(-@value, @words, 2, 8, 0,
                CApiIntegerSpecs::BIG_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
            result.should == -1
            @words.should == "\x67\x89\x54\x32\xBA\xCD\x10\xFE\xFE\xDC\xBA\x98\x76\x54\x32\x11"
          end

          describe "with overflow" do
            before :each do
              @words = "\000" * 9
            end

            it "converts a positive number" do
              result = @s.rb_integer_pack(@value, @words, 1, 9, 0,
                  CApiIntegerSpecs::BIG_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
              result.should == 2
              @words.should == "\x01\x01\x23\x45\x67\x89\xAB\xCD\xEF"
            end

            it "converts a negative number" do
              result = @s.rb_integer_pack(-@value, @words, 1, 9, 0,
                  CApiIntegerSpecs::BIG_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
              result.should == -2
              @words.should == "\xFE\xFE\xDC\xBA\x98\x76\x54\x32\x11"
            end

            it "converts a negative number exactly -2**(numwords*wordsize*8)" do
              result = @s.rb_integer_pack(-2**(9*8), @words, 1, 9, 0,
                  CApiIntegerSpecs::BIG_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
              result.should == -1
              @words.should == "\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            end
          end
        end

        describe "with little endian output" do
          it "converts a positive number" do
            result = @s.rb_integer_pack(@value, @words, 2, 8, 0,
                CApiIntegerSpecs::LITTLE_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
            result.should == 1
            @words.should == "\xEF\xCD\xAB\x89\x67\x45\x23\x01\x01\xEF\x32\x45\xCD\xAB\x76\x98"
          end

          it "converts a negative number" do
            result = @s.rb_integer_pack(-@value, @words, 2, 8, 0,
                CApiIntegerSpecs::LITTLE_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
            result.should == -1
            @words.should == "\x11\x32\x54\x76\x98\xBA\xDC\xFE\xFE\x10\xCD\xBA\x32\x54\x89\x67"
          end

          describe "with overflow" do
            before :each do
              @words = "\000" * 9
            end

            it "converts a positive number" do
              result = @s.rb_integer_pack(@value, @words, 1, 9, 0,
                  CApiIntegerSpecs::LITTLE_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
              result.should == 2
              @words.should == "\xEF\xCD\xAB\x89\x67\x45\x23\x01\x01"
            end

            it "converts a negative number" do
              result = @s.rb_integer_pack(-@value, @words, 1, 9, 0,
                  CApiIntegerSpecs::LITTLE_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
              result.should == -2
              @words.should == "\x11\x32\x54\x76\x98\xBA\xDC\xFE\xFE"
            end

            it "converts a negative number exactly -2**(numwords*wordsize*8)" do
              result = @s.rb_integer_pack(-2**(9*8), @words, 1, 9, 0,
                  CApiIntegerSpecs::LITTLE_ENDIAN|CApiIntegerSpecs::PACK_2COMP)
              result.should == -1
              @words.should == "\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            end
          end
        end

        describe "with native endian output" do
          big_endian do
            it "converts a positive number" do
              result = @s.rb_integer_pack(@value, @words, 1, 16, 0,
                  CApiIntegerSpecs::NATIVE|CApiIntegerSpecs::PACK_2COMP)
              result.should == 1
              @words.should == "\x98\x76\xAB\xCD\x45\x32\xEF\x01\x01\x23\x45\x67\x89\xAB\xCD\xEF"
            end

            it "converts a negative number" do
              result = @s.rb_integer_pack(-@value, @words, 1, 16, 0,
                  CApiIntegerSpecs::NATIVE|CApiIntegerSpecs::PACK_2COMP)
              result.should == -1
              @words.should == "\x67\x89\x54\x32\xBA\xCD\x10\xFE\xFE\xDC\xBA\x98\x76\x54\x32\x11"
            end
          end

          little_endian do
            it "converts a positive number" do
              result = @s.rb_integer_pack(@value, @words, 1, 16, 0,
                  CApiIntegerSpecs::NATIVE|CApiIntegerSpecs::PACK_2COMP)
              result.should == 1
              @words.should == "\xEF\xCD\xAB\x89\x67\x45\x23\x01\x01\xEF\x32\x45\xCD\xAB\x76\x98"
            end

            it "converts a negative number" do
              result = @s.rb_integer_pack(-@value, @words, 1, 16, 0,
                  CApiIntegerSpecs::NATIVE|CApiIntegerSpecs::PACK_2COMP)
              result.should == -1
              @words.should == "\x11\x32\x54\x76\x98\xBA\xDC\xFE\xFE\x10\xCD\xBA\x32\x54\x89\x67"
            end
          end
        end
      end
    end
  end
end
