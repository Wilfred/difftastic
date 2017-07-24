require File.expand_path('../../../spec_helper', __FILE__)

describe "Symbol.all_symbols" do
  it "returns an array containing all the Symbols in the symbol table" do
    all_symbols = Symbol.all_symbols
    all_symbols.should be_an_instance_of(Array)
    all_symbols.all? { |s| s.is_a?(Symbol) ? true : (p s; false) }.should == true
  end

  it "returns an Array containing Symbols that have been created" do
    symbol = "symbol_specs_#{rand(5_000_000)}".to_sym
    Symbol.all_symbols.should include(symbol)
  end
end
