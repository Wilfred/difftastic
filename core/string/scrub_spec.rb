# -*- encoding: utf-8 -*-
require File.expand_path("../../../spec_helper", __FILE__)

describe "String#scrub with a default replacement" do
  it "returns self for valid strings" do
    input = "foo"

    input.scrub.should == input
  end

  it "replaces invalid byte sequences" do
    x81 = [0x81].pack('C').force_encoding('utf-8')
    "abc\u3042#{x81}".scrub.should == "abc\u3042\uFFFD"
  end

  it "returns a copy of self when the input encoding is BINARY" do
    input = "foo".encode('BINARY')

    input.scrub.should == "foo"
  end


  it "replaces invalid byte sequences when using ASCII as the input encoding" do
    xE3x80 = [0xE3, 0x80].pack('CC').force_encoding 'utf-8'
    input = "abc\u3042#{xE3x80}".force_encoding('ASCII')
    input.scrub.should == "abc?????"
  end
end

describe "String#scrub with a custom replacement" do
  it "returns self for valid strings" do
    input = "foo"

    input.scrub("*").should == input
  end

  it "replaces invalid byte sequences" do
    x81 = [0x81].pack('C').force_encoding('utf-8')
    "abc\u3042#{x81}".scrub("*").should == "abc\u3042*"
  end

  it "replaces an incomplete character at the end with a single replacement" do
    xE3x80 = [0xE3, 0x80].pack('CC').force_encoding 'utf-8'
    xE3x80.scrub("*").should == "*"
  end

  it "raises ArgumentError for replacements with an invalid encoding" do
    x81 = [0x81].pack('C').force_encoding('utf-8')
    xE4 = [0xE4].pack('C').force_encoding('utf-8')
    block = lambda { "foo#{x81}".scrub(xE4) }

    block.should raise_error(ArgumentError)
  end

  it "raises TypeError when a non String replacement is given" do
    x81 = [0x81].pack('C').force_encoding('utf-8')
    block = lambda { "foo#{x81}".scrub(1) }

    block.should raise_error(TypeError)
  end
end

describe "String#scrub with a block" do
  it "returns self for valid strings" do
    input = "foo"

    input.scrub { |b| "*" }.should == input
  end

  it "replaces invalid byte sequences" do
    xE3x80 = [0xE3, 0x80].pack('CC').force_encoding 'utf-8'
    replaced = "abc\u3042#{xE3x80}".scrub { |b| "<#{b.unpack("H*")[0]}>" }

    replaced.should == "abc\u3042<e380>"
  end

  it "replaces invalid byte sequences using a custom encoding" do
    x80x80 = [0x80, 0x80].pack('CC').force_encoding 'utf-8'
    replaced = x80x80.scrub do |bad|
      bad.encode(Encoding::UTF_8, Encoding::Windows_1252)
    end

    replaced.should == "€€"
  end
end

describe "String#scrub!" do
  it "modifies self for valid strings" do
    x81 = [0x81].pack('C').force_encoding('utf-8')
    input = "a#{x81}"
    input.scrub!
    input.should == "a\uFFFD"
  end

  it "accepts blocks" do
    x81 = [0x81].pack('C').force_encoding('utf-8')
    input = "a#{x81}"
    input.scrub! { |b| "<?>" }
    input.should == "a<?>"
  end
end
