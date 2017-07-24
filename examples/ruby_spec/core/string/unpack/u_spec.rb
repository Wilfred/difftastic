# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/unicode', __FILE__)

describe "String#unpack with format 'U'" do
  it_behaves_like :string_unpack_basic, 'U'
  it_behaves_like :string_unpack_no_platform, 'U'
  it_behaves_like :string_unpack_unicode, 'U'

  it "raises ArgumentError on a malformed byte sequence" do
    lambda { "\xE3".unpack('U') }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError on a malformed byte sequence and doesn't continue when used with the * modifier" do
    lambda { "\xE3".unpack('U*') }.should raise_error(ArgumentError)
  end
end

describe "String#unpack with format 'u'" do
  it_behaves_like :string_unpack_basic, 'u'
  it_behaves_like :string_unpack_no_platform, 'u'

  it "decodes an empty string as an empty string" do
    "".unpack("u").should == [""]
  end

  it "decodes into raw (ascii) string values" do
    str = "".unpack("u")[0]
    str.encoding.name.should == 'ASCII-8BIT'

    str = "1".force_encoding('UTF-8').unpack("u")[0]
    str.encoding.name.should == 'ASCII-8BIT'
  end

  it "decodes the complete string ignoring newlines when given a single directive" do
    "#86)C\n#1$5&\n".unpack("u").should == ["abcDEF"]
  end

  it "appends empty string to the array for directives exceeding the input size" do
    "#86)C\n#1$5&\n".unpack("uuu").should == ["abcDEF", "", ""]
  end

  it "ignores the count or '*' modifier and decodes the entire string" do
    [ ["#86)C\n#1$5&\n", "u238", ["abcDEF"]],
      ["#86)C\n#1$5&\n", "u*",   ["abcDEF"]]
    ].should be_computed_by(:unpack)
  end

  it "decodes all ascii characters" do
    [ ["'``$\"`P0%!@``\n",          ["\x00\x01\x02\x03\x04\x05\x06"]],
      ["'!P@)\"@L,#0``\n",          ["\a\b\t\n\v\f\r"]],
      [")\#@\\0$1(3%!46\n",         ["\x0E\x0F\x10\x11\x12\x13\x14\x15\x16"]],
      [")%Q@9&AL<'1X?\n",           ["\x17\x18\x19\x1a\e\x1c\x1d\x1e\x1f"]],
      ["/(2(C)\"4F)R@I*BLL+2XO\n",  ["!\"\#$%&'()*+,-./"]],
      ["*,\#$R,S0U-C<X.0``\n",      ["0123456789"]],
      ["'.CL\\/3X_0```\n",          [":;<=>?@"]],
      [":04)#1$5&1TA)2DM,34Y/4%%24U155E=865H`\n", ["ABCDEFGHIJKLMNOPQRSTUVWXYZ"]],
      ["&6UQ=7E]@\n",               ["[\\]^_`"]],
      [":86)C9&5F9VAI:FML;6YO<'%R<W1U=G=X>7H`\n", ["abcdefghijklmnopqrstuvwxyz"]],
      ["$>WQ]?@``\n",               ["{|}~"]],
      [")?\\*`PH'\"@L*#\n",         ["\x7f\xc2\x80\xc2\x81\xc2\x82\xc2\x83"]],
      [")PH3\"A<*&PH?\"\n",         ["\xc2\x84\xc2\x85\xc2\x86\xc2\x87\xc2"]],
      [")B,*)PHK\"B\\*,\n",         ["\x88\xc2\x89\xc2\x8a\xc2\x8b\xc2\x8c"]],
      [")PHW\"CL*/PI#\"\n",         ["\xc2\x8d\xc2\x8e\xc2\x8f\xc2\x90\xc2"]],
      [")D<*2PI/\"E,*5\n",          ["\x91\xc2\x92\xc2\x93\xc2\x94\xc2\x95"]],
      [")PI;\"E\\*8PIG\"\n",        ["\xc2\x96\xc2\x97\xc2\x98\xc2\x99\xc2"]],
      [")FL*;PIS\"G<*>\n",          ["\x9a\xc2\x9b\xc2\x9c\xc2\x9d\xc2\x9e"]],
      [")PI_\"H,*APJ+\"\n",         ["\xc2\x9f\xc2\xa0\xc2\xa1\xc2\xa2\xc2"]],
      [")H\\*DPJ7\"IL*G\n",         ["\xa3\xc2\xa4\xc2\xa5\xc2\xa6\xc2\xa7"]],
      [")PJC\"J<*JPJO\"\n",         ["\xc2\xa8\xc2\xa9\xc2\xaa\xc2\xab\xc2"]],
      [")K,*MPJ[\"K\\*P\n",         ["\xac\xc2\xad\xc2\xae\xc2\xaf\xc2\xb0"]],
      [")PK'\"LL*SPK3\"\n",         ["\xc2\xb1\xc2\xb2\xc2\xb3\xc2\xb4\xc2"]],
      [")M<*VPK?\"N,*Y\n",          ["\xb5\xc2\xb6\xc2\xb7\xc2\xb8\xc2\xb9"]],
      [")PKK\"N\\*\\PKW\"\n",       ["\xc2\xba\xc2\xbb\xc2\xbc\xc2\xbd\xc2"]],
      [")OL*_PX#\#@<.\"\n",         ["\xbe\xc2\xbf\xc3\x80\xc3\x81\xc3\x82"]],
      [")PX/#A,.%PX;#\n",           ["\xc3\x83\xc3\x84\xc3\x85\xc3\x86\xc3"]],
      [")A\\.(PXG#BL.+\n",          ["\x87\xc3\x88\xc3\x89\xc3\x8a\xc3\x8b"]],
      [")PXS#C<..PX_#\n",           ["\xc3\x8c\xc3\x8d\xc3\x8e\xc3\x8f\xc3"]],
      [")D,.1PY+#D\\.4\n",          ["\x90\xc3\x91\xc3\x92\xc3\x93\xc3\x94"]],
      [")PY7#EL.7PYC#\n",           ["\xc3\x95\xc3\x96\xc3\x97\xc3\x98\xc3"]],
      [")F<.:PYO#G,.=\n",           ["\x99\xc3\x9a\xc3\x9b\xc3\x9c\xc3\x9d"]],
      [")PY[#G\\.@PZ'#\n",          ["\xc3\x9e\xc3\x9f\xc3\xa0\xc3\xa1\xc3"]],
      [")HL.CPZ3#I<.F\n",           ["\xa2\xc3\xa3\xc3\xa4\xc3\xa5\xc3\xa6"]],
      [")PZ?#J,.IPZK#\n",           ["\xc3\xa7\xc3\xa8\xc3\xa9\xc3\xaa\xc3"]],
      [")J\\.LPZW#KL.O\n",          ["\xab\xc3\xac\xc3\xad\xc3\xae\xc3\xaf"]],
      [")P[##L<.RP[/#\n",           ["\xc3\xb0\xc3\xb1\xc3\xb2\xc3\xb3\xc3"]],
      [")M,.UP[;#M\\.X\n",          ["\xb4\xc3\xb5\xc3\xb6\xc3\xb7\xc3\xb8"]],
      [")P[G#NL.[P[S#\n",           ["\xc3\xb9\xc3\xba\xc3\xbb\xc3\xbc\xc3"]],
      ["%O<.^P[\\`\n",              ["\xbd\xc3\xbe\xc3\xbf"]]
    ].should be_computed_by(:unpack, "u")
  end
end
