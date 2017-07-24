# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/unicode', __FILE__)

describe "Array#pack with format 'U'" do
  it_behaves_like :array_pack_basic, 'U'
  it_behaves_like :array_pack_basic_non_float, 'U'
  it_behaves_like :array_pack_arguments, 'U'
  it_behaves_like :array_pack_unicode, 'U'
end

describe "Array#pack with format 'u'" do
  it_behaves_like :array_pack_basic, 'u'
  it_behaves_like :array_pack_basic_non_float, 'u'
  it_behaves_like :array_pack_arguments, 'u'

  it "encodes an empty string as an empty string" do
    [""].pack("u").should == ""
  end

  it "appends a newline to the end of the encoded string" do
    ["a"].pack("u").should == "!80``\n"
  end

  it "encodes one element per directive" do
    ["abc", "DEF"].pack("uu").should == "#86)C\n#1$5&\n"
  end

  it "prepends the length of each segment of the input string as the first character (+32) in each line of the output" do
    ["abcdefghijklm"].pack("u7").should == "&86)C9&5F\n&9VAI:FML\n!;0``\n"
  end

  it "encodes 1, 2, or 3 characters in 4 output characters (uuencoding)" do
    [ [["a"],       "!80``\n"],
      [["ab"],      "\"86(`\n"],
      [["abc"],     "#86)C\n"],
      [["abcd"],    "$86)C9```\n"],
      [["abcde"],   "%86)C9&4`\n"],
      [["abcdef"],  "&86)C9&5F\n"],
      [["abcdefg"], "'86)C9&5F9P``\n"],
    ].should be_computed_by(:pack, "u")
  end

  it "emits a newline after complete groups of count / 3 input characters when passed a count modifier" do
    ["abcdefg"].pack("u3").should == "#86)C\n#9&5F\n!9P``\n"
  end

  it "implicitly has a count of 45 when passed '*', 0, 1, 2 or no count modifier" do
    s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
    r = "M86%A86%A86%A86%A86%A86%A86%A86%A86%A86%A86%A86%A86%A86%A86%A\n%86%A86$`\n"
    [ [[s], "u", r],
      [[s], "u*", r],
      [[s], "u0", r],
      [[s], "u1", r],
      [[s], "u2", r],
    ].should be_computed_by(:pack)
  end

  it "encodes all ascii characters" do
    [ [["\x00\x01\x02\x03\x04\x05\x06"],          "'``$\"`P0%!@``\n"],
      [["\a\b\t\n\v\f\r"],                        "'!P@)\"@L,#0``\n"],
      [["\x0E\x0F\x10\x11\x12\x13\x14\x15\x16"],  ")\#@\\0$1(3%!46\n"],
      [["\x17\x18\x19\x1a\e\x1c\x1d\x1e\x1f"],    ")%Q@9&AL<'1X?\n"],
      [["!\"\#$%&'()*+,-./"],                     "/(2(C)\"4F)R@I*BLL+2XO\n"],
      [["0123456789"],                            "*,\#$R,S0U-C<X.0``\n"],
      [[":;<=>?@"],                               "'.CL\\/3X_0```\n"],
      [["ABCDEFGHIJKLMNOPQRSTUVWXYZ"],            ":04)#1$5&1TA)2DM,34Y/4%%24U155E=865H`\n"],
      [["[\\]^_`"],                               "&6UQ=7E]@\n"],
      [["abcdefghijklmnopqrstuvwxyz"],            ":86)C9&5F9VAI:FML;6YO<'%R<W1U=G=X>7H`\n"],
      [["{|}~"],                                  "$>WQ]?@``\n"],
      [["\x7f\xc2\x80\xc2\x81\xc2\x82\xc2\x83"],  ")?\\*`PH'\"@L*#\n"],
      [["\xc2\x84\xc2\x85\xc2\x86\xc2\x87\xc2"],  ")PH3\"A<*&PH?\"\n"],
      [["\x88\xc2\x89\xc2\x8a\xc2\x8b\xc2\x8c"],  ")B,*)PHK\"B\\*,\n"],
      [["\xc2\x8d\xc2\x8e\xc2\x8f\xc2\x90\xc2"],  ")PHW\"CL*/PI#\"\n"],
      [["\x91\xc2\x92\xc2\x93\xc2\x94\xc2\x95"],  ")D<*2PI/\"E,*5\n"],
      [["\xc2\x96\xc2\x97\xc2\x98\xc2\x99\xc2"],  ")PI;\"E\\*8PIG\"\n"],
      [["\x9a\xc2\x9b\xc2\x9c\xc2\x9d\xc2\x9e"],  ")FL*;PIS\"G<*>\n"],
      [["\xc2\x9f\xc2\xa0\xc2\xa1\xc2\xa2\xc2"],  ")PI_\"H,*APJ+\"\n"],
      [["\xa3\xc2\xa4\xc2\xa5\xc2\xa6\xc2\xa7"],  ")H\\*DPJ7\"IL*G\n"],
      [["\xc2\xa8\xc2\xa9\xc2\xaa\xc2\xab\xc2"],  ")PJC\"J<*JPJO\"\n"],
      [["\xac\xc2\xad\xc2\xae\xc2\xaf\xc2\xb0"],  ")K,*MPJ[\"K\\*P\n"],
      [["\xc2\xb1\xc2\xb2\xc2\xb3\xc2\xb4\xc2"],  ")PK'\"LL*SPK3\"\n"],
      [["\xb5\xc2\xb6\xc2\xb7\xc2\xb8\xc2\xb9"],  ")M<*VPK?\"N,*Y\n"],
      [["\xc2\xba\xc2\xbb\xc2\xbc\xc2\xbd\xc2"],  ")PKK\"N\\*\\PKW\"\n"],
      [["\xbe\xc2\xbf\xc3\x80\xc3\x81\xc3\x82"],  ")OL*_PX#\#@<.\"\n"],
      [["\xc3\x83\xc3\x84\xc3\x85\xc3\x86\xc3"],  ")PX/#A,.%PX;#\n"],
      [["\x87\xc3\x88\xc3\x89\xc3\x8a\xc3\x8b"],  ")A\\.(PXG#BL.+\n"],
      [["\xc3\x8c\xc3\x8d\xc3\x8e\xc3\x8f\xc3"],  ")PXS#C<..PX_#\n"],
      [["\x90\xc3\x91\xc3\x92\xc3\x93\xc3\x94"],  ")D,.1PY+#D\\.4\n"],
      [["\xc3\x95\xc3\x96\xc3\x97\xc3\x98\xc3"],  ")PY7#EL.7PYC#\n"],
      [["\x99\xc3\x9a\xc3\x9b\xc3\x9c\xc3\x9d"],  ")F<.:PYO#G,.=\n"],
      [["\xc3\x9e\xc3\x9f\xc3\xa0\xc3\xa1\xc3"],  ")PY[#G\\.@PZ'#\n"],
      [["\xa2\xc3\xa3\xc3\xa4\xc3\xa5\xc3\xa6"],  ")HL.CPZ3#I<.F\n"],
      [["\xc3\xa7\xc3\xa8\xc3\xa9\xc3\xaa\xc3"],  ")PZ?#J,.IPZK#\n"],
      [["\xab\xc3\xac\xc3\xad\xc3\xae\xc3\xaf"],  ")J\\.LPZW#KL.O\n"],
      [["\xc3\xb0\xc3\xb1\xc3\xb2\xc3\xb3\xc3"],  ")P[##L<.RP[/#\n"],
      [["\xb4\xc3\xb5\xc3\xb6\xc3\xb7\xc3\xb8"],  ")M,.UP[;#M\\.X\n"],
      [["\xc3\xb9\xc3\xba\xc3\xbb\xc3\xbc\xc3"],  ")P[G#NL.[P[S#\n"],
      [["\xbd\xc3\xbe\xc3\xbf"],                  "%O<.^P[\\`\n"]
    ].should be_computed_by(:pack, "u")
  end

  it "calls #to_str to convert an object to a String" do
    obj = mock("pack m string")
    obj.should_receive(:to_str).and_return("abc")
    [obj].pack("u").should == "#86)C\n"
  end

  it "raises a TypeError if #to_str does not return a String" do
    obj = mock("pack m non-string")
    lambda { [obj].pack("u") }.should raise_error(TypeError)
  end

  it "raises a TypeError if passed nil" do
    lambda { [nil].pack("u") }.should raise_error(TypeError)
  end

  it "raises a TypeError if passed an Integer" do
    lambda { [0].pack("u") }.should raise_error(TypeError)
    lambda { [bignum_value].pack("u") }.should raise_error(TypeError)
  end

  it "sets the output string to US-ASCII encoding" do
    ["abcd"].pack("u").encoding.should == Encoding::US_ASCII
  end
end
