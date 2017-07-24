describe :string_each_line_without_block, shared: true do
  describe "when no block is given" do
    it "returns an enumerator" do
      enum = "hello world".send(@method, ' ')
      enum.should be_an_instance_of(Enumerator)
      enum.to_a.should == ["hello ", "world"]
    end

    describe "returned Enumerator" do
      describe "size" do
        it "should return nil" do
          "hello world".send(@method, ' ').size.should == nil
        end
      end
    end
  end
end
