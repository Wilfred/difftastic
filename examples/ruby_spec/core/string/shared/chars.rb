# -*- encoding: utf-8 -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe :string_chars, shared: true do
  it "passes each char in self to the given block" do
    a = []
    "hello".send(@method) { |c| a << c }
    a.should == ['h', 'e', 'l', 'l', 'o']
  end

  it "returns self" do
    s = StringSpecs::MyString.new "hello"
    s.send(@method){}.should equal(s)
  end


  it "is unicode aware" do
    "\303\207\342\210\202\303\251\306\222g".send(@method).to_a.should ==
      ["\303\207", "\342\210\202", "\303\251", "\306\222", "g"]
  end

  with_feature :encoding do
    it "returns characters in the same encoding as self" do
      "&%".force_encoding('Shift_JIS').send(@method).to_a.all? {|c| c.encoding.name.should == 'Shift_JIS'}
      "&%".encode('ASCII-8BIT').send(@method).to_a.all? {|c| c.encoding.name.should == 'ASCII-8BIT'}
    end

    it "works with multibyte characters" do
      s = "\u{8987}".force_encoding("UTF-8")
      s.bytesize.should == 3
      s.send(@method).to_a.should == [s]
    end

    it "works if the String's contents is invalid for its encoding" do
      xA4 = [0xA4].pack('C')
      xA4.force_encoding('UTF-8')
      xA4.valid_encoding?.should be_false
      xA4.send(@method).to_a.should == [xA4.force_encoding("UTF-8")]
    end

    it "returns a different character if the String is transcoded" do
      s = "\u{20AC}".force_encoding('UTF-8')
      s.encode('UTF-8').send(@method).to_a.should == ["\u{20AC}".force_encoding('UTF-8')]
      s.encode('iso-8859-15').send(@method).to_a.should == [
        [0xA4].pack('C').force_encoding('iso-8859-15')]
      s.encode('iso-8859-15').encode('UTF-8').send(@method).to_a.should == [
        "\u{20AC}".force_encoding('UTF-8')]
    end

    it "uses the String's encoding to determine what characters it contains" do
      s = "\u{24B62}"

      s.force_encoding('UTF-8').send(@method).to_a.should == [
        s.force_encoding('UTF-8')
      ]
      s.force_encoding('BINARY').send(@method).to_a.should == [
        [0xF0].pack('C').force_encoding('BINARY'),
        [0xA4].pack('C').force_encoding('BINARY'),
        [0xAD].pack('C').force_encoding('BINARY'),
        [0xA2].pack('C').force_encoding('BINARY')
      ]
      s.force_encoding('SJIS').send(@method).to_a.should == [
        [0xF0,0xA4].pack('CC').force_encoding('SJIS'),
        [0xAD].pack('C').force_encoding('SJIS'),
        [0xA2].pack('C').force_encoding('SJIS')
      ]
    end

    it "taints resulting strings when self is tainted" do
      str = "hello"

      str.send(@method) do |x|
        x.tainted?.should == false
      end

      str.dup.taint.send(@method) do |x|
        x.tainted?.should == true
      end
    end
  end
end
