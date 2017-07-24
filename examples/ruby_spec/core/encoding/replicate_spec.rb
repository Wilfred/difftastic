# -*- encoding: binary -*-
require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding#replicate" do
    before :all do
      @i = 0
    end

    before :each do
      @i += 1
      @prefix = "RS#{@i}"
    end

    it "returns a replica of ASCII" do
      name = @prefix + '-ASCII'
      e = Encoding::ASCII.replicate(name)
      e.name.should == name
      "a".force_encoding(e).valid_encoding?.should be_true
      "\x80".force_encoding(e).valid_encoding?.should be_false
    end

    it "returns a replica of UTF-8" do
      name = @prefix + 'UTF-8'
      e = Encoding::UTF_8.replicate(name)
      e.name.should == name
      "a".force_encoding(e).valid_encoding?.should be_true
      "\u3042".force_encoding(e).valid_encoding?.should be_true
      "\x80".force_encoding(e).valid_encoding?.should be_false
    end

    it "returns a replica of UTF-16BE" do
      name = @prefix + 'UTF-16-BE'
      e = Encoding::UTF_16BE.replicate(name)
      e.name.should == name
      "a".force_encoding(e).valid_encoding?.should be_false
      "\x30\x42".force_encoding(e).valid_encoding?.should be_true
      "\x80".force_encoding(e).valid_encoding?.should be_false
    end

    it "returns a replica of ISO-2022-JP" do
      name = @prefix + 'ISO-2022-JP'
      e = Encoding::ISO_2022_JP.replicate(name)
      e.name.should == name
      e.dummy?.should be_true
    end
  end
end
