describe :delete_if, shared: true do
  before :each do
    @object = [1,2,3]
  end

  ruby_version_is "2.3" do
    it "updates the receiver after all blocks" do
      @object.send(@method) do |e|
        @object.length.should == 3
        true
      end
      @object.length.should == 0
    end
  end

  ruby_version_is ""..."2.3" do
    it "updates the receiver after each true block" do
      count = 0
      @object.send(@method) do |e|
        @object.length.should == (3 - count)
        count += 1
        true
      end
      @object.length.should == 0
    end
  end
end
