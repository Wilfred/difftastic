# -*- encoding: utf-8 -*-
require File.expand_path('../../fixtures/classes', __FILE__)

describe :io_each, shared: true do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
    ScratchPad.record []
  end

  after :each do
    @io.close if @io
  end

  describe "with no separator" do
    it "yields each line to the passed block" do
      @io.send(@method) { |s| ScratchPad << s }
      ScratchPad.recorded.should == IOSpecs.lines
    end

    it "yields each line starting from the current position" do
      @io.pos = 41
      @io.send(@method) { |s| ScratchPad << s }
      ScratchPad.recorded.should == IOSpecs.lines[2..-1]
    end

    it "returns self" do
      @io.send(@method) { |l| l }.should equal(@io)
    end

    it "does not change $_" do
      $_ = "test"
      @io.send(@method) { |s| s }
      $_.should == "test"
    end

    it "returns self" do
      @io.send(@method) { |l| l }.should equal(@io)
    end

    it "raises an IOError when self is not readable" do
      lambda { IOSpecs.closed_io.send(@method) {} }.should raise_error(IOError)
    end

    it "makes line count accessible via lineno" do
      @io.send(@method) { ScratchPad << @io.lineno }
      ScratchPad.recorded.should == [ 1,2,3,4,5,6,7,8,9 ]
    end

    it "makes line count accessible via $." do
      @io.send(@method) { ScratchPad << $. }
      ScratchPad.recorded.should == [ 1,2,3,4,5,6,7,8,9 ]
    end

    describe "when no block is given" do
      it "returns an Enumerator" do
        enum = @io.send(@method)
        enum.should be_an_instance_of(Enumerator)

        enum.each { |l| ScratchPad << l }
        ScratchPad.recorded.should == IOSpecs.lines
      end

      describe "returned Enumerator" do
        describe "size" do
          it "should return nil" do
            @io.send(@method).size.should == nil
          end
        end
      end
    end
  end

  describe "with limit" do
    describe "when limit is 0" do
      it "raises an ArgumentError" do
        # must pass block so Enumerator is evaluated and raises
        lambda { @io.send(@method, 0){} }.should raise_error(ArgumentError)
      end
    end
  end

  describe "when passed a String containing one space as a separator" do
    it "uses the passed argument as the line separator" do
      @io.send(@method, " ") { |s| ScratchPad << s }
      ScratchPad.recorded.should == IOSpecs.lines_space_separator
    end

    it "does not change $_" do
      $_ = "test"
      @io.send(@method, " ") { |s| }
      $_.should == "test"
    end

    it "tries to convert the passed separator to a String using #to_str" do
      obj = mock("to_str")
      obj.stub!(:to_str).and_return(" ")

      @io.send(@method, obj) { |l| ScratchPad << l }
      ScratchPad.recorded.should == IOSpecs.lines_space_separator
    end
  end

  describe "when passed nil as a separator" do
    it "yields self's content starting from the current position when the passed separator is nil" do
      @io.pos = 100
      @io.send(@method, nil) { |s| ScratchPad << s }
      ScratchPad.recorded.should == ["qui a linha cinco.\nHere is line six.\n"]
    end
  end

  describe "when passed an empty String as a separator" do
    it "yields each paragraph" do
      @io.send(@method, "") { |s| ScratchPad << s }
      ScratchPad.recorded.should == IOSpecs.paragraphs
    end
  end
end

describe :io_each_default_separator, shared: true do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
    ScratchPad.record []
    @sep, $/ = $/, " "
  end

  after :each do
    @io.close if @io
    $/ = @sep
  end

  it "uses $/ as the default line separator" do
    @io.send(@method) { |s| ScratchPad << s }
    ScratchPad.recorded.should == IOSpecs.lines_space_separator
  end
end
