require File.expand_path('../../../spec_helper', __FILE__)

describe "Symbol#to_sym" do
  it "returns self" do
    [:rubinius, :squash, :[], :@ruby, :@@ruby].each do |sym|
      sym.to_sym.should == sym
    end
  end
end
