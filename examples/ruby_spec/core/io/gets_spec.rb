# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/gets_ascii', __FILE__)

describe "IO#gets" do
  it_behaves_like :io_gets_ascii, :gets
end

describe "IO#gets" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
    @count = 0
  end

  after :each do
    @io.close if @io
  end

  it "assigns the returned line to $_" do
    IOSpecs.lines.each do |line|
      @io.gets
      $_.should == line
    end
  end

  it "returns nil if called at the end of the stream" do
    IOSpecs.lines.length.times { @io.gets }
    @io.gets.should == nil
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.gets }.should raise_error(IOError)
  end

  describe "with no separator" do
    it "returns the next line of string that is separated by $/" do
      IOSpecs.lines.each { |line| line.should == @io.gets }
    end

    it "returns tainted strings" do
      while line = @io.gets
        line.tainted?.should == true
      end
    end

    it "updates lineno with each invocation" do
      while @io.gets
        @io.lineno.should == @count += 1
      end
    end

    it "updates $. with each invocation" do
      while @io.gets
        $..should == @count += 1
      end
    end
  end

  describe "with nil separator" do
    it "returns the entire contents" do
      @io.gets(nil).should == IOSpecs.lines.join("")
    end

    it "returns tainted strings" do
      while line = @io.gets(nil)
        line.tainted?.should == true
      end
    end

    it "updates lineno with each invocation" do
      while @io.gets(nil)
        @io.lineno.should == @count += 1
      end
    end

    it "updates $. with each invocation" do
      while @io.gets(nil)
        $..should == @count += 1
      end
    end
  end

  describe "with an empty String separator" do
    # Two successive newlines in the input separate paragraphs.
    # When there are more than two successive newlines, only two are kept.
    it "returns the next paragraph" do
      @io.gets("").should == IOSpecs.lines[0,3].join("")
      @io.gets("").should == IOSpecs.lines[4,3].join("")
      @io.gets("").should == IOSpecs.lines[7,2].join("")
    end

    it "reads until the beginning of the next paragraph" do
      # There are three newlines between the first and second paragraph
      @io.gets("")
      @io.gets.should == IOSpecs.lines[4]
    end

    it "returns tainted strings" do
      while line = @io.gets("")
        line.tainted?.should == true
      end
    end

    it "updates lineno with each invocation" do
      while @io.gets("")
        @io.lineno.should == @count += 1
      end
    end

    it "updates $. with each invocation" do
      while @io.gets("")
        $..should == @count += 1
      end
    end
  end

  describe "with an arbitrary String separator" do
    it "reads up to and including the separator" do
      @io.gets("la linea").should == "Voici la ligne une.\nQui \303\250 la linea"
    end

    it "returns tainted strings" do
      while line = @io.gets("la")
        line.tainted?.should == true
      end
    end

    it "updates lineno with each invocation" do
      while (@io.gets("la"))
        @io.lineno.should == @count += 1
      end
    end

    it "updates $. with each invocation" do
      while @io.gets("la")
        $..should == @count += 1
      end
    end
  end
end

describe "IO#gets" do
  before :each do
    @name = tmp("io_gets")
  end

  after :each do
    rm_r @name
  end

  it "raises an IOError if the stream is opened for append only" do
    lambda { File.open(@name, fmode("a:utf-8")) { |f| f.gets } }.should raise_error(IOError)
  end

  it "raises an IOError if the stream is opened for writing only" do
    lambda { File.open(@name, fmode("w:utf-8")) { |f| f.gets } }.should raise_error(IOError)
  end
end

describe "IO#gets" do
  before :each do
    @name = tmp("io_gets")
    touch(@name) { |f| f.write "one\n\ntwo\n\nthree\nfour\n" }
    @io = new_io @name, fmode("r:utf-8")
  end

  after :each do
    @io.close if @io
    rm_r @name
  end

  it "calls #to_int to convert a single object argument to an Integer limit" do
    obj = mock("io gets limit")
    obj.should_receive(:to_int).and_return(6)

    @io.gets(obj).should == "one\n"
  end

  it "calls #to_int to convert the second object argument to an Integer limit" do
    obj = mock("io gets limit")
    obj.should_receive(:to_int).and_return(2)

    @io.gets(nil, obj).should == "on"
  end

  it "calls #to_str to convert the first argument to a String when passed a limit" do
    obj = mock("io gets separator")
    obj.should_receive(:to_str).and_return($/)

    @io.gets(obj, 5).should == "one\n"
  end

  it "reads to the default seperator when passed a single argument greater than the number of bytes to the separator" do
    @io.gets(6).should == "one\n"
  end

  it "reads limit bytes when passed a single argument less than the number of bytes to the default separator" do
    @io.gets(3).should == "one"
  end

  it "reads limit bytes when passed nil and a limit" do
    @io.gets(nil, 6).should == "one\n\nt"
  end

  it "reads all bytes when the limit is higher than the available bytes" do
    @io.gets(nil, 100).should == "one\n\ntwo\n\nthree\nfour\n"
  end

  it "reads until the next paragraph when passed '' and a limit greater than the next paragraph" do
    @io.gets("", 6).should == "one\n\n"
  end

  it "reads limit bytes when passed '' and a limit less than the next paragraph" do
    @io.gets("", 3).should == "one"
  end

  it "reads all bytes when pass a separator and reading more than all bytes" do
    @io.gets("\t", 100).should == "one\n\ntwo\n\nthree\nfour\n"
  end
end

describe "IO#gets" do
  before :each do
    @name = tmp("io_gets")
    # create data "朝日" + "\xE3\x81" * 100 to avoid utf-8 conflicts
    data = "朝日" + ([227,129].pack('C*') * 100).force_encoding('utf-8')
    touch(@name) { |f| f.write data }
    @io = new_io @name, fmode("r:utf-8")
  end

  after :each do
    @io.close if @io
    rm_r @name
  end

  it "reads limit bytes and extra bytes when limit is reached not at character boundary" do
    [@io.gets(1), @io.gets(1)].should == ["朝", "日"]
  end

  it "read limit bytes and extra bytes with maximum of 16" do
    # create str "朝日\xE3" + "\x81\xE3" * 8 to avoid utf-8 conflicts
    str = "朝日" + ([227] + [129,227] * 8).pack('C*').force_encoding('utf-8')
    @io.gets(7).should == str
  end
end

describe "IO#gets" do
  before :each do
    @external = Encoding.default_external
    @internal = Encoding.default_internal

    Encoding.default_external = Encoding::UTF_8
    Encoding.default_internal = nil

    @name = tmp("io_gets")
    touch(@name) { |f| f.write "line" }
  end

  after :each do
    @io.close if @io
    rm_r @name
    Encoding.default_external = @external
    Encoding.default_internal = @internal
  end

  it "uses the default external encoding" do
    @io = new_io @name, 'r'
    @io.gets.encoding.should == Encoding::UTF_8
  end

  it "uses the IO object's external encoding, when set" do
    @io = new_io @name, 'r'
    @io.set_encoding Encoding::US_ASCII
    @io.gets.encoding.should == Encoding::US_ASCII
  end

  it "transcodes into the default internal encoding" do
    Encoding.default_internal = Encoding::US_ASCII
    @io = new_io @name, 'r'
    @io.gets.encoding.should == Encoding::US_ASCII
  end

  it "transcodes into the IO object's internal encoding, when set" do
    Encoding.default_internal = Encoding::US_ASCII
    @io = new_io @name, 'r'
    @io.set_encoding Encoding::UTF_8, Encoding::UTF_16
    @io.gets.encoding.should == Encoding::UTF_16
  end

  it "overwrites the default external encoding with the IO object's own external encoding" do
    Encoding.default_external = Encoding::ASCII_8BIT
    Encoding.default_internal = Encoding::UTF_8
    @io = new_io @name, 'r'
    @io.set_encoding Encoding::IBM866
    @io.gets.encoding.should == Encoding::UTF_8
  end

  it "ignores the internal encoding if the default external encoding is ASCII-8BIT" do
    Encoding.default_external = Encoding::ASCII_8BIT
    Encoding.default_internal = Encoding::UTF_8
    @io = new_io @name, 'r'
    @io.gets.encoding.should == Encoding::ASCII_8BIT
  end

  it "transcodes to internal encoding if the IO object's external encoding is ASCII-8BIT" do
    Encoding.default_external = Encoding::ASCII_8BIT
    Encoding.default_internal = Encoding::UTF_8
    @io = new_io @name, 'r'
    @io.set_encoding Encoding::ASCII_8BIT, Encoding::UTF_8
    @io.gets.encoding.should == Encoding::UTF_8
  end
end
