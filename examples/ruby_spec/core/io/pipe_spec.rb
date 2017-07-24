require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO.pipe" do
  after :each do
    @r.close if @r && !@r.closed?
    @w.close if @w && !@w.closed?
  end

  it "creates a two-ended pipe" do
    @r, @w = IO.pipe
    @w.puts "test_create_pipe\\n"
    @w.close
    @r.read(16).should == "test_create_pipe"
  end

  it "returns two IO objects" do
    @r, @w = IO.pipe
    @r.should be_kind_of(IO)
    @w.should be_kind_of(IO)
  end

  it "returns instances of a subclass when called on a subclass" do
    @r, @w = IOSpecs::SubIO.pipe
    @r.should be_an_instance_of(IOSpecs::SubIO)
    @w.should be_an_instance_of(IOSpecs::SubIO)
  end
end

describe "IO.pipe" do
  describe "passed a block" do
    it "yields two IO objects" do
      IO.pipe do |r, w|
        r.should be_kind_of(IO)
        w.should be_kind_of(IO)
      end
    end

    it "returns the result of the block" do
      IO.pipe { |r, w| :result }.should == :result
    end

    it "closes both IO objects" do
      r, w = IO.pipe do |_r, _w|
        [_r, _w]
      end
      r.closed?.should == true
      w.closed?.should == true
    end

    it "closes both IO objects when the block raises" do
      r = w = nil
      lambda do
        IO.pipe do |_r, _w|
          r = _r
          w = _w
          raise RuntimeError
        end
      end.should raise_error(RuntimeError)
      r.closed?.should == true
      w.closed?.should == true
    end

    it "allows IO objects to be closed within the block" do
      r, w = IO.pipe do |_r, _w|
        _r.close
        _w.close
        [_r, _w]
      end
      r.closed?.should == true
      w.closed?.should == true
    end
  end
end

describe "IO.pipe" do
  before :each do
    @default_external = Encoding.default_external
    @default_internal = Encoding.default_internal
  end

  after :each do
    Encoding.default_external = @default_external
    Encoding.default_internal = @default_internal
  end

  it "sets the external encoding of the read end to the default when passed no arguments" do
    Encoding.default_external = Encoding::ISO_8859_1

    IO.pipe do |r, w|
      r.external_encoding.should == Encoding::ISO_8859_1
      r.internal_encoding.should be_nil
    end
  end

  it "sets the internal encoding of the read end to the default when passed no arguments" do
    Encoding.default_external = Encoding::ISO_8859_1
    Encoding.default_internal = Encoding::UTF_8

    IO.pipe do |r, w|
      r.external_encoding.should == Encoding::ISO_8859_1
      r.internal_encoding.should == Encoding::UTF_8
    end
  end

  it "sets the internal encoding to nil if the same as the external" do
    Encoding.default_external = Encoding::UTF_8
    Encoding.default_internal = Encoding::UTF_8

    IO.pipe do |r, w|
      r.external_encoding.should == Encoding::UTF_8
      r.internal_encoding.should be_nil
    end
  end

  it "sets the external encoding of the read end when passed an Encoding argument" do
    IO.pipe(Encoding::UTF_8) do |r, w|
      r.external_encoding.should == Encoding::UTF_8
      r.internal_encoding.should be_nil
    end
  end

  it "sets the external and internal encodings of the read end when passed two Encoding arguments" do
    IO.pipe(Encoding::UTF_8, Encoding::UTF_16BE) do |r, w|
      r.external_encoding.should == Encoding::UTF_8
      r.internal_encoding.should == Encoding::UTF_16BE
    end
  end

  it "sets the external encoding of the read end when passed the name of an Encoding" do
    IO.pipe("UTF-8") do |r, w|
      r.external_encoding.should == Encoding::UTF_8
      r.internal_encoding.should be_nil
    end
  end

  it "accepts 'bom|' prefix for external encoding" do
    IO.pipe("BOM|UTF-8") do |r, w|
      r.external_encoding.should == Encoding::UTF_8
      r.internal_encoding.should be_nil
    end
  end

  it "sets the external and internal encodings specified as a String and separated with a colon" do
    IO.pipe("UTF-8:ISO-8859-1") do |r, w|
      r.external_encoding.should == Encoding::UTF_8
      r.internal_encoding.should == Encoding::ISO_8859_1
    end
  end

  it "accepts 'bom|' prefix for external encoding when specifying 'external:internal'" do
    IO.pipe("BOM|UTF-8:ISO-8859-1") do |r, w|
      r.external_encoding.should == Encoding::UTF_8
      r.internal_encoding.should == Encoding::ISO_8859_1
    end
  end

  it "sets the external and internal encoding when passed two String arguments" do
    IO.pipe("UTF-8", "UTF-16BE") do |r, w|
      r.external_encoding.should == Encoding::UTF_8
      r.internal_encoding.should == Encoding::UTF_16BE
    end
  end

  it "accepts an options Hash with one String encoding argument" do
    IO.pipe("BOM|UTF-8:ISO-8859-1", invalid: :replace) do |r, w|
      r.external_encoding.should == Encoding::UTF_8
      r.internal_encoding.should == Encoding::ISO_8859_1
    end
  end

  it "accepts an options Hash with two String encoding arguments" do
    IO.pipe("UTF-8", "ISO-8859-1", invalid: :replace) do |r, w|
      r.external_encoding.should == Encoding::UTF_8
      r.internal_encoding.should == Encoding::ISO_8859_1
    end
  end

  it "calls #to_hash to convert an options argument" do
    options = mock("io pipe encoding options")
    options.should_receive(:to_hash).and_return({ invalid: :replace })
    IO.pipe("UTF-8", "ISO-8859-1", options) { |r, w| }
  end

  it "calls #to_str to convert the first argument to a String" do
    obj = mock("io_pipe_encoding")
    obj.should_receive(:to_str).and_return("UTF-8:UTF-16BE")
    IO.pipe(obj) do |r, w|
      r.external_encoding.should == Encoding::UTF_8
      r.internal_encoding.should == Encoding::UTF_16BE
    end
  end

  it "calls #to_str to convert the second argument to a String" do
    obj = mock("io_pipe_encoding")
    obj.should_receive(:to_str).at_least(1).times.and_return("UTF-16BE")
    IO.pipe(Encoding::UTF_8, obj) do |r, w|
      r.external_encoding.should == Encoding::UTF_8
      r.internal_encoding.should == Encoding::UTF_16BE
    end
  end

  it "sets no external encoding for the write end" do
    IO.pipe(Encoding::UTF_8) do |r, w|
      w.external_encoding.should be_nil
    end
  end

  it "sets no internal encoding for the write end" do
    IO.pipe(Encoding::UTF_8) do |r, w|
      w.external_encoding.should be_nil
    end
  end
end
