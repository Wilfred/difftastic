require File.expand_path('../spec_helper', __FILE__)

with_feature :readline do
  describe "Readline.completion_proc" do
    it "returns nil" do
      Readline.completion_proc.should be_nil
    end
  end

  describe "Readline.completion_proc=" do
    it "returns the passed Proc" do
      proc = Proc.new do |e|
      end
      Readline.completion_proc = proc
      Readline.completion_proc.should == proc
    end

    it "returns an ArgumentError if not given an Proc or #call" do
      lambda { Readline.completion_proc = "test" }.should raise_error(ArgumentError)
    end
  end
end
