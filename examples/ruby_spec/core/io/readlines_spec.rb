# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/readlines', __FILE__)

describe "IO#readlines" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
    @orig_exteenc = Encoding.default_external
    Encoding.default_external = Encoding::UTF_8
  end

  after :each do
    @io.close unless @io.closed?
    Encoding.default_external = @orig_exteenc
  end

  it "raises an IOError if the stream is closed" do
    @io.close
    lambda { @io.readlines }.should raise_error(IOError)
  end

  describe "when passed no arguments" do
    before :each do
      @sep, $/ = $/, " "
    end

    after :each do
      $/ = @sep
    end

    it "returns an Array containing lines based on $/" do
      @io.readlines.should == IOSpecs.lines_space_separator
    end
  end

  describe "when passed no arguments" do
    it "updates self's position" do
      @io.readlines
      @io.pos.should eql(137)
    end

    it "updates self's lineno based on the number of lines read" do
      @io.readlines
      @io.lineno.should eql(9)
    end

    it "does not change $_" do
      $_ = "test"
      @io.readlines
      $_.should == "test"
    end

    it "returns an empty Array when self is at the end" do
      @io.readlines.should == IOSpecs.lines
      @io.readlines.should == []
    end
  end

  describe "when passed nil" do
    it "returns the remaining content as one line starting at the current position" do
      @io.readlines(nil).should == [IOSpecs.lines.join]
    end
  end

  describe "when passed an empty String" do
    it "returns an Array containing all paragraphs" do
      @io.readlines("").should == IOSpecs.paragraphs
    end
  end

  describe "when passed a separator" do
    it "returns an Array containing lines based on the separator" do
      @io.readlines("r").should == IOSpecs.lines_r_separator
    end

    it "returns an empty Array when self is at the end" do
      @io.readlines
      @io.readlines("r").should == []
    end

    it "updates self's lineno based on the number of lines read" do
      @io.readlines("r")
      @io.lineno.should eql(5)
    end

    it "updates self's position based on the number of characters read" do
      @io.readlines("r")
      @io.pos.should eql(137)
    end

    it "does not change $_" do
      $_ = "test"
      @io.readlines("r")
      $_.should == "test"
    end

    it "tries to convert the passed separator to a String using #to_str" do
      obj = mock('to_str')
      obj.stub!(:to_str).and_return("r")
      @io.readlines(obj).should == IOSpecs.lines_r_separator
    end
  end

  describe "when passed a string that starts with a |" do
    it "gets data from the standard out of the subprocess" do
      cmd = "|sh -c 'echo hello;echo line2'"
      platform_is :windows do
        cmd = "|cmd.exe /C echo hello&echo line2"
      end
      lines = IO.readlines(cmd)
      lines.should == ["hello\n", "line2\n"]
    end

    with_feature :fork do
      it "gets data from a fork when passed -" do
        lines = IO.readlines("|-")

        if lines # parent
          lines.should == ["hello\n", "from a fork\n"]
        else
          puts "hello"
          puts "from a fork"
          exit!
        end
      end
    end
  end
end

describe "IO#readlines" do
  before :each do
    @name = tmp("io_readlines")
  end

  after :each do
    rm_r @name
  end

  it "raises an IOError if the stream is opened for append only" do
    lambda do
      File.open(@name, fmode("a:utf-8")) { |f| f.readlines }
    end.should raise_error(IOError)
  end

  it "raises an IOError if the stream is opened for write only" do
    lambda do
      File.open(@name, fmode("w:utf-8")) { |f| f.readlines }
    end.should raise_error(IOError)
  end
end

describe "IO.readlines" do
  before :each do
    @external = Encoding.default_external
    Encoding.default_external = Encoding::UTF_8

    @name = fixture __FILE__, "lines.txt"
    ScratchPad.record []
  end

  after :each do
    Encoding.default_external = @external
  end

  it "does not change $_" do
    $_ = "test"
    IO.readlines(@name)
    $_.should == "test"
  end

  it_behaves_like :io_readlines, :readlines
  it_behaves_like :io_readlines_options_19, :readlines
end

describe "IO.readlines" do
  before :each do
    @external = Encoding.default_external
    @internal = Encoding.default_internal
    @name = fixture __FILE__, "lines.txt"
    @dollar_slash = $/
  end

  after :each do
    Encoding.default_external = @external
    Encoding.default_internal = @internal
    $/ = @dollar_slash
  end

  it "encodes lines using the default external encoding" do
    Encoding.default_external = Encoding::UTF_8
    lines = IO.readlines(@name)
    lines.all? { |s| s.encoding == Encoding::UTF_8 }.should be_true
  end

  it "encodes lines using the default internal encoding, when set" do
    Encoding.default_external = Encoding::UTF_8
    Encoding.default_internal = Encoding::UTF_16
    $/ = $/.encode Encoding::UTF_16
    lines = IO.readlines(@name)
    lines.all? { |s| s.encoding == Encoding::UTF_16 }.should be_true
  end

  it "ignores the default internal encoding if the external encoding is ASCII-8BIT" do
    Encoding.default_external = Encoding::ASCII_8BIT
    Encoding.default_internal = Encoding::UTF_8
    lines = IO.readlines(@name)
    lines.all? { |s| s.encoding == Encoding::ASCII_8BIT }.should be_true
  end
end
