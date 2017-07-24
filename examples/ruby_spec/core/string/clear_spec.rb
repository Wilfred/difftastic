require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "String#clear" do
    before :each do
      @s = "Jolene"
    end

    it "sets self equal to the empty String" do
      @s.clear
      @s.should == ""
    end

    it "returns self after emptying it" do
      cleared = @s.clear
      cleared.should == ""
      cleared.object_id.should == @s.object_id
    end

    it "preserves its encoding" do
      @s.encode!(Encoding::SHIFT_JIS)
      @s.encoding.should == Encoding::SHIFT_JIS
      @s.clear.encoding.should == Encoding::SHIFT_JIS
      @s.encoding.should == Encoding::SHIFT_JIS
    end

    it "works with multibyte Strings" do
      s = "\u{9765}\u{876}"
      s.clear
      s.should == ""
    end

    it "raises a RuntimeError if self is frozen" do
      @s.freeze
      lambda { @s.clear        }.should raise_error(RuntimeError)
      lambda { "".freeze.clear }.should raise_error(RuntimeError)
    end
  end
end
