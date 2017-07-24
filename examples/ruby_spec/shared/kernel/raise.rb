describe :kernel_raise, shared: true do
  before :each do
    ScratchPad.clear
  end

  it "aborts execution" do
    lambda do
      @object.raise Exception, "abort"
      ScratchPad.record :no_abort
    end.should raise_error(Exception, "abort")

    ScratchPad.recorded.should be_nil
  end

  it "raises RuntimeError if no exception class is given" do
    lambda { @object.raise }.should raise_error(RuntimeError)
  end

  it "raises a given Exception instance" do
    error = RuntimeError.new
    lambda { @object.raise(error) }.should raise_error(error)
  end

  it "raises a RuntimeError if string given" do
    lambda { @object.raise("a bad thing") }.should raise_error(RuntimeError)
  end

  it "raises a TypeError when passed a non-Exception object" do
    lambda { @object.raise(Object.new) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed true" do
    lambda { @object.raise(true) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed false" do
    lambda { @object.raise(false) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed nil" do
    lambda { @object.raise(nil) }.should raise_error(TypeError)
  end

  it "re-raises the rescued exception" do
    lambda do
      begin
        raise Exception, "outer"
        ScratchPad.record :no_abort
      rescue
        begin
          raise StandardError, "inner"
        rescue
        end

        @object.raise
        ScratchPad.record :no_reraise
      end
    end.should raise_error(Exception, "outer")

    ScratchPad.recorded.should be_nil
  end

  it "allows Exception, message, and backtrace parameters" do
    lambda do
      @object.raise(ArgumentError, "message", caller)
    end.should raise_error(ArgumentError, "message")
  end
end
