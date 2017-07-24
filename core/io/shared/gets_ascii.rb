# -*- encoding: binary -*-
describe :io_gets_ascii, shared: true do
  describe "with ASCII separator" do
    before :each do
      @name = tmp("gets_specs.txt")
      touch(@name, "wb") { |f| f.print "this is a test\xFFtesty\ntestier" }

      File.open(@name, "rb") { |f| @data = f.send(@method, "\xFF") }
    end

    after :each do
      rm_r @name
    end

    it "returns the separator's character representation" do
      @data.should == "this is a test\xFF"
    end
  end
end
