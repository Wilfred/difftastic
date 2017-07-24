describe :string_to_sym, shared: true do
  it "returns the symbol corresponding to self" do
    "Koala".send(@method).should == :Koala
    'cat'.send(@method).should == :cat
    '@cat'.send(@method).should == :@cat
    'cat and dog'.send(@method).should == :"cat and dog"
    "abc=".send(@method).should == :abc=
  end

  it "does not special case +(binary) and -(binary)" do
    "+(binary)".send(@method).should == :"+(binary)"
    "-(binary)".send(@method).should == :"-(binary)"
  end

  it "does not special case certain operators" do
    [ ["!@", :"!@"],
      ["~@", :"~@"],
      ["!(unary)", :"!(unary)"],
      ["~(unary)", :"~(unary)"],
      ["+(unary)", :"+(unary)"],
      ["-(unary)", :"-(unary)"]
    ].should be_computed_by(@method)
  end
end
