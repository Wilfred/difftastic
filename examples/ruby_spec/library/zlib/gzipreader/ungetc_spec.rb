require File.expand_path('../../../../spec_helper', __FILE__)
require 'stringio'
require 'zlib'

describe 'GzipReader#ungetc' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end

  describe 'at the start of the stream' do
    before :each do
      @gz = Zlib::GzipReader.new(@io, external_encoding: Encoding::UTF_8)
    end

    describe 'with a single-byte character' do
      it 'prepends the character to the stream' do
        @gz.ungetc 'x'
        @gz.read.should == 'x12345abcde'
      end

      ruby_bug "#13616", ""..."2.6" do
        it 'decrements pos' do
          @gz.ungetc 'x'
          @gz.pos.should == -1
        end
      end
    end

    describe 'with a multi-byte character' do
      it 'prepends the character to the stream' do
        @gz.ungetc 'ŷ'
        @gz.read.should == 'ŷ12345abcde'
      end

      ruby_bug "#13616", ""..."2.6" do
        it 'decrements pos' do
          @gz.ungetc 'ŷ'
          @gz.pos.should == -2
        end
      end
    end

    describe 'with a multi-character string' do
      it 'prepends the characters to the stream' do
        @gz.ungetc 'xŷž'
        @gz.read.should == 'xŷž12345abcde'
      end

      ruby_bug "#13616", ""..."2.6" do
        it 'decrements pos' do
          @gz.ungetc 'xŷž'
          @gz.pos.should == -5
        end
      end
    end

    describe 'with an integer' do
      it 'prepends the corresponding character to the stream' do
        @gz.ungetc 0x21
        @gz.read.should == '!12345abcde'
      end

      ruby_bug "#13616", ""..."2.6" do
        it 'decrements pos' do
          @gz.ungetc 0x21
          @gz.pos.should == -1
        end
      end
    end

    describe 'with an empty string' do
      it 'does not prepend anything to the stream' do
        @gz.ungetc ''
        @gz.read.should == '12345abcde'
      end

      it 'does not decrement pos' do
        @gz.ungetc ''
        @gz.pos.should == 0
      end
    end

    quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not prepend anything to the stream' do
          @gz.ungetc nil
          @gz.read.should == '12345abcde'
        end

        it 'does not decrement pos' do
          @gz.ungetc nil
          @gz.pos.should == 0
        end
      end
    end
  end

  describe 'in the middle of the stream' do
    before :each do
      @gz = Zlib::GzipReader.new(@io, external_encoding: Encoding::UTF_8)
      @gz.read 5
    end

    describe 'with a single-byte character' do
      it 'inserts the character into the stream' do
        @gz.ungetc 'x'
        @gz.read.should == 'xabcde'
      end

      it 'decrements pos' do
        @gz.ungetc 'x'
        @gz.pos.should == 4
      end
    end

    describe 'with a multi-byte character' do
      it 'inserts the character into the stream' do
        @gz.ungetc 'ŷ'
        @gz.read.should == 'ŷabcde'
      end

      it 'decrements pos' do
        @gz.ungetc 'ŷ'
        @gz.pos.should == 3
      end
    end

    describe 'with a multi-character string' do
      it 'inserts the characters into the stream' do
        @gz.ungetc 'xŷž'
        @gz.read.should == 'xŷžabcde'
      end

      it 'decrements pos' do
        @gz.ungetc 'xŷž'
        @gz.pos.should == 0
      end
    end

    describe 'with an integer' do
      it 'inserts the corresponding character into the stream' do
        @gz.ungetc 0x21
        @gz.read.should == '!abcde'
      end

      it 'decrements pos' do
        @gz.ungetc 0x21
        @gz.pos.should == 4
      end
    end

    describe 'with an empty string' do
      it 'does not insert anything into the stream' do
        @gz.ungetc ''
        @gz.read.should == 'abcde'
      end

      it 'does not decrement pos' do
        @gz.ungetc ''
        @gz.pos.should == 5
      end
    end

    quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not insert anything into the stream' do
          @gz.ungetc nil
          @gz.read.should == 'abcde'
        end

        it 'does not decrement pos' do
          @gz.ungetc nil
          @gz.pos.should == 5
        end
      end
    end
  end

  describe 'at the end of the stream' do
    before :each do
      @gz = Zlib::GzipReader.new(@io, external_encoding: Encoding::UTF_8)
      @gz.read
    end

    describe 'with a single-byte character' do
      it 'appends the character to the stream' do
        @gz.ungetc 'x'
        @gz.read.should == 'x'
      end

      it 'decrements pos' do
        @gz.ungetc 'x'
        @gz.pos.should == 9
      end

      it 'makes eof? false' do
        @gz.ungetc 'x'
        @gz.eof?.should be_false
      end
    end

    describe 'with a multi-byte character' do
      it 'appends the character to the stream' do
        @gz.ungetc 'ŷ'
        @gz.read.should == 'ŷ'
      end

      it 'decrements pos' do
        @gz.ungetc 'ŷ'
        @gz.pos.should == 8
      end

      it 'makes eof? false' do
        @gz.ungetc 'ŷ'
        @gz.eof?.should be_false
      end
    end

    describe 'with a multi-character string' do
      it 'appends the characters to the stream' do
        @gz.ungetc 'xŷž'
        @gz.read.should == 'xŷž'
      end

      it 'decrements pos' do
        @gz.ungetc 'xŷž'
        @gz.pos.should == 5
      end

      it 'makes eof? false' do
        @gz.ungetc 'xŷž'
        @gz.eof?.should be_false
      end
    end

    describe 'with an integer' do
      it 'appends the corresponding character to the stream' do
        @gz.ungetc 0x21
        @gz.read.should == '!'
      end

      it 'decrements pos' do
        @gz.ungetc 0x21
        @gz.pos.should == 9
      end

      it 'makes eof? false' do
        @gz.ungetc 0x21
        @gz.eof?.should be_false
      end
    end

    describe 'with an empty string' do
      it 'does not append anything to the stream' do
        @gz.ungetc ''
        @gz.read.should == ''
      end

      it 'does not decrement pos' do
        @gz.ungetc ''
        @gz.pos.should == 10
      end

      it 'does not make eof? false' do
        @gz.ungetc ''
        @gz.eof?.should be_true
      end
    end

    quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not append anything to the stream' do
          @gz.ungetc nil
          @gz.read.should == ''
        end

        it 'does not decrement pos' do
          @gz.ungetc nil
          @gz.pos.should == 10
        end

        it 'does not make eof? false' do
          @gz.ungetc nil
          @gz.eof?.should be_true
        end
      end
    end
  end
end
