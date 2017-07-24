# -*- encoding: utf-8 -*-
require File.expand_path('../../fixtures/classes', __FILE__)

describe :io_codepoints, shared: true do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
    @enum = @io.send(@method)
  end

  after :each do
    @io.close
  end

  describe "when no block is given" do
    it "returns an Enumerator" do
      @enum.should be_an_instance_of(Enumerator)
    end

    describe "returned Enumerator" do
      describe "size" do
        it "should return nil" do
          @enum.size.should == nil
        end
      end
    end
  end

  it "yields each codepoint" do
    @enum.first(25).should == [
      86, 111, 105, 99, 105, 32, 108, 97, 32, 108, 105, 103, 110,
      101, 32, 117, 110, 101, 46, 10, 81, 117, 105, 32, 232
    ]
  end

  it "yields each codepoint starting from the current position" do
    @io.pos = 130
    @enum.to_a.should == [101, 32, 115, 105, 120, 46, 10]
  end

  it "raises an error if reading invalid sequence" do
    @io.pos = 60  # inside of a multibyte sequence
    lambda { @enum.first }.should raise_error(ArgumentError)
  end

  it "does not change $_" do
    $_ = "test"
    @enum.to_a
    $_.should == "test"
  end

  it "raises an IOError when self is not readable" do
    lambda { IOSpecs.closed_io.send(@method).to_a }.should raise_error(IOError)
  end
end
