# -*- encoding: binary -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "Time._load" do
  it "is a private method" do
    Time.should have_private_method(:_load, false)
  end

  # http://redmine.ruby-lang.org/issues/show/627
  it "loads a time object in the new format" do
    t = Time.local(2000, 1, 15, 20, 1, 1)
    t = t.gmtime

    high =               1 << 31 |
          (t.gmt? ? 1 : 0) << 30 |
           (t.year - 1900) << 14 |
              (t.mon  - 1) << 10 |
                     t.mday << 5 |
                          t.hour

    low =  t.min  << 26 |
           t.sec  << 20 |
                 t.usec

    Time.send(:_load, [high, low].pack("VV")).should == t
  end

  it "loads a time object in the old UNIX timestamp based format" do
    t = Time.local(2000, 1, 15, 20, 1, 1, 203)
    timestamp = t.to_i

    high = timestamp & ((1 << 31) - 1)

    low =  t.usec

    Time.send(:_load, [high, low].pack("VV")).should == t
  end

  it "loads MRI's marshaled time format" do
    t = Marshal.load("\004\bu:\tTime\r\320\246\e\200\320\001\r\347")
    t.utc

    t.to_s.should == "2010-10-22 16:57:48 UTC"
  end

  with_feature :encoding do
    it "treats the data as binary data" do
      data = "\x04\bu:\tTime\r\fM\x1C\xC0\x00\x00\xD0\xBE"
      data.force_encoding Encoding::UTF_8
      t = Marshal.load(data)
      t.to_s.should == "2013-04-08 12:47:45 UTC"
    end
  end
end
