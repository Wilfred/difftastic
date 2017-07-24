require File.expand_path('../../../spec_helper', __FILE__)

describe "Hash#flatten" do

  before :each do
    @h = {plato: :greek,
          witgenstein: [:austrian, :british],
          russell: :welsh}
  end

  it "returns an Array" do
    {}.flatten.should be_an_instance_of(Array)
  end

  it "returns an empty Array for an empty Hash" do
    {}.flatten.should == []
  end

  it "sets each even index of the Array to a key of the Hash" do
    a = @h.flatten
    a[0].should == :plato
    a[2].should == :witgenstein
    a[4].should == :russell
  end

  it "sets each odd index of the Array to the value corresponding to the previous element" do
    a = @h.flatten
    a[1].should == :greek
    a[3].should == [:austrian, :british]
    a[5].should == :welsh
  end

  it "does not recursively flatten Array values when called without arguments" do
    a = @h.flatten
    a[3].should == [:austrian, :british]
  end

  it "does not recursively flatten Hash values when called without arguments" do
    @h[:russell] = {born: :wales, influenced_by: :mill }
    a = @h.flatten
    a[5].should_not == {born: :wales, influenced_by: :mill }.flatten
  end

  it "recursively flattens Array values when called with an argument >= 2" do
    a = @h.flatten(2)
    a[3].should == :austrian
    a[4].should == :british
  end

  it "recursively flattens Array values to the given depth" do
    @h[:russell] = [[:born, :wales], [:influenced_by, :mill]]
    a = @h.flatten(2)
    a[6].should == [:born, :wales]
    a[7].should == [:influenced_by, :mill]
  end

  it "raises a TypeError if given a non-Integer argument" do
    lambda do
      @h.flatten(Object.new)
    end.should raise_error(TypeError)
  end
end
