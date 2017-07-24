# -*- encoding: utf-8 -*-
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/encoding', __FILE__)

load_extension('encoding')

describe :rb_enc_get_index, shared: true do
  it "returns the index of the encoding of a String" do
    @s.send(@method, "string").should >= 0
  end

  it "returns the index of the encoding of a Regexp" do
    @s.send(@method, /regexp/).should >= 0
  end

  it "returns the index of the encoding of an Object" do
    obj = mock("rb_enc_get_index string")
    @s.rb_enc_set_index(obj, 1)
    @s.send(@method, obj).should == 1
  end

  it "returns the index of the dummy encoding of an Object" do
    obj = mock("rb_enc_get_index string")
    index = Encoding.list.index(Encoding::UTF_16)
    @s.rb_enc_set_index(obj, index)
    @s.send(@method, obj).should == index
  end

  it "returns 0 for an object without an encoding" do
    obj = mock("rb_enc_get_index string")
    @s.send(@method, obj).should == 0
  end
end

describe :rb_enc_set_index, shared: true do
  it "sets the object's encoding to the Encoding specified by the index" do
    obj = "abc"
    result = @s.send(@method, obj, 2)

    # This is used because indexes should be considered implementation
    # dependent. So a pair is returned:
    #   [rb_enc_find_index()->name, rb_enc_get(obj)->name]
    result.first.should == result.last
  end

  it "associates an encoding with a subclass of String" do
    str = CApiEncodingSpecs::S.new "abc"
    result = @s.send(@method, str, 1)
    result.first.should == result.last
  end

  it "associates an encoding with an object" do
    obj = mock("rb_enc_set_index string")
    result = @s.send(@method, obj, 1)
    result.first.should == result.last
  end
end

describe "C-API Encoding function" do
  before :each do
    @s = CApiEncodingSpecs.new
  end

  describe "rb_encdb_alias" do
    it "creates an alias for an existing Encoding" do
      @s.rb_encdb_alias("ZOMGWTFBBQ", "UTF-8").should >= 0
      Encoding.find("ZOMGWTFBBQ").name.should == "UTF-8"
    end
  end

  describe "rb_enc_find" do
    it "returns the encoding of an Encoding" do
      @s.rb_enc_find("UTF-8").should == "UTF-8"
    end

    it "returns the encoding of an Encoding specified with lower case" do
      @s.rb_enc_find("utf-8").should == "UTF-8"
    end
  end

  describe "rb_enc_find_index" do
    it "returns the index of an Encoding" do
      @s.rb_enc_find_index("UTF-8").should >= 0
    end

    it "returns the index of an Encoding specified with lower case" do
      @s.rb_enc_find_index("utf-8").should >= 0
    end

    it "returns -1 for an non existing encoding" do
      @s.rb_enc_find_index("non-existant-encoding").should == -1
    end
  end

  describe "rb_enc_from_index" do
    it "returns an Encoding" do
      @s.rb_enc_from_index(0).should be_an_instance_of(String)
    end
  end

  describe "rb_usascii_encoding" do
    it "returns the encoding for Encoding::US_ASCII" do
      @s.rb_usascii_encoding.should == "US-ASCII"
    end
  end

  describe "rb_ascii8bit_encoding" do
    it "returns the encoding for Encoding::ASCII_8BIT" do
      @s.rb_ascii8bit_encoding.should == "ASCII-8BIT"
    end
  end

  describe "rb_utf8_encoding" do
    it "returns the encoding for Encoding::UTF_8" do
      @s.rb_utf8_encoding.should == "UTF-8"
    end
  end

  describe "rb_enc_from_encoding" do
    it "returns an Encoding instance from an encoding data structure" do
      @s.rb_enc_from_encoding("UTF-8").should == Encoding::UTF_8
    end
  end

  describe "rb_locale_encoding" do
    it "returns the encoding for the current locale" do
      @s.rb_locale_encoding.should == Encoding.find('locale').name
    end
  end

  describe "rb_filesystem_encoding" do
    it "returns the encoding for the current filesystem" do
      @s.rb_filesystem_encoding.should == Encoding.find('filesystem').name
    end
  end

  describe "rb_enc_get" do
    it "returns the encoding ossociated with an object" do
      str = "abc".encode Encoding::ASCII_8BIT
      @s.rb_enc_get(str).should == "ASCII-8BIT"
    end
  end

  describe "rb_obj_encoding" do
    it "returns the encoding ossociated with an object" do
      str = "abc".encode Encoding::ASCII_8BIT
      @s.rb_obj_encoding(str).should == Encoding::ASCII_8BIT
    end
  end

  describe "rb_enc_get_index" do
    it_behaves_like :rb_enc_get_index, :rb_enc_get_index

    it "returns the index of the encoding of a Symbol" do
      @s.send(@method, :symbol).should >= 0
    end

    it "returns -1 as the index of nil" do
      @s.send(@method, nil).should == -1
    end

    it "returns -1 as the index for immediates" do
      @s.send(@method, 1).should == -1
    end
  end

  describe "rb_enc_set_index" do
    it_behaves_like :rb_enc_set_index, :rb_enc_set_index
  end

  describe "rb_enc_str_new" do
    it "returns a String in US-ASCII encoding when high bits are set" do
      xEE = [0xEE].pack('C').force_encoding('utf-8')
      result = @s.rb_enc_str_new(xEE, 1, Encoding::US_ASCII)
      result.encoding.should equal(Encoding::US_ASCII)
    end
  end

  describe "rb_enc_str_coderange" do
    describe "when the encoding is ASCII-8BIT" do
      it "returns ENC_CODERANGE_7BIT if there are no high bits set" do
        result = @s.rb_enc_str_coderange("abc".force_encoding("ascii-8bit"))
        result.should == :coderange_7bit
      end

      it "returns ENC_CODERANGE_VALID if there are high bits set" do
        xEE = [0xEE].pack('C').force_encoding('utf-8')
        result = @s.rb_enc_str_coderange(xEE.force_encoding("ascii-8bit"))
        result.should == :coderange_valid
      end
    end

    describe "when the encoding is UTF-8" do
      it "returns ENC_CODERANGE_7BIT if there are no high bits set" do
        result = @s.rb_enc_str_coderange("abc".force_encoding("utf-8"))
        result.should == :coderange_7bit
      end

      it "returns ENC_CODERANGE_VALID if there are high bits set in a valid string" do
        result = @s.rb_enc_str_coderange("\xE3\x81\x82".force_encoding("utf-8"))
        result.should == :coderange_valid
      end

      it "returns ENC_CODERANGE_BROKEN if there are high bits set in an invalid string" do
        result = @s.rb_enc_str_coderange([0xEE].pack('C').force_encoding("utf-8"))
        result.should == :coderange_broken
      end
    end

    describe "when the encoding is US-ASCII" do
      it "returns ENC_CODERANGE_7BIT if there are no high bits set" do
        result = @s.rb_enc_str_coderange("abc".force_encoding("us-ascii"))
        result.should == :coderange_7bit
      end

      it "returns ENC_CODERANGE_BROKEN if there are high bits set" do
        result = @s.rb_enc_str_coderange([0xEE].pack('C').force_encoding("us-ascii"))
        result.should == :coderange_broken
      end
    end
  end

  describe "ENCODING_GET" do
    it_behaves_like :rb_enc_get_index, :ENCODING_GET
  end

  describe "ENCODING_SET" do
    it_behaves_like :rb_enc_set_index, :ENCODING_SET
  end

  describe "ENC_CODERANGE_ASCIIONLY" do
    it "returns true if the object encoding is only ASCII" do
      str = "abc".force_encoding("us-ascii")
      str.valid_encoding? # make sure to set the coderange
      @s.ENC_CODERANGE_ASCIIONLY(str).should be_true
    end

    it "returns false if the object encoding is not ASCII only" do
      str = "ありがとう".force_encoding("utf-8")
      @s.ENC_CODERANGE_ASCIIONLY(str).should be_false
    end
  end

  describe "rb_to_encoding" do
    it "returns the encoding for the Encoding instance passed" do
      @s.rb_to_encoding(Encoding::BINARY).should == "ASCII-8BIT"
    end

    it "returns the correct encoding for a replicated encoding" do
      @s.rb_to_encoding(Encoding::IBM857).should == "IBM857"
    end

    it "returns the encoding when passed a String" do
      @s.rb_to_encoding("ASCII").should == "US-ASCII"
    end

    it "calls #to_str to convert the argument to a String" do
      obj = mock("rb_to_encoding Encoding name")
      obj.should_receive(:to_str).and_return("utf-8")

      @s.rb_to_encoding(obj).should == "UTF-8"
    end
  end

  describe "rb_to_encoding_index" do
    it "returns the index of the encoding for the Encoding instance passed" do
      @s.rb_to_encoding_index(Encoding::BINARY).should >= 0
    end

    it "returns the index of the encoding when passed a String" do
      @s.rb_to_encoding_index("ASCII").should >= 0
    end

    it "returns the index of the dummy encoding of an Object" do
      index = Encoding.list.index(Encoding::UTF_16)
      @s.rb_to_encoding_index(Encoding::UTF_16.name).should == index
    end

    it "calls #to_str to convert the argument to a String" do
      obj = mock("rb_to_encoding Encoding name")
      obj.should_receive(:to_str).and_return("utf-8")

      @s.rb_to_encoding_index(obj).should >= 0
    end
  end

  describe "rb_enc_compatible" do
    it "returns 0 if the encodings of the Strings are not compatible" do
      a = [0xff].pack('C').force_encoding "ascii-8bit"
      b = "\u3042".encode("utf-8")
      @s.rb_enc_compatible(a, b).should == 0
    end

    # The coverage of this sucks, but there is not a simple way (yet?) to
    # easily share the specs between rb_enc_compatible and
    # Encoding.compatible?
    it "returns the same value as Encoding.compatible? if the Strings have a compatible encoding" do
      a = "abc".force_encoding("us-ascii")
      b = "\u3042".encode("utf-8")
      @s.rb_enc_compatible(a, b).should == Encoding.compatible?(a, b)
    end
  end

  describe "rb_enc_copy" do
    before :each do
      @obj = "rb_enc_copy".encode(Encoding::US_ASCII)
    end

    it "sets the encoding of a String to that of the second argument" do
      @s.rb_enc_copy("string", @obj).encoding.should == Encoding::US_ASCII
    end

    it "raises a RuntimeError if the second argument is a Symbol" do
      lambda { @s.rb_enc_copy(:symbol, @obj) }.should raise_error(RuntimeError)
    end

    it "sets the encoding of a Regexp to that of the second argument" do
      @s.rb_enc_copy(/regexp/, @obj).encoding.should == Encoding::US_ASCII
    end
  end

  describe "rb_default_internal_encoding" do
    before :each do
      @default = Encoding.default_internal
    end

    after :each do
      Encoding.default_internal = @default
    end

    it "returns 0 if Encoding.default_internal is nil" do
      Encoding.default_internal = nil
      @s.rb_default_internal_encoding.should be_nil
    end

    it "returns the encoding for Encoding.default_internal" do
      Encoding.default_internal = "US-ASCII"
      @s.rb_default_internal_encoding.should == "US-ASCII"
      Encoding.default_internal = "UTF-8"
      @s.rb_default_internal_encoding.should == "UTF-8"
    end
  end

  describe "rb_default_external_encoding" do
    before :each do
      @default = Encoding.default_external
    end

    after :each do
      Encoding.default_external = @default
    end

    it "returns the encoding for Encoding.default_external" do
      Encoding.default_external = "BINARY"
      @s.rb_default_external_encoding.should == "ASCII-8BIT"
    end
  end

  describe "rb_enc_associate" do
    it "sets the encoding of a String to the encoding" do
      @s.rb_enc_associate("string", "ASCII-8BIT").encoding.should == Encoding::ASCII_8BIT
    end

    it "raises a RuntimeError if the argument is Symbol" do
      lambda { @s.rb_enc_associate(:symbol, "US-ASCII") }.should raise_error(RuntimeError)
    end

    it "sets the encoding of a Regexp to the encoding" do
      @s.rb_enc_associate(/regexp/, "ASCII-8BIT").encoding.should == Encoding::ASCII_8BIT
    end

    it "sets the encoding of a String to a default when the encoding is NULL" do
      @s.rb_enc_associate("string", nil).encoding.should == Encoding::ASCII_8BIT
    end
  end

  describe "rb_enc_associate_index" do
    it "sets the encoding of a String to the encoding" do
      index = @s.rb_enc_find_index("ASCII-8BIT")
      enc = @s.rb_enc_associate_index("string", index).encoding
      enc.should == Encoding::ASCII_8BIT
    end

    it "sets the encoding of a Regexp to the encoding" do
      index = @s.rb_enc_find_index("UTF-8")
      enc = @s.rb_enc_associate_index(/regexp/, index).encoding
      enc.should == Encoding::UTF_8
    end

    it "sets the encoding of a Symbol to the encoding" do
      index = @s.rb_enc_find_index("UTF-8")
      lambda { @s.rb_enc_associate_index(:symbol, index) }.should raise_error(RuntimeError)
    end
  end

  describe "rb_ascii8bit_encindex" do
    it "returns an index for the ASCII-8BIT encoding" do
      @s.rb_ascii8bit_encindex().should >= 0
    end
  end

  describe "rb_utf8_encindex" do
    it "returns an index for the UTF-8 encoding" do
      @s.rb_utf8_encindex().should >= 0
    end
  end

  describe "rb_usascii_encindex" do
    it "returns an index for the US-ASCII encoding" do
      @s.rb_usascii_encindex().should >= 0
    end
  end

  describe "rb_locale_encindex" do
    it "returns an index for the locale encoding" do
      @s.rb_locale_encindex().should >= 0
    end
  end

  describe "rb_filesystem_encindex" do
    it "returns an index for the filesystem encoding" do
      @s.rb_filesystem_encindex().should >= 0
    end
  end

  describe "rb_enc_to_index" do
    it "returns an index for the encoding" do
      @s.rb_enc_to_index("UTF-8").should >= 0
    end

    it "returns a non-negative int if the encoding is not defined" do
      # Encoding indexes are an implementation detail and not guaranteed
      # across implementations.
      @s.rb_enc_to_index("FTU-81").should >= 0
    end
  end

  describe "rb_enc_nth" do
    it "returns the byte index of the given character index" do
      @s.rb_enc_nth("hüllo", 3).should == 4
    end
  end

  describe "rb_enc_codepoint_len" do
    it "raises ArgumentError if an empty string is given" do
      lambda do
        @s.rb_enc_codepoint_len("")
      end.should raise_error(ArgumentError)
    end

    it "raises ArgumentError if an invalid byte sequence is given" do
      lambda do
        @s.rb_enc_codepoint_len([0xa0, 0xa1].pack('CC').force_encoding('utf-8')) # Invalid sequence identifier
      end.should raise_error(ArgumentError)
    end

    it "returns codepoint 0x24 and length 1 for character '$'" do
      codepoint, length = @s.rb_enc_codepoint_len("$")

      codepoint.should == 0x24
      length.should == 1
    end

    it "returns codepoint 0xA2 and length 2 for character '¢'" do
      codepoint, length = @s.rb_enc_codepoint_len("¢")

      codepoint.should == 0xA2
      length.should == 2
    end

    it "returns codepoint 0x20AC and length 3 for character '€'" do
      codepoint, length = @s.rb_enc_codepoint_len("€")

      codepoint.should == 0x20AC
      length.should == 3
    end

    it "returns codepoint 0x24B62 and length 4 for character '𤭢'" do
      codepoint, length = @s.rb_enc_codepoint_len("𤭢")

      codepoint.should == 0x24B62
      length.should == 4
    end
  end
end
