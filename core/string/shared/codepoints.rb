# -*- encoding: binary -*-
describe :string_codepoints, shared: true do
  it "raises an ArgumentError when self has an invalid encoding and a method is called on the returned Enumerator" do
    s = "\xDF".force_encoding(Encoding::UTF_8)
    s.valid_encoding?.should be_false
    lambda { s.send(@method).to_a }.should raise_error(ArgumentError)
  end

  it "yields each codepoint to the block if one is given" do
    codepoints = []
    "abcd".send(@method) do |codepoint|
      codepoints << codepoint
    end
    codepoints.should == [97, 98, 99, 100]
  end

  it "raises an ArgumentError if self's encoding is invalid and a block is given" do
    s = "\xDF".force_encoding(Encoding::UTF_8)
    s.valid_encoding?.should be_false
    lambda { s.send(@method) { } }.should raise_error(ArgumentError)
  end

  it "returns codepoints as Fixnums" do
    "glark\u{20}".send(@method).to_a.each do |codepoint|
      codepoint.should be_an_instance_of(Fixnum)
    end
  end

  it "returns one codepoint for each character" do
    s = "\u{9876}\u{28}\u{1987}"
    s.send(@method).to_a.size.should == s.chars.to_a.size
  end

  it "works for multibyte characters" do
    s = "\u{9819}"
    s.bytesize.should == 3
    s.send(@method).to_a.should == [38937]
  end

  it "returns the codepoint corresponding to the character's position in the String's encoding" do
    "\u{787}".send(@method).to_a.should == [1927]
  end

  it "round-trips to the original String using Integer#chr" do
    s = "\u{13}\u{7711}\u{1010}"
    s2 = ""
    s.send(@method) {|n| s2 << n.chr(Encoding::UTF_8)}
    s.should == s2
  end

  it "is synonomous with #bytes for Strings which are single-byte optimisable" do
    s = "(){}".encode('ascii')
    s.ascii_only?.should be_true
    s.send(@method).to_a.should == s.bytes.to_a
  end
end
