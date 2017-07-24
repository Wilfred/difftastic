describe 'The -K command line option sets __ENCODING__' do
  it "to Encoding::ASCII_8BIT with -Ka" do
    ruby_exe("print __ENCODING__", options: '-Ka').should == Encoding::ASCII_8BIT.to_s
  end

  it "to Encoding::ASCII_8BIT with -KA" do
    ruby_exe("print __ENCODING__", options: '-KA').should == Encoding::ASCII_8BIT.to_s
  end

  it "to Encoding::EUC_JP with -Ke" do
    ruby_exe("print __ENCODING__", options: '-Ke').should == Encoding::EUC_JP.to_s
  end

  it "to Encoding::EUC_JP with -KE" do
    ruby_exe("print __ENCODING__", options: '-KE').should == Encoding::EUC_JP.to_s
  end

  it "to Encoding::UTF_8 with -Ku" do
    ruby_exe("print __ENCODING__", options: '-Ku').should == Encoding::UTF_8.to_s
  end

  it "to Encoding::UTF_8 with -KU" do
    ruby_exe("print __ENCODING__", options: '-KU').should == Encoding::UTF_8.to_s
  end

  it "to Encoding::Windows_31J with -Ks" do
    ruby_exe("print __ENCODING__", options: '-Ks').should == Encoding::Windows_31J.to_s
  end

  it "to Encoding::Windows_31J with -KS" do
    ruby_exe("print __ENCODING__", options: '-KS').should == Encoding::Windows_31J.to_s
  end
end
