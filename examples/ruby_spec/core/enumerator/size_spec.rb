require File.expand_path('../../../spec_helper', __FILE__)

describe "Enumerator#size" do
  it "returns same value if set size is an Integer" do
    Enumerator.new(100) {}.size.should == 100
  end

  it "returns nil if set size is nil" do
    Enumerator.new(nil) {}.size.should be_nil
  end

  it "returns returning value from size.call if set size is a Proc" do
    base_size = 100
    enum = Enumerator.new(lambda { base_size + 1 }) {}
    base_size = 200
    enum.size.should == 201
    base_size = 300
    enum.size.should == 301
  end

  it "returns the result from size.call if the size respond to call" do
    obj = mock('call')
    obj.should_receive(:call).and_return(42)
    Enumerator.new(obj) {}.size.should == 42
  end
end
