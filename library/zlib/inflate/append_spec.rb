require File.expand_path('../../../../spec_helper', __FILE__)
require 'zlib'

describe "Zlib::Inflate#<<" do
  before :all do
    @foo_deflated = [120, 156, 75, 203, 207, 7, 0, 2, 130, 1, 69].pack('C*')
  end

  before :each do
    @z = Zlib::Inflate.new
  end

  after :each do
    @z.close unless @z.closed?
  end

  it "appends data to the input stream" do
    @z << @foo_deflated
    @z.finish.should == 'foo'
  end

  it "treats nil argument as the end of compressed data" do
    @z = Zlib::Inflate.new
    @z << @foo_deflated << nil
    @z.finish.should == 'foo'
  end

  it "just passes through the data after nil argument" do
    @z = Zlib::Inflate.new
    @z << @foo_deflated << nil
    @z << "-after_nil_data"
    @z.finish.should == 'foo-after_nil_data'
  end

  it "properly handles data in chunks" do
    # add bytes, one by one
    @foo_deflated.each_byte { |d| @z << d.chr}
    @z.finish.should == "foo"
  end

  it "properly handles incomplete data" do
    # add bytes, one by one
    @foo_deflated[0, 5].each_byte { |d| @z << d.chr}
    lambda { @z.finish }.should raise_error(Zlib::BufError)
  end

  it "properly handles excessive data, byte-by-byte" do
    # add bytes, one by one
    data = @foo_deflated * 2
    data.each_byte { |d| @z << d.chr}
    @z.finish.should == "foo" + @foo_deflated
  end

  it "properly handles excessive data, in one go" do
    # add bytes, one by one
    data = @foo_deflated * 2
    @z << data
    @z.finish.should == "foo" + @foo_deflated
  end
end
