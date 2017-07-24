describe :io_readlines, shared: true do
  it "raises TypeError if the first parameter is nil" do
    lambda { IO.send(@method, nil, &@object) }.should raise_error(TypeError)
  end

  it "raises an Errno::ENOENT if the file does not exist" do
    name = tmp("nonexistent.txt")
    lambda { IO.send(@method, name, &@object) }.should raise_error(Errno::ENOENT)
  end

  it "yields a single string with entire content when the separator is nil" do
    result = IO.send(@method, @name, nil, &@object)
    (result ? result : ScratchPad.recorded).should == [IO.read(@name)]
  end

  it "yields a sequence of paragraphs when the separator is an empty string" do
    result = IO.send(@method, @name, "", &@object)
    (result ? result : ScratchPad.recorded).should == IOSpecs.lines_empty_separator
  end
end

describe :io_readlines_options_19, shared: true do
  before :each do
    @filename = tmp("io readlines options")
  end

  after :each do
    rm_r @filename
  end

  describe "when passed name" do
    it "calls #to_path to convert the name" do
      name = mock("io name to_path")
      name.should_receive(:to_path).and_return(@name)
      IO.send(@method, name, &@object)
    end

    it "defaults to $/ as the separator" do
      result = IO.send(@method, @name, &@object)
      (result ? result : ScratchPad.recorded).should == IOSpecs.lines
    end
  end

  describe "when passed name, object" do
    it "calls #to_str to convert the object to a separator" do
      sep = mock("io readlines separator")
      sep.should_receive(:to_str).at_least(1).and_return(" ")
      result = IO.send(@method, @name, sep, &@object)
      (result ? result : ScratchPad.recorded).should == IOSpecs.lines_space_separator
    end

    describe "when the object is a Fixnum" do
      before :each do
        @sep = $/
      end

      after :each do
        $/ = @sep
      end

      it "defaults to $/ as the separator" do
        $/ = " "
        result = IO.send(@method, @name, 10, &@object)
        (result ? result : ScratchPad.recorded).should == IOSpecs.lines_space_separator_limit
      end

      it "uses the object as a limit if it is a Fixnum" do
        result = IO.send(@method, @name, 10, &@object)
        (result ? result : ScratchPad.recorded).should == IOSpecs.lines_limit
      end
    end

    describe "when the object is a String" do
      it "uses the value as the separator" do
        result = IO.send(@method, @name, " ", &@object)
        (result ? result : ScratchPad.recorded).should == IOSpecs.lines_space_separator
      end

      it "accepts non-ASCII data as separator" do
        result = IO.send(@method, @name, "\303\250".force_encoding("utf-8"), &@object)
        (result ? result : ScratchPad.recorded).should == IOSpecs.lines_arbitrary_separator
      end
    end

    describe "when the object is a Hash" do
      it "uses the value as the options hash" do
        result = IO.send(@method, @name, mode: "r", &@object)
        (result ? result : ScratchPad.recorded).should == IOSpecs.lines
      end
    end
  end

  describe "when passed name, object, object" do
    describe "when the first object is a Fixnum" do
      it "uses the second object as an options Hash" do
        lambda do
          IO.send(@method, @filename, 10, mode: "w", &@object)
        end.should raise_error(IOError)
      end

      it "calls #to_hash to convert the second object to a Hash" do
        options = mock("io readlines options Hash")
        options.should_receive(:to_hash).and_return({ mode: "w" })
        lambda do
          IO.send(@method, @filename, 10, options, &@object)
        end.should raise_error(IOError)
      end
    end

    describe "when the first object is a String" do
      it "uses the second object as a limit if it is a Fixnum" do
        result = IO.send(@method, @name, " ", 10, &@object)
        (result ? result : ScratchPad.recorded).should == IOSpecs.lines_space_separator_limit
      end

      it "calls #to_int to convert the second object" do
        limit = mock("io readlines limit")
        limit.should_receive(:to_int).at_least(1).and_return(10)
        result = IO.send(@method, @name, " ", limit, &@object)
        (result ? result : ScratchPad.recorded).should == IOSpecs.lines_space_separator_limit
      end

      it "uses the second object as an options Hash" do
        lambda do
          IO.send(@method, @filename, " ", mode: "w", &@object)
        end.should raise_error(IOError)
      end

      it "calls #to_hash to convert the second object to a Hash" do
        options = mock("io readlines options Hash")
        options.should_receive(:to_hash).and_return({ mode: "w" })
        lambda do
          IO.send(@method, @filename, " ", options, &@object)
        end.should raise_error(IOError)
      end
    end

    describe "when the first object is not a String or Fixnum" do
      it "calls #to_str to convert the object to a String" do
        sep = mock("io readlines separator")
        sep.should_receive(:to_str).at_least(1).and_return(" ")
        result = IO.send(@method, @name, sep, 10, mode: "r", &@object)
        (result ? result : ScratchPad.recorded).should == IOSpecs.lines_space_separator_limit
      end

      it "uses the second object as a limit if it is a Fixnum" do
        result = IO.send(@method, @name, " ", 10, mode: "r", &@object)
        (result ? result : ScratchPad.recorded).should == IOSpecs.lines_space_separator_limit
      end

      it "calls #to_int to convert the second object" do
        limit = mock("io readlines limit")
        limit.should_receive(:to_int).at_least(1).and_return(10)
        result = IO.send(@method, @name, " ", limit, &@object)
        (result ? result : ScratchPad.recorded).should == IOSpecs.lines_space_separator_limit
      end

      it "uses the second object as an options Hash" do
        lambda do
          IO.send(@method, @filename, " ", mode: "w", &@object)
        end.should raise_error(IOError)
      end

      it "calls #to_hash to convert the second object to a Hash" do
        options = mock("io readlines options Hash")
        options.should_receive(:to_hash).and_return({ mode: "w" })
        lambda do
          IO.send(@method, @filename, " ", options, &@object)
        end.should raise_error(IOError)
      end
    end
  end

  describe "when passed name, separator, limit, options" do
    it "calls #to_path to convert the name object" do
      name = mock("io name to_path")
      name.should_receive(:to_path).and_return(@name)
      result = IO.send(@method, name, " ", 10, mode: "r", &@object)
      (result ? result : ScratchPad.recorded).should == IOSpecs.lines_space_separator_limit
    end

    it "calls #to_str to convert the separator object" do
      sep = mock("io readlines separator")
      sep.should_receive(:to_str).at_least(1).and_return(" ")
      result = IO.send(@method, @name, sep, 10, mode: "r", &@object)
      (result ? result : ScratchPad.recorded).should == IOSpecs.lines_space_separator_limit
    end

    it "calls #to_int to convert the limit argument" do
      limit = mock("io readlines limit")
      limit.should_receive(:to_int).at_least(1).and_return(10)
      result = IO.send(@method, @name, " ", limit, mode: "r", &@object)
      (result ? result : ScratchPad.recorded).should == IOSpecs.lines_space_separator_limit
    end

    it "calls #to_hash to convert the options object" do
      options = mock("io readlines options Hash")
      options.should_receive(:to_hash).and_return({ mode: "w" })
      lambda do
        IO.send(@method, @filename, " ", 10, options, &@object)
      end.should raise_error(IOError)
    end
  end
end
