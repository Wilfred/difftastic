# -*- encoding: ascii-8bit -*-

describe :string_unpack_float_le, shared: true do
  it "decodes one float for a single format character" do
    "\x8f\xc2\xb5?".unpack(unpack_format).should == [1.4199999570846558]
  end

  it "decodes a negative float" do
    "\xcd\xcc\x08\xc2".unpack(unpack_format).should == [-34.200000762939453]
  end

  it "decodes two floats for two format characters" do
    array = "\x9a\x999@33\xb3?".unpack(unpack_format(nil, 2))
    array.should == [2.9000000953674316, 1.399999976158142]
  end

  it "decodes the number of floats requested by the count modifier" do
    array = "\x9a\x999@33\xb3?33\x03A".unpack(unpack_format(3))
    array.should == [2.9000000953674316, 1.399999976158142, 8.199999809265137]
  end

  it "decodes the remaining floats when passed the '*' modifier" do
    array = "\x9a\x999@33\xb3?33\x03A".unpack(unpack_format("*"))
    array.should == [2.9000000953674316, 1.399999976158142, 8.199999809265137]
  end

  it "decodes the remaining floats when passed the '*' modifier after another directive" do
    array = "\x9a\x99\xa9@33\x13A".unpack(unpack_format()+unpack_format('*'))
    array.should == [5.300000190734863, 9.199999809265137]
  end

  it "does not decode a float when fewer bytes than a float remain and the '*' modifier is passed" do
    [ ["\xff", []],
      ["\xff\x00", []],
      ["\xff\x00\xff", []]
    ].should be_computed_by(:unpack, unpack_format("*"))
  end

  it "adds nil for each element requested beyond the end of the String" do
    [ ["abc",                  [nil, nil, nil]],
      ["\x8f\xc2\xb5?abc",     [1.4199999570846558, nil, nil]],
      ["\x9a\x999@33\xb3?abc", [2.9000000953674316, 1.399999976158142, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end

  it "decodes positive Infinity" do
    "\x00\x00\x80\x7f".unpack(unpack_format).should == [infinity_value]
  end

  it "decodes negative Infinity" do
    "\x00\x00\x80\xff".unpack(unpack_format).should == [-infinity_value]
  end

  it "decodes NaN" do
    # mumble mumble NaN mumble https://bugs.ruby-lang.org/issues/5884
    [nan_value].pack(unpack_format).unpack(unpack_format).first.nan?.should be_true
  end

  it "ignores NULL bytes between directives" do
    array = "\x9a\x999@33\xb3?".unpack(unpack_format("\000", 2))
    array.should == [2.9000000953674316, 1.399999976158142]
  end

  it "ignores spaces between directives" do
    array = "\x9a\x999@33\xb3?".unpack(unpack_format(' ', 2))
    array.should == [2.9000000953674316, 1.399999976158142]
  end
end

describe :string_unpack_float_be, shared: true do
  it "decodes one float for a single format character" do
    "?\xb5\xc2\x8f".unpack(unpack_format).should == [1.4199999570846558]
  end

  it "decodes a negative float" do
    "\xc2\x08\xcc\xcd".unpack(unpack_format).should == [-34.200000762939453]
  end

  it "decodes two floats for two format characters" do
    array = "@9\x99\x9a?\xb333".unpack(unpack_format(nil, 2))
    array.should == [2.9000000953674316, 1.399999976158142]
  end

  it "decodes the number of floats requested by the count modifier" do
    array = "@9\x99\x9a?\xb333A\x0333".unpack(unpack_format(3))
    array.should == [2.9000000953674316, 1.399999976158142, 8.199999809265137]
  end

  it "decodes the remaining floats when passed the '*' modifier" do
    array = "@9\x99\x9a?\xb333A\x0333".unpack(unpack_format("*"))
    array.should == [2.9000000953674316, 1.399999976158142, 8.199999809265137]
  end

  it "decodes the remaining floats when passed the '*' modifier after another directive" do
    array = "@\xa9\x99\x9aA\x1333".unpack(unpack_format()+unpack_format('*'))
    array.should == [5.300000190734863, 9.199999809265137]
  end

  it "does not decode a float when fewer bytes than a float remain and the '*' modifier is passed" do
    [ ["\xff", []],
      ["\xff\x00", []],
      ["\xff\x00\xff", []]
    ].should be_computed_by(:unpack, unpack_format("*"))
  end

  it "adds nil for each element requested beyond the end of the String" do
    [ ["abc",                  [nil, nil, nil]],
      ["?\xb5\xc2\x8fabc",     [1.4199999570846558, nil, nil]],
      ["@9\x99\x9a?\xb333abc", [2.9000000953674316, 1.399999976158142, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end

  it "decodes positive Infinity" do
    "\x7f\x80\x00\x00".unpack(unpack_format).should == [infinity_value]
  end

  it "decodes negative Infinity" do
    "\xff\x80\x00\x00".unpack(unpack_format).should == [-infinity_value]
  end

  it "decodes NaN" do
    # mumble mumble NaN mumble https://bugs.ruby-lang.org/issues/5884
    [nan_value].pack(unpack_format).unpack(unpack_format).first.nan?.should be_true
  end

  it "ignores NULL bytes between directives" do
    array = "@9\x99\x9a?\xb333".unpack(unpack_format("\000", 2))
    array.should == [2.9000000953674316, 1.399999976158142]
  end

  it "ignores spaces between directives" do
    array = "@9\x99\x9a?\xb333".unpack(unpack_format(' ', 2))
    array.should == [2.9000000953674316, 1.399999976158142]
  end
end

describe :string_unpack_double_le, shared: true do
  it "decodes one double for a single format character" do
    "\xb8\x1e\x85\xebQ\xb8\xf6?".unpack(unpack_format).should == [1.42]
  end

  it "decodes a negative double" do
    "\x9a\x99\x99\x99\x99\x19A\xc0".unpack(unpack_format).should == [-34.2]
  end

  it "decodes two doubles for two format characters" do
    "333333\x07@ffffff\xf6?".unpack(unpack_format(nil, 2)).should == [2.9, 1.4]
  end

  it "decodes the number of doubles requested by the count modifier" do
    array = "333333\x07@ffffff\xf6?ffffff\x20@".unpack(unpack_format(3))
    array.should == [2.9, 1.4, 8.2]
  end

  it "decodes the remaining doubles when passed the '*' modifier" do
    array = "333333\x07@ffffff\xf6?ffffff\x20@".unpack(unpack_format("*"))
    array.should == [2.9, 1.4, 8.2]
  end

  it "decodes the remaining doubles when passed the '*' modifier after another directive" do
    array = "333333\x15@ffffff\x22@".unpack(unpack_format()+unpack_format('*'))
    array.should == [5.3, 9.2]
  end

  it "does not decode a double when fewer bytes than a double remain and the '*' modifier is passed" do
    [ ["\xff", []],
      ["\xff\x00", []],
      ["\xff\x00\xff", []],
      ["\xff\x00\xff\x00", []],
      ["\xff\x00\xff\x00\xff", []],
      ["\xff\x00\xff\x00\xff\x00", []],
      ["\xff\x00\xff\x00\xff\x00\xff", []]
    ].should be_computed_by(:unpack, unpack_format("*"))
  end

  it "adds nil for each element requested beyond the end of the String" do
    [ ["\xff\x00\xff\x00\xff\x00\xff",  [nil, nil, nil]],
      ["\xb8\x1e\x85\xebQ\xb8\xf6?abc", [1.42, nil, nil]],
      ["333333\x07@ffffff\xf6?abcd",    [2.9, 1.4, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end

  it "decodes positive Infinity" do
    "\x00\x00\x00\x00\x00\x00\xf0\x7f".unpack(unpack_format).should == [infinity_value]
  end

  it "decodes negative Infinity" do
    "\x00\x00\x00\x00\x00\x00\xf0\xff".unpack(unpack_format).should == [-infinity_value]
  end

  it "decodes NaN" do
    # mumble mumble NaN mumble https://bugs.ruby-lang.org/issues/5884
    [nan_value].pack(unpack_format).unpack(unpack_format).first.nan?.should be_true
  end

  it "ignores NULL bytes between directives" do
    "333333\x07@ffffff\xf6?".unpack(unpack_format("\000", 2)).should == [2.9, 1.4]
  end

  it "ignores spaces between directives" do
    "333333\x07@ffffff\xf6?".unpack(unpack_format(' ', 2)).should == [2.9, 1.4]
  end
end

describe :string_unpack_double_be, shared: true do
  it "decodes one double for a single format character" do
    "?\xf6\xb8Q\xeb\x85\x1e\xb8".unpack(unpack_format).should == [1.42]
  end

  it "decodes a negative double" do
    "\xc0A\x19\x99\x99\x99\x99\x9a".unpack(unpack_format).should == [-34.2]
  end

  it "decodes two doubles for two format characters" do
    "@\x07333333?\xf6ffffff".unpack(unpack_format(nil, 2)).should == [2.9, 1.4]
  end

  it "decodes the number of doubles requested by the count modifier" do
    array = "@\x07333333?\xf6ffffff@\x20ffffff".unpack(unpack_format(3))
    array.should == [2.9, 1.4, 8.2]
  end

  it "decodes the remaining doubles when passed the '*' modifier" do
    array = "@\x07333333?\xf6ffffff@\x20ffffff".unpack(unpack_format("*"))
    array.should == [2.9, 1.4, 8.2]
  end

  it "decodes the remaining doubles when passed the '*' modifier after another directive" do
    array = "@\x15333333@\x22ffffff".unpack(unpack_format()+unpack_format('*'))
    array.should == [5.3, 9.2]
  end

  it "does not decode a double when fewer bytes than a double remain and the '*' modifier is passed" do
    [ ["\xff", []],
      ["\xff\x00", []],
      ["\xff\x00\xff", []],
      ["\xff\x00\xff\x00", []],
      ["\xff\x00\xff\x00\xff", []],
      ["\xff\x00\xff\x00\xff\x00", []],
      ["\xff\x00\xff\x00\xff\x00\xff", []]
    ].should be_computed_by(:unpack, unpack_format("*"))
  end

  it "adds nil for each element requested beyond the end of the String" do
    [ ["abcdefg",  [nil, nil, nil]],
      ["?\xf6\xb8Q\xeb\x85\x1e\xb8abc", [1.42, nil, nil]],
      ["@\x07333333?\xf6ffffffabcd",    [2.9, 1.4, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end

  it "decodes positive Infinity" do
    "\x7f\xf0\x00\x00\x00\x00\x00\x00".unpack(unpack_format).should == [infinity_value]
  end

  it "decodes negative Infinity" do
    "\xff\xf0\x00\x00\x00\x00\x00\x00".unpack(unpack_format).should == [-infinity_value]
  end

  it "decodes NaN" do
    # mumble mumble NaN mumble https://bugs.ruby-lang.org/issues/5884
    [nan_value].pack(unpack_format).unpack(unpack_format).first.nan?.should be_true
  end

  it "ignores NULL bytes between directives" do
    "@\x07333333?\xf6ffffff".unpack(unpack_format("\000", 2)).should == [2.9, 1.4]
  end

  it "ignores spaces between directives" do
    "@\x07333333?\xf6ffffff".unpack(unpack_format(' ', 2)).should == [2.9, 1.4]
  end
end
