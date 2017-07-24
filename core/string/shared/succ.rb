# -*- encoding: binary -*-
describe :string_succ, shared: true do
  it "returns an empty string for empty strings" do
    "".send(@method).should == ""
  end

  it "returns the successor by increasing the rightmost alphanumeric (digit => digit, letter => letter with same case)" do
    "abcd".send(@method).should == "abce"
    "THX1138".send(@method).should == "THX1139"

    "<<koala>>".send(@method).should == "<<koalb>>"
    "==A??".send(@method).should == "==B??"
  end

  it "increases non-alphanumerics (via ascii rules) if there are no alphanumerics" do
    "***".send(@method).should == "**+"
    "**`".send(@method).should == "**a"
  end

  it "increases the next best alphanumeric (jumping over non-alphanumerics) if there is a carry" do
    "dz".send(@method).should == "ea"
    "HZ".send(@method).should == "IA"
    "49".send(@method).should == "50"

    "izz".send(@method).should == "jaa"
    "IZZ".send(@method).should == "JAA"
    "699".send(@method).should == "700"

    "6Z99z99Z".send(@method).should == "7A00a00A"

    "1999zzz".send(@method).should == "2000aaa"
    "NZ/[]ZZZ9999".send(@method).should == "OA/[]AAA0000"
  end

  it "increases the next best character if there is a carry for non-alphanumerics" do
    "(\xFF".send(@method).should == ")\x00"
    "`\xFF".send(@method).should == "a\x00"
    "<\xFF\xFF".send(@method).should == "=\x00\x00"
  end

  it "adds an additional character (just left to the last increased one) if there is a carry and no character left to increase" do
    "z".send(@method).should == "aa"
    "Z".send(@method).should == "AA"
    "9".send(@method).should == "10"

    "zz".send(@method).should == "aaa"
    "ZZ".send(@method).should == "AAA"
    "99".send(@method).should == "100"

    "9Z99z99Z".send(@method).should == "10A00a00A"

    "ZZZ9999".send(@method).should == "AAAA0000"
    "/[]9999".send(@method).should == "/[]10000"
    "/[]ZZZ9999".send(@method).should == "/[]AAAA0000"
    "Z/[]ZZZ9999".send(@method).should == "AA/[]AAA0000"

    # non-alphanumeric cases
    "\xFF".send(@method).should == "\x01\x00"
    "\xFF\xFF".send(@method).should == "\x01\x00\x00"
  end

  it "returns subclass instances when called on a subclass" do
    StringSpecs::MyString.new("").send(@method).should be_an_instance_of(StringSpecs::MyString)
    StringSpecs::MyString.new("a").send(@method).should be_an_instance_of(StringSpecs::MyString)
    StringSpecs::MyString.new("z").send(@method).should be_an_instance_of(StringSpecs::MyString)
  end

  it "taints the result if self is tainted" do
    ["", "a", "z", "Z", "9", "\xFF", "\xFF\xFF"].each do |s|
      s.taint.send(@method).tainted?.should == true
    end
  end
end

describe :string_succ_bang, shared: true do
  it "is equivalent to succ, but modifies self in place (still returns self)" do
    ["", "abcd", "THX1138"].each do |s|
      r = s.dup.send(@method)
      s.send(@method).should equal(s)
      s.should == r
    end
  end

  it "raises a RuntimeError if self is frozen" do
    lambda { "".freeze.send(@method)     }.should raise_error(RuntimeError)
    lambda { "abcd".freeze.send(@method) }.should raise_error(RuntimeError)
  end
end
