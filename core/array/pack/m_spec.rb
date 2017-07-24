# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)

describe "Array#pack with format 'M'" do
  it_behaves_like :array_pack_basic, 'M'
  it_behaves_like :array_pack_basic_non_float, 'M'
  it_behaves_like :array_pack_arguments, 'M'

  it "encodes an empty string as an empty string" do
    [""].pack("M").should == ""
  end

  it "encodes nil as an empty string" do
    [nil].pack("M").should == ""
  end

  it "appends a soft line break at the end of an encoded string" do
    ["a"].pack("M").should == "a=\n"
  end

  it "does not append a soft break if the string ends with a newline" do
    ["a\n"].pack("M").should == "a\n"
  end

  it "encodes one element for each directive" do
    ["a", "b", "c"].pack("MM").should == "a=\nb=\n"
  end

  it "encodes byte values 33..60 directly" do
    [ [["!\"\#$%&'()*+,-./"], "!\"\#$%&'()*+,-./=\n"],
      [["0123456789"],        "0123456789=\n"],
      [[":;<"],               ":;<=\n"]
    ].should be_computed_by(:pack, "M")
  end

  it "encodes byte values 62..126 directly" do
    [ [[">?@"],                         ">?@=\n"],
      [["ABCDEFGHIJKLMNOPQRSTUVWXYZ"],  "ABCDEFGHIJKLMNOPQRSTUVWXYZ=\n"],
      [["[\\]^_`"],                     "[\\]^_`=\n"],
      [["abcdefghijklmnopqrstuvwxyz"],  "abcdefghijklmnopqrstuvwxyz=\n"],
      [["{|}~"],                        "{|}~=\n"]
    ].should be_computed_by(:pack, "M")
  end

  it "encodes an '=' character in hex format" do
    ["="].pack("M").should == "=3D=\n"
  end

  it "encodes an embedded space directly" do
    ["a b"].pack("M").should == "a b=\n"
  end

  it "encodes a space at the end of the string directly" do
    ["a "].pack("M").should == "a =\n"
  end

  it "encodes an embedded tab directly" do
    ["a\tb"].pack("M").should == "a\tb=\n"
  end

  it "encodes a tab at the end of the string directly" do
    ["a\t"].pack("M").should == "a\t=\n"
  end

  it "encodes an embedded newline directly" do
    ["a\nb"].pack("M").should == "a\nb=\n"
  end

  it "encodes 0..31 except tab and newline in hex format" do
    [ [["\x00\x01\x02\x03\x04\x05\x06"],  "=00=01=02=03=04=05=06=\n"],
      [["\a\b\v\f\r"],                    "=07=08=0B=0C=0D=\n"],
      [["\x0e\x0f\x10\x11\x12\x13\x14"],  "=0E=0F=10=11=12=13=14=\n"],
      [["\x15\x16\x17\x18\x19\x1a"],      "=15=16=17=18=19=1A=\n"],
      [["\e"],                            "=1B=\n"],
      [["\x1c\x1d\x1e\x1f"],              "=1C=1D=1E=1F=\n"]
    ].should be_computed_by(:pack, "M")
  end

  it "encodes a tab followed by a newline with an encoded newline" do
    ["\t\n"].pack("M").should == "\t=\n\n"
  end

  it "encodes 127..255 in hex format" do
    [ [["\x7f\x80\x81\x82\x83\x84\x85\x86"], "=7F=80=81=82=83=84=85=86=\n"],
      [["\x87\x88\x89\x8a\x8b\x8c\x8d\x8e"], "=87=88=89=8A=8B=8C=8D=8E=\n"],
      [["\x8f\x90\x91\x92\x93\x94\x95\x96"], "=8F=90=91=92=93=94=95=96=\n"],
      [["\x97\x98\x99\x9a\x9b\x9c\x9d\x9e"], "=97=98=99=9A=9B=9C=9D=9E=\n"],
      [["\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6"], "=9F=A0=A1=A2=A3=A4=A5=A6=\n"],
      [["\xa7\xa8\xa9\xaa\xab\xac\xad\xae"], "=A7=A8=A9=AA=AB=AC=AD=AE=\n"],
      [["\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6"], "=AF=B0=B1=B2=B3=B4=B5=B6=\n"],
      [["\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe"], "=B7=B8=B9=BA=BB=BC=BD=BE=\n"],
      [["\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6"], "=BF=C0=C1=C2=C3=C4=C5=C6=\n"],
      [["\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce"], "=C7=C8=C9=CA=CB=CC=CD=CE=\n"],
      [["\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6"], "=CF=D0=D1=D2=D3=D4=D5=D6=\n"],
      [["\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde"], "=D7=D8=D9=DA=DB=DC=DD=DE=\n"],
      [["\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6"], "=DF=E0=E1=E2=E3=E4=E5=E6=\n"],
      [["\xe7\xe8\xe9\xea\xeb\xec\xed\xee"], "=E7=E8=E9=EA=EB=EC=ED=EE=\n"],
      [["\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6"], "=EF=F0=F1=F2=F3=F4=F5=F6=\n"],
      [["\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe"], "=F7=F8=F9=FA=FB=FC=FD=FE=\n"],
      [["\xff"], "=FF=\n"]
    ].should be_computed_by(:pack, "M")
  end

  it "emits a soft line break when the output exceeds 72 characters when passed '*', 0, 1, or no count modifier" do
    s1 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
    r1 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa=\na=\n"
    s2 = "\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19\x19"
    r2 = "=19=19=19=19=19=19=19=19=19=19=19=19=19=19=19=19=19=19=19=19=19=19=19=19=19=\n=19=\n"
    s3 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\x15a"
    r3 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa=15=\na=\n"
    s4 = "\x15aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\x15a"
    r4 = "=15aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa=\na=15a=\n"

    [ [[s1], "M",  r1],
      [[s1], "M0", r1],
      [[s1], "M1", r1],
      [[s2], "M",  r2],
      [[s2], "M0", r2],
      [[s2], "M1", r2],
      [[s3], "M",  r3],
      [[s3], "M0", r3],
      [[s3], "M1", r3],
      [[s4], "M",  r4],
      [[s4], "M0", r4],
      [[s4], "M1", r4]
    ].should be_computed_by(:pack)
  end

  it "emits a soft line break when the output exceeds count characters" do
    [ [["abcdefghi"],        "M2", "abc=\ndef=\nghi=\n"],
      [["abcdefghi"],        "M3", "abcd=\nefgh=\ni=\n"],
      [["abcdefghi"],        "M4", "abcde=\nfghi=\n"],
      [["abcdefghi"],        "M5", "abcdef=\nghi=\n"],
      [["abcdefghi"],        "M6", "abcdefg=\nhi=\n"],
      [["\x19\x19\x19\x19"], "M2", "=19=\n=19=\n=19=\n=19=\n"],
      [["\x19\x19\x19\x19"], "M3", "=19=19=\n=19=19=\n"],
      [["\x19\x19\x19\x19"], "M4", "=19=19=\n=19=19=\n"],
      [["\x19\x19\x19\x19"], "M5", "=19=19=\n=19=19=\n"],
      [["\x19\x19\x19\x19"], "M6", "=19=19=19=\n=19=\n"],
      [["\x19\x19\x19\x19"], "M7", "=19=19=19=\n=19=\n"]
    ].should be_computed_by(:pack)
  end

  it "encodes a recursive array" do
    empty = ArraySpecs.empty_recursive_array
    empty.pack('M').should be_an_instance_of(String)

    array = ArraySpecs.recursive_array
    array.pack('M').should == "1=\n"
  end

  it "calls #to_s to convert an object to a String" do
    obj = mock("pack M string")
    obj.should_receive(:to_s).and_return("packing")

    [obj].pack("M").should == "packing=\n"
  end

  it "converts the object to a String representation if #to_s does not return a String" do
    obj = mock("pack M non-string")
    obj.should_receive(:to_s).and_return(2)

    [obj].pack("M").should be_an_instance_of(String)
  end

  it "encodes a Symbol as a String" do
    [:symbol].pack("M").should == "symbol=\n"
  end

  it "encodes an Integer as a String" do
    [ [[1],             "1=\n"],
      [[bignum_value],  "#{bignum_value}=\n"]
    ].should be_computed_by(:pack, "M")
  end

  it "encodes a Float as a String" do
    [1.0].pack("M").should == "1.0=\n"
  end

  it "converts Floats to the minimum unique representation" do
    [1.0 / 3.0].pack("M").should == "0.3333333333333333=\n"
  end

  it "sets the output string to US-ASCII encoding" do
    ["abcd"].pack("M").encoding.should == Encoding::US_ASCII
  end
end

describe "Array#pack with format 'm'" do
  it_behaves_like :array_pack_basic, 'm'
  it_behaves_like :array_pack_basic_non_float, 'm'
  it_behaves_like :array_pack_arguments, 'm'

  it "encodes an empty string as an empty string" do
    [""].pack("m").should == ""
  end

  it "appends a newline to the end of the encoded string" do
    ["a"].pack("m").should == "YQ==\n"
  end

  it "encodes one element per directive" do
    ["abc", "DEF"].pack("mm").should == "YWJj\nREVG\n"
  end

  it "encodes 1, 2, or 3 characters in 4 output characters (Base64 encoding)" do
    [ [["a"],       "YQ==\n"],
      [["ab"],      "YWI=\n"],
      [["abc"],     "YWJj\n"],
      [["abcd"],    "YWJjZA==\n"],
      [["abcde"],   "YWJjZGU=\n"],
      [["abcdef"],  "YWJjZGVm\n"],
      [["abcdefg"], "YWJjZGVmZw==\n"],
    ].should be_computed_by(:pack, "m")
  end

  it "emits a newline after complete groups of count / 3 input characters when passed a count modifier" do
    ["abcdefg"].pack("m3").should == "YWJj\nZGVm\nZw==\n"
  end

  it "implicitly has a count of 45 when passed '*', 1, 2 or no count modifier" do
    s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
    r = "YWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFh\nYWFhYWE=\n"
    [ [[s], "m", r],
      [[s], "m*", r],
      [[s], "m1", r],
      [[s], "m2", r],
    ].should be_computed_by(:pack)
  end

  it "encodes all ascii characters" do
    [ [["\x00\x01\x02\x03\x04\x05\x06"],          "AAECAwQFBg==\n"],
      [["\a\b\t\n\v\f\r"],                        "BwgJCgsMDQ==\n"],
      [["\x0E\x0F\x10\x11\x12\x13\x14\x15\x16"],  "Dg8QERITFBUW\n"],
      [["\x17\x18\x19\x1a\e\x1c\x1d\x1e\x1f"],    "FxgZGhscHR4f\n"],
      [["!\"\#$%&'()*+,-./"],                     "ISIjJCUmJygpKissLS4v\n"],
      [["0123456789"],                            "MDEyMzQ1Njc4OQ==\n"],
      [[":;<=>?@"],                               "Ojs8PT4/QA==\n"],
      [["ABCDEFGHIJKLMNOPQRSTUVWXYZ"],            "QUJDREVGR0hJSktMTU5PUFFSU1RVVldYWVo=\n"],
      [["[\\]^_`"],                               "W1xdXl9g\n"],
      [["abcdefghijklmnopqrstuvwxyz"],            "YWJjZGVmZ2hpamtsbW5vcHFyc3R1dnd4eXo=\n"],
      [["{|}~"],                                  "e3x9fg==\n"],
      [["\x7f\xc2\x80\xc2\x81\xc2\x82\xc2\x83"],  "f8KAwoHCgsKD\n"],
      [["\xc2\x84\xc2\x85\xc2\x86\xc2\x87\xc2"],  "woTChcKGwofC\n"],
      [["\x88\xc2\x89\xc2\x8a\xc2\x8b\xc2\x8c"],  "iMKJworCi8KM\n"],
      [["\xc2\x8d\xc2\x8e\xc2\x8f\xc2\x90\xc2"],  "wo3CjsKPwpDC\n"],
      [["\x91\xc2\x92\xc2\x93\xc2\x94\xc2\x95"],  "kcKSwpPClMKV\n"],
      [["\xc2\x96\xc2\x97\xc2\x98\xc2\x99\xc2"],  "wpbCl8KYwpnC\n"],
      [["\x9a\xc2\x9b\xc2\x9c\xc2\x9d\xc2\x9e"],  "msKbwpzCncKe\n"],
      [["\xc2\x9f\xc2\xa0\xc2\xa1\xc2\xa2\xc2"],  "wp/CoMKhwqLC\n"],
      [["\xa3\xc2\xa4\xc2\xa5\xc2\xa6\xc2\xa7"],  "o8KkwqXCpsKn\n"],
      [["\xc2\xa8\xc2\xa9\xc2\xaa\xc2\xab\xc2"],  "wqjCqcKqwqvC\n"],
      [["\xac\xc2\xad\xc2\xae\xc2\xaf\xc2\xb0"],  "rMKtwq7Cr8Kw\n"],
      [["\xc2\xb1\xc2\xb2\xc2\xb3\xc2\xb4\xc2"],  "wrHCssKzwrTC\n"],
      [["\xb5\xc2\xb6\xc2\xb7\xc2\xb8\xc2\xb9"],  "tcK2wrfCuMK5\n"],
      [["\xc2\xba\xc2\xbb\xc2\xbc\xc2\xbd\xc2"],  "wrrCu8K8wr3C\n"],
      [["\xbe\xc2\xbf\xc3\x80\xc3\x81\xc3\x82"],  "vsK/w4DDgcOC\n"],
      [["\xc3\x83\xc3\x84\xc3\x85\xc3\x86\xc3"],  "w4PDhMOFw4bD\n"],
      [["\x87\xc3\x88\xc3\x89\xc3\x8a\xc3\x8b"],  "h8OIw4nDisOL\n"],
      [["\xc3\x8c\xc3\x8d\xc3\x8e\xc3\x8f\xc3"],  "w4zDjcOOw4/D\n"],
      [["\x90\xc3\x91\xc3\x92\xc3\x93\xc3\x94"],  "kMORw5LDk8OU\n"],
      [["\xc3\x95\xc3\x96\xc3\x97\xc3\x98\xc3"],  "w5XDlsOXw5jD\n"],
      [["\x99\xc3\x9a\xc3\x9b\xc3\x9c\xc3\x9d"],  "mcOaw5vDnMOd\n"],
      [["\xc3\x9e\xc3\x9f\xc3\xa0\xc3\xa1\xc3"],  "w57Dn8Ogw6HD\n"],
      [["\xa2\xc3\xa3\xc3\xa4\xc3\xa5\xc3\xa6"],  "osOjw6TDpcOm\n"],
      [["\xc3\xa7\xc3\xa8\xc3\xa9\xc3\xaa\xc3"],  "w6fDqMOpw6rD\n"],
      [["\xab\xc3\xac\xc3\xad\xc3\xae\xc3\xaf"],  "q8Osw63DrsOv\n"],
      [["\xc3\xb0\xc3\xb1\xc3\xb2\xc3\xb3\xc3"],  "w7DDscOyw7PD\n"],
      [["\xb4\xc3\xb5\xc3\xb6\xc3\xb7\xc3\xb8"],  "tMO1w7bDt8O4\n"],
      [["\xc3\xb9\xc3\xba\xc3\xbb\xc3\xbc\xc3"],  "w7nDusO7w7zD\n"],
      [["\xbd\xc3\xbe\xc3\xbf"],                  "vcO+w78=\n"]
    ].should be_computed_by(:pack, "m")
  end

  it "calls #to_str to convert an object to a String" do
    obj = mock("pack m string")
    obj.should_receive(:to_str).and_return("abc")
    [obj].pack("m").should == "YWJj\n"
  end

  it "raises a TypeError if #to_str does not return a String" do
    obj = mock("pack m non-string")
    lambda { [obj].pack("m") }.should raise_error(TypeError)
  end

  it "raises a TypeError if passed nil" do
    lambda { [nil].pack("m") }.should raise_error(TypeError)
  end

  it "raises a TypeError if passed an Integer" do
    lambda { [0].pack("m") }.should raise_error(TypeError)
    lambda { [bignum_value].pack("m") }.should raise_error(TypeError)
  end

  it "does not emit a newline if passed zero as the count modifier" do
    s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
    r = "YWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWFhYWE="
    [s].pack("m0").should == r
  end

  it "sets the output string to US-ASCII encoding" do
    ["abcd"].pack("m").encoding.should == Encoding::US_ASCII
  end
end
