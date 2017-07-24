describe :tempfile_unlink, shared: true do
  before :each do
    @tempfile = Tempfile.new("specs")
  end

  it "unlinks self" do
    @tempfile.close
    path = @tempfile.path
    @tempfile.send(@method)
    File.exist?(path).should be_false
  end
end
