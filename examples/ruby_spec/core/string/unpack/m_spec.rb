# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)

describe "String#unpack with format 'M'" do
  it_behaves_like :string_unpack_basic, 'M'
  it_behaves_like :string_unpack_no_platform, 'M'

  it "decodes an empty string" do
    "".unpack("M").should == [""]
  end

  it "decodes the complete string ignoring newlines when given a single directive" do
    "a=\nb=\nc=\n".unpack("M").should == ["abc"]
  end

  it "appends empty string to the array for directives exceeding the input size" do
    "a=\nb=\nc=\n".unpack("MMM").should == ["abc", "", ""]
  end

  it "ignores the count or '*' modifier and decodes the entire string" do
    [ ["a=\nb=\nc=\n", "M238", ["abc"]],
      ["a=\nb=\nc=\n", "M*",   ["abc"]]
    ].should be_computed_by(:unpack)
  end

  it "decodes the '=' character" do
    "=3D=\n".unpack("M").should == ["="]
  end

  it "decodes an embedded space character" do
    "a b=\n".unpack("M").should == ["a b"]
  end

  it "decodes a space at the end of the pre-encoded string" do
    "a =\n".unpack("M").should == ["a "]
  end

  it "decodes an embedded tab character" do
    "a\tb=\n".unpack("M").should == ["a\tb"]
  end

  it "decodes a tab character at the end of the pre-encoded string" do
    "a\t=\n".unpack("M").should == ["a\t"]
  end

  it "decodes an embedded newline" do
    "a\nb=\n".unpack("M").should == ["a\nb"]
  end

  it "decodes pre-encoded byte values 33..60" do
    [ ["!\"\#$%&'()*+,-./=\n",  ["!\"\#$%&'()*+,-./"]],
      ["0123456789=\n",         ["0123456789"]],
      [":;<=\n",                [":;<"]]
    ].should be_computed_by(:unpack, "M")
  end

  it "decodes pre-encoded byte values 62..126" do
    [ [">?@=\n",                        [">?@"]],
      ["ABCDEFGHIJKLMNOPQRSTUVWXYZ=\n", ["ABCDEFGHIJKLMNOPQRSTUVWXYZ"]],
      ["[\\]^_`=\n",                    ["[\\]^_`"]],
      ["abcdefghijklmnopqrstuvwxyz=\n", ["abcdefghijklmnopqrstuvwxyz"]],
      ["{|}~=\n",                       ["{|}~"]]
    ].should be_computed_by(:unpack, "M")
  end

  it "decodes pre-encoded byte values 0..31 except tab and newline" do
    [ ["=00=01=02=03=04=05=06=\n",  ["\x00\x01\x02\x03\x04\x05\x06"]],
      ["=07=08=0B=0C=0D=\n",        ["\a\b\v\f\r"]],
      ["=0E=0F=10=11=12=13=14=\n",  ["\x0e\x0f\x10\x11\x12\x13\x14"]],
      ["=15=16=17=18=19=1A=\n",     ["\x15\x16\x17\x18\x19\x1a"]],
      ["=1B=\n",                    ["\e"]],
      ["=1C=1D=1E=1F=\n",           ["\x1c\x1d\x1e\x1f"]]
    ].should be_computed_by(:unpack, "M")
  end

  it "decodes pre-encoded byte values 127..255" do
    [ ["=7F=80=81=82=83=84=85=86=\n", ["\x7f\x80\x81\x82\x83\x84\x85\x86"]],
      ["=87=88=89=8A=8B=8C=8D=8E=\n", ["\x87\x88\x89\x8a\x8b\x8c\x8d\x8e"]],
      ["=8F=90=91=92=93=94=95=96=\n", ["\x8f\x90\x91\x92\x93\x94\x95\x96"]],
      ["=97=98=99=9A=9B=9C=9D=9E=\n", ["\x97\x98\x99\x9a\x9b\x9c\x9d\x9e"]],
      ["=9F=A0=A1=A2=A3=A4=A5=A6=\n", ["\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6"]],
      ["=A7=A8=A9=AA=AB=AC=AD=AE=\n", ["\xa7\xa8\xa9\xaa\xab\xac\xad\xae"]],
      ["=AF=B0=B1=B2=B3=B4=B5=B6=\n", ["\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6"]],
      ["=B7=B8=B9=BA=BB=BC=BD=BE=\n", ["\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe"]],
      ["=BF=C0=C1=C2=C3=C4=C5=C6=\n", ["\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6"]],
      ["=C7=C8=C9=CA=CB=CC=CD=CE=\n", ["\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce"]],
      ["=CF=D0=D1=D2=D3=D4=D5=D6=\n", ["\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6"]],
      ["=D7=D8=D9=DA=DB=DC=DD=DE=\n", ["\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde"]],
      ["=DF=E0=E1=E2=E3=E4=E5=E6=\n", ["\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6"]],
      ["=E7=E8=E9=EA=EB=EC=ED=EE=\n", ["\xe7\xe8\xe9\xea\xeb\xec\xed\xee"]],
      ["=EF=F0=F1=F2=F3=F4=F5=F6=\n", ["\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6"]],
      ["=F7=F8=F9=FA=FB=FC=FD=FE=\n", ["\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe"]],
      ["=FF=\n",                      ["\xff"]]
    ].should be_computed_by(:unpack, "M")
  end
end

describe "String#unpack with format 'm'" do
  it_behaves_like :string_unpack_basic, 'm'
  it_behaves_like :string_unpack_no_platform, 'm'

  it "decodes an empty string" do
    "".unpack("m").should == [""]
  end

  it "decodes the complete string ignoring newlines when given a single directive" do
    "YWJj\nREVG\n".unpack("m").should == ["abcDEF"]
  end

  it "ignores the count or '*' modifier and decodes the entire string" do
    [ ["YWJj\nREVG\n", "m238", ["abcDEF"]],
      ["YWJj\nREVG\n", "m*",   ["abcDEF"]]
    ].should be_computed_by(:unpack)
  end

  it "appends empty string to the array for directives exceeding the input size" do
    "YWJj\nREVG\n".unpack("mmm").should == ["abcDEF", "", ""]
  end

  it "decodes all pre-encoded ascii byte values" do
    [ ["AAECAwQFBg==\n",                          ["\x00\x01\x02\x03\x04\x05\x06"]],
      ["BwgJCgsMDQ==\n",                          ["\a\b\t\n\v\f\r"]],
      ["Dg8QERITFBUW\n",                          ["\x0E\x0F\x10\x11\x12\x13\x14\x15\x16"]],
      ["FxgZGhscHR4f\n",                          ["\x17\x18\x19\x1a\e\x1c\x1d\x1e\x1f"]],
      ["ISIjJCUmJygpKissLS4v\n",                  ["!\"\#$%&'()*+,-./"]],
      ["MDEyMzQ1Njc4OQ==\n",                      ["0123456789"]],
      ["Ojs8PT4/QA==\n",                          [":;<=>?@"]],
      ["QUJDREVGR0hJSktMTU5PUFFSU1RVVldYWVo=\n",  ["ABCDEFGHIJKLMNOPQRSTUVWXYZ"]],
      ["W1xdXl9g\n",                              ["[\\]^_`"]],
      ["YWJjZGVmZ2hpamtsbW5vcHFyc3R1dnd4eXo=\n",  ["abcdefghijklmnopqrstuvwxyz"]],
      ["e3x9fg==\n",                              ["{|}~"]],
      ["f8KAwoHCgsKD\n",                          ["\x7f\xc2\x80\xc2\x81\xc2\x82\xc2\x83"]],
      ["woTChcKGwofC\n",                          ["\xc2\x84\xc2\x85\xc2\x86\xc2\x87\xc2"]],
      ["iMKJworCi8KM\n",                          ["\x88\xc2\x89\xc2\x8a\xc2\x8b\xc2\x8c"]],
      ["wo3CjsKPwpDC\n",                          ["\xc2\x8d\xc2\x8e\xc2\x8f\xc2\x90\xc2"]],
      ["kcKSwpPClMKV\n",                          ["\x91\xc2\x92\xc2\x93\xc2\x94\xc2\x95"]],
      ["wpbCl8KYwpnC\n",                          ["\xc2\x96\xc2\x97\xc2\x98\xc2\x99\xc2"]],
      ["msKbwpzCncKe\n",                          ["\x9a\xc2\x9b\xc2\x9c\xc2\x9d\xc2\x9e"]],
      ["wp/CoMKhwqLC\n",                          ["\xc2\x9f\xc2\xa0\xc2\xa1\xc2\xa2\xc2"]],
      ["o8KkwqXCpsKn\n",                          ["\xa3\xc2\xa4\xc2\xa5\xc2\xa6\xc2\xa7"]],
      ["wqjCqcKqwqvC\n",                          ["\xc2\xa8\xc2\xa9\xc2\xaa\xc2\xab\xc2"]],
      ["rMKtwq7Cr8Kw\n",                          ["\xac\xc2\xad\xc2\xae\xc2\xaf\xc2\xb0"]],
      ["wrHCssKzwrTC\n",                          ["\xc2\xb1\xc2\xb2\xc2\xb3\xc2\xb4\xc2"]],
      ["tcK2wrfCuMK5\n",                          ["\xb5\xc2\xb6\xc2\xb7\xc2\xb8\xc2\xb9"]],
      ["wrrCu8K8wr3C\n",                          ["\xc2\xba\xc2\xbb\xc2\xbc\xc2\xbd\xc2"]],
      ["vsK/w4DDgcOC\n",                          ["\xbe\xc2\xbf\xc3\x80\xc3\x81\xc3\x82"]],
      ["w4PDhMOFw4bD\n",                          ["\xc3\x83\xc3\x84\xc3\x85\xc3\x86\xc3"]],
      ["h8OIw4nDisOL\n",                          ["\x87\xc3\x88\xc3\x89\xc3\x8a\xc3\x8b"]],
      ["w4zDjcOOw4/D\n",                          ["\xc3\x8c\xc3\x8d\xc3\x8e\xc3\x8f\xc3"]],
      ["kMORw5LDk8OU\n",                          ["\x90\xc3\x91\xc3\x92\xc3\x93\xc3\x94"]],
      ["w5XDlsOXw5jD\n",                          ["\xc3\x95\xc3\x96\xc3\x97\xc3\x98\xc3"]],
      ["mcOaw5vDnMOd\n",                          ["\x99\xc3\x9a\xc3\x9b\xc3\x9c\xc3\x9d"]],
      ["w57Dn8Ogw6HD\n",                          ["\xc3\x9e\xc3\x9f\xc3\xa0\xc3\xa1\xc3"]],
      ["osOjw6TDpcOm\n",                          ["\xa2\xc3\xa3\xc3\xa4\xc3\xa5\xc3\xa6"]],
      ["w6fDqMOpw6rD\n",                          ["\xc3\xa7\xc3\xa8\xc3\xa9\xc3\xaa\xc3"]],
      ["q8Osw63DrsOv\n",                          ["\xab\xc3\xac\xc3\xad\xc3\xae\xc3\xaf"]],
      ["w7DDscOyw7PD\n",                          ["\xc3\xb0\xc3\xb1\xc3\xb2\xc3\xb3\xc3"]],
      ["tMO1w7bDt8O4\n",                          ["\xb4\xc3\xb5\xc3\xb6\xc3\xb7\xc3\xb8"]],
      ["w7nDusO7w7zD\n",                          ["\xc3\xb9\xc3\xba\xc3\xbb\xc3\xbc\xc3"]],
      ["vcO+w78=\n",                              ["\xbd\xc3\xbe\xc3\xbf"]]
    ].should be_computed_by(:unpack, "m")
  end

  it "produces binary strings" do
    "".unpack("m").first.encoding.should == Encoding::BINARY
    "Ojs8PT4/QA==\n".unpack("m").first.encoding.should == Encoding::BINARY
  end
end
