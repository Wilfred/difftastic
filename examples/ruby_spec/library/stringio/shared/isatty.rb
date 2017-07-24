describe :stringio_isatty, shared: true do
  it "returns false" do
    StringIO.new('tty').send(@method).should be_false
  end
end
