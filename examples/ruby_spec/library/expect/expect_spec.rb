platform_is_not :windows do
  require File.expand_path('../../../spec_helper', __FILE__)
  require 'expect'

  describe "IO#expect" do
    before :each do
      @read, @write = IO.pipe
    end

    after :each do
      @read.close unless @read.closed?
      @write.close unless @write.closed?
    end

    it "matches data against a Regexp" do
      @write << "prompt> hello"

      result = @read.expect(/[pf]rompt>/)
      result.should == ["prompt>"]
    end

    it "matches data against a String" do
      @write << "prompt> hello"

      result = @read.expect("prompt>")
      result.should == ["prompt>"]
    end

    it "returns any captures of the Regexp" do
      @write << "prompt> hello"

      result = @read.expect(/(pro)mpt(>)/)
      result.should == ["prompt>", "pro", ">"]
    end

    it "returns raises IOError if the IO is closed" do
      @write << "prompt> hello"
      @read.close

      lambda {
        @read.expect("hello")
      }.should raise_error(IOError)
    end

    it "returns nil if eof is hit" do
      @write << "pro"
      @write.close

      @read.expect("prompt").should be_nil
    end

    it "yields the result if a block is given" do
      @write << "prompt> hello"

      res = nil

      @read.expect("prompt>") { |x| res = x }

      res.should == ["prompt>"]
    end
  end
end
