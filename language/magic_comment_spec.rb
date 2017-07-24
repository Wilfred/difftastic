require File.expand_path('../../spec_helper', __FILE__)

describe "Magic comment" do
  it "is optional" do
    eval("__ENCODING__").should be_an_instance_of(Encoding)
  end

  it "determines __ENCODING__" do
    eval(<<EOS.force_encoding("US-ASCII")).should == Encoding::ASCII_8BIT
# encoding: ASCII-8BIT
__ENCODING__
EOS
  end

  it "is case-insensitive" do
    eval(<<EOS.force_encoding("US-ASCII")).should == Encoding::ASCII_8BIT
# CoDiNg:   aScIi-8bIt
__ENCODING__
EOS
  end

  it "must be at the first line" do
    eval(<<EOS.force_encoding("US-ASCII")).should == Encoding::US_ASCII

# encoding: ASCII-8BIT
__ENCODING__
EOS
  end

  it "must be the first token of the line" do
    eval(<<EOS.force_encoding("US-ASCII")).should == Encoding::US_ASCII
1+1 # encoding: ASCII-8BIT
__ENCODING__
EOS
    eval(<<EOS.force_encoding("US-ASCII")).should == Encoding::ASCII_8BIT
  # encoding: ASCII-8BIT
__ENCODING__
EOS
  end

  it "can be after the shebang" do
    eval(<<EOS.force_encoding("US-ASCII")).should == Encoding::ASCII_8BIT
#!/usr/bin/ruby -Ku
# encoding: ASCII-8BIT
__ENCODING__
EOS
  end

  it "can take Emacs style" do
    eval(<<EOS.force_encoding("US-ASCII")).should == Encoding::ASCII_8BIT
# -*- encoding: ascii-8bit -*-
__ENCODING__
EOS
  end

  it "can take vim style" do
    eval(<<EOS.force_encoding("US-ASCII")).should == Encoding::ASCII_8BIT
# vim: filetype=ruby, fileencoding=ascii-8bit, tabsize=3, shiftwidth=3
__ENCODING__
EOS
  end
end
