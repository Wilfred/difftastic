# -*- encoding: utf-8 -*-

describe :symbol_length, shared: true do
  it "returns 0 for empty name" do
    :''.send(@method).should == 0
  end

  it "returns 1 for name formed by a NUL character" do
    :"\x00".send(@method).should == 1
  end

  it "returns 3 for name formed by 3 ASCII characters" do
    :one.send(@method).should == 3
  end

  it "returns 4 for name formed by 4 ASCII characters" do
    :four.send(@method).should == 4
  end

  it "returns 4 for name formed by 1 multibyte and 3 ASCII characters" do
    :"\xC3\x9Cber".send(@method).should == 4
  end
end
