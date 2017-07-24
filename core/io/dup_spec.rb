require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#dup" do
  before :each do
    @file = tmp("rubinius_spec_io_dup_#{$$}_#{Time.now.to_f}")
    @f = File.open @file, 'w+'
    @i = @f.dup

    @f.sync = true
    @i.sync = true
  end

  after :each do
    @i.close if @i && !@i.closed?
    @f.close if @f && !@f.closed?
    rm_r @file
  end

  it "returns a new IO instance" do
    @i.class.should == @f.class
  end

  it "sets a new descriptor on the returned object" do
    @i.fileno.should_not == @f.fileno
  end

quarantine! do # This does not appear to be consistent across platforms
  it "shares the original stream between the two IOs" do
    start = @f.pos
    @i.pos.should == start

    s =  "Hello, wo.. wait, where am I?\n"
    s2 = "<evil voice>       Muhahahaa!"

    @f.write s
    @i.pos.should == @f.pos

    @i.rewind
    @i.gets.should == s

    @i.rewind
    @i.write s2

    @f.rewind
    @f.gets.should == "#{s2}\n"
  end
end

  it "allows closing the new IO without affecting the original" do
    @i.close
    lambda { @f.gets }.should_not raise_error(Exception)

    @i.closed?.should == true
    @f.closed?.should == false
  end

  it "allows closing the original IO without affecting the new one" do
    @f.close
    lambda { @i.gets }.should_not raise_error(Exception)

    @i.closed?.should == false
    @f.closed?.should == true
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.dup }.should raise_error(IOError)
  end
end
