describe "ruby -U" do
  it "sets Encoding.default_internal to UTF-8" do
     ruby_exe('print Encoding.default_internal.name',
              options: '-U').should == 'UTF-8'
  end

  it "does nothing different if specified multiple times" do
     ruby_exe('print Encoding.default_internal.name',
              options: '-U -U').should == 'UTF-8'
  end

  it "is overruled by Encoding.default_internal=" do
     ruby_exe('Encoding.default_internal="ascii"; print Encoding.default_internal.name',
              options: '-U').should == 'US-ASCII'
  end

  it "does not affect the default external encoding" do
     ruby_exe('Encoding.default_external="ascii"; print Encoding.default_external.name',
              options: '-U').should == 'US-ASCII'
  end

  it "does not affect the source encoding" do
     ruby_exe("print __ENCODING__.name",
              options: '-U -KE').should == 'EUC-JP'
     ruby_exe("print __ENCODING__.name",
              options: '-KE -U').should == 'EUC-JP'
  end

  # I assume IO redirection will break on Windows...
  it "raises a RuntimeError if used with -Eext:int" do
    ruby_exe("p 1",
             options: '-U -Eascii:ascii',
             args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError if used with -E:int" do
    ruby_exe("p 1",
             options: '-U -E:ascii',
             args: '2>&1').should =~ /RuntimeError/
  end
end
