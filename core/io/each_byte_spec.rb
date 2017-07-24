require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#each_byte" do
  before :each do
    ScratchPad.record []
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close if @io
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.each_byte {} }.should raise_error(IOError)
  end

  it "yields each byte" do
    count = 0
    @io.each_byte do |byte|
      ScratchPad << byte
      break if 4 < count += 1
    end

    ScratchPad.recorded.should == [86, 111, 105, 99, 105]
  end

  describe "when no block is given" do
    it "returns an Enumerator" do
      enum = @io.each_byte
      enum.should be_an_instance_of(Enumerator)
      enum.first(5).should == [86, 111, 105, 99, 105]
    end

    describe "returned Enumerator" do
      describe "size" do
        it "should return nil" do
          @io.each_byte.size.should == nil
        end
      end
    end
  end
end

describe "IO#each_byte" do
  before :each do
    @io = IOSpecs.io_fixture "empty.txt"
  end

  after :each do
    @io.close unless @io.closed?
  end

  it "returns self on an empty stream" do
    @io.each_byte { |b| }.should equal(@io)
  end
end
