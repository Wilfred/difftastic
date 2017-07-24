describe :language___LINE__, shared: true do
  before :each do
    CodeLoadingSpecs.spec_setup
    @path = File.expand_path("line_fixture.rb", CODE_LOADING_DIR)
  end

  after :each do
    CodeLoadingSpecs.spec_cleanup
  end

  it "equals the line number of the text in a loaded file" do
    @object.send(@method, @path).should be_true
    ScratchPad.recorded.should == [1, 5]
  end
end
