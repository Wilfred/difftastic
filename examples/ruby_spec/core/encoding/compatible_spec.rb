# -*- encoding: ascii-8bit -*-

require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  # TODO: add IO

  describe "Encoding.compatible? String, String" do
    describe "when the first's Encoding is valid US-ASCII" do
      before :each do
        @str = "abc".force_encoding Encoding::US_ASCII
      end

      it "returns US-ASCII when the second's is US-ASCII" do
        Encoding.compatible?(@str, "def".encode("us-ascii")).should == Encoding::US_ASCII
      end

      it "returns US-ASCII if the second String is ASCII-8BIT and ASCII only" do
        Encoding.compatible?(@str, "\x7f").should == Encoding::US_ASCII
      end

      it "returns ASCII-8BIT if the second String is ASCII-8BIT but not ASCII only" do
        Encoding.compatible?(@str, "\xff").should == Encoding::ASCII_8BIT
      end

      it "returns US-ASCII if the second String is UTF-8 and ASCII only" do
        Encoding.compatible?(@str, "\x7f".encode("utf-8")).should == Encoding::US_ASCII
      end

      it "returns UTF-8 if the second String is UTF-8 but not ASCII only" do
        Encoding.compatible?(@str, "\u3042".encode("utf-8")).should == Encoding::UTF_8
      end
    end

    describe "when the first's Encoding is ASCII compatible and ASCII only" do
      it "returns the first's Encoding if the second is ASCII compatible and ASCII only" do
        [ [Encoding, "abc".force_encoding("UTF-8"), "123".force_encoding("Shift_JIS"), Encoding::UTF_8],
          [Encoding, "123".force_encoding("Shift_JIS"), "abc".force_encoding("UTF-8"), Encoding::Shift_JIS]
        ].should be_computed_by(:compatible?)
      end

      it "returns the first's Encoding if the second is ASCII compatible and ASCII only" do
        [ [Encoding, "abc".force_encoding("ASCII-8BIT"), "123".force_encoding("US-ASCII"), Encoding::ASCII_8BIT],
          [Encoding, "123".force_encoding("US-ASCII"), "abc".force_encoding("ASCII-8BIT"), Encoding::US_ASCII]
        ].should be_computed_by(:compatible?)
      end

      it "returns the second's Encoding if the second is ASCII compatible but not ASCII only" do
        [ [Encoding, "abc".force_encoding("UTF-8"), "\xff".force_encoding("Shift_JIS"), Encoding::Shift_JIS],
          [Encoding, "123".force_encoding("Shift_JIS"), "\xff".force_encoding("UTF-8"), Encoding::UTF_8],
          [Encoding, "abc".force_encoding("ASCII-8BIT"), "\xff".force_encoding("US-ASCII"), Encoding::US_ASCII],
          [Encoding, "123".force_encoding("US-ASCII"), "\xff".force_encoding("ASCII-8BIT"), Encoding::ASCII_8BIT],
        ].should be_computed_by(:compatible?)
      end

      it "returns nil if the second's Encoding is not ASCII compatible" do
        a = "abc".force_encoding("UTF-8")
        b = "123".force_encoding("UTF-16LE")
        Encoding.compatible?(a, b).should be_nil
      end
    end

    describe "when the first's Encoding is ASCII compatible but not ASCII only" do
      it "returns the first's Encoding if the second's is valid US-ASCII" do
        Encoding.compatible?("\xff", "def".encode("us-ascii")).should == Encoding::ASCII_8BIT
      end

      it "returns the first's Encoding if the second's is UTF-8 and ASCII only" do
        Encoding.compatible?("\xff", "\u{7f}".encode("utf-8")).should == Encoding::ASCII_8BIT
      end

      it "returns nil if the second encoding is ASCII compatible but neither String's encoding is ASCII only" do
        Encoding.compatible?("\xff", "\u3042".encode("utf-8")).should be_nil
      end
    end

    describe "when the first's Encoding is not ASCII compatible" do
      before :each do
        @str = "abc".force_encoding Encoding::UTF_7
      end

      it "returns nil when the second String is US-ASCII" do
        Encoding.compatible?(@str, "def".encode("us-ascii")).should be_nil
      end

      it "returns nil when the second String is ASCII-8BIT and ASCII only" do
        Encoding.compatible?(@str, "\x7f").should be_nil
      end

      it "returns nil when the second String is ASCII-8BIT but not ASCII only" do
        Encoding.compatible?(@str, "\xff").should be_nil
      end

      it "returns the Encoding when the second's Encoding is not ASCII compatible but the same as the first's Encoding" do
        encoding = Encoding.compatible?(@str, "def".force_encoding("utf-7"))
        encoding.should == Encoding::UTF_7
      end
    end

    describe "when the first's Encoding is invalid" do
      before :each do
        @str = "\xff".force_encoding Encoding::UTF_8
      end

      it "returns the first's Encoding when the second's Encoding is US-ASCII" do
        Encoding.compatible?(@str, "def".encode("us-ascii")).should == Encoding::UTF_8
      end

      it "returns the first's Encoding when the second String is ASCII only" do
        Encoding.compatible?(@str, "\x7f").should == Encoding::UTF_8
      end

      it "returns nil when the second's Encoding is ASCII-8BIT but not ASCII only" do
        Encoding.compatible?(@str, "\xff").should be_nil
      end

      it "returns nil when the second's Encoding is invalid and ASCII only" do
        Encoding.compatible?(@str, "\x7f".force_encoding("utf-16be")).should be_nil
      end

      it "returns nil when the second's Encoding is invalid and not ASCII only" do
        Encoding.compatible?(@str, "\xff".force_encoding("utf-16be")).should be_nil
      end

      it "returns the Encoding when the second's Encoding is invalid but the same as the first" do
        Encoding.compatible?(@str, @str).should == Encoding::UTF_8
      end
    end

    describe "when the first String is empty and the second is not" do
      describe "and the first's Encoding is ASCII compatible" do
        before :each do
          @str = "".force_encoding("utf-8")
        end

        it "returns the first's encoding when the second String is ASCII only" do
          Encoding.compatible?(@str, "def".encode("us-ascii")).should == Encoding::UTF_8
        end

        it "returns the second's encoding when the second String is not ASCII only" do
          Encoding.compatible?(@str, "def".encode("utf-32le")).should == Encoding::UTF_32LE
        end
      end

      describe "when the first's Encoding is not ASCII compatible" do
        before :each do
          @str = "".force_encoding Encoding::UTF_7
        end

        it "returns the second string's encoding" do
          Encoding.compatible?(@str, "def".encode("us-ascii")).should == Encoding::US_ASCII
        end
      end
    end

    describe "when the second String is empty" do
      before :each do
        @str = "abc".force_encoding("utf-7")
      end

      it "returns the first Encoding" do
        Encoding.compatible?(@str, "").should == Encoding::UTF_7
      end
    end
  end

  describe "Encoding.compatible? String, Regexp" do
    it "returns US-ASCII if both are US-ASCII" do
      str = "abc".force_encoding("us-ascii")
      Encoding.compatible?(str, /abc/).should == Encoding::US_ASCII
    end

    it "returns the String's Encoding if it is not US-ASCII but both are ASCII only" do
      [ [Encoding, "abc",                     Encoding::ASCII_8BIT],
        [Encoding, "abc".encode("utf-8"),     Encoding::UTF_8],
        [Encoding, "abc".encode("euc-jp"),    Encoding::EUC_JP],
        [Encoding, "abc".encode("shift_jis"), Encoding::Shift_JIS],
      ].should be_computed_by(:compatible?, /abc/)
    end

    it "returns the String's Encoding if the String is not ASCII only" do
      [ [Encoding, "\xff",                                  Encoding::ASCII_8BIT],
        [Encoding, "\u3042".encode("utf-8"),                Encoding::UTF_8],
        [Encoding, "\xa4\xa2".force_encoding("euc-jp"),     Encoding::EUC_JP],
        [Encoding, "\x82\xa0".force_encoding("shift_jis"),  Encoding::Shift_JIS],
      ].should be_computed_by(:compatible?, /abc/)
    end
  end

  describe "Encoding.compatible? String, Symbol" do
    it "returns US-ASCII if both are ASCII only" do
      str = "abc".force_encoding("us-ascii")
      Encoding.compatible?(str, :abc).should == Encoding::US_ASCII
    end

    it "returns the String's Encoding if it is not US-ASCII but both are ASCII only" do
      [ [Encoding, "abc",                     Encoding::ASCII_8BIT],
        [Encoding, "abc".encode("utf-8"),     Encoding::UTF_8],
        [Encoding, "abc".encode("euc-jp"),    Encoding::EUC_JP],
        [Encoding, "abc".encode("shift_jis"), Encoding::Shift_JIS],
      ].should be_computed_by(:compatible?, :abc)
    end

    it "returns the String's Encoding if the String is not ASCII only" do
      [ [Encoding, "\xff",                                  Encoding::ASCII_8BIT],
        [Encoding, "\u3042".encode("utf-8"),                Encoding::UTF_8],
        [Encoding, "\xa4\xa2".force_encoding("euc-jp"),     Encoding::EUC_JP],
        [Encoding, "\x82\xa0".force_encoding("shift_jis"),  Encoding::Shift_JIS],
      ].should be_computed_by(:compatible?, :abc)
    end
  end

  describe "Encoding.compatible? String, Encoding" do
    it "returns nil if the String's encoding is not ASCII compatible" do
      Encoding.compatible?("abc".encode("utf-32le"), Encoding::US_ASCII).should be_nil
    end

    it "returns nil if the Encoding is not ASCII compatible" do
      Encoding.compatible?("abc".encode("us-ascii"), Encoding::UTF_32LE).should be_nil
    end

    it "returns the String's encoding if the Encoding is US-ASCII" do
      [ [Encoding, "\xff",                                  Encoding::ASCII_8BIT],
        [Encoding, "\u3042".encode("utf-8"),                Encoding::UTF_8],
        [Encoding, "\xa4\xa2".force_encoding("euc-jp"),     Encoding::EUC_JP],
        [Encoding, "\x82\xa0".force_encoding("shift_jis"),  Encoding::Shift_JIS],
      ].should be_computed_by(:compatible?, Encoding::US_ASCII)
    end

    it "returns the Encoding if the String's encoding is ASCII compatible and the String is ASCII only" do
      str = "abc".encode("utf-8")

      Encoding.compatible?(str, Encoding::ASCII_8BIT).should == Encoding::ASCII_8BIT
      Encoding.compatible?(str, Encoding::UTF_8).should == Encoding::UTF_8
      Encoding.compatible?(str, Encoding::EUC_JP).should == Encoding::EUC_JP
      Encoding.compatible?(str, Encoding::Shift_JIS).should == Encoding::Shift_JIS
    end

    it "returns nil if the String's encoding is ASCII compatible but the string is not ASCII only" do
      Encoding.compatible?("\u3042".encode("utf-8"), Encoding::ASCII_8BIT).should be_nil
    end
  end

  describe "Encoding.compatible? Regexp, String" do
    it "returns US-ASCII if both are US-ASCII" do
      str = "abc".force_encoding("us-ascii")
      Encoding.compatible?(/abc/, str).should == Encoding::US_ASCII
    end

  end

  describe "Encoding.compatible? Regexp, Regexp" do
    it "returns US-ASCII if both are US-ASCII" do
      Encoding.compatible?(/abc/, /def/).should == Encoding::US_ASCII
    end

    it "returns the first's Encoding if it is not US-ASCII and not ASCII only" do
      [ [Encoding, Regexp.new("\xff"),                                  Encoding::ASCII_8BIT],
        [Encoding, Regexp.new("\u3042".encode("utf-8")),                Encoding::UTF_8],
        [Encoding, Regexp.new("\xa4\xa2".force_encoding("euc-jp")),     Encoding::EUC_JP],
        [Encoding, Regexp.new("\x82\xa0".force_encoding("shift_jis")),  Encoding::Shift_JIS],
      ].should be_computed_by(:compatible?, /abc/)
    end
  end

  describe "Encoding.compatible? Regexp, Symbol" do
    it "returns US-ASCII if both are US-ASCII" do
      Encoding.compatible?(/abc/, :def).should == Encoding::US_ASCII
    end

    it "returns the first's Encoding if it is not US-ASCII and not ASCII only" do
      [ [Encoding, Regexp.new("\xff"),                                  Encoding::ASCII_8BIT],
        [Encoding, Regexp.new("\u3042".encode("utf-8")),                Encoding::UTF_8],
        [Encoding, Regexp.new("\xa4\xa2".force_encoding("euc-jp")),     Encoding::EUC_JP],
        [Encoding, Regexp.new("\x82\xa0".force_encoding("shift_jis")),  Encoding::Shift_JIS],
      ].should be_computed_by(:compatible?, /abc/)
    end
  end

  describe "Encoding.compatible? Symbol, String" do
    it "returns US-ASCII if both are ASCII only" do
      str = "abc".force_encoding("us-ascii")
      Encoding.compatible?(str, :abc).should == Encoding::US_ASCII
    end
  end

  describe "Encoding.compatible? Symbol, Regexp" do
    it "returns US-ASCII if both are US-ASCII" do
      Encoding.compatible?(:abc, /def/).should == Encoding::US_ASCII
    end

    it "returns the Regexp's Encoding if it is not US-ASCII and not ASCII only" do
      a = Regexp.new("\xff")
      b = Regexp.new("\u3042".encode("utf-8"))
      c = Regexp.new("\xa4\xa2".force_encoding("euc-jp"))
      d = Regexp.new("\x82\xa0".force_encoding("shift_jis"))

      [ [Encoding, :abc, a, Encoding::ASCII_8BIT],
        [Encoding, :abc, b, Encoding::UTF_8],
        [Encoding, :abc, c, Encoding::EUC_JP],
        [Encoding, :abc, d, Encoding::Shift_JIS],
      ].should be_computed_by(:compatible?)
    end
  end

  describe "Encoding.compatible? Symbol, Symbol" do
    it "returns US-ASCII if both are US-ASCII" do
      Encoding.compatible?(:abc, :def).should == Encoding::US_ASCII
    end

    it "returns the first's Encoding if it is not ASCII only" do
      [ [Encoding, "\xff".to_sym,                                  Encoding::ASCII_8BIT],
        [Encoding, "\u3042".encode("utf-8").to_sym,                Encoding::UTF_8],
        [Encoding, "\xa4\xa2".force_encoding("euc-jp").to_sym,     Encoding::EUC_JP],
        [Encoding, "\x82\xa0".force_encoding("shift_jis").to_sym,  Encoding::Shift_JIS],
      ].should be_computed_by(:compatible?, :abc)
    end
  end

  describe "Encoding.compatible? Encoding, Encoding" do
    it "returns nil if one of the encodings is a dummy encoding" do
      [ [Encoding, Encoding::UTF_7, Encoding::US_ASCII,   nil],
        [Encoding, Encoding::US_ASCII, Encoding::UTF_7,   nil],
        [Encoding, Encoding::EUC_JP, Encoding::UTF_7,     nil],
        [Encoding, Encoding::UTF_7, Encoding::EUC_JP,     nil],
        [Encoding, Encoding::UTF_7, Encoding::ASCII_8BIT, nil],
        [Encoding, Encoding::ASCII_8BIT, Encoding::UTF_7, nil],
      ].should be_computed_by(:compatible?)
    end

    it "returns nil if one of the encodings is not US-ASCII" do
      [ [Encoding, Encoding::UTF_8, Encoding::ASCII_8BIT,   nil],
        [Encoding, Encoding::ASCII_8BIT, Encoding::UTF_8,   nil],
        [Encoding, Encoding::ASCII_8BIT, Encoding::EUC_JP,  nil],
        [Encoding, Encoding::Shift_JIS, Encoding::EUC_JP,   nil],
      ].should be_computed_by(:compatible?)
    end

    it "returns the first if the second is US-ASCII" do
      [ [Encoding, Encoding::UTF_8, Encoding::US_ASCII,       Encoding::UTF_8],
        [Encoding, Encoding::EUC_JP, Encoding::US_ASCII,      Encoding::EUC_JP],
        [Encoding, Encoding::Shift_JIS, Encoding::US_ASCII,   Encoding::Shift_JIS],
        [Encoding, Encoding::ASCII_8BIT, Encoding::US_ASCII,  Encoding::ASCII_8BIT],
      ].should be_computed_by(:compatible?)
    end

    it "returns the Encoding if both are the same" do
      [ [Encoding, Encoding::UTF_8, Encoding::UTF_8,            Encoding::UTF_8],
        [Encoding, Encoding::US_ASCII, Encoding::US_ASCII,      Encoding::US_ASCII],
        [Encoding, Encoding::ASCII_8BIT, Encoding::ASCII_8BIT,  Encoding::ASCII_8BIT],
        [Encoding, Encoding::UTF_7, Encoding::UTF_7,            Encoding::UTF_7],
      ].should be_computed_by(:compatible?)
    end
  end

  describe "Encoding.compatible? Object, Object" do
    it "returns nil for Object, String" do
      Encoding.compatible?(Object.new, "abc").should be_nil
    end

    it "returns nil for Object, Regexp" do
      Encoding.compatible?(Object.new, /./).should be_nil
    end

    it "returns nil for Object, Symbol" do
      Encoding.compatible?(Object.new, :sym).should be_nil
    end

    it "returns nil for String, Object" do
      Encoding.compatible?("abc", Object.new).should be_nil
    end

    it "returns nil for Regexp, Object" do
      Encoding.compatible?(/./, Object.new).should be_nil
    end

    it "returns nil for Symbol, Object" do
      Encoding.compatible?(:sym, Object.new).should be_nil
    end
  end
end
