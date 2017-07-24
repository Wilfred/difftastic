# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#lines" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close if @io
  end

  it "returns an Enumerator" do
    @io.lines.should be_an_instance_of(Enumerator)
  end

  describe "when no block is given" do
    it "returns an Enumerator" do
      @io.lines.should be_an_instance_of(Enumerator)
    end

    describe "returned Enumerator" do
      describe "size" do
        it "should return nil" do
          @io.lines.size.should == nil
        end
      end
    end
  end

  it "returns a line when accessed" do
    enum = @io.lines
    enum.first.should == IOSpecs.lines[0]
  end

  it "yields each line to the passed block" do
    ScratchPad.record []
    @io.lines { |s| ScratchPad << s }
    ScratchPad.recorded.should == IOSpecs.lines
  end
end
