describe :proc_to_s, shared: true do
  describe "for a proc created with Proc.new" do
    it "returns a description optionally including file and line number" do
      Proc.new { "hello" }.send(@method).should =~ /^#<Proc:([^ ]*?)(@([^ ]*)\/to_s\.rb:4)?>$/
    end
  end

  describe "for a proc created with lambda" do
    it "returns a description including '(lambda)' and optionally including file and line number" do
      lambda { "hello" }.send(@method).should =~ /^#<Proc:([^ ]*?)(@([^ ]*)\/to_s\.rb:10)? \(lambda\)>$/
    end
  end

  describe "for a proc created with proc" do
    it "returns a description optionally including file and line number" do
      proc { "hello" }.send(@method).should =~ /^#<Proc:([^ ]*?)(@([^ ]*)\/to_s\.rb:16)?>$/
    end
  end

  describe "for a proc created with UnboundMethod#to_proc" do
    it "returns a description including '(lambda)' and optionally including file and line number" do
      def hello; end

      method("hello").to_proc.send(@method).should =~ /^#<Proc:([^ ]*?)(@([^ ]*)\/to_s\.rb:22)? \(lambda\)>$/
    end
  end
end
