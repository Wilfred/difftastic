# -*- encoding: ascii-8bit -*-

describe :array_pack_16bit_le, shared: true do
  it "encodes the least significant 16 bits of a positive number" do
    [ [[0x0000_0021], "\x21\x00"],
      [[0x0000_4321], "\x21\x43"],
      [[0x0065_4321], "\x21\x43"],
      [[0x7865_4321], "\x21\x43"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes the least significant 16 bits of a negative number" do
    [ [[-0x0000_0021], "\xdf\xff"],
      [[-0x0000_4321], "\xdf\xbc"],
      [[-0x0065_4321], "\xdf\xbc"],
      [[-0x7865_4321], "\xdf\xbc"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes a Float truncated as an Integer" do
    [ [[2019902241.2],  "\x21\x43"],
      [[2019902241.8],  "\x21\x43"],
      [[-2019902241.2], "\xdf\xbc"],
      [[-2019902241.8], "\xdf\xbc"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "calls #to_int to convert the pack argument to an Integer" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(0x1234_5678)
    [obj].pack(pack_format()).should == "\x78\x56"
  end

  it "encodes the number of array elements specified by the count modifier" do
    str = [0x1243_6578, 0xdef0_abcd, 0x7865_4321].pack(pack_format(2))
    str.should == "\x78\x65\xcd\xab"
  end

  it "encodes all remaining elements when passed the '*' modifier" do
    str = [0x1243_6578, 0xdef0_abcd, 0x7865_4321].pack(pack_format('*'))
    str.should == "\x78\x65\xcd\xab\x21\x43"
  end

  it "ignores NULL bytes between directives" do
    str = [0x1243_6578, 0xdef0_abcd].pack(pack_format("\000", 2))
    str.should == "\x78\x65\xcd\xab"
  end

  it "ignores spaces between directives" do
    str = [0x1243_6578, 0xdef0_abcd].pack(pack_format(' ', 2))
    str.should == "\x78\x65\xcd\xab"
  end
end

describe :array_pack_16bit_be, shared: true do
  it "encodes the least significant 16 bits of a positive number" do
    [ [[0x0000_0021], "\x00\x21"],
      [[0x0000_4321], "\x43\x21"],
      [[0x0065_4321], "\x43\x21"],
      [[0x7865_4321], "\x43\x21"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes the least significant 16 bits of a negative number" do
    [ [[-0x0000_0021], "\xff\xdf"],
      [[-0x0000_4321], "\xbc\xdf"],
      [[-0x0065_4321], "\xbc\xdf"],
      [[-0x7865_4321], "\xbc\xdf"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes a Float truncated as an Integer" do
    [ [[2019902241.2],  "\x43\x21"],
      [[2019902241.8],  "\x43\x21"],
      [[-2019902241.2], "\xbc\xdf"],
      [[-2019902241.8], "\xbc\xdf"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "calls #to_int to convert the pack argument to an Integer" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(0x1234_5678)
    [obj].pack(pack_format()).should == "\x56\x78"
  end

  it "encodes the number of array elements specified by the count modifier" do
    str = [0x1243_6578, 0xdef0_abcd, 0x7865_4321].pack(pack_format(2))
    str.should == "\x65\x78\xab\xcd"
  end

  it "encodes all remaining elements when passed the '*' modifier" do
    str = [0x1243_6578, 0xdef0_abcd, 0x7865_4321].pack(pack_format('*'))
    str.should == "\x65\x78\xab\xcd\x43\x21"
  end

  it "ignores NULL bytes between directives" do
    str = [0x1243_6578, 0xdef0_abcd].pack(pack_format("\000", 2))
    str.should == "\x65\x78\xab\xcd"
  end

  it "ignores spaces between directives" do
    str = [0x1243_6578, 0xdef0_abcd].pack(pack_format(' ', 2))
    str.should == "\x65\x78\xab\xcd"
  end
end

describe :array_pack_32bit_le, shared: true do
  it "encodes the least significant 32 bits of a positive number" do
    [ [[0x0000_0021], "\x21\x00\x00\x00"],
      [[0x0000_4321], "\x21\x43\x00\x00"],
      [[0x0065_4321], "\x21\x43\x65\x00"],
      [[0x7865_4321], "\x21\x43\x65\x78"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes the least significant 32 bits of a negative number" do
    [ [[-0x0000_0021], "\xdf\xff\xff\xff"],
      [[-0x0000_4321], "\xdf\xbc\xff\xff"],
      [[-0x0065_4321], "\xdf\xbc\x9a\xff"],
      [[-0x7865_4321], "\xdf\xbc\x9a\x87"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes a Float truncated as an Integer" do
    [ [[2019902241.2],  "\x21\x43\x65\x78"],
      [[2019902241.8],  "\x21\x43\x65\x78"],
      [[-2019902241.2], "\xdf\xbc\x9a\x87"],
      [[-2019902241.8], "\xdf\xbc\x9a\x87"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "calls #to_int to convert the pack argument to an Integer" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(0x1234_5678)
    [obj].pack(pack_format()).should == "\x78\x56\x34\x12"
  end

  it "encodes the number of array elements specified by the count modifier" do
    str = [0x1243_6578, 0xdef0_abcd, 0x7865_4321].pack(pack_format(2))
    str.should == "\x78\x65\x43\x12\xcd\xab\xf0\xde"
  end

  it "encodes all remaining elements when passed the '*' modifier" do
    str = [0x1243_6578, 0xdef0_abcd, 0x7865_4321].pack(pack_format('*'))
    str.should == "\x78\x65\x43\x12\xcd\xab\xf0\xde\x21\x43\x65\x78"
  end

  it "ignores NULL bytes between directives" do
    str = [0x1243_6578, 0xdef0_abcd].pack(pack_format("\000", 2))
    str.should == "\x78\x65\x43\x12\xcd\xab\xf0\xde"
  end

  it "ignores spaces between directives" do
    str = [0x1243_6578, 0xdef0_abcd].pack(pack_format(' ', 2))
    str.should == "\x78\x65\x43\x12\xcd\xab\xf0\xde"
  end
end

describe :array_pack_32bit_be, shared: true do
  it "encodes the least significant 32 bits of a positive number" do
    [ [[0x0000_0021], "\x00\x00\x00\x21"],
      [[0x0000_4321], "\x00\x00\x43\x21"],
      [[0x0065_4321], "\x00\x65\x43\x21"],
      [[0x7865_4321], "\x78\x65\x43\x21"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes the least significant 32 bits of a negative number" do
    [ [[-0x0000_0021], "\xff\xff\xff\xdf"],
      [[-0x0000_4321], "\xff\xff\xbc\xdf"],
      [[-0x0065_4321], "\xff\x9a\xbc\xdf"],
      [[-0x7865_4321], "\x87\x9a\xbc\xdf"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes a Float truncated as an Integer" do
    [ [[2019902241.2],  "\x78\x65\x43\x21"],
      [[2019902241.8],  "\x78\x65\x43\x21"],
      [[-2019902241.2], "\x87\x9a\xbc\xdf"],
      [[-2019902241.8], "\x87\x9a\xbc\xdf"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "calls #to_int to convert the pack argument to an Integer" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(0x1234_5678)
    [obj].pack(pack_format()).should == "\x12\x34\x56\x78"
  end

  it "encodes the number of array elements specified by the count modifier" do
    str = [0x1243_6578, 0xdef0_abcd, 0x7865_4321].pack(pack_format(2))
    str.should == "\x12\x43\x65\x78\xde\xf0\xab\xcd"
  end

  it "encodes all remaining elements when passed the '*' modifier" do
    str = [0x1243_6578, 0xdef0_abcd, 0x7865_4321].pack(pack_format('*'))
    str.should == "\x12\x43\x65\x78\xde\xf0\xab\xcd\x78\x65\x43\x21"
  end

  it "ignores NULL bytes between directives" do
    str = [0x1243_6578, 0xdef0_abcd].pack(pack_format("\000", 2))
    str.should == "\x12\x43\x65\x78\xde\xf0\xab\xcd"
  end

  it "ignores spaces between directives" do
    str = [0x1243_6578, 0xdef0_abcd].pack(pack_format(' ', 2))
    str.should ==  "\x12\x43\x65\x78\xde\xf0\xab\xcd"
  end
end

describe :array_pack_32bit_le_platform, shared: true do
  it "encodes the least significant 32 bits of a number" do
    [ [[0x7865_4321],  "\x21\x43\x65\x78"],
      [[-0x7865_4321], "\xdf\xbc\x9a\x87"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes the number of array elements specified by the count modifier" do
    str = [0x1243_6578, 0xdef0_abcd, 0x7865_4321].pack(pack_format(2))
    str.should == "\x78\x65\x43\x12\xcd\xab\xf0\xde"
  end

  it "encodes all remaining elements when passed the '*' modifier" do
    str = [0x1243_6578, 0xdef0_abcd, 0x7865_4321].pack(pack_format('*'))
    str.should == "\x78\x65\x43\x12\xcd\xab\xf0\xde\x21\x43\x65\x78"
  end

  platform_is wordsize: 64 do
    it "encodes the least significant 32 bits of a number that is greater than 32 bits" do
      [ [[0xff_7865_4321],  "\x21\x43\x65\x78"],
        [[-0xff_7865_4321], "\xdf\xbc\x9a\x87"]
      ].should be_computed_by(:pack, pack_format())
    end
  end
end

describe :array_pack_32bit_be_platform, shared: true do
  it "encodes the least significant 32 bits of a number" do
    [ [[0x7865_4321],  "\x78\x65\x43\x21"],
      [[-0x7865_4321], "\x87\x9a\xbc\xdf"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes the number of array elements specified by the count modifier" do
    str = [0x1243_6578, 0xdef0_abcd, 0x7865_4321].pack(pack_format(2))
    str.should == "\x12\x43\x65\x78\xde\xf0\xab\xcd"
  end

  it "encodes all remaining elements when passed the '*' modifier" do
    str = [0x1243_6578, 0xdef0_abcd, 0x7865_4321].pack(pack_format('*'))
    str.should == "\x12\x43\x65\x78\xde\xf0\xab\xcd\x78\x65\x43\x21"
  end

  platform_is wordsize: 64 do
    it "encodes the least significant 32 bits of a number that is greater than 32 bits" do
      [ [[0xff_7865_4321],  "\x78\x65\x43\x21"],
        [[-0xff_7865_4321], "\x87\x9a\xbc\xdf"]
      ].should be_computed_by(:pack, pack_format())
    end
  end
end

describe :array_pack_64bit_le, shared: true do
  it "encodes the least significant 64 bits of a positive number" do
    [ [[0x0000_0000_0000_0021], "\x21\x00\x00\x00\x00\x00\x00\x00"],
      [[0x0000_0000_0000_4321], "\x21\x43\x00\x00\x00\x00\x00\x00"],
      [[0x0000_0000_0065_4321], "\x21\x43\x65\x00\x00\x00\x00\x00"],
      [[0x0000_0000_7865_4321], "\x21\x43\x65\x78\x00\x00\x00\x00"],
      [[0x0000_0090_7865_4321], "\x21\x43\x65\x78\x90\x00\x00\x00"],
      [[0x0000_ba90_7865_4321], "\x21\x43\x65\x78\x90\xba\x00\x00"],
      [[0x00dc_ba90_7865_4321], "\x21\x43\x65\x78\x90\xba\xdc\x00"],
      [[0x7edc_ba90_7865_4321], "\x21\x43\x65\x78\x90\xba\xdc\x7e"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes the least significant 64 bits of a negative number" do
    [ [[-0x0000_0000_0000_0021], "\xdf\xff\xff\xff\xff\xff\xff\xff"],
      [[-0x0000_0000_0000_4321], "\xdf\xbc\xff\xff\xff\xff\xff\xff"],
      [[-0x0000_0000_0065_4321], "\xdf\xbc\x9a\xff\xff\xff\xff\xff"],
      [[-0x0000_0000_7865_4321], "\xdf\xbc\x9a\x87\xff\xff\xff\xff"],
      [[-0x0000_0090_7865_4321], "\xdf\xbc\x9a\x87\x6f\xff\xff\xff"],
      [[-0x0000_ba90_7865_4321], "\xdf\xbc\x9a\x87\x6f\x45\xff\xff"],
      [[-0x00dc_ba90_7865_4321], "\xdf\xbc\x9a\x87\x6f\x45\x23\xff"],
      [[-0x7edc_ba90_7865_4321], "\xdf\xbc\x9a\x87\x6f\x45\x23\x81"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes a Float truncated as an Integer" do
    [ [[9.14138647331322368e+18],  "\x00\x44\x65\x78\x90\xba\xdc\x7e"],
      [[-9.14138647331322368e+18], "\x00\xbc\x9a\x87\x6f\x45\x23\x81"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "calls #to_int to convert the pack argument to an Integer" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(0x1234_5678_90ab_cdef)
    [obj].pack(pack_format()).should == "\xef\xcd\xab\x90\x78\x56\x34\x12"
  end

  it "encodes the number of array elements specified by the count modifier" do
    str = [0x1234_5678_90ab_cdef,
           0xdef0_abcd_3412_7856,
           0x7865_4321_dcba_def0].pack(pack_format(2))
    str.should == "\xef\xcd\xab\x90\x78\x56\x34\x12\x56\x78\x12\x34\xcd\xab\xf0\xde"
  end

  it "encodes all remaining elements when passed the '*' modifier" do
    str = [0xdef0_abcd_3412_7856, 0x7865_4321_dcba_def0].pack(pack_format('*'))
    str.should == "\x56\x78\x12\x34\xcd\xab\xf0\xde\xf0\xde\xba\xdc\x21\x43\x65\x78"
  end

  it "ignores NULL bytes between directives" do
    str = [0xdef0_abcd_3412_7856, 0x7865_4321_dcba_def0].pack(pack_format("\000", 2))
    str.should == "\x56\x78\x12\x34\xcd\xab\xf0\xde\xf0\xde\xba\xdc\x21\x43\x65\x78"
  end

  it "ignores spaces between directives" do
    str = [0xdef0_abcd_3412_7856, 0x7865_4321_dcba_def0].pack(pack_format(' ', 2))
    str.should == "\x56\x78\x12\x34\xcd\xab\xf0\xde\xf0\xde\xba\xdc\x21\x43\x65\x78"
  end
end

describe :array_pack_64bit_be, shared: true do
  it "encodes the least significant 64 bits of a positive number" do
    [ [[0x0000_0000_0000_0021], "\x00\x00\x00\x00\x00\x00\x00\x21"],
      [[0x0000_0000_0000_4321], "\x00\x00\x00\x00\x00\x00\x43\x21"],
      [[0x0000_0000_0065_4321], "\x00\x00\x00\x00\x00\x65\x43\x21"],
      [[0x0000_0000_7865_4321], "\x00\x00\x00\x00\x78\x65\x43\x21"],
      [[0x0000_0090_7865_4321], "\x00\x00\x00\x90\x78\x65\x43\x21"],
      [[0x0000_ba90_7865_4321], "\x00\x00\xba\x90\x78\x65\x43\x21"],
      [[0x00dc_ba90_7865_4321], "\x00\xdc\xba\x90\x78\x65\x43\x21"],
      [[0x7edc_ba90_7865_4321], "\x7e\xdc\xba\x90\x78\x65\x43\x21"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes the least significant 64 bits of a negative number" do
    [ [[-0x0000_0000_0000_0021], "\xff\xff\xff\xff\xff\xff\xff\xdf"],
      [[-0x0000_0000_0000_4321], "\xff\xff\xff\xff\xff\xff\xbc\xdf"],
      [[-0x0000_0000_0065_4321], "\xff\xff\xff\xff\xff\x9a\xbc\xdf"],
      [[-0x0000_0000_7865_4321], "\xff\xff\xff\xff\x87\x9a\xbc\xdf"],
      [[-0x0000_0090_7865_4321], "\xff\xff\xff\x6f\x87\x9a\xbc\xdf"],
      [[-0x0000_ba90_7865_4321], "\xff\xff\x45\x6f\x87\x9a\xbc\xdf"],
      [[-0x00dc_ba90_7865_4321], "\xff\x23\x45\x6f\x87\x9a\xbc\xdf"],
      [[-0x7edc_ba90_7865_4321], "\x81\x23\x45\x6f\x87\x9a\xbc\xdf"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "encodes a Float truncated as an Integer" do
    [ [[9.14138647331322368e+18],  "\x7e\xdc\xba\x90\x78\x65\x44\x00"],
      [[-9.14138647331322368e+18], "\x81\x23\x45\x6f\x87\x9a\xbc\x00"]
    ].should be_computed_by(:pack, pack_format())
  end

  it "calls #to_int to convert the pack argument to an Integer" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(0x1234_5678_90ab_cdef)
    [obj].pack(pack_format()).should == "\x12\x34\x56\x78\x90\xab\xcd\xef"
  end

  it "encodes the number of array elements specified by the count modifier" do
    str = [0x1234_5678_90ab_cdef,
           0xdef0_abcd_3412_7856,
           0x7865_4321_dcba_def0].pack(pack_format(2))
    str.should == "\x12\x34\x56\x78\x90\xab\xcd\xef\xde\xf0\xab\xcd\x34\x12\x78\x56"
  end

  it "encodes all remaining elements when passed the '*' modifier" do
    str = [0xdef0_abcd_3412_7856, 0x7865_4321_dcba_def0].pack(pack_format('*'))
    str.should == "\xde\xf0\xab\xcd\x34\x12\x78\x56\x78\x65\x43\x21\xdc\xba\xde\xf0"
  end

  it "ignores NULL bytes between directives" do
    str = [0xdef0_abcd_3412_7856, 0x7865_4321_dcba_def0].pack(pack_format("\000", 2))
    str.should == "\xde\xf0\xab\xcd\x34\x12\x78\x56\x78\x65\x43\x21\xdc\xba\xde\xf0"
  end

  it "ignores spaces between directives" do
    str = [0xdef0_abcd_3412_7856, 0x7865_4321_dcba_def0].pack(pack_format(' ', 2))
    str.should == "\xde\xf0\xab\xcd\x34\x12\x78\x56\x78\x65\x43\x21\xdc\xba\xde\xf0"
  end
end
