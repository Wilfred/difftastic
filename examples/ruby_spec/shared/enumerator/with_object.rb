require File.expand_path('../../../spec_helper', __FILE__)

describe :enum_with_object, shared: true do
  before :each do
    @enum = [:a, :b].to_enum
    @memo = ''
    @block_params = @enum.send(@method, @memo).to_a
  end

  it "receives an argument" do
    @enum.method(@method).arity.should == 1
  end

  context "with block" do
    it "returns the given object" do
      ret = @enum.send(@method, @memo) do |elm, memo|
        # nothing
      end
      ret.should equal(@memo)
    end

    context "the block parameter" do
      it "passes each element to first parameter" do
        @block_params[0][0].should equal(:a)
        @block_params[1][0].should equal(:b)
      end

      it "passes the given object to last parameter" do
        @block_params[0][1].should equal(@memo)
        @block_params[1][1].should equal(@memo)
      end
    end
  end

  context "without block" do
    it "returns new Enumerator" do
      ret = @enum.send(@method, @memo)
      ret.should be_an_instance_of(Enumerator)
      ret.should_not equal(@enum)
    end
  end
end
