# -*- encoding: utf-8 -*-
describe :io_chars, shared: true do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
    ScratchPad.record []
  end

  after :each do
    @io.close unless @io.closed?
  end

  it "yields each character" do
    @io.readline.should == "Voici la ligne une.\n"

    count = 0
    @io.send(@method) do |c|
      ScratchPad << c
      break if 4 < count += 1
    end

    ScratchPad.recorded.should == ["Q", "u", "i", " ", "è"]
  end

  describe "when no block is given" do
    it "returns an Enumerator" do
      enum = @io.send(@method)
      enum.should be_an_instance_of(Enumerator)
      enum.first(5).should == ["V", "o", "i", "c", "i"]
    end

    describe "returned Enumerator" do
      describe "size" do
        it "should return nil" do
          @io.send(@method).size.should == nil
        end
      end
    end
  end

  it "returns itself" do
    @io.send(@method) { |c| }.should equal(@io)
  end

  it "returns an enumerator for a closed stream" do
    IOSpecs.closed_io.send(@method).should be_an_instance_of(Enumerator)
  end

  it "raises an IOError when an enumerator created on a closed stream is accessed" do
    lambda { IOSpecs.closed_io.send(@method).first }.should raise_error(IOError)
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.send(@method) {} }.should raise_error(IOError)
  end
end

describe :io_chars_empty, shared: true do
  before :each do
    @name = tmp("io_each_char")
    @io = new_io @name, "w+:utf-8"
    ScratchPad.record []
  end

  after :each do
    @io.close unless @io.closed?
    rm_r @name
  end

  it "does not yield any characters on an empty stream" do
    @io.send(@method) { |c| ScratchPad << c }
    ScratchPad.recorded.should == []
  end
end
