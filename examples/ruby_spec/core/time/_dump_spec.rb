# -*- encoding: binary -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#_dump" do
  before :each do
    @local = Time.at(946812800)
    @t = Time.at(946812800)
    @t = @t.gmtime
    @s = @t.send(:_dump)
  end

  it "is a private method" do
    Time.should have_private_instance_method(:_dump, false)
  end

  # http://redmine.ruby-lang.org/issues/show/627
  it "preserves the GMT flag" do
    @t.gmt?.should == true
    dump = @t.send(:_dump).unpack("VV").first
    ((dump >> 30) & 0x1).should == 1

    @local.gmt?.should == false
    dump = @local.send(:_dump).unpack("VV").first
    ((dump >> 30) & 0x1).should == 0
  end

  it "dumps a Time object to a bytestring" do
    @s.should be_an_instance_of(String)
    @s.should == [3222863947, 2235564032].pack("VV")
  end

  it "dumps an array with a date as first element" do
    high =                1 << 31 |
          (@t.gmt? ? 1 : 0) << 30 |
           (@t.year - 1900) << 14 |
              (@t.mon  - 1) << 10 |
                     @t.mday << 5 |
                          @t.hour

    high.should == @s.unpack("VV").first
  end

  it "dumps an array with a time as second element" do
    low =  @t.min  << 26 |
           @t.sec  << 20 |
           @t.usec
    low.should == @s.unpack("VV").last
  end

  it "dumps like MRI's marshaled time format" do
    t = Time.utc(2000, 1, 15, 20, 1, 1, 203).localtime

    t.send(:_dump).should == "\364\001\031\200\313\000\020\004"
  end
end

