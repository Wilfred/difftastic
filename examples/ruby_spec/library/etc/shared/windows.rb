describe :etc_on_windows, shared: true do
  platform_is :windows do
    it "returns nil" do
      Etc.send(@method).should == nil
    end
  end
end
