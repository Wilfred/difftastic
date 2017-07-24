# encoding: utf-8

describe :string_length, shared: true do
  it "returns the length of self" do
    "".send(@method).should == 0
    "\x00".send(@method).should == 1
    "one".send(@method).should == 3
    "two".send(@method).should == 3
    "three".send(@method).should == 5
    "four".send(@method).should == 4
  end

  with_feature :encoding do
    it "returns the length of a string in different encodings" do
      utf8_str = 'こにちわ' * 100
      utf8_str.size.should == 400
      utf8_str.encode(Encoding::UTF_32BE).size.should == 400
      utf8_str.encode(Encoding::SHIFT_JIS).size.should == 400
    end

    it "returns the length of the new self after encoding is changed" do
      str = 'こにちわ'
      str.send(@method)

      str.force_encoding('ASCII-8BIT').send(@method).should == 12
    end
  end
end
