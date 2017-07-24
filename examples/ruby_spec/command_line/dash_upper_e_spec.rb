describe "ruby -E" do
  it "raises a RuntimeError if used with -U" do
    ruby_exe("p 1",
             options: '-Eascii:ascii -U',
             args: '2>&1').should =~ /RuntimeError/
  end
end
