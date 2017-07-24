require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#to_i" do
  it "returns 0 for strings with leading underscores" do
    "_123".to_i.should == 0
  end

  it "ignores underscores in between the digits" do
    "1_2_3asdf".to_i.should == 123
  end

  it "ignores leading whitespaces" do
    [ " 123", "     123", "\r\n\r\n123", "\t\t123",
      "\r\n\t\n123", " \t\n\r\t 123"].each do |str|
      str.to_i.should == 123
    end
  end

  it "ignores subsequent invalid characters" do
    "123asdf".to_i.should == 123
    "123#123".to_i.should == 123
    "123 456".to_i.should == 123
  end

  it "returns 0 if self is no valid integer-representation" do
    [ "++2", "+-2", "--2" ].each do |str|
      str.to_i.should == 0
    end
  end

  it "accepts '+' at the beginning of a String" do
    "+0d56".to_i.should == 56
  end

  it "interprets leading characters as a number in the given base" do
    "100110010010".to_i(2).should == 0b100110010010
    "100110201001".to_i(3).should == 186409
    "103110201001".to_i(4).should == 5064769
    "103110241001".to_i(5).should == 55165126
    "153110241001".to_i(6).should == 697341529
    "153160241001".to_i(7).should == 3521513430
    "153160241701".to_i(8).should == 14390739905
    "853160241701".to_i(9).should == 269716550518
    "853160241791".to_i(10).should == 853160241791

    "F00D_BE_1337".to_i(16).should == 0xF00D_BE_1337
    "-hello_world".to_i(32).should == -18306744
    "abcXYZ".to_i(36).should == 623741435

    ("z" * 24).to_i(36).should == 22452257707354557240087211123792674815

    "5e10".to_i.should == 5
  end

  it "auto-detects base 8 via leading 0 when base = 0" do
    "01778".to_i(0).should == 0177
    "-01778".to_i(0).should == -0177
  end

  it "auto-detects base 2 via 0b when base = 0" do
    "0b112".to_i(0).should == 0b11
    "-0b112".to_i(0).should == -0b11
  end

  it "auto-detects base 10 via 0d when base = 0" do
    "0d19A".to_i(0).should == 19
    "-0d19A".to_i(0).should == -19
  end

  it "auto-detects base 8 via 0o when base = 0" do
    "0o178".to_i(0).should == 0o17
    "-0o178".to_i(0).should == -0o17
  end

  it "auto-detects base 16 via 0x when base = 0" do
    "0xFAZ".to_i(0).should == 0xFA
    "-0xFAZ".to_i(0).should == -0xFA
  end

  it "auto-detects base 10 with no base specifier when base = 0" do
    "1234567890ABC".to_i(0).should == 1234567890
    "-1234567890ABC".to_i(0).should == -1234567890
  end

  it "doesn't handle foreign base specifiers when base is > 0" do
    [2, 3, 4, 8, 10].each do |base|
      "0111".to_i(base).should == "111".to_i(base)

      "0b11".to_i(base).should == (base ==  2 ? 0b11 : 0)
      "0d11".to_i(base).should == (base == 10 ? 0d11 : 0)
      "0o11".to_i(base).should == (base ==  8 ? 0o11 : 0)
      "0xFA".to_i(base).should == 0
    end

    "0xD00D".to_i(16).should == 0xD00D

    "0b11".to_i(16).should == 0xb11
    "0d11".to_i(16).should == 0xd11
    "0o11".to_i(25).should == 15026
    "0x11".to_i(34).should == 38183

    "0B11".to_i(16).should == 0xb11
    "0D11".to_i(16).should == 0xd11
    "0O11".to_i(25).should == 15026
    "0X11".to_i(34).should == 38183
  end

  it "tries to convert the base to an integer using to_int" do
    obj = mock('8')
    obj.should_receive(:to_int).and_return(8)

    "777".to_i(obj).should == 0777
  end

  it "requires that the sign if any appears before the base specifier" do
    "0b-1".to_i( 2).should == 0
    "0d-1".to_i(10).should == 0
    "0o-1".to_i( 8).should == 0
    "0x-1".to_i(16).should == 0

    "0b-1".to_i(2).should == 0
    "0o-1".to_i(8).should == 0
    "0d-1".to_i(10).should == 0
    "0x-1".to_i(16).should == 0
  end

  it "raises an ArgumentError for illegal bases (1, < 0 or > 36)" do
    lambda { "".to_i(1)  }.should raise_error(ArgumentError)
    lambda { "".to_i(-1) }.should raise_error(ArgumentError)
    lambda { "".to_i(37) }.should raise_error(ArgumentError)
  end

  it "returns a Fixnum for long strings with trailing spaces" do
    "0                             ".to_i.should == 0
    "0                             ".to_i.should be_an_instance_of(Fixnum)

    "10                             ".to_i.should == 10
    "10                             ".to_i.should be_an_instance_of(Fixnum)

    "-10                            ".to_i.should == -10
    "-10                            ".to_i.should be_an_instance_of(Fixnum)
  end

  it "returns a Fixnum for long strings with leading spaces" do
    "                             0".to_i.should == 0
    "                             0".to_i.should be_an_instance_of(Fixnum)

    "                             10".to_i.should == 10
    "                             10".to_i.should be_an_instance_of(Fixnum)

    "                            -10".to_i.should == -10
    "                            -10".to_i.should be_an_instance_of(Fixnum)
  end

  it "returns the correct Bignum for long strings" do
    "245789127594125924165923648312749312749327482".to_i.should == 245789127594125924165923648312749312749327482
    "-245789127594125924165923648312749312749327482".to_i.should == -245789127594125924165923648312749312749327482
  end
end

describe "String#to_i with bases" do
  it "parses a String in base 2" do
    str = "10" * 50
    str.to_i(2).to_s(2).should == str
  end

  it "parses a String in base 3" do
    str = "120" * 33
    str.to_i(3).to_s(3).should == str
  end

  it "parses a String in base 4" do
    str = "1230" * 25
    str.to_i(4).to_s(4).should == str
  end

  it "parses a String in base 5" do
    str = "12340" * 20
    str.to_i(5).to_s(5).should == str
  end

  it "parses a String in base 6" do
    str = "123450" * 16
    str.to_i(6).to_s(6).should == str
  end

  it "parses a String in base 7" do
    str = "1234560" * 14
    str.to_i(7).to_s(7).should == str
  end

  it "parses a String in base 8" do
    str = "12345670" * 12
    str.to_i(8).to_s(8).should == str
  end

  it "parses a String in base 9" do
    str = "123456780" * 11
    str.to_i(9).to_s(9).should == str
  end

  it "parses a String in base 10" do
    str = "1234567890" * 10
    str.to_i(10).to_s(10).should == str
  end

  it "parses a String in base 11" do
    str = "1234567890a" * 9
    str.to_i(11).to_s(11).should == str
  end

  it "parses a String in base 12" do
    str = "1234567890ab" * 8
    str.to_i(12).to_s(12).should == str
  end

  it "parses a String in base 13" do
    str = "1234567890abc" * 7
    str.to_i(13).to_s(13).should == str
  end

  it "parses a String in base 14" do
    str = "1234567890abcd" * 7
    str.to_i(14).to_s(14).should == str
  end

  it "parses a String in base 15" do
    str = "1234567890abcde" * 6
    str.to_i(15).to_s(15).should == str
  end

  it "parses a String in base 16" do
    str = "1234567890abcdef" * 6
    str.to_i(16).to_s(16).should == str
  end

  it "parses a String in base 17" do
    str = "1234567890abcdefg" * 5
    str.to_i(17).to_s(17).should == str
  end

  it "parses a String in base 18" do
    str = "1234567890abcdefgh" * 5
    str.to_i(18).to_s(18).should == str
  end

  it "parses a String in base 19" do
    str = "1234567890abcdefghi" * 5
    str.to_i(19).to_s(19).should == str
  end

  it "parses a String in base 20" do
    str = "1234567890abcdefghij" * 5
    str.to_i(20).to_s(20).should == str
  end

  it "parses a String in base 21" do
    str = "1234567890abcdefghijk" * 4
    str.to_i(21).to_s(21).should == str
  end

  it "parses a String in base 22" do
    str = "1234567890abcdefghijkl" * 4
    str.to_i(22).to_s(22).should == str
  end

  it "parses a String in base 23" do
    str = "1234567890abcdefghijklm" * 4
    str.to_i(23).to_s(23).should == str
  end

  it "parses a String in base 24" do
    str = "1234567890abcdefghijklmn" * 4
    str.to_i(24).to_s(24).should == str
  end

  it "parses a String in base 25" do
    str = "1234567890abcdefghijklmno" * 4
    str.to_i(25).to_s(25).should == str
  end

  it "parses a String in base 26" do
    str = "1234567890abcdefghijklmnop" * 3
    str.to_i(26).to_s(26).should == str
  end

  it "parses a String in base 27" do
    str = "1234567890abcdefghijklmnopq" * 3
    str.to_i(27).to_s(27).should == str
  end

  it "parses a String in base 28" do
    str = "1234567890abcdefghijklmnopqr" * 3
    str.to_i(28).to_s(28).should == str
  end

  it "parses a String in base 29" do
    str = "1234567890abcdefghijklmnopqrs" * 3
    str.to_i(29).to_s(29).should == str
  end

  it "parses a String in base 30" do
    str = "1234567890abcdefghijklmnopqrst" * 3
    str.to_i(30).to_s(30).should == str
  end

  it "parses a String in base 31" do
    str = "1234567890abcdefghijklmnopqrstu" * 3
    str.to_i(31).to_s(31).should == str
  end

  it "parses a String in base 32" do
    str = "1234567890abcdefghijklmnopqrstuv" * 3
    str.to_i(32).to_s(32).should == str
  end

  it "parses a String in base 33" do
    str = "1234567890abcdefghijklmnopqrstuvw" * 3
    str.to_i(33).to_s(33).should == str
  end

  it "parses a String in base 34" do
    str = "1234567890abcdefghijklmnopqrstuvwx" * 2
    str.to_i(34).to_s(34).should == str
  end

  it "parses a String in base 35" do
    str = "1234567890abcdefghijklmnopqrstuvwxy" * 2
    str.to_i(35).to_s(35).should == str
  end

  it "parses a String in base 36" do
    str = "1234567890abcdefghijklmnopqrstuvwxyz" * 2
    str.to_i(36).to_s(36).should == str
  end
end
